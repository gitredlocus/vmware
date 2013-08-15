#!/usr/bin/perl -w
#
# Copyright 2006 VMware, Inc.  All rights reserved.
#
# This script prints all VM's and hosts under a datacenter

use strict;
use warnings;

use VMware::VIRuntime;

$Util::script_version = "1.0";

my %opts = (
   datacenter => {
      type => "=s",
      help => "Datacenter name",
      required => 1,
   },
);

# read/validate options and connect to the server
Opts::add_options(%opts);
Opts::parse();
Opts::validate();
Util::connect();

# find datacenter
my $datacenter = Opts::get_option('datacenter');
my $datacenter_view = Vim::find_entity_view(view_type => 'Datacenter',
                                            filter => { name => $datacenter });

if (!$datacenter_view) {
   die "Datacenter '" . $datacenter . "' not found\n";
}

# get all hosts under this datacenter
my $host_views = Vim::find_entity_views(view_type => 'HostSystem',
                                        begin_entity => $datacenter_view);

# print hosts
my $counter = 1;
print "Hosts found:\n";
foreach (@$host_views) {
   print "$counter: " . $_->name . "\n";
   $counter++;
}

# print vm's
$counter = 1;
print "\nVM's found:\n";
# get all VM's under this datacenter
my $vm_views = Vim::find_entity_views(view_type => 'VirtualMachine',
                                      begin_entity => $datacenter_view);
foreach (@$vm_views) {
   print "$counter: " . $_->name . "\n";
   $counter++;
}

# disconnect from the server
Util::disconnect();                                  

