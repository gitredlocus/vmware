# (C) COPYRIGHT AstroArch Consulting, Inc. 2008
# All Rights Reserved.
# Licensed Materials - Property of AstroArch Consulting, Inc.

my ($sessid);

sub relogin {
	if (query_access("relogin")) {
		
		#Vim::load_session(service_url => "https://$hostname/sdk/webService", session_id => $sessid);
		
		#Vim::logout();
		#eval {
        #	my $rc = Vim::login(service_url => "https://$chost/sdk/webService",
        #          user_name => "$cuser", password => "$cpass");
		#};
		#if ($@) {
		#	$STATUS_VAR="Re-Login Failed.";
		#}
	}
}

sub s_login {
	my ($username,$password,$hostname) = @_;
	eval {
        	my $rc = Vim::login(service_url => "https://$hostname/sdk/webService",
                  user_name => "$username", password => "$password");
	};
	if ($@) {
		update_status("Login Failed, Try Again!");
	} else {
		$success=1;
		$cuser = $username;
		$cpass = $password;
		$chost = $hostname;
        	update_status("Login Successful");
        	$sessid = Vim::get_session_id();
	}
}

sub login {
	my $username="root";
	my $password="";
	my $hostname="";
	my $success = 0;
	while ( $success == 0 ) {
		my $dbox = $main->DialogBox ( -title => 'Login', -default_button => 'Login', -buttons => ['Login', 'Cancel']);
		$f=$dbox->LabEntry(-label => 'Hostname: ', -labelPack => [-side => "left", -anchor => "w"], -width => 20, -textvariable => \$hostname)->pack(-side => "top", -anchor => "w");
		$dbox->LabEntry(-label => 'Username: ', -labelPack => [-side => "left", -anchor => "w"], -width => 20, -textvariable => \$username)->pack(-side => "top", -anchor => "nw");
		$dbox->LabEntry(-label => 'Password: ', -labelPack => [-side => "left", -anchor => "w"], -width => 20, -textvariable => \$password, -show => '*')->pack(-side => "top", -anchor => "w");
		$f->focus;
		my $result = $dbox->Show;
		if ($result eq "Cancel") {
			$dbox->destroy;
			exit_cmd;
		} else {
			eval {
        		my $rc = Vim::login(service_url => "https://$hostname/sdk/webService",
                   user_name => "$username", password => "$password");
			};
			if ($@) {
				$STATUS_VAR="Login Failed, Try Again!";
			} else {
				$success=1;
				$cuser = $username;
				$cpass = $password;
				$chost = $hostname;
        		$STATUS_VAR="Login Successful";
        		$sessid = Vim::get_session_id();
			}
			$dbox->destroy;
		}
	}
}

1;
