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
# 01/15/09
# http://communities.vmware.com/docs/DOC-11775
# http://engineering.ucsb.edu/~duonglt/vmware
# http://communities.vmware.com/docs/DOC-9852

use strict;
use warnings;
use VMware::VILib;
use VMware::VIRuntime;

my %opts = (
   portgroup => {
      type => "=s",
      help => "Name of portgroup",
      required => 1,
   },
   operation => {
      type => "=s",
      help => "Operation to perform [enable|disasble]",
      required => 1,
   },
   portgroup_type => {
      type => "=s",
      help => "Type of portgroup [vmotion|ft|mgmt]",
      required => 1,
   },
);

Opts::add_options(%opts);
Opts::parse();
Opts::validate();
Util::connect();

my $portgroup = Opts::get_option('portgroup');
my $operation = Opts::get_option('operation');
my $portgroup_type = Opts::get_option('portgroup_type');


my ($host_view,$host_version,$networkSys,$virtualNicMgr);
$host_view = Vim::find_entity_view(view_type => 'HostSystem'); 
$host_version = $host_view->config->product->version;
$networkSys = Vim::get_view(mo_ref => $host_view->configManager->networkSystem);

if($host_version gt '3.5.0') {
	$virtualNicMgr = Vim::get_view(mo_ref => $host_view->configManager->virtualNicManager);
} else {
	$virtualNicMgr = Vim::get_view(mo_ref => $host_view->configManager->vmotionSystem);
}

if($operation eq 'enable') {
	&portgroupOperation(1,$networkSys,$portgroup,$virtualNicMgr,$portgroup_type,$host_version);
} elsif($operation eq 'disable') {
	&portgroupOperation(0,$networkSys,$portgroup,$virtualNicMgr,$portgroup_type,$host_version);
} else {
	print "Invalid operation!\n";
        print "Operations supported [enable|disable]\n\n";
}

Util::disconnect();

sub portgroupOperation {
	my ($enable, $ns, $pg, $vs, $type, $ver) = @_;
	my $vnic = find_vnic($ns, $pg);
	my $nicType;

	eval {
		if($vnic) {
			if($type eq 'vmotion') {
				$nicType = "vmotion";		
			}elsif($type eq 'ft') {
				$nicType = "faultToleranceLogging";
			}elsif($type eq 'mgmt') {
				$nicType = "management";
			}else {
				print "Portgroup type: \"$type\" is not a valid selection!\n";
				return;
			}

			#4.0
			if ($vs->isa('HostVirtualNicManager')) {
				if($enable && $ver gt '3.5.0') {
					print "Enabling \"$nicType\" on portgroup: \"$pg\" ...\n\n";
                                        $vs->SelectVnicForNicType(nicType => $nicType, device => $vnic->device);
				} else {
					print "Disabling \"$nicType\" on portgroup: \"$pg\" ...\n\n";
					$vs->DeselectVnicForNicType(nicType => $nicType, device => $vnic->device);
				}
			} else {
				if($enable) {
					print "Enabling \"$nicType\" on portgroup: \"$pg\" ...\n\n";
					$vs->SelectVnic(device => $vnic->device);
                                } else {
					print "Disabling \"$nicType\" on portgroup: \"$pg\" ...\n\n";
					$vs->DeselectVnic();
                                }
			}
		} else {
			print "Failed to locate valid vnic and/or portgroup: \"$pg\" to perform operation!\n\n";
		}
	};
	if ($@) {
		print "Failed to " . ($enable ? "enable" : "disable") . " " . $nicType . " on portgroup \"$pg\": " . $@ . "\n\n";
	}
}

sub find_vnic {
   my ($ns, $pg, $dvsName, $dvportId) = @_;
   if (defined($ns->networkInfo)) {
      my $vnics = $ns->networkInfo->vnic;
      my $vnic;

      if (defined($pg)) {
         foreach $vnic (@$vnics) {
            if ($vnic->portgroup && $pg eq $vnic->portgroup) {
               return $vnic;
            }
         }
      } elsif (defined($dvsName)) {
         my $sUuid = getSwitchUuid($ns, $dvsName);
         foreach $vnic (@$vnics) {
            if ($vnic->spec->distributedVirtualPort && ($dvportId eq $vnic->spec->distributedVirtualPort->portKey) && ($sUuid eq $vnic->spec->distributedVirtualPort->switchUuid)) {
               return $vnic;
            }
         }
      }
   }
   return undef;
}

sub getStatus {
        my ($taskRef,$message) = @_;

        my $task_view = Vim::get_view(mo_ref => $taskRef);
        my $taskinfo = $task_view->info->state->val;
        my $continue = 1;
        while ($continue) {
                my $info = $task_view->info;
                if ($info->state->val eq 'success') {
                        print $message,"\n";
                        return $info->result;
                        $continue = 0;
                } elsif ($info->state->val eq 'error') {
                        my $soap_fault = SoapFault->new;
                        $soap_fault->name($info->error->fault);
                        $soap_fault->detail($info->error->fault);
                        $soap_fault->fault_string($info->error->localizedMessage);
                        die "$soap_fault\n";
                }
                sleep 5;
                $task_view->ViewBase::update_view_data();
        }
}
