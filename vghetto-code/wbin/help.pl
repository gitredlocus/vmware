# (C) COPYRIGHT AstroArch Consulting, Inc. 2008
# All Rights Reserved.
# Licensed Materials - Property of AstroArch Consulting, Inc.

sub about_cmd {
	my $dbox = $main->DialogBox ( -title => 'About vGhetto GUI', -default_button => 'Cancel', -buttons => ['Cancel']);
	$dbox->Label(-text => 'vGhetto GUI')->pack(-side => "top");
	$dbox->Label(-text => 'Version '.$Version)->pack(-side => "top");
	$dbox->Show;
	$dbox->destroy;
}

sub manual_cmd {
	my $dbox = $main->DialogBox ( -title => 'vGhetto Help', -default_button => 'Cancel', -buttons => ['Cancel']);
	my $f=$dbox->Scrolled("ROText", -scrollbars => 'osow', -foreground=>'black', -background => 'white')->pack(-side => "top");
	# Read db for help.... using $LOCA as row
	# Index is in index row.
	my $help="HELP GOES HERE";
	$f->insert('end',$help);
	$f->focus;
	$dbox->Show;
	$dbox->destroy;
}

1;
