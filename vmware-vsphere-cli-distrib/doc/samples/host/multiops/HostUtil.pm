#!/usr/bin/perl -w
#
# Copyright 2006 VMware, Inc.  All rights reserved.
#
# utility functions for host information 


use 5.006001;
use strict;
use warnings;


##################################################################################
package HostUtil;

use VMware::VILib;


use TypeInfo;


# is_virtual_center --
#      checks if the AboutInfo is for VirtualCenter
# about - AboutInfo structure
# returns true if about is for VirtualCenter
sub is_virtual_center {
   my ($about) = @_;

   if (!VITypeInfo::is_obj_type($about, 'AboutInfo')) {
      die "Expected AboutInfo";
   }

   return $about->productLineId eq "vpx";
}


# is_legacy_host --
#      checks if the ServiceContent is for VirtualCenter
# about - AboutInfo structure
# returns true if the host is not ESX 3.x or greater
sub is_legacy_host {
   my ($about) = @_;

   if (!VITypeInfo::is_obj_type($about, 'AboutInfo')) {
      die "Expected AboutInfo";
   }

   my $major_ver = substr($about->version, 0, 1);
   my $is_legacy = 
      ($about->productLineId eq "esx" && $major_ver < 3) ||
      ($about->productLineId eq "vpx" && $major_ver < 2);

   return $is_legacy;
}


1;
##################################################################################
