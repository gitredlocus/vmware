#!/usr/bin/perl -w
#
# Copyright 2006 VMware, Inc.  All rights reserved.
#
# prints performance data for host or vm

use strict;
use warnings;
use VMware::VIRuntime;

# counter tables
my $all_counters;
my $cpu_counters;
my $memory_counters;
my $disk_counters;
my $system_counters;
my $net_counters;

# performance manager view
my $perfmgr_view;

my %opts = (
   host => {
      type => "=s",
      help => "Host to query",
   },
   vm => {
      type => "=s",
      help => "Virtual machine to query",
   },
   countertype => {
      type => "=s",
      help => "Counter type [cpu | mem | net | disk | sys]",
      required => 1,
   },
);

# read/validate options
Opts::add_options(%opts);
Opts::parse();
Opts::validate();
if (!Opts::option_is_set('vm') && !Opts::option_is_set('host')) {
   print "Must specify either vm or host";
   Opts::usage();
} elsif (Opts::option_is_set('vm') && Opts::option_is_set('host')) {
   print "Cannot specify both vm and host";
   Opts::usage();
}

# connect to the server
Util::connect();

# initialize a table of counters for cpu, mem, etc.
init_perf_counter_info();

# find target virtual machine or host
my $entity;
if (Opts::option_is_set('vm')) {
   my $vm = Opts::get_option('vm');
   $entity = Vim::find_entity_view(view_type => 'VirtualMachine',
                                   filter => { name => $vm });
} else {
   my $host = Opts::get_option('host');
   $entity = Vim::find_entity_view(view_type => 'HostSystem',
                                   filter => { name => $host });
}

if (!$entity) {
   die "Target entity not found\n";
}

# get all available metric id's for given counter_type
my $countertype = Opts::get_option('countertype');
my $perf_metric_ids =
   filter_metric_ids($countertype,
                     $perfmgr_view->QueryAvailablePerfMetric(entity => $entity));

# make sure there is data available for this entity   
if (!@$perf_metric_ids) {
   die "Performance data not available for " . $countertype . "\n";
}

# get all available perf intervals for this vm
my $intervals = get_available_intervals($entity);

# performance data for the smallest interval in csv format
my $perf_query_spec = PerfQuerySpec->new(entity => $entity,
                                         metricId => $perf_metric_ids,
                                         format => 'csv',
                                         intervalId => shift @$intervals);

# get performance data
my $perf_data = $perfmgr_view->QueryPerf(querySpec => $perf_query_spec);

foreach (@$perf_data) {
   print "Performance data for: " . $entity->name . "\n\n";
   my $time_stamps = $_->sampleInfoCSV;
   my $values = $_->value;
   foreach (@$values) {
      print_counter_info($_->id->counterId, $_->id->instance);
      print "Sample info : " . $time_stamps . "\n";
      print "Value: " . $_->value . "\n\n";
   }
}

# disconnect from the server
Util::disconnect();                                  



# initializes $perfmgr_view and sets up tables of cpu, mem, net, and disk
# counter info
sub init_perf_counter_info {
   $perfmgr_view = Vim::get_view(mo_ref => Vim::get_service_content()->perfManager);
   my $perfCounterInfo = $perfmgr_view->perfCounter;
   foreach (@$perfCounterInfo) {
      my $key = $_->key;
      $all_counters->{ $key } = $_;
      my $group_info = $_->groupInfo;
      if ($group_info->key eq 'cpu') {
         $cpu_counters->{ $key } = $_;
      } elsif ($group_info->key eq 'mem') {
         $memory_counters->{ $key } = $_;
      } elsif ($group_info->key eq 'disk') {
         $disk_counters->{ $key } = $_;
      } elsif ($group_info->key eq 'sys') {
         $system_counters->{ $key } = $_;
      } elsif ($group_info->key eq 'net') {
         $net_counters->{ $key } = $_;
      }
   }
}

# returns list of metric id's for cpu, mem, sys, disk, or net
sub filter_metric_ids {
   my ($type, $perf_metric_ids) = @_;
   if (! $all_counters) {
      init();
   }
   my $counters;
   if ($type eq 'cpu') {
      $counters = $cpu_counters;
   } elsif ($type eq 'mem') {
      $counters = $memory_counters;
   } elsif ($type eq 'sys') {
      $counters = $system_counters;
   } elsif ($type eq 'disk') {
      $counters = $disk_counters;
   } elsif ($type eq 'net') {
      $counters = $net_counters;
   } else {
      die 'Unknown counter type';
   }   
   my @filtered_list;
   foreach (@$perf_metric_ids) {
      if (exists $counters->{$_->counterId}) {
         push @filtered_list, $_;
      }
   }
   return \@filtered_list;   
}

# returns an array of available intervals for a VM
sub get_available_intervals {
   my $entity = shift;
   my $historical_intervals = $perfmgr_view->historicalInterval;
   my $provider_summary = $perfmgr_view->QueryPerfProviderSummary(entity => $entity);
   my @intervals;
   if ($provider_summary->refreshRate) {
      push @intervals, $provider_summary->refreshRate;
   }
   foreach (@$historical_intervals) {
      push @intervals, $_->samplingPeriod;
   }
   return \@intervals;
}

# subroutine to print description of performance counter
sub print_counter_info {
   my ($counter_id, $instance) = @_;
   my $counter = $all_counters->{$counter_id};
   print "Counter: " . $counter->nameInfo->label . "\n";
   if (defined $instance) {
      print "Instance : " . $instance . "\n";
   }
   print "Description: " . $counter->nameInfo->summary . "\n";
   print "Units: " . $counter->unitInfo->label . "\n";   
}
