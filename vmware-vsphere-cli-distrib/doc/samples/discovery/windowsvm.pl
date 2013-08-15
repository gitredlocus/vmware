#!/usr/bin/perl -w
#
# Copyright 2006 VMware, Inc.  All rights reserved.
#
# This script prints names of all VM's with Windows guest

use strict;
use warnings;

use VMware::VIRuntime;

# read/validate options and connect to the server
Opts::parse();
Opts::validate();
Util::connect();

# get views of all VM's that match .*Windows.* for config.guestFullName
my $vm_views =
    Vim::find_entity_views(view_type => 'VirtualMachine',
                           filter => { 'config.guestFullName' => qr/Windows/ });

foreach (@$vm_views) {      
   print $_->name . ": " . $_->config->guestFullName . "\n";
}

# disconnect from the server
Util::disconnect();                                  

