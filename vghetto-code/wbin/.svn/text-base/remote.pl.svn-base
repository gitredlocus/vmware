# (C) COPYRIGHT AstroArch Consulting, Inc. 2008, 2009
# All Rights Reserved.
# Licensed Materials - Property of AstroArch Consulting, Inc.
use Tk::Pane;
use Tk::ItemStyle;
use Socket;

# include the windows modules using some wizardry as otherwise the crossplatform compatibility breaks
BEGIN
{
  if ($OSNAME eq "MSWin32") {
    require Win32::Process;
    import Win32::Process;
  }
}

sub open_remote_console {
	my ($my_vm_view) = @_;
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
