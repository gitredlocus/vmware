#!/usr/bin/perl -w
# Copyright (c) 2009-2010 William Lam All rights reserved.

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
# 10-28-2009
# http://communities.vmware.com/docs/DOC-11054
# http://engr.ucsb.edu/~duonglt/vmware/
##########################################

use strict;
use warnings;
use VMware::VILib;
use VMware::VIRuntime;
use Term::ANSIColor;

my ($cluster_views,$vmname,$vm_view,$host_view,$hostname);

my %opts = (
	cluster => {
	type => "=s",
        help => "Name of the vCenter cluster",
	required => 0,
	},
);

# validate options, and connect to the server
Opts::add_options(%opts);

# validate options, and connect to the server
Opts::parse();
Opts::validate();
Util::connect();

my $cluster = Opts::get_option('cluster');

my ($cluster_view,$node,$config_state,$runtime_state);

if(defined($cluster)) {
	$cluster_view = Vim::find_entity_view(view_type => 'ClusterComputeResource', filter => { name => $cluster });
	unless ($cluster_view){
		Util::disconnect();
		die "No cluster found with name $cluster\n";	
	}
	&getHANodes($cluster_view);
} else {
	$cluster_view = Vim::find_entity_views(view_type => 'ClusterComputeResource');
	foreach(sort {$a->name cmp $b->name} @$cluster_view) {
		&getHANodes($_);
	}
}

Util::disconnect();

sub getHANodes {
	my ($cluster) = @_;

	print color("yellow") . "Cluster: " . $cluster->name . color("reset") . "\n"; 
	my $cluster_info = $cluster->RetrieveDasAdvancedRuntimeInfo();
	my $prim_hosts = $cluster_info->dasHostInfo->primaryHosts;
	print "\t" . color("green") . "HA Primary Nodes: " .  color("reset") . "\n";
	foreach(@$prim_hosts) {
		print "\t\t" . $_ . "\n";
	}

	print "\t" . color("green") . "HA Node States: " .  color("reset") . "\n";
	print "\t\tNode Name\t\tNode Config State\t\tNode Runtime State\n";
	print "\t\t------------------------------------------------------------------------------\n";	
	my $host_states = $cluster_info->dasHostInfo->hostDasState;
	foreach(@$host_states) {
		($node,$config_state,$runtime_state) = ($_->name,$_->configState,$_->runtimeState);
		print "\t\t" . $node . "\t\t" . $config_state . "\t\t\t" . $runtime_state . "\n";
	}
	print "\n";
}
