#!/usr/bin/perl -w
#
# Copyright 2006 VMware, Inc.  All rights reserved.
#
# removabledevices.pl
#	Script to list, connect, and disconnect removable virtual devices
#
# Usage:
#	removabledevices.pl <login> --vmname <name> --list                 list all removable devices
#	removabledevices.pl <login> --vmname <name> --connect <string>     connect the specified device
#	removabledevices.pl <login> --vmname <name> --disconnect <string>  disconnect the specified device


use strict;
use warnings;

use VMware::VIRuntime;

my %opts = (
   'vmname' => {
      type => "=s",
      help => "The name of the virtual machine",
      required => 0,
   },
   'filter' => {
      type => "=s",
      help => "The filter used to select matching virtual machines",
      required => 0,
   },
   'list' => {
      type => "",
      help => "List all removable devices",
      required => 0,
   },
   'connect' => {
      type => "=s",
      help => "Connect the specified device",
      required => 0,
   },
   'disconnect' => {
      type => "=s",
      help => "Disconnect the specified device",
      required => 0,
   },
);
Opts::add_options(%opts);

Opts::parse();
Opts::validate(\&additional_validation);

my ($property_name, $property_value);

# Filter can be user provided.  For example, --filter "config.guestFullName=Windows*"
if(defined Opts::get_option('filter')) {
   ($property_name, $property_value) = split("=", Opts::get_option('filter'));
} else {
   $property_name = "config.name";
   $property_value = Opts::get_option('vmname');
}

Util::connect();

my $vm_view = Vim::find_entity_view(view_type => 'VirtualMachine',
                                    filter => {$property_name => $property_value});
if (!defined $vm_view) {
   Util::Disconnect();
   die "ERROR: The specified virtual machine was not found\n";
}

my $failed = 0;
if (Opts::option_is_set("list")) {
   my $deviceList = $vm_view->config->hardware->device;
   printf("%-40.40s %-32.32s\n", "Device", "Connected");
   printf("%-40.40s %-32.32s\n", "---------------", "----------------");
   foreach my $device (@$deviceList) {
      if (defined $device->{deviceInfo} && defined $device->{connectable}) {
        printf("%-40.40s %-s\n", $device->deviceInfo->label,
           $device->connectable->connected ? "true" : "false");
      }
   }
} else {
   my $device_label;
   my $connect;
   if (Opts::option_is_set("connect")) {
      $device_label = Opts::get_option('connect');
      $connect = 1;
   } elsif (Opts::option_is_set("disconnect")) {
      $device_label = Opts::get_option('disconnect');
      $connect = 0;
   }
   my $deviceList = $vm_view->config->hardware->device;
   foreach my $device (@$deviceList) {
      if (defined $device->{deviceInfo} && $device->deviceInfo->label eq $device_label) {
	 $device->connectable->connected($connect);
         my $spec = VirtualMachineConfigSpec->new(
            changeVersion => $vm_view->config->changeVersion,
	    deviceChange => [
	       VirtualDeviceConfigSpec->new(
		  operation => VirtualDeviceConfigSpecOperation->new("edit"),
		  device => $device
	       )
	    ]
	 );
	 eval {
	    $vm_view->ReconfigVM(spec => $spec);
         };
         if ($@) {
            print STDERR "ERROR: Unable to " . ($connect ? "connect" : "disconnect") .
                  " device $device_label " . ($connect ? "to" : "from") .
                  " virtual machine " . $vm_view->name . "\n";
	    print STDERR "Reason: " . $@->fault_string . "\n";
	    $failed = 1;
         }
         last;
      }
   }
}

Util::disconnect();
if ($failed) {
   exit 1;
}

sub additional_validation {
   my $validated = 1;
   if (!Opts::option_is_set('filter') && !Opts::option_is_set('vmname')) {
      print STDERR "ERROR: One of --filter or --vmname must be specified\n";
      $validated = 0;
   }

   if (!(Opts::option_is_set("list") || Opts::option_is_set("connect") ||
       Opts::option_is_set("disconnect"))) {
      print STDERR "ERROR: One of --list, --connect or --disconnect " .
            "must be specified\n";
      $validated = 0;
   }
   return $validated;
}
