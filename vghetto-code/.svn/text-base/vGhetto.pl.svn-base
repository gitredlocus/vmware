#!/usr/bin/perl -w
# (C) COPYRIGHT AstroArch Consulting, Inc. 2008
# All Rights Reserved.
# Licensed Materials - Property of AstroArch Consulting, Inc.

eval 'exec /usr/bin/perl -w -S $0 ${1+"$@"}'
	if 0; # not running under some shell

$TTNAME="";
if ($OSNAME eq "") {
	$TTNAME=$^O;
} else {
	$TTNAME=$OSNAME;
}

use English;
use Text::ParseWords;

no utf8;
#use DBI;
#use Expect;
use Tk;
use Tk::DialogBox;
use Tk::LabEntry;
use Tk::NoteBook;
use Tk::Radiobutton;
use Tk::Checkbutton;
use Tk::Listbox;
use Tk::Tree;
use Time::ParseDate;
use Time::JulianDay;
use VMware::VIRuntime;
use VMware::VILib;
use Env qw(HOME USERPROFILE);

use vars qw/$main $msgbar $mfrm $db $STATUS_VAR $LOCA $WIDM $dbname $dbdir $Version/;
use vars qw/$TTNAME $TEXTOUT $host_views $vm_views $cuser $cpass $chost $vhost/;
use vars qw/$valass $difass $timeout $exp $nlb $graph $pfrm $datacenter/;
use subs qw/main menubar vmoperations toolbar mainframe msgbar login pref_cmd inventory query_cmd chkstart/;

#use SECPL::999sec;
use strict;
$Version = "0.5";
$STATUS_VAR = "Login First";
$LOCA="Login";
$TEXTOUT="";
$cuser="";

sub loadwbin {
	$STATUS_VAR="Loading Routines ...";
	$main->Busy;
	{
		v4do('wbin/vmoperations.pl');
		v4do('wbin/inv.pl');
		v4do('wbin/help.pl');
	}
	$main->Unbusy;
	$STATUS_VAR="";
}

sub msgbar {
	$msgbar = $main->Label(-textvariable => \$STATUS_VAR, -foreground => 'Red', -background => 'White')->pack(-side => 'bottom', -anchor => 's');
}

sub update_status {
	($STATUS_VAR)=@_;
	$main->update;
}

do 'wbin/exit.pl';
do 'wbin/main.pl';
do 'wbin/login.pl';
do 'wbin/menu.pl';
do 'wbin/toolbar.pl';
sleep (5);
main;
menubar;
toolbar;
mainframe;
msgbar;
login;
loadwbin;
chkstart;
inventory;
MainLoop();
