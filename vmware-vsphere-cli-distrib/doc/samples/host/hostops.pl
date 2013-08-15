#!/usr/bin/perl -w
#
# Copyright 2006 VMware, Inc.  All rights reserved.
#
# This scripts allows users to perform basic host operations. The supported
# operations are: add_standalone, disconnect, reconnect, enter_maintenance,
# exit_maintenance, reboot, and shutdown. For more information, execute
# the script with --help option.

use strict;
use warnings;

use VMware::VIRuntime;

my %operations = (
   add_standalone => \&add_standalone_host,
   disconnect => \&disconnect_host,
   reconnect => \&reconnect_host,
   enter_maintenance => \&enter_maintenance_mode,
   exit_maintenance => \&exit_maintenance_mode,
   reboot => \&reboot_host,
   shutdown => \&shutdown_host,
);

my %opts = (
   host => {
      type => "=s",
      help => "Target host",
      required => 1,
   },
   host_username => {
      type => "=s",
      help => "Target host username (required for add_standalone)",
      required => 0,
   },
   host_password => {
      type => "=s",
      help => "Target host password (required for add_standalone)",
      required => 0,
   },
   operation => {
      type => "=s",
      help => "Operation to perform on target host: " . 
          join(", ", sort keys %operations),
      required => 1,
   },
);

# read/validate options
Opts::add_options(%opts);
Opts::parse();
Opts::validate();
my $operation = Opts::get_option('operation');

# extra validation: add_standalone requires username/password
if (($operation eq 'add_standalone') && 
    (!Opts::option_is_set('host_username') || 
     !Opts::option_is_set('host_password'))) {
   print "Must specify host_username and host_password for add_standalone\n";
   Opts::usage();
}

# extra validation: verify that operation is supported
if (!exists($operations{$operation})) {
   print "Unknown operation: '$operation'\n";
   print "List of valid operations:";
   map { print "   $_\n"; } sort keys %operations;
   Opts::usage();
}

# connect to the server
Util::connect();

# look up entity: add_standalone is performed on a Folder, the others on a Host
my $entity_view;
if ($operation eq 'add_standalone') {
   my $folder_views = Vim::find_entity_views(view_type => 'Folder',
                              filter => { childType => qr/ComputeResource/ });
   if (@$folder_views) {
      $entity_view = shift @$folder_views;
   } else {
      # This should never happen in practice
      print "Could not find host folder; are you connecting\n";
      print "directly to a host instead of to VirtualCenter?\n";
      Opts::usage();
   }
} else {
   my $host = Opts::get_option('host');
   my $host_views = Vim::find_entity_views(view_type => 'HostSystem',
                                           filter => { name => $host });
   if (@$host_views) {
      $entity_view = shift @$host_views;
   } else {
      print "Could not find target host '$host'";
      Opts::usage();
   }
}

# dispatch operation
my $handler = $operations{$operation};
&$handler($entity_view);

# disconnect from the server
Util::disconnect();

###
### Implementation of operation handlers
###

#
# Add standalone server host
#
sub add_standalone_host {
   my $folder = shift;

   my $host = Opts::get_option('host');
   my $username = Opts::get_option('host_username');
   my $password = Opts::get_option('host_password');
   print "Adding standalone host '$host'\n";
   my $host_connect_spec = (HostConnectSpec->new(force => 0,
                                                 hostName => $host,
                                                 userName => $username,
                                                 password => $password,
                                                 ));

   $folder->AddStandaloneHost(spec => $host_connect_spec, addConnected => 1);
   print "Host addition successfully completed\n";
}

#
# Disconnect server host
#
sub disconnect_host {
   my $host = shift;
   print "Disconnecting host " . $host->name . "\n\n";
   $host->DisconnectHost();
   print "Host disconnect successfully completed\n";
}

#
# Reconnect server host
#
sub reconnect_host {
   my $host = shift;   
   print "Reconnecting host " . $host->name . "\n\n";
   $host->ReconnectHost();
   print "Host reconnect successfully completed\n";
}

#
# Enter maintenance mode for server host
#
sub enter_maintenance_mode {
   my $host = shift;
   my $vm_views = Vim::get_views(mo_ref_array => $host->vm);

   foreach (@$vm_views) {
      if($_->runtime->powerState->val eq 'poweredOn') {
         print "Suspending virtual machine " . $_->name . "...";
         $_->SuspendVM();
         print "done\n\n";
      }
   }

   print "Putting host " . $host->name . " in maintenance mode\n\n";
   $host->EnterMaintenanceMode(timeout => 0);
   print "Host entered maintenance mode successfully\n";
}

#
# Exit maintenance mode for server host
#
sub exit_maintenance_mode {
   my $host = shift;
   print "Taking host " . $host->name . " out of maintenance mode\n\n";
   $host->ExitMaintenanceMode(timeout => 0);
   print "Host exited maintenance mode successfully\n";
}

#
# Reboot server host
#
sub reboot_host {
   my $host = shift;
   my $vm_views = Vim::get_views(mo_ref_array => $host->vm);

   foreach (@$vm_views) {
      if($_->runtime->powerState->val eq 'poweredOn') {
         print "Suspending virtual machine " . $_->name . "...";
         $_->SuspendVM();
         print "done\n";
      }
   }

   if(!$host->runtime->inMaintenanceMode) {
      print "\nPutting host " . $host->name . " in maintenance mode...";
      $host->EnterMaintenanceMode(timeout => 0);
      print "done\n\n";
   }

   print "Rebooting host " . $host->name . "...";
   $host->RebootHost(force => 0);
   print "done\n\n";

   if($host->runtime->inMaintenanceMode) {
      print "Taking host " . $host->name . " out of maintenance mode...";
      $host->ExitMaintenanceMode(timeout => 0);
      print "done\n\n";
   }

   print "Host reboot successfully initiated\n";
}

#
# Shutdown server host
#
sub shutdown_host {
   my $host = shift;
   my $vm_views = Vim::get_views(mo_ref_array => $host->vm);

   foreach (@$vm_views) {
      if($_->runtime->powerState->val eq 'poweredOn') {
         print "Suspending virtual machine " . $_->name . "...";
         $_->SuspendVM();
         print "done\n";
      }
   }

   if(!$host->runtime->inMaintenanceMode){
      print "\nPutting host " . $host->name . " in maintenance mode...";
      $host->EnterMaintenanceMode(timeout => 0);
      print "done\n\n";
   }

   print "Shutting down host " . $host->name . "...";
   $host->ShutdownHost(force => 0);
   print "done\n\n";

   print "Shutdown successfully initiated\n";
}

