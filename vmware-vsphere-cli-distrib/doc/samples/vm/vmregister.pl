#!/usr/bin/perl -w
#
# Copyright 2006 VMware, Inc.  All rights reserved.
#


use strict;
use warnings;

use VMware::VIRuntime;

my %opts = (
   'vmxpath' => {
      type => "=s",
      help => "Datastore path of the virtual machine's config file",
      required => 1,
   },
   'host' => {
      type => "=s",
      help => "Host on which to register the virtual machine",
      required => 0,
   },
   'pool' => {
      type => "=s",
      help => "Resource pool to add the VM to (root resource pool if omitted)",
      required => 0,
   },
   'folder' => {
      type => "=s",
      help => "Folder to add the VM to (root folder if omitted)",
      required => 0,
   },
);

# read/validate options
Opts::add_options(%opts);
Opts::parse();
Opts::validate(\&validate);

# connect to the server
Util::connect();

my $vmx_path = Opts::get_option('vmxpath');

my $host_view = undef;
my %host_filter = ();
if (Opts::option_is_set('host')) {
   my $host_name = Opts::get_option('host');
   $host_filter{'name'} = $host_name;
   $host_view = Vim::find_entity_view(view_type => 'HostSystem',
                                      filter => \%host_filter);
   if (!defined($host_view)) {
      die "Could not find host '$host_name'\n";
   }
}

my %pool_filter = ();
if (Opts::option_is_set('pool')) {
   $pool_filter{'name'} = Opts::get_option('pool');
}
my $pool_view = Vim::find_entity_view(view_type => 'ResourcePool',
                                      filter => \%pool_filter);
if (!defined($pool_view)) {
   die "Could not find resource pool\n";
}

my %folder_filter = ();
my $folder_view = undef;
if (Opts::option_is_set('folder')) {
   $folder_filter{'name'} = Opts::get_option('folder');
   $folder_view = Vim::find_entity_view(view_type => 'Folder',
                                        filter => \%folder_filter);
} else {
   my $datacenter_views = Vim::find_entity_views(view_type => 'Datacenter');
   if (@$datacenter_views) {
      my $datacenter_view = shift @$datacenter_views;
      $folder_view = Vim::get_view(mo_ref => $datacenter_view->vmFolder);
   }
}
if (!defined($folder_view)) {
   die "Could not find virtual machine folder\n";
}

# register the VM
Util::trace(0, "Registering VM '$vmx_path'\n");
$folder_view->RegisterVM(path => "$vmx_path",
                         asTemplate => 'false',
                         host => $host_view,
                         pool => $pool_view,
                         );
Util::trace(0, "Succeeded\n");

# disconnect from the server
Util::disconnect();

# validate the input
sub validate {
   my $valid = 1;
   my $vmx_path = Opts::get_option('vmxpath');
   if ($vmx_path !~ /^\[/) {
      Util::trace(0, "vmxpath '$vmx_path' isn't a valid datastore path\n");
      $valid = 0;
   }
   return $valid;
}
