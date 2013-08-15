#!/usr/bin/perl -w
#
# Copyright 2006 VMware, Inc.  All rights reserved.
#
# This script demonstrates how to save session state to a file after login 

use strict;
use warnings;
use VMware::VIRuntime;

# read/validate options
Opts::parse();
Opts::validate();
if (!Opts::option_is_set('savesessionfile')) {
   print "\nERROR: Must specify savesessionfile for this sample\n";
   Opts::usage();
}

# connect to the server
my $url = Opts::get_option('url');
my $username = Opts::get_option('username');
my $password = Opts::get_option('password');
Vim::login(service_url => $url, user_name => $username, password => $password);

# save the session to a file
my $file = Opts::get_option('savesessionfile');
if (defined($file)) {
   Vim::save_session(session_file => $file);
   print "Session information saved.\n";
} else {
   print "\nERROR: Must specify savesessionfile for this sample\n";
}