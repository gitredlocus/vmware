#!/usr/bin/perl -w
#
# Copyright 2006 VMware, Inc.  All rights reserved.
#
# This script snapshots all powered on VM's

use strict;
use warnings;

use VMware::VIRuntime;

my %opts = (
   'vmname' => {
      type => "=s",
      help => "Name of the virtual machine",
      required => 0,
   },
);

# read/validate options
Opts::add_options(%opts);
Opts::parse();
Opts::validate();

Util::connect();

# look up virtual machine and unregister it
my $vm_name = Opts::get_option('vmname');
if (defined($vm_name)) {
   my $vm_view = Vim::find_entity_view(view_type => 'VirtualMachine',
                                       filter => {'config.name' => $vm_name,
                                                  'runtime.powerState' => 'poweredOn' });
   if (!defined($vm_view)) {
      die "Did not find virtual machine '$vm_name' powered on!";
   }
   Util::trace(0, "Snapshotting VM " . $vm_view->name . "\n");
   $vm_view->CreateSnapshot(name => 'snapshot sample',
                            description => 'Snapshot created from workshop sample',
                            memory => 0,
                            quiesce => 0);
   Util::trace(0, "Snapshot complete for VM: " . $vm_view->name . "\n");
} else {
   # get VirtualMachine views for all powered on VM's
   my $vm_views = Vim::find_entity_views(view_type => 'VirtualMachine',
                                         filter => { 'runtime.powerState' => 'poweredOn' });

   # snapshot each VM
   foreach (@$vm_views) {
      Util::trace(0, "Snapshotting VM " . $_->name . "\n");
      $_->CreateSnapshot(name => 'snapshot sample',
                         description => 'Snapshot created from workshop sample',
                         memory => 0,
                         quiesce => 0);
      Util::trace(0, "Snapshot complete for VM: " . $_->name . "\n");
   }
}

Util::disconnect();
