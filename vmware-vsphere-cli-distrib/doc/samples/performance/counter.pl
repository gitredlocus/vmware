#!/usr/bin/perl -w
#
# Copyright 2006 VMware, Inc.  All rights reserved.
#
# prints metrics for an entity
#  user can select the entity, a selection criteria for counters, the interval, and number of samples
#  see usage information at bottom
#

use strict;
use warnings;

use VMware::VIRuntime;
#Remove comment if installed:use HTML::Table;
use Time::HiRes;

#
# global variables
#
my $perfmgr_view;       # View to PerfManager Object
my $entity;             # View to entity
my $all_counters;       # pointer to structure that maintains the counters
my %counter_by_name;    # tracks <group>.<name>.<summary> for each counter

my @timeIntervals;   # keep track of timers
my @timeLabels;      # Time stamps are kept for each step and printed at the end

my %opts = (
   entitytype => {
      type => "=s",
      help => "Type of entity to query",
      required => 1,
   },
   entityname => {
      type => "=s",
      help => "Name of entity to query",
   },
   file => {
      type => "=s",
      help => "Name of file to hold output",
   },
   countertype => {
      type => "=s",
      help => "Counter type [cpu | mem | net | disk | sys]",
      default => '.',
   },
   instance => {
      type => "=s",
      help => "Name of instance to query",
      default => '',
   },
   interval => {
      type => "=i",
      help => "Interval in seconds",
      default => 20,
   },
   samples => {
      type => "=i",
      help => "Number of samples to retrieve",
      default => 1,
   },
);

# read/validate options and connect to the server
Opts::add_options(%opts);
Opts::parse();
Opts::validate();
Util::connect();

# redirect output if file is specified
if (Opts::option_is_set('file')) {
   my $file = Opts::get_option('file');
   open (STDOUT, "> $file") or die ("Couldn't write to file $file: $!");
}

# calculate the start and end time of collection
my $interval = Opts::get_option('interval');
my $samples = Opts::get_option('samples');
my ($start, $end);
if ($interval == 20) {
   # real-time stats: leave start and end undefined, set number of samples
} else {
   # historical stats: specify start and end times
   my $now = time;
   $start = format_time($now - ($samples * $interval));
   $end = format_time($now);
}

#  Step 1) login to the service.
#  Note:  every VI command is time stamped so that you can determine the time it takes to run
my $time_start = [ Time::HiRes::gettimeofday() ];
my $epoch_start = $time_start;
push (@timeIntervals, Time::HiRes::tv_interval ($time_start));
push (@timeLabels, "Login");


#  Step 2) Retrieve the full set of counter ids
$time_start = [ Time::HiRes::gettimeofday() ];
init_perf_counter_info();
push (@timeIntervals, Time::HiRes::tv_interval ($time_start));
push (@timeLabels, "Get Counters");


#  Step 3) Find the entity to retrieve the performance parameters
my $entitytype = Opts::get_option('entitytype');
$time_start = [ Time::HiRes::gettimeofday() ];
if (Opts::option_is_set('entityname')) {
   my $entityname = Opts::get_option('entityname');
   $entity = Vim::find_entity_view(view_type => $entitytype,
                                   filter => {'name' => $entityname});
   if (!defined($entity)) {
      die "Entity $entityname not found.\n";
   }
} elsif ($entitytype eq 'VirtualMachine') {     
   $entity = Vim::find_entity_view(view_type => 'VirtualMachine',
                                   filter => {'runtime.powerState' => 'poweredOn'});
   if (!defined($entity)) {
      die "No Virtual Machines are powered up.  No counters are available.\n";
   }
} else {
   $entity = Vim::find_entity_view(view_type => $entitytype);
   if (!defined($entity)) {
      die "No entity of type $entitytype can be found.  No counters are available.\n";
   }
}
     
push (@timeIntervals, Time::HiRes::tv_interval ($time_start));
push (@timeLabels, "Find View");

#  Step 4) Validate that interval is available for this entity
$time_start = [ Time::HiRes::gettimeofday() ];
my $avail_metric_ids = ($perfmgr_view->QueryAvailablePerfMetric(entity => $entity));
if (! check_interval ($entity, $interval)) {
   my $arg = $entity->name;
   die "$interval second interval is not available for entity $arg.\n";
}

push (@timeIntervals, Time::HiRes::tv_interval ($time_start));
push (@timeLabels, "Query Intervals");


#  Step 5) Select only the counters that the user specified in the "--select parm"
#       Decide if he wants to aggregate instances (default), all instances (*), or a specific instance
my @perf_metric_ids;
foreach (keys %counter_by_name) {
   my $countertype = Opts::get_option('countertype');
   my $instance = Opts::get_option('instance');
   next unless (/^${countertype}\./);
   my $metric = PerfMetricId->new (counterId => $counter_by_name{$_}->key,
                                   instance => $instance);
   push (@perf_metric_ids, $metric);
}



# make sure there is data available for this entity   
if (! @perf_metric_ids) {
   print "Performance data not available\n";
   exit (1);
}

#
#  Step 6) Build the query spec
#


# performance data for the smallest interval in csv format
my $perf_query_spec;
if (defined $start) {
    $perf_query_spec = PerfQuerySpec->new(entity => $entity,
                       metricId => \@perf_metric_ids,
                       intervalId => $interval,
                       startTime => $start,
                       endTime => $end,
                       format => 'csv');
} else {
    $perf_query_spec = PerfQuerySpec->new(entity => $entity,
                       metricId => \@perf_metric_ids,
                       intervalId => $interval,
                       maxSample => $samples,
                       format => 'csv');
}

#  Step 7) Retrieve the data
$time_start = [ Time::HiRes::gettimeofday() ];
my $perf_data = $perfmgr_view->QueryPerf( querySpec => $perf_query_spec);
push (@timeIntervals, Time::HiRes::tv_interval ($time_start));
push (@timeLabels, "Query Perf");


if (! @$perf_data) {
   print "Performance data not available for requested period\n";
   exit (1);
}

# sort through the data and compile the stats of interest
#  the data is returned in an array
#  Each element contains
#     A list of time stamps
#     A value object
#        value -> comma separated list of metrics
#        key -> PerfMetricId 
#              -> CounterId
#              -> instance
my %list;
my $time_stamps;

foreach (@$perf_data) {
   my $values = $_->value;
   $time_stamps = $_->sampleInfoCSV;
   foreach (@$values) {
      my $item = print_counter_info($_->id->counterId, $_->id->instance);
      $list {$item} = $_->value;
   }
}
Vim::logout();
push (@timeIntervals, Time::HiRes::tv_interval ($epoch_start));
push (@timeLabels, "Complete Operation");



#  Time stamps has interval, time, interval, time ... 
my @times = split (/,/, $time_stamps);
@times = @times [ 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39, 41, 43, 45];
$#times = $samples - 1;

#Remove comment if installed:
#
#  Build an HTML table
#
#my $table = HTML::Table->new( -border=>1,
#               -style=>'color:green'); 
#$table->addRow ("Performance data for $entitytype " . $entity->name); 
#$table->addRow ("Metric", @times);
#foreach (sort keys %list) {
#   my @temp = split (/,/, $list{$_});
#   $table->addRow($_, @temp);
#}
#foreach (@timeIntervals) {
#   $table->addRow (shift @timeLabels, $_);
#}
#for (my $i=1; $i <= $samples; $i++) {
#   $table->setColAlign($i+1, 'RIGHT') ;
#}
#$table->setRowAlign(1, 'CENTER');
#$table->setRowAlign(2, 'CENTER');
#$table->setCellColSpan(1,1,$samples+1);
#print '<html><body>';
#$table->print;
#print '</body></html>';

#Print to console
print "Performance data for " . $entitytype . " - " . $entity->name . "\n";
print "Metric - " . @times . "\n";
foreach (sort keys %list) {
   my @temp = split (/,/, $list{$_});
   foreach (@temp) {
      print $_ . " ";
   }
}
print "\n";
foreach (@timeIntervals) {
   print shift @timeLabels;
   print " ";
   print $_ . " \n";
}

# initializes $perfmgr_view and sets up tables of cpu, mem, net, and disk
# counter info
sub init_perf_counter_info {
   $perfmgr_view = Vim::get_view(mo_ref => Vim::get_service_content()->perfManager);
   my $perfCounterInfo = $perfmgr_view->perfCounter;
   foreach (@$perfCounterInfo) {
      my $key = $_->key;
      $all_counters->{ $key } = $_;
      my $name = join (".", $_->groupInfo->key, $_->nameInfo->key, $_->rollupType->val);
      print "Duplicate counter $name \n" if (exists $counter_by_name{$name});
      $counter_by_name{$name} = $_;
   }
}


# returns an array of available intervals for a VM
sub check_interval {
   my ($entity, $interval) = @_;
   my $historical_intervals = $perfmgr_view->historicalInterval;
   my $provider_summary = $perfmgr_view->QueryPerfProviderSummary(entity => $entity);
   my %intervals;
   if ($provider_summary->refreshRate) {
      $intervals {$provider_summary->refreshRate} = 1;
   }
   foreach (@$historical_intervals) {
      $intervals {$_->samplingPeriod} = 1;
   }
   return (exists $intervals{$interval});
}

# subroutine to print description of performance counter
sub print_counter_info {
   my ($counter_id, $instance) = @_;
   my $counter = $all_counters->{$counter_id};

 
   my $string =  join (".", $counter->groupInfo->key, $counter->nameInfo->key, $counter->rollupType->val). "(". $counter->statsType->val . ")" ;
   if ($instance ne "") { $string .= " [" . $instance . "]"; }
   return $string;
}

# time function
# return time in API format
sub format_time {
   my ($arg) = @_;
   my ($sec,$min,$hour,$mday,$mon,$year,$wday,$yday,$isdst) = gmtime($arg);
   my $hrs = $hour + ($yday * 24);
   ($sec,$min,$hour,$mday,$mon,$year,$wday,$yday,$isdst) = localtime ($arg);
   my $tz = ($hour + ($yday * 24)) - $hrs;
   $year = $year + 1900;
   $mon = $mon + 1;
   my $string = sprintf("%.4d-%.2d-%.2dT%.2d:%.2d:%.2d%.2d:00", $year, $mon, $mday, $hour, $min, $sec, $tz);
   return $string;
}
