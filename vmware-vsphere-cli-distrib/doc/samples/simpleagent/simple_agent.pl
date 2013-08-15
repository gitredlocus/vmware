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

sub test_connection
{
   my (%args) = @_;
   my $server = $args{server};
   my $username = $args{username};
   my $password = $args{password};

   eval {
      # Connect to server.
      server_connect (service_url => "https://" . $server . "/sdk/webService",
                      username => $username,
                      password => $password);

      # Disconnect from server.
      server_disconnect ();
   };

   if ($@) {
      return 0;
   }
   return 1;
}

sub query_credentials
{
   my $server;
   my $username;
   my $password;
   my $filename;
   my @server_list;
   my @user_list;

   if (defined ($ENV{VI_CREDSTORE})) {
      $filename = $ENV{VI_CREDSTORE};
   }

   eval {
      VMware::VICredStore::init (filename => $filename);

      @server_list = VMware::VICredStore::get_hosts ();
      if($#server_list == -1) {
         die ("Failed to retrieve credentials.\n");
      } else {
         $server = shift (@server_list);

         @user_list = VMware::VICredStore::get_usernames (server => $server);
         if($#user_list == -1) {
            die ("Failed to retrieve credentials.\n");
         }
         $username = shift (@user_list);

         $password = VMware::VICredStore::get_password (server => $server,
                                                     username => $username);

         VMware::VICredStore::close ();
      }
   };

   if ($@) {
      die ("Failed to retrieve credentials.\n$@");
   }

   return ($server, $username, $password);
}

sub start
{
   my ($server, $username, $password) = query_credentials ();

   test_connection (server => $server,
                    username => $username,
                    password => $password)
   or die ("Failed to connect to ESX with user.\n");

   print "Successfully connected to the server.\n";
}

start;

__END__

=head1 NAME

 simple_agent.pl - This sample demostrates use of credential store perl API.

=head1 SYNOPSIS

 create_user.pl

=head1 DESCRIPTION

 This VI Perl command-line utility queries the crendential store for server
 name, user name and password and tries to login to that server using these
 credentials.
