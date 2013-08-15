#!/usr/bin/perl -w
#
# Copyright 2006 VMware, Inc.  All rights reserved.
#


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

# connect to the server
Util::connect();

# look up virtual machine and unregister it
my $vm_name = Opts::get_option('vmname');
my $vm_view = Vim::find_entity_view(view_type => 'VirtualMachine',
                                    filter => {'config.name' => $vm_name});
if (!defined($vm_view)) {
   die "Could not find virtual machine '$vm_name'";
}
Util::trace(0, "Unregistering VM " . $vm_view->name . "\n");
$vm_view->UnregisterVM();
Util::trace(0, "Succeeded");

# disconnect from the server
Util::disconnect();
