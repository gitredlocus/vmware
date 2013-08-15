#!/usr/bin/perl
use strict;

use VMware::VIRuntime;
use WSMan::GenericOps;

=pod
  This sample gets a CIM Ticket and then gets the list of all CIM_Chassis
  instances from the CIMOM on ESXi.
  
  USAGE:: perl acquirecimticket.pl --server xyz.abc.com --username abc 
          --password xxxx --vihost <hostname>
=cut

my %opts = (
   vihost => {
      type => "=s",
      help => "Target host",
      required => 1,
   },
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

# read/validate options

Opts::add_options(%opts);
Opts::parse();
Opts::validate();

Util::connect();

my $session_id = get_cim_session_id();
if(defined $session_id) {
   print "\nCIM Service Ticket Session Id : " . $session_id . "\n";
   doCIMOperation($session_id);
}
else {
   print "Not able to extract the CIM session id.\n";
}

sub get_cim_session_id {
   my $host_view = Vim::find_entity_view(view_type => 'HostSystem',
                                         filter => { name => Opts::get_option('vihost')});
   if(defined $host_view) {
      my $host_service_ticket = $host_view->AcquireCimServicesTicket();
      return $host_service_ticket->sessionId;
   }
   else {
      print "Host " . Opts::get_option('vihost') . " not found.\n";
      return undef;
   }
}

sub doCIMOperation {
   my ($session_id) = @_;
   my %args = (
      path => "/wsman",
      username => $session_id,
      password => $session_id,
      port => "80",
      address => Opts::get_option ('vihost'),
      namespace => Opts::get_option('namespace'),
      timeout  => Opts::get_option('timeout')
   );
   my $client = WSMan::GenericOps->new(%args);
   $client->register_class_ns(
      VMware => 'http://schemas.vmware.com/wbem/wscim/1/cim-schema/2'
   );
   my @chassis_instances = $client->EnumerateInstances(class_name =>'CIM_Chassis');
   print "\n";
   foreach (@chassis_instances){
      my $instance = $_;
      my $instance_name = (keys %{$instance})[0];
      $instance = $_->{$instance_name};
      if (exists $instance->{ElementName}){
         print "Element Name : ", $instance->{ElementName}, "\n";
      }
      else{print "Element Name : Not Available\n";}
      if (exists $instance->{Caption}){
         print "Caption : ", $instance->{Caption}, "\n";
      }
      else{print "Caption : Not Available\n";}
      if (exists $instance->{Model}){
         print "Model : ", $instance->{Model}, "\n";
      }
      else{print "Model : Not Available\n";}
      if (exists $instance->{Status}){
         print "Status : ", $instance->{Status}, "\n";
      }
      else{print "Status : Not Available\n";}
      print "\n";
   }
}
Util::disconnect();

