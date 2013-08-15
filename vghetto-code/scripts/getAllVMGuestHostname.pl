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

##################################################################
# Author: William Lam
# 08/08/2009
# http://communities.vmware.com/docs/DOC-10500
# http://engineering.ucsb.edu/~duonglt/vmware/
##################################################################
use strict;
use warnings;
use VMware::VIRuntime;
use VMware::VILib;

# validate options, and connect to the server
Opts::parse();
Opts::validate();
Util::connect();

my $vm_view = Vim::find_entity_views(view_type => 'VirtualMachine');

print "VM Display Name\t\tVM Guest Hostname\t\tVMware Tools Status\n";
print "------------------------------------------------------------------------\n";
foreach( sort {$a->summary->config->name cmp $b->summary->config->name}  @$vm_view) {
	my $vm_display_name = $_->summary->config->name;
	my $vm_hostname;
	my $tools_status;
	if(defined($_->guest)) {
		if(defined($_->guest->hostName)) {
			$vm_hostname = $_->guest->hostName;
		} else {
			$vm_hostname = "Not Available";
		}
	} else {
		$vm_hostname = "Not Available"
	}
	$tools_status = $_->guest->toolsStatus->val;
	print $vm_display_name . "\t\t" . $vm_hostname . "\t\t" . $tools_status . "\n";
}

Util::disconnect();
