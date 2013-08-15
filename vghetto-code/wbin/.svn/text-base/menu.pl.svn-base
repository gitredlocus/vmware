# (C) COPYRIGHT AstroArch Consulting, Inc. 2008
# All Rights Reserved.
# Licensed Materials - Property of AstroArch Consulting, Inc.

sub menubar {
	# The Menubar
	my $menubar = $main->toplevel->Menu(-type => 'menubar');
	$main->toplevel->configure(-menu => $menubar);

	# File Menu
	my $file_mb = $menubar->cascade(qw/-label File -menuitems/ =>
	[
		#[command => 'New', -command => [\&new_cmd]],
		#[command => 'Export', -command => [\&export_cmd]],
		#[command => 'Report', -command => [\&report_cmd]],
		#[command => 'Virtual Appliance', -command => [\&va_cmd]],
		#[command => 'Print Maps', -command => [\&pmaps_cmd]],
		[command => 'Exit', -command => [\&exit_cmd]]
	]); #->pack(-side => 'left');

	# Edit Menu - Prefs with 'Notebook DialogBox'
	my $edit_mb = $menubar->cascade(qw/-label Edit -menuitems/ =>
	[
	#	[command => 'Remove', -command => [\&remove_cmd]],
	#	[command => 'Customization Specifications ...', -command => [\&customize_cmd]],
	#	[command => 'Client Settings ...', -command => [\&clientset_cmd]],
	]); #->pack(-side => 'left');

	# View Menu
	my $view_mb = $menubar->cascade(qw/-label View -menuitems/ =>
	[
	#	[command => 'Main Toolbar', -command => [\&vmtoolbar_cmd]],
	#	[command => 'Toolbar', -command => [\&vtoolbar_cmd]],
	#	[command => 'Status Bar', -command => [\&vstatbar_cmd]],
	#	[command => 'Inventory', -command => [\&vinventory_cmd]],
	#	[command => 'Administration', -command => [\&vadmin_cmd]],
	]); #->pack(-side => 'left');

	# Inventory
	#my $inv_mb = $menubar->cascade(qw/-label Inventory -menuitems/ =>
	#[
	#	[command => 'Virtual Machines', -command => [\&vm_cmd]],
	#	[command => 'Host', -command => [\&host_cmd]],
	#	[command => 'Resource Pool', -command => [\&rp_cmd]],
	#	[command => 'Permission', -command => [\&perm_cmd]]
	#]); #->pack(-side => 'left');

	# Administration
	#my $admin_mb = $menubar->cascade(qw/-label Administration -menuitems/ =>
	#[
	#	[command => 'Role', -command => [\&role_cmd]],
	#]); #->pack(-side => 'left');
	
	# Plugins
	#my $plugin_mb = $menubar->cascade(qw/-label Plugins -menuitems/ =>
	#[
	#	[command => 'Manage Plugins ...', -command => [\&mplug_cmd]],
	#]); #->pack(-side => 'left');

	# Help menu
	my $help_mb = $menubar->cascade(qw/-label Help -menuitems/ =>
	[
		[command => 'Manual', -command => [\&manual_cmd]],
		#[command => 'Tutorial', -command => [\&tutorial_cmd]],
		#[command => 'VMware on the Web', -command => [\&vmware_cmd]],
		#[command => 'Check for Updates on the Web', -command => [\&updates_cmd]],
		[command => 'About vGhetto', -command => [\&about_cmd]]
	]); #->pack(-side => 'right');
}

1;
