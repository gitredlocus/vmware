#!/usr/bin/perl -w
#
# Copyright (c) 2007 VMware, Inc.  All rights reserved.
#
use strict;
use warnings;

use FindBin;
use lib "$FindBin::Bin/../";

use VMware::VIRuntime;
use VMware::VILib;
use VMware::VIExt;

$Util::script_version = "1.0";

my %opts = (
   lickey  => {
      type     => "=s",
      variable => "lickey",
      help     => "license key",
      required => 0
   },

   licsource  => {
      type     => "=s",
      variable => "licsource",
      help     => "license source",
      required => 0
   },

   edition  => {
      type     => "=s",
      variable => "edition",
      help     => "edition",
      required => 0
   },

   addon  => {
      type     => "=s",
      variable => "addon",
      help     => "addon",
      required => 0
   },

   hostname => {
      type      => "=s",
      variable  => "host",
      help      => "Name of the host",
      required => 0
   },

   operation => {
      type => "=s",
      help => "Operation to be performed: decode, add"
            . ", query, update, remove",
      required => 1
   },
);

my %operations = (
   "decode",""
   ,"add",""
   ,"query", ""
   ,"update",""
   ,"remove", ""
);

Opts::add_options(%opts);
Opts::parse();
Opts::validate(\&validate);

my $operation = Opts::get_option('operation');
my $hostname = Opts::get_option('hostname');
my $lickey = Opts::get_option('lickey');
my $licsource = Opts::get_option('licsource');
my $edition = Opts::get_option('edition');
my $addons = Opts::get_option('addon');

Util::connect();
my $license_manager = Vim::get_service_content()->licenseManager;
my $license_manager_view = Vim::get_view(mo_ref=>$license_manager);
my $license_assignment_manager = $license_manager_view->licenseAssignmentManager;
my $license_assignment_manager_view;

if(check_version("^2.") == 0) {
   $license_assignment_manager_view 
      = Vim::get_view(mo_ref=>$license_assignment_manager);
   if(!defined $license_assignment_manager) {
      VIExt::fail("License Assignment Manager Not Found.");
   }
}

if ($operation eq 'decode') {
   if(check_version("^2.") == 1) { 
      VIExt::fail("Decode operation is not supported on the servers prior to 4.0");
   }
   else{
      decode_license_info();
   }
} 
elsif ($operation eq 'add') {
   if(check_version("^2.") == 1) { 
       VIExt::fail("Add operation is not supported on the servers prior to 4.0");
   }
   else{
      add_license_inventory();
   }
} 
elsif ($operation eq 'query') {
   if(check_version("^2.") == 1) { 
      query_assigned_licenseV25();
   }
   else{
      query_assigned_license();
   }
} 
elsif ($operation eq 'update') {
   if(check_version("^2.") == 1) { 
      update_assigned_licenseV25();
   }
   else{
      update_assigned_license();
   }
} 
elsif ($operation eq 'remove') {
   if(check_version("^2.") == 1) { 
      VIExt::fail("Remove operation is not supported on the servers prior to 4.0");
   }
   else{
      remove_assigned_license();
   }
}

Util::disconnect();

sub decode_license_info {
   print("Decoding License Information\n");
   print("----------------------------\n");
   my $license_manager_license_info = $license_manager_view->DecodeLicense(licenseKey=>$lickey);
   if(defined $license_manager_license_info) {
      print "    Name: " . $license_manager_license_info->name . "\n";
      print "    Cost Unit: " . $license_manager_license_info->costUnit . "\n";
      print "    Edition Key: " . $license_manager_license_info->editionKey . "\n";
      print "    License Key: " . $license_manager_license_info->licenseKey . "\n";
      print "    Features: \n";
      my $props = $license_manager_license_info->properties;
      foreach (@$props) {
         if($_->key eq "feature") {
            print "        " . "Feature" . "    " . $_->value->value . "\n";
         }
         else {
            print "        " . $_->key . "    " . $_->value . "\n";
         }
      }
   }
}

sub add_license_inventory {
   print("Adding License To Inventory\n");
   print("---------------------------\n");
   my $licenseInfo = $license_manager_view->AddLicense(licenseKey => $lickey);
   if(defined $licenseInfo) {
      print "    Name : " . $licenseInfo->name . "\n";
      print "    License Key : " . $licenseInfo->licenseKey . "\n";
   }
}

sub query_assigned_license {
   print("Querying Assigned Licenses\n");
   print("--------------------------\n");
   my $host_view =  Vim::find_entity_view (view_type => 'HostSystem',
                                           filter => {'name' => $hostname});
   if(!defined $host_view) {
      VIExt::fail("Host System " . $hostname . " Not Found");  
   }
   my $hot_mor = $host_view->{mo_ref};
   my $licenseAssignments = 
      $license_assignment_manager_view->QueryAssignedLicenses(entityId => $hot_mor->value);
   foreach(@$licenseAssignments) {
      print "   " . $_->entityDisplayName . "\n";
      print "   " . $_->assignedLicense->name . " : " . $_->assignedLicense->licenseKey . "\n";
   }
}

sub query_assigned_licenseV25 {
   print("Querying Assigned Licenses\n");
   print("--------------------------\n");
   my $host_view =  Vim::find_entity_view (view_type => 'HostSystem',
                                           filter => {'name' => $hostname});
   if(!defined $host_view) {
      VIExt::fail("Host System " . $hostname . " Not Found");  
   }
   my $hot_mor = $host_view->{mo_ref};
   my $licenseUsageInfo = 
      $license_manager_view->QueryLicenseUsage(host => $hot_mor);
   if(defined $licenseUsageInfo) {
      if(ref($licenseUsageInfo->source) eq 'EvaluationLicenseSource') {
         print "License Type : Evaluation\n";
         print "Remaining Hours : " . $licenseUsageInfo->source->remainingHours . "\n";
      }
      elsif(ref($licenseUsageInfo->source) eq 'LocalLicenseSource') {
         print "License Type : Local\n";
         print "License Keys : " . $licenseUsageInfo->source->licenseKeys . "\n";
      }
      elsif(ref($licenseUsageInfo->source) eq 'LicenseServerSource') {
         print "License Type : License Server\n";
         print "License Server Source : " . $licenseUsageInfo->source->licenseServer . "\n";
      }
      my $flag = "No";
      if($licenseUsageInfo->sourceAvailable == 1) {
         $flag = "Yes";
      }
      print "License Server Source Available : " . $flag . "\n";
      print "\nFeatures : \n";
      if(defined $licenseUsageInfo->featureInfo) {
         my $features = $licenseUsageInfo->featureInfo;
         foreach(@$features) {
            print "   Feature Name " . $_->featureName . "\n";
            print "   Key          " . $_->key . "\n";
            print "   Cost Unit    " . $_->costUnit . "\n\n";
         } 
      }
      else {
         print "Information Not Available\n";
      }
   }
}

sub update_assigned_license {
   if(!defined $lickey) {
      VIExt::fail("For update operation on server 4.0 or later, lickey is mandatory");        
   }
   print("Update Assigned Licenses\n");
   print("------------------------\n");
   my $host_view =  Vim::find_entity_view (view_type => 'HostSystem',
                                           filter => {'name' => $hostname});
   if(!defined $host_view) {
      VIExt::fail("Host System " . $hostname . " Not Found");  
   }
   my $hot_mor = $host_view->{mo_ref};
   my $licenseInfo = 
      $license_assignment_manager_view->UpdateAssignedLicense(entity => $hot_mor->value,
                                                              licenseKey => $lickey);
   if(defined $licenseInfo) {
      print "    Name : " . $licenseInfo->name . "\n";
      print "    License Key : " . $licenseInfo->licenseKey . "\n";
   }   
}

sub update_assigned_licenseV25 {
   if(!defined $licsource && !defined $edition && !defined $addons) {
      VIExt::fail("For update operation on server 3.5 or prior, one of the following arguments is mandatory\n".
                  "1) licsource\n".
                  "2) edition\n".
                  "3) addons\n");
   }
   print("Update Assigned Licenses\n");
   print("------------------------\n");
   my $host_view =  Vim::find_entity_view (view_type => 'HostSystem',
                                           filter => {'name' => $hostname});
   if(!defined $host_view) {
      VIExt::fail("Host System " . $hostname . " Not Found");  
   }
   my $hot_mor = $host_view->{mo_ref};
   if(defined $licsource) {
      my $lic_server_source =
         LicenseServerSource->new(licenseServer=>$licsource);
      eval {
         $license_manager_view->ConfigureLicenseSource(host => $hot_mor,
                                                       licenseSource => $lic_server_source);
         print "License source successfully updated";
      };
      if ($@) {
         Util::trace(0, "\nFault: " . $@ . "\n\n");
      }
   }
   if(defined $edition) {
      eval {
         $license_manager_view->SetLicenseEdition(host => $hot_mor,
                                                  featureKey => $edition);
         print "License edition successfully updated";
      };
      if ($@) {
         Util::trace(0, "\nFault: " . $@ . "\n\n");
      }
   }
   if(defined $addons) {
      eval {
         $license_manager_view->EnableFeature(host => $hot_mor,
                                              featureKey => $addons);
         print "Feature successfully enabled";
      };
      if ($@) {
         Util::trace(0, "\nFault: " . $@ . "\n\n");
      }
   }
}

sub remove_assigned_license {
   print("Removing Assigned Licenses\n");
   print("--------------------------\n");
   my $host_view =  Vim::find_entity_view (view_type => 'HostSystem',
                                           filter => {'name' => $hostname});
   if(!defined $host_view) {
      VIExt::fail("Host System " . $hostname . " Not Found");  
   }
   my $hot_mor = $host_view->{mo_ref};
   eval {
      $license_assignment_manager_view->RemoveAssignedLicense(entityId => $hot_mor->value);
      print "License Successfully removed"; 
   };
   if ($@) {
      Util::trace(0, "\nFault: " . $@ . "\n\n");
   }
}

sub validate {
   my $valid = 1;
   my $operation = Opts::get_option('operation');
   if($operation) {
      if (!exists($operations{$operation})) {
         Util::trace(0, "Invalid operation: '$operation'\n");
         Util::trace(0, " List of valid operations:\n");
         map {print "  $_\n"; } sort keys %operations;
         $valid = 0;
      }
      else {
         if($operation eq "decode") {
            my $lickey = Opts::get_option('lickey');
            if(!defined $lickey) {
               print "For decode operation, lickey is mandatory option.";
               $valid = 0;
            }
         }
         if($operation eq "add") {
            my $lickey = Opts::get_option('lickey');
            if(!defined $lickey) {
               print "For add operation, lickey is mandatory option.";
               $valid = 0;
            }
         }
         if($operation eq "query") {
            my $hostname = Opts::get_option('hostname');
            if(!defined $hostname) {
               print "For query operation, hostname is mandatory option.";
               $valid = 0;
            }
         }
         if($operation eq "update") {
            my $lickey = Opts::get_option('lickey');
            my $licsource = Opts::get_option('licsource');
            my $edition = Opts::get_option('edition');
            my $addons = Opts::get_option('addon');
            my $hostname = Opts::get_option('hostname');
            if(!defined $hostname) {
               print "For update operation, hostname is mandatory option.";
               $valid = 0;
            }
            else {
              if(!defined $lickey && !defined $licsource && !defined $edition && !defined $addons) {
                 print "For update operation, one of the following operation is mandatory\n";
                 print "1) lickey\n";
                 print "2) licsource\n";
                 print "3) edition\n";
                 print "4) addons\n";
                 $valid = 0;
              }
            }
            
            if(defined $edition && $edition ne "esxFull"
                                && $edition ne "esxVdi"
                                && $edition ne "esxBasic"
                                && $edition ne "esxExpress") {
               print("Invalid edition option\n");
               print("Only one of the following editions allowed\n");                       
               print("esxFull - all addons included, backup addon used for ESX Enterprise versions.\n");
               print("esxVdi  - same features and addon as esxFull, and backup is included.\n");
               print("esxBasic - nas is the only addon allowed. Excluded - vsmp, san, backup.\n");
               print("esxExpress - nas is the only addon allowed. Excluded - vsmp, san, backup.\n");
               $valid = 0;
            }
            if(defined $addons && $addons ne "vsmp"
                               && $addons ne "nas"
                               && $addons ne "iscsi"
                               && $addons ne "san"
                               && $addons ne "backup") {
               print("Invalid addon option\n");
               print("Valid addons : vsmp, nas, iscsi, san, backup");
               $valid = 0;
            }
         }
         if($operation eq "remove") {
            my $hostname = Opts::get_option('hostname');
            if(!defined $hostname) {
               print "For remove operation, hostname is mandatory option.";
               $valid = 0;
            }
         }
      }
   }
   return $valid;
}

sub check_version {
   my ($pattern) = @_;
   my $server_version = Vim::get_service_content()->about->version;
   if ($server_version !~ /$pattern/) {
      return 0;
   }
   else {
      return 1;
   }
}