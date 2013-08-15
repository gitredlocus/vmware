#!/usr/bin/perl -w
#
# Copyright 2006 VMware, Inc.  All rights reserved.
#
# This scripts allows users to move all running vm's from one host to another.

use strict;
use warnings;

use VMware::VIRuntime;

my %opts = (
   src => {
      type => "=s",
      help => "Host to evacuate",
      required => 1,
   },
   dst => {
      type => "=s",
      help => "Destination host for VMs",
      required => 1,
   },
);

# read/validate options and connect to the server
Opts::add_options(%opts);
Opts::parse();
Opts::validate();
Util::connect();

# get source host view
my $src_host_name = Opts::get_option('src');
my $src_host_view = Vim::find_entity_view(view_type => 'HostSystem',
                                          filter => { name => $src_host_name });

if (!$src_host_view) {
   die "Source host '$src_host_name' not found\n";
}

# get destination host view
my $dst_host_name = Opts::get_option('dst');
my $dst_host_view = Vim::find_entity_view(view_type => 'HostSystem',
                                          filter => { name => $dst_host_name });


if (! $dst_host_view) {
   die "Destination host '$dst_host_name' not found\n";
}

# get all VM's under src host
my $vm_views = Vim::find_entity_views(view_type => 'VirtualMachine',
                                      begin_entity => $src_host_view);

# migrate all vm's
foreach (@$vm_views) {
   eval {
      $_->MigrateVM(host => $dst_host_view,
                    priority => VirtualMachineMovePriority->new('defaultPriority'),
                    state => VirtualMachinePowerState->new('poweredOn'));
      print "VM " . $_->name . " evacuated successfully.\n";
   };
   if ($@ && $_->runtime->powerState->val eq 'poweredOn') {
      # unexpected error
      print "Unable to evacuate VM '" . $_->name . "'\n";
      print "Reason: " . $@->fault_string . "\n\n";
   }
}

# disconnect from the server
Util::disconnect();                                  
