#!/usr/bin/perl
#
# Copyright 2009 VMware, Inc.  All rights reserved.
#
# Remote lspci tool.

use strict;
use warnings;

use WSMan::GenericOps;
use VMware::VILib;

my %opts = (
   namespace => {
      type     => "=s",
      help     => "Namespace for all queries. Default is :root/cimv2",
      required => 0,
      default  => "root/cimv2",
   },
   timeout => {
     type     => "=s",
     help     => "Default http timeout for all the queries. Default is 120",
     required => 0,
     default  => "120",
   },
   numeric => {
     type     => ":s",
     help     => "Show PCI vendor and device codes as numbers",
     required => 0,
     default  => 0,
   },
);


Opts::set_option("protocol", "https");
Opts::set_option("servicepath","/wsman");
Opts::set_option("portnumber", "443");
Opts::add_options(%opts);
Opts::parse();
Opts::validate();


lspci();


sub lspci
{
   my $address;
   if (Opts::get_option("protocol") eq "https") {
      $address = sprintf "https://%s", Opts::get_option("server");
   } else {
      $address = sprintf "http://%s", Opts::get_option("server");
   }

   my %args = (path      => Opts::get_option("servicepath"),
               username  => Opts::get_option("username"),
               password  => Opts::get_option("password"),
               port      => Opts::get_option("portnumber"),
               address   => $address,
               namespace => Opts::get_option("namespace"),
               timeout   => Opts::get_option("timeout"));

   my $client = WSMan::GenericOps->new(%args);

   $client->register_class_ns(
      VMware => 'http://schemas.vmware.com/wbem/wscim/1/cim-schema/2'
   );

   my (@devices, @ports);

   eval {
      @devices = $client->EnumerateInstances(class_name => "VMware_PCIDevice");
   };
   die "Failed to get list of devices from $address\n" if $@;

   eval {
      @ports = $client->EnumerateInstances(class_name => "VMware_PCIPort");
   };
   die "Failed to get list of ports from $address\n" if $@;

   my @output;
   for my $device (@devices) {
      push @output, format_device($device);
   }

   for my $port (@ports) {
      my $port_line = format_port($port);
      push @output, $port_line if $port_line;
   }

   print join("\n", sort @output) . "\n" if scalar @output;
}


##
# Convert a PCI class code enum to its corresponding string value.
#
# @param $class_code [in]  class code enum
# @return string
##
sub class_code_to_string
{
   my ($class_code) = @_;

   my @map = ("Unknown",
              "Mass storage controller",
              "Network controller",
              "Display controller",
              "Multimedia device",
              "Memory controller",
              "Bridge",
              "Simple communication controller",
              "Base system peripheral",
              "Input device",
              "Docking station",
              "Processor",
              "Serial bus controller",
              "Wireless controller",
              "Intelligent I/O controller",
              "Satellite communication controller",
              "Encryption/decryption controller",
              "Data acquisition and signal processing controller");

   my $desc;
   if ($class_code >= 0 && $class_code < scalar @map) {
      $desc = $map[$class_code];
   } elsif ($class_code >= 0x12 && $class_code <= 0xFE) {
      $desc = "Reserved";
   } else {
      $desc = "Invalid class code";
   }

   return $desc;
}


##
# Format an instance of VMware_PCI{Device,Bridge,eSwitch} from WSMan.
#
# @param  $instance [in]  instance
# @return formatted string without newline
##
sub format_device
{
   my ($instance) = @_;
   my $instance_name = (keys %{$instance})[0];
   $instance = $instance->{$instance_name};

   my $bus = $instance->{"BusNumber"};
   my $device = $instance->{"DeviceNumber"};
   my $function = $instance->{"FunctionNumber"};
   my $class_code = $instance->{"ClassCode"};
   my $subclass = $instance->{"SubClassCode"};
   my $class_type = class_code_to_string($instance->{"ClassCode"});
   my $vendor_id = $instance->{"VendorID"};
   my $device_id = $instance->{"PCIDeviceID"};
   my $revision_id = $instance->{"RevisionID"};
   my $desc = $instance->{"ElementName"};

   my $revision_str = $revision_id ? sprintf " (rev %02x)", $revision_id : "";

   if (Opts::option_is_set("numeric")) {
     return sprintf "%02x:%02x.%x %02x%02x: %04x:%04x%s",
                    $bus, $device, $function, $class_code, $subclass,
                    $vendor_id, $device_id, $revision_str;
   } else {
     return sprintf "%02x:%02x.%x %s: %s%s",
                    $bus, $device, $function, $class_type, $desc, $revision_str;
   }
}


##
# Format an instace of VMware_PCIPort from WSMan.
#
# Only downstream ports will have output.
#
# @param  $instance [in]  instance
# @return formatted string without newline, or empty string
##
sub format_port
{
   my ($instance) = @_;
   my $instance_name = (keys %{$instance})[0];
   my $port_instance = $instance->{$instance_name};

   my $device_id = $port_instance->{"DeviceID"};

   # Look for a port without a suffix. Such an instance is a downstream port on
   # a switch.
   if ($device_id !~ /\-[a-z]{2,3}$/) {
      # Downstream ports will not have a suffix
      return format_device($instance);
   }

   return "";
}


__END__

=head1 NAME

lspci.pl - remote lspci tool for ESX and ESXi.

=head1 SYNOPSIS

lspci.pl [OPTIONS]

=head1 DESCRIPTION

lspci.pl lists PCI devices on a remote ESX or ESXi system in a format similar to
that of lspci.

=head1 OPTIONS

=over

=item B<--server>

ESX or ESXi server to connect to. Defaults to localhost.

=item B<--username>

Username.

=item B<--password>

Password.

=item B<--numeric>

Optional. Outputs device information in numeric format, including class code
information. Similar to lspci -n.

=back

See B<lspci.pl --help> for a complete list.

=head1 EXAMPLES

Get list of PCI devices on a remote system:

=over

lspci.pl --server esx-server.domain --username root --password mypassword

=back

Get list of PCI devices in numeric format, similar to lspci -n:

=over

lspci.pl --server esx-server.domain --username root --password mypassword --numeric

=back

=head1 NOTES

This tool is intended to be used to list devices on a specific ESX host, and not
against a vCenter Server instance.
