#!/usr/bin/perl -w
#
# Copyright (c) 2007 VMware, Inc.  All rights reserved.
#
# Prints utilization report for host or vm managed entity.


use strict;
use warnings;

use FindBin;
use lib "$FindBin::Bin/../";

use VMware::VIRuntime;
use Data::Dumper;
use Switch;
use Time::Local;

$Util::script_version = "1.0";

my %opts = (
   countertype => {
      type => "=s",
      help => "Counter type [cpu | mem | net | disk | sys | all]",
      default => 'all',
      required => 0,
   },
   date => {
      type => "=s",
      help => "Date in yyyy-mm-dd format\n      If no date is provided, default to current date.",
      required => 0,
   },
   entity => {
      type => "=s",
      help => "Managed entity type [VirtualMachine | HostSystem]",         
      default => 'HostSystem',
      required => 0,
   },
   freq => {
      type => "=s",
      help => "Frequency [daily | weekly | monthly]\n      The start date for the report will be computed from the frequency.\n      If the frequency is daily, the start date will be one day less the 'date' value specified.\n      For weekly frequencies, the start date will be seven days less the 'date' value specified. ",
      required => 0,
   },
   name => {
      type => "=s",
      help => "Name of the host or virtual machine\n      If name is not specified, the utilization report will contain all host/vm data.",
      required => 0,
   },
);

Opts::add_options(%opts);

# Parse connection options and connect to the server
Opts::parse();
Opts::validate();

#Connect to the host or vc server
Util::connect();

my $perfmgr_view;
my $all_counters;
my $cpu_counters;
my $memory_counters;
my $disk_counters;
my $system_counters;
my $net_counters;
my $st_date;
my $entity_type = Opts::get_option('entity');
my $counter_type = Opts::get_option('countertype');
my $frequency = Opts::get_option('freq');
my $name = Opts::get_option('name');
my $end_date = Opts::get_option('date');

#depending on the frequency and end_date, get date range
($st_date, $end_date) = get_date_range($frequency, $end_date);
$st_date = $st_date."T00:00:00"; #-00:00";
$end_date = $end_date."T00:00:00"; #-00:00";

if (!defined ($counter_type))
{
   $counter_type='all'
}

my $entity_views;

#Get the name of the vm if specified or get all vm entities
if (defined $name)
{
   $entity_views = Vim::find_entity_views(view_type => $entity_type, filter => {'name' => $name});
}
else
{
   $entity_views = Vim::find_entity_views(view_type => $entity_type);
}

#print Dumper(localtime(time));

print "\n---------------------------------------------------\n";
print "Utilization report for entity type: " .$entity_type ."\n";
print "---------------------------------------------------\n";

init_perf_counter_info();

foreach my $entity (sort {$a->name cmp $b->name} @$entity_views)
{
   #check if the vm is on to collect stats
   if($entity_type eq 'VirtualMachine' && $entity->runtime->powerState->val eq 'poweredOff')
   {
      print "\n---------------------------------------------------------------------------------\n";
      print "'" . $entity->name . "' is powered off.  No stats available.\n";
      print "---------------------------------------------------------------------------------\n\n";
      next;
   }
	
   my $perf_metric_ids = filter_metric_ids($counter_type,$perfmgr_view->QueryAvailablePerfMetric(entity => $entity));

   # performance data for the smallest interval in csv format
   my $perf_query_spec = PerfQuerySpec->new(entity => $entity,
                                            metricId => $perf_metric_ids,
                                            format => 'csv',
                                            startTime => $st_date,
                                            endTime => $end_date);

   # get performance data
   my $perf_data = $perfmgr_view->QueryPerf(querySpec => $perf_query_spec);
   if (!defined ($perf_data) || !@$perf_data)
   {
      print "\n---------------------------------------------------------------------------------\n";
      print "'" . $entity->name . "' has no stats available for the given date range.  Try different dates.\n" ;
      print "---------------------------------------------------------------------------------\n\n";
      next;
   }
	
   foreach (@$perf_data) 
   {
      print "\n---------------------------------------------\n";
      print "'" . $entity->name . "'\n";
      print "---------------------------------------------\n";

      my $time_stamps = $_->sampleInfoCSV;
      my $values = $_->value;
      my @ts = split(/,/,$time_stamps);
      my $ts_size = @ts;

      print "Number of samples : $ts_size \n\n";
      foreach (@$values) 
      {
         if ($_->id->instance eq '')
         {
            print_counter_info($_->id->counterId, $_->id->instance);
            pretty_print($_);
         }
      }
		
      print "---------------------------------------------------\n\n";
   }
}

sub get_date_range
{
   my ($freq,$end_date) = @_;
   my $st_date;
   my ($sec,$min,$hour,$day,$month,$year,$wday,$yday,$isdst);

   if(!defined ($freq))
   {
      $freq = "daily";
   }
	
   if (!defined($end_date))
   {
      ($sec,$min,$hour,$day,$month,$year) = localtime(time);
      $year = 1900+$year;
      $month = $month+1;
      
      if ($month < 10) 
      { 
         $month = "0" . $month;
      } 
      
      if ($day < 10) 
      { 
         $day = "0" . $day;
      }
      
      $end_date = $year . "-" . $month . "-" . $day ; 
   }
   
   ($year,$month,$day)= split(/-/,$end_date);
   my $end_time = timelocal(0,0,0,$day,$month-1,$year-1900);
   my $st_time;
	
   switch ($freq)
   {
      case "daily"	{ $st_time = $end_time - 86400; }
      case "weekly"	{ $st_time = $end_time - (7*86400); }
      case "monthly"	{ $st_time = $end_time - (30*86400); }
      else 		{ $st_time = $end_time - 86400; }
   }	
   
   ($sec,$min,$hour,$day,$month,$year,$wday,$yday,$isdst) = localtime($st_time);
   $year = 1900 + $year;
   $month = $month + 1;
   
   if ($month < 10) 
   { 
      $month = "0" . $month; 
   } 
   
   if ($day < 10) 
   { 
      $day = "0" . $day; 
   }
   
   $st_date = $year . "-" . $month . "-" . $day ; 
   return ($st_date,$end_date);
}

sub print_counter_info 
{
   my ($counter_id, $instance) = @_;
   my $counter = $all_counters->{$counter_id};
   print $counter->nameInfo->label . "\t : ";
}

sub pretty_print
{
   my $perf_metric = $_; 	
   my @values =  split(/,/,$perf_metric->value);
   my $counter = $all_counters->{$perf_metric->id->counterId};
   my $rollupType = $counter->rollupType->val;
   my $nameInfo = $counter->nameInfo->key;
   my $unitInfo = $counter->unitInfo->label;
   my $factor = 1;
   
   if ($unitInfo =~ /Percent/)
   {
      $factor = 100;
   }
   
   switch($rollupType)
   {
      case "maximum"	{ print  maximum(@values)/$factor . " ".$unitInfo."\n\n"; }
      case "minimum"	{ print  minimum(@values)/$factor . " ".$unitInfo."\n\n"; }
      case "average"	{ printf ("%.2f %s\n\n" ,average(@values)/$factor,$unitInfo); }
      else 		{ print "Default case\n"; } 
   }
}

sub minimum
{
   my @arr = @_;
   my $n = @arr;
	
   if ($n == 0)
   {
      die "The array has no elements \n";
   }
	
   my $i = 0;
   my $min;
	
   for ($i = 0; $i < $n; $i++)
   {
      if ($arr[$i] != -1)
      {
         $min = $arr[$i];
         last;
      }
   }
   
   for (; $i < $n; $i++)
   {
      if (($arr[$i] < $min) && ($arr[$i] != -1)) 
      {
         $min = $arr[$i];
      }
   }
   
   return $min;
}

sub maximum
{
   my @arr = @_;
   my $n= @arr;
   if ($n == 0)
   {
      die "The array has no elements.\n";
   }
   
   my $i=0;
   my $max;
	
   for ($i = 0; $i < $n; $i++)
   {
      if ($arr[$i] != -1)
      {
         $max = $arr[$i];
         last;
      }
   }
   
   for (; $i < $n; $i++)
   {
      if ($arr[$i] > $max) 
      {
         $max = $arr[$i];
      }
   } 
   
   return $max;
}

sub average 
{
   my @arr = @_;
   my $n = 0;
   my $avg = 0;
	
   if (@arr == 0)
   {
      die "The array has no elements.\n";
   }
   
   for (my $i = 0; $i < @arr; $i++)
   {
      if ($arr[$i] != -1)
      {
         $avg = $avg + $arr[$i];
         $n++;
      }
   } 
   
   return $avg/$n;
}

sub get_perf_interval
{
   my $entity = shift;
   my $provider_summary = $perfmgr_view->QueryPerfProviderSummary(entity => $entity);
   my $interval = $provider_summary->refreshRate;
   return $interval;
}
		
sub init_perf_counter_info 
{
   $perfmgr_view = Vim::get_view(mo_ref => Vim::get_service_content()->perfManager);
   my $perfCounterInfo = $perfmgr_view->perfCounter;
   
   foreach (@$perfCounterInfo) 
   {
      #print Dumper($_);
      if ($_->rollupType->val =~/average/ || $_->rollupType->val =~/maximum/ || $_->rollupType->val =~/minimum/)
      {
         my $key = $_->key;
         my $group_info = $_->groupInfo;
         my $name_info = $_->nameInfo;
      	
         if ($group_info->key eq 'cpu' && ($name_info->key eq 'usage' || $name_info->key eq 'usagemhz')) 
         {
            $cpu_counters->{ $key } = $_;
            $all_counters->{ $key } = $_;
         } 
         elsif ($group_info->key eq 'mem' && ($name_info->key eq 'usage' || $name_info->key eq 'granted' || $name_info->key eq 'active')) 
         {
            $memory_counters->{ $key } = $_;
            $all_counters->{ $key } = $_;
         } 
         elsif ($group_info->key eq 'disk' && ($name_info->key eq 'usage')) 
         {
            $disk_counters->{ $key } = $_;
            $all_counters->{ $key } = $_;
         } 
         elsif ($group_info->key eq 'sys' && ($name_info->key eq 'resourceCpuUsage')) 
         {
            $system_counters->{ $key } = $_;
            $all_counters->{ $key } = $_;
         } 
         elsif ($group_info->key eq 'net') 
         {
            $net_counters->{ $key } = $_;
            $all_counters->{ $key } = $_;
         }
      }
   }
}

sub filter_metric_ids 
{
   my ($type, $perf_metric_ids) = @_;
   if (! $all_counters) 
   {
      init();
   }
   
   my $counters;
   
   if ($type eq 'cpu') 
   {
      $counters = $cpu_counters;
   }
   elsif ($type eq 'mem') 
   {
      $counters = $memory_counters;
   }
   elsif ($type eq 'sys') 
   {
      $counters = $system_counters;
   } 
   elsif ($type eq 'disk') 
   {
      $counters = $disk_counters;
   }
   elsif ($type eq 'net') 
   {
      $counters = $net_counters;
   } 
   else 
   {
      $counters = $all_counters;
   }
   
   my @filtered_list;
   
   foreach (@$perf_metric_ids) 
   {
      if (exists $counters->{$_->counterId}) 
      {
         push @filtered_list, $_;
      }
   }
   
   return \@filtered_list;
}

Util::disconnect();
