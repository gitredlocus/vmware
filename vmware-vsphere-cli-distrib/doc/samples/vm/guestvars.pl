#!/usr/bin/perl -w
#
# Copyright 2006 VMware, Inc.  All rights reserved.
#
# guestvars.pl
#	Script to inspect and modify Guest Variables
#
# Usage:
#	guestvars.pl <login> --vmname <name> --list                           list all variables 
#	guestvars.pl <login> --vmname <name> --name <string>                     list variable(s) matching name
#	guestvars.pl <login> --vmname <name> --change <knameey> --value <val>       set variable with name to new <value>
#	guestvars.pl <login> --vmname <name> --add <name> --value <val>          add new variable <name> with value
#	guestvars.pl <login> --vmname <name> --set <name> --value <val>          set variable with name to new <value>, create if needed


use strict;
use warnings;

use VMware::VIRuntime;

my %opts = (
   'vmname' => {
      type => "=s",
      help => "The name of the virtual machine",
      required => 0,
   },
   'filter' => {
      type => "=s",
      help => "The filter used to select matching virtual machines",
      required => 0,
   },
   'list' => {
      type => "",
      help => "List all variables",
      required => 0,
   },
   'name' => {
      type => "=s",
      help => "list variables matching name",
      required => 0,
   },
   'change' => {
      type => "=s",
      help => "set variable with name to new value",
      required => 0,
   },
   'add' => {
      type => "=s",
      help => "add new variable name with new value",
      required => 0,
   },
   'set' => {
      type => "=s",
      help => "set variable name with new value, create if needed",
      required => 0,
   },
   'value' => {
      type => "=s",
      help => "The new value to write to the shared variable",
      required => 0,
   }
);
Opts::add_options(%opts);

Opts::parse();
Opts::validate(\&additional_validation);

my ($property_name, $property_value);

# Filter can be user provided.  For example, --filter "config.guestFullName=Windows*"
if(defined Opts::get_option('filter')) {
   ($property_name, $property_value) = split("=", Opts::get_option('filter'));
} else {
   $property_name = "config.name";
   $property_value = Opts::get_option('vmname');
}

Util::connect();

my $vm_view = Vim::find_entity_view(view_type => 'VirtualMachine',
                                    filter => {$property_name => $property_value});
if (!defined $vm_view) {
   Util::Disconnect();
   die "ERROR: The specified virtual machine was not found\n";
}

my $failed = 0;
my $extraConfig = $vm_view->config->extraConfig;
my %guest_variable_hash = ();
if (Opts::option_is_set("list")) {
   print "Guest Variables for Virtual Machine " . $vm_view->name . "\n\n";
   printf("%-40.40s %-32.32s\n", "Variable", "Value");
   printf("%-40.40s %-32.32s\n", "---------------", "----------------");
   foreach my $entry (@$extraConfig) {
      if ($entry->key =~ /guestInfo\.(.*)/i) {
         my $key = $1;
	 $guest_variable_hash{$key} = $entry->value;
      }
   }
   foreach my $key (sort keys %guest_variable_hash) {
      printf("%-40.40s %-s\n", "$key", "$guest_variable_hash{$key}");
   }
} elsif (Opts::option_is_set("name")) {
   my $name = Opts::get_option('name');
   print "Guest Variables for Virtual Machine " . $vm_view->name . "\n\n";
   printf("%-40.40s %-32.32s\n", "Variable", "Value");
   printf("%-40.40s %-32.32s\n", "---------------", "----------------");
   foreach my $entry (@$extraConfig) {
      $guest_variable_hash{$entry->key} = $entry->value;
   }
   foreach my $key (sort keys %guest_variable_hash) {
      if ($key =~ /guestInfo\.(.*)/i) {
         my $actual_name = $1;
	 if ($actual_name =~ /$name/) {
	    printf("%-40.40s %-s\n", "$actual_name", "$guest_variable_hash{$key}");
	 }
      }
   }
} else {
   eval {
      if (Opts::option_is_set("set")) {
	 my $name = Opts::get_option('set');
	 set_variable($name, Opts::get_option('value'));
	 print "Variable named $name changed.\n";
      } elsif (Opts::option_is_set("change")) {
	 my $name = Opts::get_option('change');
	 if (find_variable($name)) {
	    set_variable($name, Opts::get_option('value'));
	    print "Variable named $name changed.\n";
	 } else {
	    print STDERR "Variable named $name not found for Virtual Machine " .
		  $vm_view->name . ".\n";
	    $failed = 1;
	 }
      } elsif (Opts::option_is_set("add")) {
	 my $name = Opts::get_option('add');
	 if (!find_variable($name)) {
	    set_variable($name, Opts::get_option('value'));
	    print "Variable named $name added.\n";
	 } else {
	    print STDERR "Variable named $name already exists for Virtual Machine " .
		  $vm_view->name . ".\n";
	    $failed = 1;
	 }
      }
   };
   if ($@) {
      $failed = 1;
   }
}
Util::disconnect();
if ($failed) {
   exit 1;
}

sub find_variable {
   my ($name) = @_;
   my $key = "guestInfo.$name";
   foreach my $entry (@$extraConfig) {
      if ($entry->key eq $key) {
	 return 1;
      }
   }
   return 0;
}

sub set_variable {
   my ($name, $val) = @_;
   my $key = "guestInfo.$name";
   my $spec = VirtualMachineConfigSpec->new(
      changeVersion => $vm_view->config->changeVersion,
      extraConfig => [ OptionValue->new(key => "$key", value => "$val") ]
   );
   eval {
      $vm_view->ReconfigVM(spec => $spec);
   };
   if ($@) {
      print STDERR "ERROR: Unable to set guest variable named $name\n";
      print STDERR "Reason: " . $@->fault_string . "\n";
      die $@;
   }
}

sub additional_validation {
   my $validated = 1;
   if (!Opts::option_is_set('filter') && !Opts::option_is_set('vmname')) {
      print STDERR "ERROR: One of --filter or --vmname must be specified\n";
      $validated = 0;
   }

   if (Opts::option_is_set("list") || Opts::option_is_set("name") ||
       Opts::option_is_set("remove")) {
   } elsif (Opts::option_is_set("change") || Opts::option_is_set("add") ||
            Opts::option_is_set("set")) {
      if (!Opts::option_is_set("value")) {
          print STDERR "ERROR: If --list, --name, --change, --add, or --set " .
                "are specified, --value must also be specified\n";
          $validated = 0;
      }
   } else {
      print STDERR "ERROR: One of --list, --name, --change, --add, --set or --remove " .
            "must be specified\n";
      $validated = 0;
   }
   return $validated;
}
