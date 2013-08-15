#!/usr/bin/perl -w
#
# Copyright 2006 VMware, Inc.  All rights reserved.
#
# Type info utility module 
# - builds filterspecs for hosts / vms / folders / computeresource
# - gets type info based on filter criteria like name = 'my hostname'


use 5.006001;
use strict;
use warnings;


##################################################################################
package VITypeInfo;

use VMware::VIRuntime;


# is_obj_type --
# checks if the type name  
sub is_obj_type {
   my ($obj, $type_name) = @_;

   my $type_match = 0;
   if ($obj && length($type_name) > 0) {
      my $obj_type_name = ref $obj;
      if ($obj_type_name eq $type_name || $obj_type_name->isa($type_name)) {
         $type_match = 1;
      } else {
         Util::trace(0, "Expected type " . $type_name . " Got : " . $obj_type_name);
      }
   } elsif (!$obj && !$type_name) {
      $type_match = 1;
   }

   return $type_match;
}


1;
##################################################################################
