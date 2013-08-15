#!/usr/bin/perl -w
# Copyright (c) 2009-2011 William Lam All rights reserved.

# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions
# are met:
# 1. Redistributions of source code must retain the above copyright
#    notice, this list of conditions and the following disclaimer.
# 2. Redistributions in binary form must reproduce the above copyright
#    notice, this list of conditions and the following disclaimer in the
#    documentation and/or other materials provided with the distribution.
# 3. The name of the author or contributors may not be used to endorse or
#    promote products derived from this software without specific prior
#    written permission.
# 4. Consent from original author prior to redistribution

# THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS "AS IS" AND
# ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
# IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
# ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
# FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
# DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
# OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
# HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
# LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
# OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
# SUCH DAMAGE.

# William Lam
# http://www.virtuallyghetto.com/

use strict;
use warnings;
use VMware::VILib;
use VMware::VIRuntime;

my %opts = (
   user => {
      type => "=s",
      help => "Name of the user to alarm on",
      required => 1,
   },
   alarmname => {
      type => "=s",
      help => "Name of the alarm",
      required => 1,
   },
);

Opts::add_options(%opts);
Opts::parse();
Opts::validate();
Util::connect();

my $user = Opts::get_option('user');
my $alarmname = Opts::get_option('alarmname');

my $rootFolder = Vim::get_view(mo_ref => Vim::get_service_content()->rootFolder);
my $alarmMgr = Vim::get_view(mo_ref => Vim::get_service_content()->alarmManager);

eval {
        my $eventComparisons = EventAlarmExpressionComparison->new(attributeName => 'userName', operator => 'equals', value => $user);
        my $eventAlarm = EventAlarmExpression->new(objectType => 'HostSystem', eventType => 'UserLoginSessionEvent', status => ManagedEntityStatus->new('red'), comparisons => [$eventComparisons]);
        my $alarmSpec = AlarmSpec->new(name => $alarmname, enabled => 1, description => "Alarm to track " . $user . " login", expression => $eventAlarm);
        $alarmMgr->CreateAlarm(entity => $rootFolder, spec => $alarmSpec);
};
if($@) {
        print "Error: " . $@ . "\n";
}

Util::disconnect();
