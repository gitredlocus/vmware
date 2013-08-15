# (C) COPYRIGHT AstroArch Consulting, Inc. 2008
# All Rights Reserved.
# Licensed Materials - Property of AstroArch Consulting, Inc.

# not using this now as it adds more dependencies, might use it later on
#use Tk::Toolbar;

my ($topframe,$vmoff,$vmon,$vmrest,$vmcons,$vmsusp,$vm_toolbar_forget);

sub vm_toolbar_poweredoff {
	vm_toolbar(0);
}

sub vm_toolbar_poweredon {
	vm_toolbar(1);
}

# Eventually this needs to handle all 'icons'/raise or lower/visible
sub toolbar_disabled {
	if (!$vm_toolbar_forget) {
		$vmoff->packForget;
		$vmon->packForget;
		$vmsusp->packForget;
		$vmrest->packForget;
		$vmcons->packForget;
		$vm_toolbar_forget=1;
	}
}

sub toolbar {
	### NOTE: This should start with Non VM ICONS, most likely a 'BLANK'
	#         icon until all is implemented! I.e There but not SHOWN
	#	  using  MapWindow?
	# The frame that makes room for the toolbar
	$topframe = $main->Frame( -height =>25, 
	                    -background=>'white',
	                    )->pack(-side => "top", -anchor => "nw",
	                   -fill=>'x', -expand=>0);
	$topframe->Photo('vmconsolegif', -file => "bitmaps/vm-console.gif");
	$topframe->Photo('vmpoweroffgif', -file => "bitmaps/vm-poweroff.gif");
	$topframe->Photo('vmpowerongif', -file => "bitmaps/vm-poweron.gif");
	$topframe->Photo('vmresetgif', -file => "bitmaps/vm-reset.gif");
	$topframe->Photo('vmsuspendgif', -file => "bitmaps/vm-suspend.gif");

        $vmoff=$topframe->Button(-image=>'vmpoweroffgif', -state => 'disabled', -command => [\&vm_poweroff ])->pack(-side => 'left', -anchor => 'n');
        $vmon=$topframe->Button(-image=>'vmpowerongif', -state => 'disabled',  -command => [\&vm_poweron ])->pack(-side => 'left', -anchor => 'n' );
        $vmrest=$topframe->Button(-image=>'vmresetgif', -state => 'disabled', -command => [\&vm_reset ])->pack(-side => 'left', -anchor => 'n' );
       	$vmsusp=$topframe->Button(-image=>'vmsuspendgif', -state => 'disabled',  -command => [\&vm_suspend ])->pack(-side => 'left', -anchor => 'n' );
        $vmcons=$topframe->Button(-image=>'vmconsolegif', -state => 'disabled', -command => [\&vm_console ])->pack(-side => 'left', -anchor => 'n' );

	# add a row of empty labels to push the button row to the left (ugly I know, please correct)
	#my $x=4;
	#for(1..27){
	#   $x++;
	#   $topframe->Label(-text=>sprintf '%3s', "    ")->grid(-column => $x, -row => 0, -sticky => 'w');
	#};
	$vm_toolbar_forget=0;
	toolbar_disabled;
}

sub vm_toolbar {
	my ($onoff) = @_;
	# The images
	if ($vm_toolbar_forget) {
		$vmoff->pack(-side => 'left', -anchor => 'n');
		$vmon->pack(-side => 'left', -anchor => 'n');
		$vmsusp->pack(-side => 'left', -anchor => 'n');
		$vmrest->pack(-side => 'left', -anchor => 'n');
		$vmcons->pack(-side => 'left', -anchor => 'n');
		$vm_toolbar_forget=0;
	}
	
	if ($onoff) {
		$vmoff->configure(-state => 'normal');
		$vmon->configure(-state => 'disabled');
		$vmsusp->configure(-state => 'normal');
		$vmrest->configure(-state => 'normal');
		$vmcons->configure(-state => 'normal');
	} else {
		$vmoff->configure(-state => 'disabled');
		$vmon->configure(-state => 'normal');
		$vmsusp->configure(-state => 'disabled');
		$vmrest->configure(-state => 'disabled');
		$vmcons->configure(-state => 'disabled');
	}
}


1;
