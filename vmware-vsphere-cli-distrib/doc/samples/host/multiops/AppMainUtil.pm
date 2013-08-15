#!/usr/bin/perl -w
#
# Copyright 2006 VMware, Inc.  All rights reserved.
#
# Application main line utility module for use with host licensing and diagnostics


use 5.006001;
use strict;
use warnings;


##################################################################################
package AppUtil;

use VMware::VILib;


my $key_ops_info_handler = 'handler';
my $key_ops_info_option = 'option';


my $opname_app;
my $opts;
my $ops_info;
my $validate;


sub app_setup {
   $opname_app = shift;
   $ops_info = shift;
   $opts = shift;
   $validate = shift;

   my @ops_keys = keys %$ops_info;
   foreach my $op_key (@ops_keys) {
      my $op_info = $$ops_info{$op_key};
      my @op_info_keys = keys %$op_info;
      foreach my $op_info_key (@op_info_keys) {
         my $op_val = $$op_info{$op_info_key};
         if ($op_info_key !~ /(handler|option)/) {
            die "Op Info can only have `handler` or `option` as keys "
         } elsif ($op_info_key =~ /(handler)/ && ref $op_val ne 'CODE') {
            die "Op Info `handler` must have a function reference"
         }
      }
   }
}


sub app_main {
   # read/validate options
   Opts::add_options(%$opts);
   Opts::parse();
   Opts::validate($validate);
   
   my $op_val = Opts::get_option($opname_app);
   
   # get handler for operation
   my $op_info = $$ops_info{$op_val}; 

   my $opt_arg = Opts::get_option($$op_info{$key_ops_info_option});

   Util::connect();

   # invoke handler for operation
   my $handler = $$op_info{$key_ops_info_handler};
   my $vim_service = Vim::get_vim_service();
   my $sic = Vim::get_service_content();
   &$handler($vim_service, $sic, $opt_arg);

   Util::disconnect();

   Util::trace(2, "Exiting.\n");
}


1;
##################################################################################


