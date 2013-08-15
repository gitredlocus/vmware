#!/usr/bin/perl
# -----------------------------------------------------------------------------
#
# Copyright (c) 2008 VMware, Inc.  All rights reserved.
#
# -----------------------------------------------------------------------------

use 5.006001;
use strict;
use warnings;

use VMware::VICredStore;
use VMware::VILib;
use VMware::VICommon;

sub prompt_server
{
   my $server;
   print "Enter server: ";
   chomp($server = <STDIN>);
   return($server);
}

sub generate_username
{
   my $random_number = sprintf("%02x", int(rand(256)));
   my $username = "user" . $random_number;
   return ($username);
}

sub generate_password
{
   my $random_number = sprintf("%04x", int(rand(65536)));
   my $password = "pass" . $random_number;
   return ($password);
}

sub get_details
{
   my $server = prompt_server ();
   my $username = generate_username ();
   my $password = generate_password ();
   return ($server, $username, $password);
}

sub prompt_root_password
{
   my $password;

   # Dont echo
   if ($^O =~ /Win/i) {
      require Term::Readkey;
      Term::ReadKey::ReadMode('noecho');
   } else {
      system("stty -echo") and die "ERROR: stty failed\n";
   }

   print "Enter root password: ";
   chomp($password = <STDIN>);
   print "\n";

   # Turn on echo
   if ($^O =~ /Win/i) {
      Term::ReadKey::ReadMode('normal');
   } else {
      system("stty echo") and die "ERROR: stty failed\n";
   }

   return $password;
}

sub server_connect
{
   my (%args) = @_;
   my $url = $args{service_url};
   my $username = $args{username};
   my $password = $args{password};

   eval {
      Vim::login (service_url => $url,
                  user_name => $username,
                  password => $password);
   };

   if ($@) {
      my $error = "Error connecting to server at '$url'";
      if ($@ =~ /Connection refused/) {
         die "$error: Connection refused\n";
      } elsif ($@ =~ /Bad hostname/) {
         die "$error: Bad hostname\n";
      } else {
         die "$error:\n$@\n";
      }
   }
}

sub server_disconnect
{
   Vim::logout();
}

sub create_user
{
   my (%args) = @_;
   my $server = $args{server};
   my $username = $args{username};
   my $password = $args{password};

   # Connect to user.
   eval {
      server_connect (service_url => "https://" . $server . "/sdk/webService",
                      username => "root",
                      password => prompt_root_password ());

      # Create User.
      my $user = HostAccountSpec->new (description => "User Description",
                                       id => $username,
                                       password => $password);
      my $acc_mgr = Vim::get_view(mo_ref =>
                                  Vim::get_service_content()->accountManager);
      $acc_mgr->CreateUser(user => $user);

      # Set user permissions.
      my $root_folder = Vim::get_view(mo_ref =>
                                      Vim::get_service_content()->rootFolder);
      my $permission = Permission->new (entity => $root_folder,
                                        principal => $username,
                                        group => 0,
                                        roleId => -1,
                                        propagate => 1);
      my $auth_mgr = Vim::get_view(mo_ref =>
                                   Vim::get_service_content()->authorizationManager);
      $auth_mgr->SetEntityPermissions(entity => $root_folder,
                                      permission => $permission);

      # Disconnect from server.
      server_disconnect ();
   };

   if ($@) {
      print STDERR "$@\n";
      return 0;
   }

   return 1;
}

sub store
{
   my (%args) = @_;
   my $server = $args{server};
   my $username = $args{username};
   my $password = $args{password};
   my $filename;

   if (defined ($ENV{VI_CREDSTORE})) {
      $filename = $ENV{VI_CREDSTORE};
   }

   eval {

      VMware::VICredStore::init (filename => $filename);

      VMware::VICredStore::add_password (server => $server,
                                         username => $username,
                                         password => $password);

      VMware::VICredStore::close ();
   };
   if ($@) {
      print STDERR "$@\n";
      return 0;
   }
   return 1;
}

sub start
{
   my ($server, $username, $password) = get_details ();

   create_user (server => $server, username => $username, password => $password)
   or die ("Failed to create user on ESX.\n");

   store (server => $server, username => $username, password => $password)
   or die ("Failed to store user credentials into credential store.\n");

   print "Successfully created user and populate the credential store\n";
}

start;

__END__

=head1 NAME

 create_user.pl - creates a random user on the ESX server and sets its
                  password to some random string. This same entry is
                  also added to the credential store.

=head1 SYNOPSIS

 create_user.pl

=head1 DESCRIPTION

 This VI Perl command-line utility can be used to create a random user
 on the ESX server and add its login credentials to the credential store.
