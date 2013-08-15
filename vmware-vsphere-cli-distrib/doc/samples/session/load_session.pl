#!/usr/bin/perl -w
#
# Copyright 2006 VMware, Inc.  All rights reserved.
#
# This script demonstrates how to use a saved session state file

use strict;
use warnings;
use VMware::VIRuntime;

# read/validate options
Opts::parse();
Opts::validate();
if (!Opts::option_is_set('sessionfile')) {
   print "Must specify sessionfile for this sample\n";
   Opts::usage();
}

# load the session from the file
my $url = Opts::get_option('url');
my $file = Opts::get_option('sessionfile');
Vim::load_session(service_url => $url, session_file => $file);

# get views of all VM's
my $vm_views = Vim::find_entity_views(view_type => 'VirtualMachine');
foreach (@$vm_views) {      
   print $_->name . ": " . $_->config->guestFullName . "\n";
}
print "\nSession information loaded and tested.\n";

