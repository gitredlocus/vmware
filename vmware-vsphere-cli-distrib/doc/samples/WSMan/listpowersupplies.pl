#!/usr/bin/perl
use strict;
#use warnings;

use WSMan::GenericOps;
use VMware::VILib;

$Util::script_version = "1.0";

=pod
  This sample is used to get the status of all the discrete sensors associated
  with all the power-supplies. It shows the usage of association traversals
  and GetInstance.
  
  USAGE:: perl listpowersupplies.pl --server xyz.abc.com --username abc 
          --password xxxx
=cut


my @sensortype = ("Unknown", "Other", "Temperature", "Voltage",
                  "Current", "Tachometer", "Counter", "Switch", "Lock",
                  "Humidity", "Smoke Detection", "Presence", "Air Flow");

my @availability = ("Other", "Unknown", "Running/Full Power", "Warning",
                    "In Test", "Not Applicable", "Power Off", "Off Line",
                    "Off Duty", "Degraded", "Not Installed", "Install Error",
                    "Power Save - Unknown", "Power Save - Low Power Mode",
                    "Power Save - Standby", "Power Cycle",
                    "Power Save - Warning", "Paused", "Not Ready",
                    "Not Configured", "Quiesced");

my @operationalstatus = ("Unknown", "Other", "OK", "Degraded", "Stressed",
                         "Predictive Failure", "Error", "Non-Recoverable Error",
                         "Starting", "Stopping", "Stopped", "In Service",
                         "No Contact", "Lost Communication", "Aborted", "Dormant",
                         "Supporting Entity in Error", "Completed", "Power Mode",
                         "DMTF Reserved", "Vendor Reserved");

my %healthstatus=(0 => "Unknown", 5 => "OK",
                 10 => "Degraded/Warning",
                 15 => "Minor failure",
                 20 => "Major failure",
                 25 => "Critical failure",
                 30 => "Non-recoverable error");
                 
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
      display_power_supplies($client);
}

sub display_power_supplies {
   my ($client) = @_;
   my @powersupply = $client->EnumerateInstances(class_name => 'CIM_PowerSupply');
   print "\n";
   foreach (@powersupply){
      my $instance = $_;
      my $instance_name = (keys %{$instance})[0];
      $instance = $_->{$instance_name};

      if ($instance->{"ElementName"}){
         print "Name : ", $instance->{"ElementName"}, "\n";
      }
      else{
         (print "Name : undef\n")
      };
      if($instance->{"HealthState"}){
         if(exists $healthstatus{$instance->{"HealthState"}}){
            print "Health : ", $healthstatus{$instance->{"HealthState"}}, "\n";
         }
         else {print "Health : Unknown\n"};
      }
      else {print "Health : Unknown\n"};
      if($instance->{"OperationalStatus"}){
         if($instance->{"OperationalStatus"} > (scalar(@operationalstatus)-1)){
            print "OperationalStatus : Unknown\n";
         }
         else{
            print "OperationalStatus : ",
                  $operationalstatus[$instance->{"OperationalStatus"}], "\n";
         }
      }
      else{print "OperationalStatus : Unknown\n";}
      if($instance->{"TotalOutputPower"}){
         my ($totalpower) = split /_/, $instance->{"TotalOutputPower"};
         print "Total Output Power :", $totalpower/1000 ,"Watts\n";
      }

      my @sensors = $client->EnumerateAssociatedInstances(class_name => $instance_name,
                                                          selectors => $_->{$instance_name},
                                                          associationclassname => 'CIM_AssociatedSensor');

      foreach my $s (@sensors){
         my $inst_name = (keys %{$s})[0];
         if ($s->{$inst_name}->{Name}){
             print "\tName : ", $s->{$inst_name}->{Name}, "\n";
         }
         else{ (print "\tName : undef\n")};
         if ($s->{$inst_name}->{SensorType} < scalar @sensortype){
             print "\tSensorType : ", $sensortype[$s->{$inst_name}->{SensorType}], "\n";
         }
         else{ (print "\tSensorType : undef\n")};
         if($s->{$inst_name}->{HealthState}){
            if(exists $healthstatus{$s->{$inst_name}->{HealthState}}){
                print "\tHealth : ", $healthstatus{$s->{$inst_name}->{HealthState}}, "\n";
            }
            else {print "\tHealth : Unknown\n"};
         }
         else {print "\tHealth : Unknown\n"};
         if ($s->{$inst_name}->{OperationalStatus} < scalar @operationalstatus){
              print "\tOperationalStatus  : ",
                    $operationalstatus[$s->{$inst_name}->{OperationalStatus}]
                   , "\n";
         }
         else{ (print "\tOperationalStatus : undef\n")};
         print "\n";
      }
   }
}