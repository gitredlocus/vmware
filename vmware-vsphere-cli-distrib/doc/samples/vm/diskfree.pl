#!/usr/bin/perl -w

#  VI3 Disk Info Reporter v1.01
#  Contribution by: Richard Garsthagen  (richard@vmware.com)
#
#  This program exposes the information about the first virtual disk in running Virtual Machines to 
#  VirtualCenter. VirtualCenter today does not report the freespace within the Virtual Machines, strange
#  right? Well this program creates 2 custom fields where it will report the actual free space and the percentage
#  free space.
#
#  Version History:
#  V1.00 - (5 Nov 2006) Written for demo @ vmworld 2006
#  V1.01 - (13 Nov 2006) Improved script to check and if needed create custom fields
#  V1.02 - (9 Apr 2007) Switched to use VILib option-processing support (rbosch)

use strict;
use warnings;
use VMware::VIRuntime;

# read/validate options and connect to the server
Opts::parse();
Opts::validate();
Util::connect();

my $CustomFieldsManager = Vim::get_view(mo_ref => Vim::get_service_content()->customFieldsManager);
my $DiskFreeKey = -1;
my $DiskPerKey = -1;

if (defined $CustomFieldsManager->{field})  #---- Are there any custom fields? 
 {
 
   my $fields = $CustomFieldsManager->{field};

    foreach(@$fields)                       #---- Check existing custom fields if 'DiskFree' or 'DiskFree%' exists
     {
      if ($_->name eq "DiskFree")
       {
        $DiskFreeKey = $_->key;
       }
      if ($_->name eq "DiskFree%")
       {
        $DiskPerKey = $_->key;
       }
     }
 }

if ($DiskFreeKey == -1 )    #---- If no custom field called 'DiskFree' is found, let's create it
{
   my $result = $CustomFieldsManager-> AddCustomFieldDef(name=>"DiskFree");
   $DiskFreeKey = $result->key;
}
if ($DiskPerKey == -1 )    #---- If no custom field called 'DiskFree%' is found, let's create it
{
   my $result = $CustomFieldsManager-> AddCustomFieldDef(name=>"DiskFree%");
   $DiskPerKey = $result->key;
}


my $vms = Vim::find_entity_views(view_type => 'VirtualMachine', filter => { 'guest.guestState' => 'running' } );

##  Getting for all VM that have VMware Tools running the diskinfo from the First Disk
##  (assuming that their is always at least one disk)

foreach (@$vms) {
 my $dfree = $_->guest->disk->[0]->freeSpace;
 my $dcap = $_->guest->disk->[0]->capacity;
 my $dper = int ((100 * $dfree) / $dcap);
 my $dfreeMB = int ($dfree / (1024 * 1024)); 
 $CustomFieldsManager -> SetField(entity => $_, key=> $DiskFreeKey, value => "$dfreeMB MB");
 $CustomFieldsManager -> SetField(entity => $_, key=> $DiskPerKey, value => "$dper %");
 print "Successfully set disk custom field information for VM '" . $_->name . "'\n";
 print "   Disk free MB: $dfreeMB\n";
 print "   Disk free percentage: $dper\n";
}

# disconnect from the server
Util::disconnect();
