# (C) COPYRIGHT AstroArch Consulting, Inc. 2008
# All Rights Reserved.
# Licensed Materials - Property of AstroArch Consulting, Inc.

sub main {
	my $title="vGhetto Client $Version";
	$main = MainWindow->new();
	$main->configure(-title => $title, -background => 'white');
	$main->geometry('+200+200');
	$main->minsize(qw(600 356));
	#$main->maxsize(qw(800 356));
	#$main->resizable(qw(0 0));
}

sub mainframe {
	$mfrm = $main->Frame(-borderwidth => 3, -height => 300, -width => 600, -relief => 'groove', -background => 'white')->pack(-side => 'top', -fill => 'both', -expand => 1);
}

1;
