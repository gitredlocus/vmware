# (C) COPYRIGHT AstroArch Consulting, Inc. 2008
# All Rights Reserved.
# Licensed Materials - Property of AstroArch Consulting, Inc.

sub v4do {
	my ($file) = @_;
	print "Working on $file\n";
	if ($OSNAME eq "MSWin32") {
		# Replace forward slashes with backslashes
		$file =~ s/\//\\/g;
		eval `type $file`;
	} else {
		eval `cat $file`; 
	}
}

sub exit_cmd {
	$main->destroy;
	exit;
}

sub query_access {
	my ($scr) = @_;
	$LOCA=$scr;
	print $scr."\n";
	$TEXTOUT="";
	#update_status("");
	return 1;
	# add query here
	#my $qry=
	#update_status("Access Denied for $scr");
	#return 0;
}

sub set_LOCA {
	($LOCA)=@_;
}

sub chkstart {
	#if (defined $main) {$main->Busy;}
	
	#if (defined $main) {$main->Unbusy;}
}

1;
