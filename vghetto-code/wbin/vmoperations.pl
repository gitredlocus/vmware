# (C) COPYRIGHT AstroArch Consulting, Inc. 2008
# All Rights Reserved.
# Licensed Materials - Property of AstroArch Consulting, Inc.
#use Tk::Toolbar;

#
# Gets the currently selected VM view
#
sub selected_vm{
	my $hst=$vhost;
	my ($d,$h,$v)=split /\//,$hst;
	my $vm=get_vm_view($h,$v);
	# refresh the state of the vm
	$vm->update_view_data();

	return $vm;
}

#
# Power on the currently selected VM if not already running
#
sub vm_poweron{
	my $vm=selected_vm;

	if ($vm->runtime->powerState->val eq 'poweredOn') {
		print "Virtual machine " . $vm->name . " is already running.\nCannot start.\n";
		
	} else {
		print "Powering On VM " . $vm->name . "\n";
		$vm->PowerOnVM();
		print "Power on successfully completed\n";
	}
}

#
# Power off the currently selected VM if it is running
# This will ask the user for a confirmation!
#
sub vm_poweroff {
	my $vm=selected_vm;

	if ($vm->runtime->powerState->val eq 'poweredOn') {
		print "Virtual machine " . $vm->name . " is running.\n";
		my $response = $main->messageBox(-message=>"Do you really want to power off " . $vm->name. "?",-type=>'yesno',-icon=>'question');
		if( $response eq "Yes" ) {
			print "Powering off " . $vm->name . "\n";
			$vm->PowerOffVM();
			print "Poweroff successfully completed\n";
		} else {
			$main->messageBox(-type=>"ok", -message=>"I know you like this VM!");
		}
		
	} else {
		print "Virtual machine " . $vm->name . " is not running.\n";
	}
}

#
# Reset the currently selected VM if it is running
# This will ask the user for a confirmation!
#
sub vm_reset{
	my $vm=selected_vm;

	if ($vm->runtime->powerState->val eq 'poweredOn') {
		print "Virtual machine " . $vm->name . " is running.\n";
		my $response = $main->messageBox(-message=>"Do you really want to reset " . $vm->name. "?",-type=>'yesno',-icon=>'question');
		if( $response eq "Yes" ) {
			print "Resetting VM " . $_->name . "\n";
             		$vm->ResetVM();
			print "Reset successfully completed\n";
		} else {
			$main->messageBox(-type=>"ok", -message=>"I knew you where just teasing me!");
		}
	} else {
		print "Virtual machine " . $vm->name . " is not running.\n";
	}
}

#
# Suspend the currently selected VM if it is running
#
sub vm_suspend{
	my $vm=selected_vm;

	if ($vm->runtime->powerState->val eq 'poweredOn') {
		print "Suspending VM" . $vm->name . "\n";
		$vm->SuspendVM();
		print "Suspend successfully completed\n";
	} else {
		print "Virtual machine " . $vm->name . " is not running.\nCannot suspend.\n";
	}
}

sub vm_console {
	my ($my_vm_view) = selected_vm;
	
	# the code below should call our open_remote_console procedure instead of doing the same
	# thing once more 
	# ToDo
	my ($my_vmx) = $my_vm_view->config->files->vmPathName;
	my ($my_vmname) = $my_vm_view->name;
	print "Opening console for $my_vmname, $my_vmx\n";
	if ($OSNAME eq "MSWin32") {
		# the format of this is: vmware-vmrc.exe -h IP -u username -p password <VM>
		# for example: vmware-vmrc.exe -h 192.168.0.0.5:8333 -u admin -p pass "[standard] Windows/Windows.vmx"
		#print "console\\plugins\\vmware-vmrc.exe -h \"$chost\" -u \"$cuser\" -p \"$cpass\" \"$my_vmx\"";
		my $command = "console\\plugins\\vmware-vmrc.exe";
		my $args = "vmware-vmrc.exe -h \"$chost\" -u \"$cuser\" -p \"$cpass\" \"$my_vmx\"";
		my $process;
		Win32::Process::Create($process,$command,$args,0,DETACHED_PROCESS,'.');
	} else {
		system("console/plugins/vmware-vmrc -h \"$chost\" -u \"$cuser\" -p \"$cpass\" \"$my_vmx\"\&");
	}
}




1;
