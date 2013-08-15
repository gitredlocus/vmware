#!/usr/bin/perl

use strict;
use warnings;

use VMware::VILib;
use WSMan::GenericOps;

=pod
  This sample is used to get the list of all the FRUs on a system.
  
  USAGE:: perl listfrus.pl --server xyz.abc.com --username abc --password xxxx
=cut

$Util::script_version = "1.0";

my %opts = (
   namespace  => {
      type     => "=s",
      help     => "Namespace for all queries. Default is :root/cimv2",
      required => 0,
      default => "root/cimv2",
   },
   timeout  => {
      type  => "=s",
      help  => "Default http timeout for all the queries. Default is 120",
      required => 0,
      default => "120"
   }
   
);

Opts::set_option('protocol', 'http');
Opts::set_option('servicepath','/wsman');
Opts::set_option('portnumber', '80');
Opts::add_options(%opts);
Opts::parse();
Opts::validate();

doOperation();

sub doOperation {

         my %args = (
             path => Opts::get_option ('servicepath'),
              username => Opts::get_option ('username'),
              password => Opts::get_option ('password'),
              port => Opts::get_option ('portnumber'),
              address => Opts::get_option ('server'),
              namespace => Opts::get_option('namespace'),
              timeout  => Opts::get_option('timeout')
         );
          my $client = WSMan::GenericOps->new(%args);
         
         $client->register_class_ns(
            VMware => 'http://schemas.vmware.com/wbem/wscim/1/cim-schema/2'
         );
         display_frus($client);
  
}

sub display_frus {
   my ($client) = @_;
   my @computersystem = $client->EnumerateInstances(class_name => 'CIM_ComputerSystem');
   my @frus = $client->EnumerateInstances(class_name => 'CIM_LogicalDevice');
   print "\n";
   foreach (@computersystem){
      my $instance = $_;
      my $instance_name = (keys %{$_})[0];
      $instance = $_->{$instance_name};
      
      if($instance_name =~ m/unitarycomputersystem/i){
         print "Name : ", $instance->{"ElementName"},"\n";
         my $Name = $instance->{"Name"};
         foreach my $fru (@frus){
            my $fru_inst_name = (keys %{$fru})[0];
            $fru = $fru->{$fru_inst_name};
            if($fru->{"SystemCreationClassName"} =~ m/unitarycomputersystem/i &&
               $fru->{"SystemName"} eq $Name){
               if(defined $fru->{"Name"}) {
                  print "\tFRU : ", $fru->{"Name"}, "\n";
               }
               else {
                  print "\tFRU System Name : ", $fru->{"SystemName"}, "\n";
               }
            }
         }
      }
   }
}
