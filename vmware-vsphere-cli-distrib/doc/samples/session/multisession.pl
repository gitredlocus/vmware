#!/usr/bin/perl -w
#
# Copyright 2006 VMware, Inc.  All rights reserved.
#
# This script demonstrates how to login to multiple hosts using Vim object
# instances

use strict;
use warnings;
use VMware::VIRuntime;

my %opts = (
   protocol2 => {
      type => "=s",
      help => "Protocol used to connect to second host",
      default => "https",
   },
   host2 => {
      type => "=s",
      help => "Second VI host to connect to",
      default => "localhost",
      required => 1,
   },
   portnumber2 => {
      type => "=s",
      help => "Port used to connect to second host",
   },
   servicepath2 => {
      type => "=s",
      help => "Service path used to connect to second host",
      default => "/sdk/webService"
   },
   url2 => {
      type => "=s",
      help => "VI SDK URL to connect to second host",
      func => \&get_url2,
   },
   username2 => {
      type => "=s",
      help => "Username to connect to second host (same as first if unspecified)",
   },
   password2 => {
      type => "=s",
      help => "Password to connect to second host (same as first if unspecified)",
   },
);

# read/validate options
Opts::add_options(%opts);
Opts::parse();
Opts::validate();
if (Opts::option_is_set('sessionfile')) {
   print "Can't specify sessionfile for this sample\n";
   Opts::usage();
}

# create vim object for each host
my @vim_objs;
my $url;
$url = Opts::get_option('url');;
push @vim_objs, Vim->new(service_url => $url);
$url = Opts::get_option('url2');
push @vim_objs, Vim->new(service_url => $url);

# login to all hosts
my $username = Opts::get_option('username');
my $password = Opts::get_option('password');
$vim_objs[0]->login(user_name => $username, password => $password);

if (Opts::option_is_set('username2')) {
   $username = Opts::get_option('username2');
}
if (Opts::option_is_set('password2')) {
   $password = Opts::get_option('password2');
}
$vim_objs[1]->login(user_name => $username, password => $password);

# list VM's for all hosts
foreach my $vim_obj (@vim_objs) {
   print "List of virtual machines:\n";
   my $vm_views = $vim_obj->find_entity_views(view_type => 'VirtualMachine');
   foreach my $vm (@$vm_views) {
      print $vm->name . "\n";   
   }
   print "\n";
}

# logout
foreach my $vim_obj (@vim_objs) {
   $vim_obj->logout();
}

#
# Build the URL for the second host
#
sub get_url2 {
   my $protocol = Opts::get_option('protocol2');
   my $host = Opts::get_option('host2');
   my $port = Opts::get_option('portnumber2');
   $port = defined($port) ? ":$port" : "";
   my $path = Opts::get_option('servicepath2');
   return "${protocol}://${host}${port}${path}";
}
