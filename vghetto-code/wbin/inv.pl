# (C) COPYRIGHT AstroArch Consulting, Inc. 2008, 2009
# All Rights Reserved.
# Licensed Materials - Property of AstroArch Consulting, Inc.
use Tk::Pane;
use Tk::ItemStyle;
use Socket;

use constant STORAGE_MULTIPLIER => 1073741824;  # 1024*1024*1024 (to convert to GB)

#TODO:
# This code assumes Hosts would always have different names within multiple DCs.
# Handle Window Resize properly for Notebook.
# How to graph full DataCenter for changes?
my ($ilb,$dlb,$znba,$servicecontext,$vms,$znbh,$vst);
my %inv;
my %dcs;

sub inv_is_dc {
	my ($hst)=@_;
	my @parts=split /\//,$hst;
	my $count=@parts;
	#print "IDC: $count $hst\n";
	if ($count == 1) {
		return 1;
	}
	return 0;
}

sub inv_is_vm {
	my ($hst)=@_;
	#print "$hst\n";
	my @parts=split /\//,$hst;
	my $count=@parts;
	#print "IVM: $count\n";
	if ($count > 2) {
		return 1;
	}
	toolbar_disabled;
	return 0;
}

sub get_host_view {
	my ($hst)=@_;
	#print "$hst\n";
	return $inv{$hst}{'-'};
}

sub get_vm_view {
	my ($hst,$vm)=@_;
	return $inv{$hst}{$vm};
}

sub get_entities {
   my %args = @_;
   my $view_type = $args{view_type};
   my $obj = $args{obj};

   $servicecontext = Vim::get_service_content();
   
   my $service = Vim::get_vim_service();

   my $property_spec = PropertySpec->new(all => 0,
                                         type => $view_type->get_backing_type());
   my $property_filter_spec = $view_type->get_search_filter_spec($obj,[$property_spec]);
   my $obj_contents = $service->RetrieveProperties(_this => $servicecontext->propertyCollector,
                                                   specSet => $property_filter_spec);
   my $result = Util::check_fault($obj_contents);
   return $result;
}

sub inv_host_view {
	my ($ep)=@_;
	if (query_access("inv_host_view")) {
		my $hst=$znbh->info('data',$ep);
		inv_browse($hst);
	}
}

sub inv_vms {
	# Should be sorted
	my $hst=$vhost;
	if (query_access("inv_vms")) {
		update_status("");
		relogin;
		my $idc=inv_is_dc($hst);
		my %vms; my %vhst;
		my $dcobj;
		if ($idc) {
			$dcobj=$dcs{$hst}{'-'};
			foreach $hosts (keys %{ $dcs{$hst} }) {
				print $hosts."\n";
				if ($hosts ne '-') {
					foreach $ivms (keys %{ $inv{$hosts} }) {
						if ($ivms ne '-') {
							#print "$ivms\n";
							$vms{$ivms}=$inv{$hosts}{$ivms};
							$vhst{$ivms}=$hosts;
						}
					}
				}
			}
		} else {
			$dcobj=$dcs{$datacenter}{'-'};
			$hosts=basename($hst);
			foreach $ivms (keys %{ $inv{$hosts} }) {
				if ($ivms ne '-') {
					$vms{$ivms}=$inv{$hosts}{$ivms};
					$vhst{$ivms}=$hosts;
				}
			}
		}
		$dcobj->update_view_data();
		my @nvms=keys %vms;
		my @svms = sort { lc($a) cmp lc($b) } @nvms;
#		update_status("Loading VMs");
#		$main->Busy;
		# Get General host information via VIM
		my $znb=$nlb->page_widget("VMs");
		if (defined($znbh)) { $znbh->destroy; undef $znbh; }
		$znbh=$znb->Scrolled("HList", -scrollbars => 'osoe', -header => 1, -columns => 8, -itemtype=>'text', -background => 'white', -foreground => 'black',-command =>\&inv_host_view, -height => 14)->place(-x => 0, -y => 0, -height => 250, -width => 600)->pack(-fill => 'both', -expand => 1, -anchor => 'nw');
		$znbh->header('create',0,-text => "Name");
		$znbh->header('create',1,-text => "State");
		$znbh->header('create',2,-text => "Status");
		$znbh->header('create',3,-text => "Host");
		$znbh->header('create',4,-text => "Host CPU - MHz");
		$znbh->header('create',5,-text => "Host Mem - MB");
		$znbh->header('create',6,-text => "Guest Mem - %");
		$znbh->header('create',7,-text => "Notes");
		foreach $vm (@svms) {	
			my $vobj=$vms{$vm};
			$vobj->update_view_data();
			my $e=$dcobj->name."/".$vhst{$vm}."/".$vobj->name;
			my $nm=$znbh->addchild("",-data => $e);
			my $color=$vobj->summary->overallStatus->val;
			$mstyle = $znbh->ItemStyle( 'text', -foreground => 'black', -background => 'white' );
			$style = $znbh->ItemStyle( 'text', -foreground => $color, -background => 'white' );
			$znbh->itemCreate($nm,0,-text => substr($vobj->name,0,20), -style => $mstyle);
			$ps=$vobj->summary->runtime->powerState->val;
			$ps=~s/powered/Powered /;
			$znbh->itemCreate($nm,1,-text => $ps, -style => $mstyle);
			$znbh->itemCreate($nm,2,-text => ucfirst($color), -style => $style);
			$znbh->itemCreate($nm,3,-text => substr($vhst{$vm},0,10), -style => $mstyle);
			$znbh->itemCreate($nm,4,-text => $vobj->summary->quickStats->overallCpuUsage, -style => $mstyle);
			my $ma=sprintf "%.2f",$vobj->summary->quickStats->hostMemoryUsage/STORAGE_MULTIPLIER;
			$znbh->itemCreate($nm,5,-text => $ma." GB", -style => $mstyle);
			my $ha=sprintf "%.2f",$vobj->summary->quickStats->guestMemoryUsage/$vobj->summary->config->memorySizeMB*100.0;
			$znbh->itemCreate($nm,6,-text => $ha, -style => $mstyle);
			$znbh->itemCreate($nm,7,-text => substr($vobj->summary->config->annotation,0,20), -style => $mstyle);
		}
#		update_status("Finished Loading VMs");
#		$main->Unbusy;
	}
}

sub inv_hosts {
	my $hst=$vhost;
	if (query_access("inv_hosts")) {
		update_status("");
		relogin;
		#print "$hst\n";
		my $dcobj=$dcs{$hst}{'-'};
		$dcobj->update_view_data();
		# Get General host information via VIM
		my $znb=$nlb->page_widget("Hosts");
		if (defined($znbh)) { $znbh->destroy; undef $znbh; }
		$znbh=$znb->Scrolled("HList", -scrollbars => 'osoe', -header => 1, -columns => 9, -itemtype=>'text', -background => 'white', -foreground => 'black',-command =>\&inv_host_view, -height => 14)->place(-x => 0, -y => 0, -height => 250, -width => 600)->pack(-fill => 'both', -expand => 1, -anchor => 'nw');
		$znbh->header('create',0,-text => "Name");
		$znbh->header('create',1,-text => "State");
		$znbh->header('create',2,-text => "Status");
		$znbh->header('create',3,-text => "% CPU");
		$znbh->header('create',4,-text => "% Memory");
		$znbh->header('create',5,-text => "Memory Size - GB");
		$znbh->header('create',6,-text => "CPU Count");
		$znbh->header('create',7,-text => "NIC Count");
		$znbh->header('create',8,-text => "Uptime");
		foreach $hosts (keys %inv) {
			my $hobj=$inv{$hosts}{"-"};
			$hobj->update_view_data();
			my $e=$dcobj->name."/".$hobj->name;
			my $nm=$znbh->addchild("", -data => $e);
			my $color=$hobj->summary->overallStatus->val;
			$mstyle = $znbh->ItemStyle( 'text', -foreground => 'black', -background => 'white' );
			$style = $znbh->ItemStyle( 'text', -foreground => $color, -background => 'white' );
			$znbh->itemCreate($nm,0,-text => substr($hobj->name,0,20), -style => $mstyle);
			$znbh->itemCreate($nm,1,-text => ucfirst($hobj->summary->runtime->connectionState->val), -style => $mstyle);
			$znbh->itemCreate($nm,2,-text => ucfirst($hobj->summary->overallStatus->val), -style => $style);
			$znbh->itemCreate($nm,3,-text => $hobj->summary->quickStats->overallCpuUsage, -style => $mstyle);
			$znbh->itemCreate($nm,4,-text => $hobj->summary->quickStats->overallMemoryUsage, -style => $mstyle);
			my $ma=sprintf "%.2f",$hobj->summary->hardware->memorySize/STORAGE_MULTIPLIER;
			$znbh->itemCreate($nm,5,-text => $ma." GB", -style => $mstyle);
			$znbh->itemCreate($nm,6,-text => $hobj->summary->hardware->numCpuPkgs, -style => $mstyle);
			$znbh->itemCreate($nm,7,-text => $hobj->summary->hardware->numNics, -style => $mstyle);
			$znbh->itemCreate($nm,8,-text => $hobj->summary->runtime->bootTime, -style => $mstyle);
		}
	}
}

sub inv_assess {
	relogin;
	inv_get_inv();
	# Need progress bar!
}

sub inv_browse_general {
	my $hst=$vhost;
	if (query_access('browse_general')) {
		update_status("");
		relogin;
		# Set toolbar to off
		toolbar_disabled;
		# Get General host information via VIM
		my $ivm=inv_is_vm($hst);
		my $mhst=$hst;
		if ($ivm) {
			$mhst=dirname($hst);
		}
		#print "$hst $mhst\n";
		my $hobj=get_host_view(basename($mhst));
		$hobj->update_view_data();
		my $txt="";
		my $znb=$nlb->page_widget("Summary");
		if (defined($znba)) { $znba->destroy; undef $znba; }
		$znba=$znb->Scrolled("Frame", -scrollbars => 'osoe', -background => 'white', -borderwidth => 1, -relief => 'flat', -height => 250, -width => 600)->pack(-fill => 'both', -expand => 1, -anchor => 'w');
		if ($ivm == 0) {
			my $frm=$znba->Frame(-background => 'white', -borderwidth => 1, -height => 150, -width => 300, -relief => 'groove')->grid(-column => 0, -row => 0, -sticky => 'w');
			$frm->Label(-text => "General", -foreground => 'blue', -background => 'grey', -justify => 'right')->grid(-column => 0, -row => 0, -sticky => 'w');
			## Manufacturer
			###################

			$frm->Label(-text => "Manufacturer: ", -background => 'white', -foreground => 'black', -justify => 'left')->grid(-column => 0, -row => 1, -sticky => 'w');
			$frm->Label(-text => $hobj->summary->hardware->vendor, -background => 'white',-foreground => 'black', -justify => 'right')->grid(-column => 1, -row => 1, -sticky => 'w');

			## Model
			###################

			$frm->Label(-text => "Model: ",-background => 'white',-foreground => 'black', -justify => 'left')->grid(-column => 0, -row => 2, -sticky => 'w');
			$frm->Label(-text => $hobj->summary->hardware->model, -background => 'white',-foreground => 'black', -justify => 'right')->grid(-column => 1, -row => 2, -sticky => 'w');

			#CPU Cores:
			###################

			$frm->Label(-text => "CPU Cores: ",-background => 'white',-foreground => 'black', -justify => 'left')->grid(-column => 0, -row => 3, -sticky => 'w');
			$frm->Label(-text => $hobj->summary->hardware->numCpuPkgs." CPU x ".$hobj->summary->hardware->cpuMhz." Mhz", -background => 'white',-foreground => 'black', -justify => 'right')->grid(-column => 1, -row => 3, -sticky => 'w');

			## Processor Type			
			###################
			$frm->Label(-text => "Processor Type: ",-background => 'white',-foreground => 'black', -justify => 'left')->grid(-column => 0, -row => 4, -sticky => 'w');
			$frm->Label(-text => $hobj->summary->hardware->cpuModel, -background => 'white',-foreground => 'black', -justify => 'right')->grid(-column => 1, -row => 4, -sticky => 'w');

			## License
			###################
			$txt="Work In Progress";
			$frm->Label(-text => "License: ",-background => 'white',-foreground => 'black', -justify => 'left')->grid(-column => 0, -row => 5, -sticky => 'w');		
			$frm->Label(-text => $txt, -background => 'white',-foreground => 'black', -justify => 'right')->grid(-column => 1, -row => 5, -sticky => 'w');			

			## Processor Sockets
			###################
			$txt=$hobj->summary->hardware->numCpuPkgs;
			$frm->Label(-text => "Processor Sockets: ",-background => 'white',-foreground => 'black', -justify => 'left')->grid(-column => 0, -row => 6, -sticky => 'w');
			$frm->Label(-text => $txt, -background => 'white',-foreground => 'black', -justify => 'right')->grid(-column => 1, -row => 6, -sticky => 'w');

			## Cores per Socket
			###################
			$txt=($hobj->summary->hardware->numCpuCores/$hobj->summary->hardware->numCpuPkgs);
			$frm->Label(-text => "Cores per Socket:  ",-background => 'white',-foreground => 'black', -justify => 'left')->grid(-column => 0, -row => 7, -sticky => 'w');
                        $frm->Label(-text => $txt, -background => 'white',-foreground => 'black', -justify => 'right')->grid(-column => 1, -row => 7, -sticky => 'w');

			## Logical Processors	
			###################
			$txt=$hobj->summary->hardware->numCpuThreads;
			$frm->Label(-text => "Logical Processors: ",-background => 'white',-foreground => 'black', -justify => 'left')->grid(-column => 0, -row => 8, -sticky => 'w');
                        $frm->Label(-text => $txt, -background => 'white',-foreground => 'black', -justify => 'right')->grid(-column => 1, -row => 8, -sticky => 'w');

			## Hyperthreading
			###################
			$txt="N/A";
			if ($hobj->config->hyperThread) { $txt=($hobj->config->hyperThread->active) ? "Active" : "Inactive"; }
			$frm->Label(-text => "Hyperthreading: ",-background => 'white',-foreground => 'black', -justify => 'left')->grid(-column => 0, -row => 9, -sticky => 'w');
			$frm->Label(-text => $txt, -background => 'white',-foreground => 'black', -justify => 'right')->grid(-column => 1, -row => 9, -sticky => 'w');
			## Number of NICs
			###################
			$txt=$hobj->summary->hardware->numNics;
			$frm->Label(-text => "Number of NICs: ",-background => 'white',-foreground => 'black', -justify => 'left')->grid(-column => 0, -row => 10, -sticky => 'w');
			$frm->Label(-text => $txt, -background => 'white',-foreground => 'black', -justify => 'right')->grid(-column => 1, -row => 10, -sticky => 'w');
			$frm->Label(-text => " ", -background => 'white', -foreground => 'white', -justify => 'right')->grid(-column => 0, -columnspan => 2, -row => 7);
			
			## State
			###################
			$frm->Label(-text => "State: ", -background => 'white',-foreground => 'black', -justify => 'left')->grid(-column => 0, -row => 11, -sticky => 'w');
			my $ma="";
			if ($hobj->runtime->inMaintenanceMode) {$ma="(maintenance mode)";}
			$frm->Label(-text => ucfirst($hobj->summary->runtime->connectionState->val)." $ma", -background => 'white', -foreground => 'black')->grid(-column => 1, -row => 11, -sticky => 'w');


			## Virtual Machines and Templates
			#################################
			my $vms=$hobj->vm;
			$txt=@$vms;
			$frm->Label(-text => "Virtual Machines and Templates: ", -background => 'white',-foreground => 'black')->grid(-column => 0, -row => 12, -sticky => 'w');
			$frm->Label(-text => $txt, -background => 'white',-foreground => 'black')->grid(-column => 1, -row => 12, -sticky => 'w');

			## VMotion Enabled
			###################

			$frm->Label(-text => "VMotion Enabled: ", -background => 'white',-foreground => 'black', -justify => 'left')->grid(-column => 0, -row => 13, -sticky => 'w');
			if ($hobj->summary->config->vmotionEnabled) {
				$frm->Label(-text => "yes", -background => 'white', -foreground => 'black')->grid(-column => 1, -row => 13, -sticky => 'w');
			} else {
				$frm->Label(-text => "no", -background => 'white', -foreground => 'black')->grid(-column => 1, -row => 13, -sticky => 'w');
			}

			## VMware EVC Mode
			###################
			$txt="N/A";
			if($hobj->summary->currentEVCModeKey) { $txt=$hobj->summary->currentEVCModeKey; }
			$frm->Label(-text => "VMware EVC Mode: ", -background => 'white',-foreground => 'black', -justify => 'left')->grid(-column => 0, -row => 14, -sticky => 'w');
			$frm->Label(-text => $txt, -background => 'white',-foreground => 'black', -justify => 'right')->grid(-column => 1, -row => 14, -sticky => 'w');

			## FaultTolerance Enabled
			###################
			$txt=($hobj->summary->config->faultToleranceEnabled) ? "yes" : "no";
			$frm->Label(-text => "FaultTolerance Enabled: ", -background => 'white',-foreground => 'black', -justify => 'left')->grid(-column => 0, -row => 15, -sticky => 'w');
                        $frm->Label(-text => $txt, -background => 'white',-foreground => 'black', -justify => 'right')->grid(-column => 1, -row => 15, -sticky => 'w');


			####################
			## Commands	  ##
			####################
			my $bfrm=$znba->Frame(-background => 'white', -borderwidth => 1, -height => 50, -width => 300, -relief => 'groove')->grid(-column => 0, -row => 1, -sticky => 'w');
			$bfrm->Label(-text => "Commands", -foreground => 'blue', -background => 'grey', -justify => 'right')->grid(-column => 0, -row => 1, -sticky => 'w');

			## Host Profile
			###################		

			## Profile Compliance
			###################

			###################
			### RESOURCES #####
			###################
			my $cfrm=$znba->Frame(-background => 'white', -borderwidth => 1, -height => 50, -width => 300, -relief => 'groove')->grid(-column => 1, -row => 0, -sticky => 'ne');

			$cfrm->Label(-text => "Resources", -foreground => 'blue', -background => 'grey', -justify => 'right')->grid(-column => 0, -row => 0, -sticky => 'w');
			$cfrm->Label(-text => "CPU usage: ", -background => 'white',-foreground => 'black')->grid(-column => 0, -row => 1, -sticky => 'w');
			$cfrm->Label(-text => , $hobj->summary->quickStats->overallCpuUsage." MHz", -background => 'white',-foreground => 'black')->grid(-column => 1, -row => 1, -columnspan => 2, -sticky => 'w');
			$cfrm->Label(-text => "Memory usage: ", -background => 'white',-foreground => 'black')->grid(-column => 0, -row => 2, -sticky => 'w');
			$cfrm->Label(-text => , $hobj->summary->quickStats->overallMemoryUsage." MB", -background => 'white',-foreground => 'black')->grid(-column => 1, -row => 2, -columnspan => 2, -sticky => 'w');

			### DATASTORE ######
			####################

			$cfrm->Label(-text => "Datastore", -background => 'grey',-foreground => 'black', -justify => 'left')->grid(-column => 0, -row => 3, -sticky => 'w');
			$cfrm->Label(-text => "Capacity", -background => 'grey',-foreground => 'black', -justify => 'right')->grid(-column => 1, -row => 3, -sticky => 'e');
			$cfrm->Label(-text => "Free", -background => 'grey',-foreground => 'black', -justify => 'right')->grid(-column => 2, -row => 3, -sticky => 'e');
			$cfrm->Label(-text => "Type", -background => 'grey',-foreground => 'black', -justify => 'right')->grid(-column => 3, -row => 3, -sticky => 'w');
			$cfrm->Label(-text => "Last Update", -background => 'grey',-foreground => 'black', -justify => 'right')->grid(-column => 4, -row => 3, -sticky => 'w');			

			my @ds_array = ();
			if(defined $hobj->datastore) {
				@ds_array = (@ds_array, @{$hobj->datastore});
			}
			my $datastores = Vim::get_views(mo_ref_array => \@ds_array);
			$cfrm->Photo('datastoregif', -file => "bitmaps/datastore.gif");
			my $x=5;
			foreach(@$datastores) {
				$x++;
				$cfrm->Label(-image => , 'datastoregif', -background => 'white',-foreground => 'black', -justify =>'left')->grid(-column => 0, -row => $x, -sticky => 'w');
				$cfrm->Label(-text => , $_->summary->name, -background => 'white',-foreground => 'black', -justify =>'left')->grid(-column => 0, -padx => 20, -row => $x, -sticky => 'w');
				my $capacity=sprintf "%.2f",$_->summary->capacity/STORAGE_MULTIPLIER;
				$cfrm->Label(-text => , $capacity." GB", -background => 'white',-foreground => 'black')->grid(-column => 1, -row => $x, -sticky => 'e');
				my $freespace=sprintf "%.2f",$_->summary->freeSpace/STORAGE_MULTIPLIER;
				$cfrm->Label(-text => , $freespace." GB", -background => 'white',-foreground => 'black')->grid(-column => 2, -row => $x, -sticky => 'e');
				my $dstype = $_->summary->type;
				$cfrm->Label(-text => , $dstype, -background => 'white',-foreground => 'black')->grid(-column => 3, -row => $x, -sticky => 'w');
				my $lastupdate = ($_->info->timestamp) ? $_->info->timestamp : "N/A";
				$cfrm->Label(-text => , $lastupdate, -background => 'white',-foreground => 'black')->grid(-column => 4, -row => $x, -sticky => 'w');
			}
			$x++;

			### NETWORKS ######
			###################

			$cfrm->Label(-text => "Network", -background => 'grey',-foreground => 'black', -justify => 'left')->grid(-column => 0, -row => $x, -sticky => 'w');
			$cfrm->Label(-text => "Type", -background => 'grey',-foreground => 'black', -justify => 'right')->grid(-column => 0, -row => $x, -sticky => 'e', -columnspan=>2);
			$cfrm->Label(-text => "Number of VMs", -background => 'grey',-foreground => 'black', -justify => 'right')->grid(-column => 0, -row => $x, -sticky => 'e', -columnspan=>2);
			@ds_array=();
			if(defined $hobj->network) {
				@ds_array = (@ds_array, @{$hobj->network});
			}
			$cfrm->Photo('networkgif', -file => "bitmaps/network.gif");
			my $networks = Vim::get_views(mo_ref_array => \@ds_array);
			foreach(@$networks) {
				$x++;
				$cfrm->Label(-image => , 'networkgif', -background => 'white',-foreground => 'black', -justify =>'left')->grid(-column => 0, -row => $x, -sticky => 'w');
				$cfrm->Label(-text => , $_->summary->name, -background => 'white',-foreground => 'black', -justify =>'left')->grid(-column => 0, -row => $x, -padx => 20, -sticky => 'w');
			}

			###################
			## Active Tasks
			###################
			#TODO: $frm->Label(-text => "Active Tasks    : ".????, -foreground => 'black')->pack(-side => 'left', -anchor => 'w');
		} else {
			# VM Specific data
			my ($d,$h,$v)=split /\//,$hst;
			my $vobj=get_vm_view($h,$v);
			$vobj->update_view_data();
			my $frm=$znba->Frame(-background => 'white', -borderwidth => 1, -height => 150, -width => 300, -relief => 'groove')->grid(-column => 0, -row => 0, -sticky => 'w');
			$frm->Label(-text => "General", -foreground => 'blue', -background => 'grey', -justify => 'right')->grid(-column => 0, -row => 0, -sticky => 'w');
			$frm->Label(-text => "Guest OS: ", -background => 'white', -foreground => 'black', -justify => 'left')->grid(-column => 0, -row => 1, -sticky => 'w');
			$frm->Label(-text => substr($vobj->summary->config->guestFullName,0,25)."...", -background => 'white',-foreground => 'black', -justify => 'right')->grid(-column => 1, -row => 1, -sticky => 'w');
			$frm->Label(-text => "CPU: ",-background => 'white',-foreground => 'black', -justify => 'left')->grid(-column => 0, -row => 2, -sticky => 'w');
			$frm->Label(-text => $vobj->summary->config->numCpu." vCPU(s)", -background => 'white',-foreground => 'black', -justify => 'right')->grid(-column => 1, -row => 2, -sticky => 'w');
			$frm->Label(-text => "Memory: ",-background => 'white',-foreground => 'black', -justify => 'left')->grid(-column => 0, -row => 3, -sticky => 'w');
			$frm->Label(-text => $vobj->summary->config->memorySizeMB." MB", -background => 'white',-foreground => 'black', -justify => 'right')->grid(-column => 1, -row => 3, -sticky => 'w');
			$frm->Label(-text => "Memory Overhead: ",-background => 'white',-foreground => 'black', -justify => 'left')->grid(-column => 0, -row => 4, -sticky => 'w');
			$frm->Label(-text => $vobj->summary->config->memoryReservation, -background => 'white',-foreground => 'black', -justify => 'right')->grid(-column => 1, -row => 4, -sticky => 'w');
			$frm->Label(-text => " ", -background => 'white', -foreground => 'white', -justify => 'right')->grid(-column => 0, -columnspan => 2, -row => 5);
			$frm->Label(-text => "VMware Tools: ",-background => 'white',-foreground => 'black', -justify => 'left')->grid(-column => 0, -row => 6, -sticky => 'w');
			$ps=$vobj->summary->guest->toolsStatus->val;
			$ps=~s/tools//;
			$ps=~s/[Nn]ot/Not /;
			$ps=~s/Ok/OK/;
			$frm->Label(-text => $ps, -background => 'white',-foreground => 'black', -justify => 'right')->grid(-column => 1, -row => 6, -sticky => 'w');
			$frm->Label(-text => "IP Addresses: ",-background => 'white',-foreground => 'black', -justify => 'left')->grid(-column => 0, -row => 7, -sticky => 'w');
			$frm->Label(-text => $vobj->summary->guest->ipAddress, -background => 'white',-foreground => 'black', -justify => 'right')->grid(-column => 1, -row => 7, -sticky => 'w');
			$frm->Label(-text => "DNS Name: ", -background => 'white',-foreground => 'black', -justify => 'left')->grid(-column => 0, -row => 8, -sticky => 'w');
			my $name="";
			if (defined($vobj->summary->guest->ipAddress)) {
				my $iaddr=inet_aton($vobj->summary->guest->ipAddress);
				$name = gethostbyaddr($iaddr,AF_INET);
			}
			$frm->Label(-text => $name, -background => 'white', -foreground => 'black')->grid(-column => 1, -row => 8, -sticky => 'w');
			$frm->Label(-text => " ", -background => 'white', -foreground => 'white', -justify => 'right')->grid(-column => 0, -columnspan => 2, -row => 9);
			$frm->Label(-text => "State: ",-background => 'white',-foreground => 'black', -justify => 'left')->grid(-column => 0, -row => 10, -sticky => 'w');
			$ps=$vobj->summary->runtime->powerState->val;
			$ps=~s/powered/Powered /;
			$frm->Label(-text => $ps, -background => 'white',-foreground => 'black', -justify => 'right')->grid(-column => 1, -row => 10, -sticky => 'w');
			$frm->Label(-text => "Host: ",-background => 'white',-foreground => 'black', -justify => 'left')->grid(-column => 0, -row => 11, -sticky => 'w');
			$frm->Label(-text => $hobj->name, -background => 'white',-foreground => 'black', -justify => 'right')->grid(-column => 1, -row => 11, -sticky => 'w');
			#TODO: $frm->Label(-text => "Active Tasks    : ".????, -foreground => 'black')->pack(-side => 'left', -anchor => 'w');
			my $bfrm=$znba->Frame(-background => 'white', -borderwidth => 1, -height => 50, -width => 300, -relief => 'groove')->grid(-column => 0, -row => 1, -sticky => 'w');
			$bfrm->Label(-text => "Commands", -foreground => 'blue', -background => 'grey', -justify => 'right')->grid(-column => 0, -row => 0, -sticky => 'w');
			if ($ps eq "Powered Off") {
				$bfrm->Button(-text => "Power On", -command => \&vm_poweron, -borderwidth => 0, -relief => 'flat', -background => 'white', -foreground => 'blue', -justify => 'left')->grid(-column => 0, -row => 1, -sticky => 'w');
				# Update Toolbar
				vm_toolbar_poweredoff();
			} else {
				$bfrm->Button(-text => "Shut Down Guest", -command => \&vm_poweroff, -borderwidth => 0, -relief => 'flat', -background => 'white', -foreground => 'blue', -justify => 'left')->grid(-column => 0, -row => 1, -sticky => 'w');
				$bfrm->Button(-text => "Suspend", -command => \&vm_suspend, -borderwidth => 0, -relief => 'flat', -background => 'white', -foreground => 'blue', -justify => 'left')->grid(-column => 0, -row => 2, -sticky => 'w');
				$bfrm->Button(-text => "Restart Guest", -command => \&vm_reset, -borderwidth => 0, -relief => 'flat', -background => 'white', -foreground => 'blue', -justify => 'left')->grid(-column => 0, -row => 3, -sticky => 'w');
				$bfrm->Button(-text => "Open Console", -command => \&vm_console, -borderwidth => 0, -relief => 'flat', -background => 'white', -foreground => 'blue', -justify => 'left')->grid(-column => 0, -row => 4, -sticky => 'w');
				# Update Toolbar
				vm_toolbar_poweredon();
			}
			my $cfrm=$znba->Frame(-background => 'white', -borderwidth => 1, -height => 50, -width => 300, -relief => 'groove')->grid(-column => 1, -row => 0, -rowspan => 2, -sticky => 'ne');
			$cfrm->Label(-text => "Resources", -foreground => 'blue', -background => 'grey', -justify => 'right')->grid(-column => 0, -row => 0, -sticky => 'w');

			my $CpuUsage=0;
			my $hostMemoryUsage=0;
			my $guestMemoryUsage=0;
			if ($vobj->summary->runtime->powerState->val eq 'poweredOn') {
				# This info is only available for a running machine
				$CpuUsage=$vobj->summary->quickStats->overallCpuUsage;
				$hostMemoryUsage=$vobj->summary->quickStats->hostMemoryUsage;
				$guestMemoryUsage=$vobj->summary->quickStats->guestMemoryUsage;
			}
			$cfrm->Label(-text => "CPU usage: ", -background => 'white',-foreground => 'black')->grid(-column => 0, -row => 1, -sticky => 'w');
			$cfrm->Label(-text => , $CpuUsage." MHz", -background => 'white',-foreground => 'black')->grid(-column => 1, -row => 1, -columnspan => 2, -sticky => 'w');
			$cfrm->Label(-text => "Host Memory usage: ", -background => 'white',-foreground => 'black')->grid(-column => 0, -row => 2, -sticky => 'w');
			$cfrm->Label(-text => , $hostMemoryUsage." MB", -background => 'white',-foreground => 'black')->grid(-column => 1, -row => 2, -columnspan => 2, -sticky => 'w');
			$cfrm->Label(-text => "Guest Memory usage: ", -background => 'white',-foreground => 'black')->grid(-column => 0, -row => 3, -sticky => 'w');
			$cfrm->Label(-text => , $guestMemoryUsage." MB", -background => 'white',-foreground => 'black')->grid(-column => 1, -row => 3, -columnspan => 2, -sticky => 'w');
			$cfrm->Label(-text => "Snapshot Present: ", -background => 'white',-foreground => 'black')->grid(-column => 0, -row => 4, -sticky => 'w');
			my $sna="No"; my $color='Black';
			if (defined($vobj->layout->snapshot)) { 
				my $snaps=@$vobj->layout->snapshot;
				if ($snaps>0) {$sna="Yes"; $color="red";}
			}
			$cfrm->Label(-text => $sna, -background => 'white',-foreground => $color)->grid(-column => 1, -row => 4, -columnspan => 2, -sticky => 'w');
			$cfrm->Label(-text => "Datastore", -background => 'grey',-foreground => 'black', -justify => 'left')->grid(-column => 0, -row => 5, -sticky => 'w');
			$cfrm->Label(-text => "Capacity", -background => 'grey',-foreground => 'black', -justify => 'right')->grid(-column => 1, -row => 5, -sticky => 'e');
			$cfrm->Label(-text => "Free", -background => 'grey',-foreground => 'black', -justify => 'right')->grid(-column => 2, -row => 5, -sticky => 'e');
			my @ds_array = ();
			if(defined $vobj->datastore) {
				@ds_array = (@ds_array, @{$vobj->datastore});
			}
			my $datastores = Vim::get_views(mo_ref_array => \@ds_array);
			$cfrm->Photo('datastoregif', -file => "bitmaps/datastore.gif");
			my $x=5;
			foreach(@$datastores) {
				$x++;
				$cfrm->Label(-image => , 'datastoregif', -background => 'white',-foreground => 'black', -justify =>'left')->grid(-column => 0, -row => $x, -sticky => 'w');
				$cfrm->Label(-text => , $_->summary->name, -background => 'white',-foreground => 'black', -justify =>'left')->grid(-column => 0, -padx => 20, -row => $x, -sticky => 'w');
				my $capacity=sprintf "%.2f",$_->summary->capacity/STORAGE_MULTIPLIER;
				$cfrm->Label(-text => , $capacity." GB", -background => 'white',-foreground => 'black')->grid(-column => 1, -row => $x, -sticky => 'e');
				my $freespace=sprintf "%.2f",$_->summary->freeSpace/STORAGE_MULTIPLIER;
				$cfrm->Label(-text => , $freespace." GB", -background => 'white',-foreground => 'black')->grid(-column => 2, -row => $x, -sticky => 'e');
			}
			$x++;
			$cfrm->Label(-text => "Network", -background => 'grey',-foreground => 'black', -justify => 'left')->grid(-column => 0, -row => $x, -sticky => 'w');
			$cfrm->Label(-text => " ", -background => 'grey',-foreground => 'black', -justify => 'right')->grid(-column => 0, -row => $x, -sticky => 'e', -columnspan=>2);
			@ds_array=();
			if(defined $vobj->network) {
				@ds_array = (@ds_array, @{$vobj->network});
			}
			$cfrm->Photo('networkgif', -file => "bitmaps/network.gif");
			my $networks = Vim::get_views(mo_ref_array => \@ds_array);
			foreach(@$networks) {
				$x++;
				$cfrm->Label(-image => , 'networkgif', -background => 'white',-foreground => 'black', -justify =>'left')->grid(-column => 0, -row => $x, -sticky => 'w');
				$cfrm->Label(-text => , $_->summary->name, -background => 'white',-foreground => 'black', -justify =>'left')->grid(-column => 0, -padx => 20, -row => $x, -sticky => 'w');
			}
		}
	}	
}

sub inv_dc_summary {
	my $hst=$vhost;
	if (query_access('dc_summary')) {
		update_status("");
		relogin(); 
		
		# Get General host information via VIM
		my $dcobj=$dcs{$hst}{'-'};
		$dcobj->update_view_data();
		my $nhst=0; my $nvms=0; my $nds=0; my $nne=0;
		foreach $hosts (keys %{ $dcs{$hst} }) {
			if ($hosts ne '-') {
				$nhst++;
				my @vms=keys %{ $inv{$hosts} };
				my $nv=@vms;
				$nv--;
				$nvms+=$nv;
			}
		}
		if (defined($dcobj->datastore)) { $nds=@{$dcobj->datastore}; }
		if (defined($dcobj->network)) { $nne=@{$dcobj->network}; }
		$datacenter=$hst;
		
		my $znb=$nlb->page_widget("Summary");
		if (defined($znba)) { $znba->destroy; undef $znba; }
		$znba=$znb->Scrolled("Frame", -scrollbars => 'osoe', -background => 'white', -borderwidth => 1, -relief => 'flat', -height => 250, -width => 600)->pack(-side => 'right', -fill => 'both', -expand => 1, -anchor => 'nw');
		my $frm=$znba->Frame(-background => 'white', -borderwidth => 1, -height => 150, -width => 300, -relief => 'groove')->grid(-column => 0, -row => 0, -sticky => 'w');
		$frm->Label(-text => "General", -foreground => 'blue', -background => 'grey', -justify => 'right')->grid(-column => 0, -row => 0, -sticky => 'w');
		$frm->Label(-text => "Hosts: ", -background => 'white', -foreground => 'black', -justify => 'left')->grid(-column => 0, -row => 1, -sticky => 'w');
		$frm->Label(-text => $nhst, -background => 'white',-foreground => 'black', -justify => 'right')->grid(-column => 1, -row => 1, -sticky => 'w');
		$frm->Label(-text => "Virtual Machines: ",-background => 'white',-foreground => 'black', -justify => 'left')->grid(-column => 0, -row => 2, -sticky => 'w');
		$frm->Label(-text => $nvms, -background => 'white',-foreground => 'black', -justify => 'right')->grid(-column => 1, -row => 2, -sticky => 'w');
		$frm->Label(-text => " ",-background => 'white',-foreground => 'black', -justify => 'left')->grid(-column => 0, -row => 3, -sticky => 'w');
		$frm->Label(-text => "Clusters: ",-background => 'white',-foreground => 'black', -justify => 'left')->grid(-column => 0, -row => 4, -sticky => 'w');
		#$frm->Label(-text => $hobj->summary->hardware->cpuModel, -background => 'white',-foreground => 'black', -justify => 'right')->grid(-column => 1, -row => 4, -sticky => 'w');
		$frm->Label(-text => "Networks: ",-background => 'white',-foreground => 'black', -justify => 'left')->grid(-column => 0, -row => 5, -sticky => 'w');
		$frm->Label(-text => $nne, -background => 'white',-foreground => 'black', -justify => 'right')->grid(-column => 1, -row => 5, -sticky => 'w');
		$frm->Label(-text => "DataStores",-background => 'white',-foreground => 'black', -justify => 'left')->grid(-column => 0, -row => 6, -sticky => 'w');
		$frm->Label(-text => $nds, -background => 'white',-foreground => 'black', -justify => 'right')->grid(-column => 1, -row => 6, -sticky => 'w');
		my $bfrm=$znba->Frame(-background => 'white', -borderwidth => 1, -height => 50, -width => 300, -relief => 'groove')->grid(-column => 0, -row => 1, -sticky => 'w');
		$bfrm->Label(-text => "Commands", -foreground => 'blue', -background => 'grey', -justify => 'right')->grid(-column => 0, -row => 0, -sticky => 'w');
	}
}

sub inv_browse {
	($vhost)=@_;
	if (query_access('browse')) {
		if (defined($nlb)) {
			if (defined($graph)) { $graph->destroy; undef $graph; }
			if (defined($pfrm)) { $pfrm->destroy; undef $pfrm; }
			if (defined($znba)) { $znba->destroy; undef $znba; }
			if (defined($znbh)) { $znbh->destroy; undef $znbh; }
			$nlb->destroy; undef $nlb; 
		}
		my $ivm=inv_is_vm($vhost);
		#$nlb = $WIDM->NoteBook(-background => 'white')->place(-in => $ilb, -x => 170, -rely => 0, -width => 430, -height => 330); #->pack(-anchor => 'w', -fill => 'both', -expand => 1);
		$nlb = $WIDM->NoteBook(-background => 'white')->pack(-in => $WIDM, -before => $ilb, -anchor => 'nw', -side => 'right', -fill => 'both', -expand => 1);
		
		
		#$nlb = $dlb->NoteBook(-background => 'white')->place(-x => 0, -y => 0, -width => 600, -height => 300)->pack(-anchor => 'w', -fill => 'both', -expand => 1);
		#my $znb=$nlb->add("Summary", -label => 'Summary');
		my $idc=inv_is_dc($vhost);
		if (!$idc) {
			my $znb=$nlb->add("Summary", -label => 'Summary', -raisecmd => \&inv_browse_general, -anchor => 'nw');
		}else {
			my $znb=$nlb->add("Summary", -label => 'Summary', -raisecmd => \&inv_dc_summary, -anchor => 'nw');
		}
		#$nlb->raise("Summary");	
		if (!$ivm) {
			$vms=$nlb->add("VMs", -label => 'Virtual Machines', -raisecmd => \&inv_vms, -anchor => 'nw');
		}
		if ($idc && !$ivm) {
			$vst=$nlb->add("Hosts", -label => 'Hosts', -raisecmd => \&inv_hosts, -anchor => 'nw');
		}
		#$perf=$dlb->add("Performance", -anchor => 'nw');
		#$conf=$dlb->add("Configuration", -anchor => 'nw');
		#$alrm=$dlb->add("Alarms", -anchor => 'nw');
		#$perms=$dlb->add("Permissions", -anchor => 'nw');
		#$maps=$dlb->add("Maps", -anchor => 'nw');
	}
}

sub inv_alrm {
	if (query_access('inv_alrm')) {
		foreach $dc (keys %dcs) {
			if ($dc ne '-') {
				foreach $host (keys %{ $dcs{$dc} }) {
					# update the host
					#print "$dc $host\n";
					$dcs{$dc}{$host}->update_view_data();
				}
			}
			$SIG{ALRM}= \&inv_arlm;
			alarm 1000;
		}
	}
}

sub inv_get_inv {
	# update view data
	if (query_access('get_inv')) {
	foreach $dc (keys %dcs) {
		if ($dc ne '-') {
			foreach $host (keys %{ $dcs{$dc} }) {
				# update the host
				#print "$dc $host\n";
				$dcs{$dc}{$host}->update_view_data();
				foreach $vm (keys %{ $inv{$host} }) {
					# update the VMs on the host
					$inv{$host}{$vm}->update_view_data();
				}
			}
		} else {
			# update the DataCenter
			$dcs{$dc}{'-'}->update_view_data();
		}
	}
	}
}

sub s_inventory {
	my ($h) = @_;
	my $rn="";
	### Given short name return full name
	my $fdc="";
	if (query_access('inventory')) {
		my $datacenter_views = Vim::find_entity_views (view_type => 'Datacenter');
		foreach(@$datacenter_views) {
			my $dcname=$_->name;
			$dcs{$dcname}{"-"}=$_;
			if ($fdc eq "") {$fdc=$dcname;}
			my $result = get_entities(view_type => 'Folder', obj => $_);
			foreach (@$result) {
				my $obj_content = $_;
				my $mob = $obj_content->obj;
				my $fobj = Vim::get_view(mo_ref=>$mob);
				#print $fobj->name."\n";
				if($fobj->name eq "host") {
					### Host and Cluster View
					##### Only Host View
					$hresult = get_entities(view_type => 'HostSystem',obj => $fobj);
					foreach (@$hresult) {
						my $hobj_content = $_;
						my $hmob = $hobj_content->obj;
						my $hobj = Vim::get_view(mo_ref=>$hmob);
						### Need substr on $h in 
						### $hobj->name
						my $fn=index lc $hobj->name, lc  $h;
						if ($fn != -1) {
							$rn="/".$hobj->name;
						}
						$inv{$hobj->name}{'-'}=$hobj;
						$dcs{$dcname}{$hobj->name}=$hobj;
						my $vresult = get_entities(view_type => 'VirtualMachine',obj => $hobj);
						foreach (@$vresult) {
							my $vobj_content = $_;
							my $vmob = $vobj_content->obj;
							my $vobj = Vim::get_view(mo_ref=>$vmob);
							$inv{$hobj->name}{$vobj->name} = $vobj;
						}		
					}
				#} else if ($obj->name eq "vm") {
					### Virtual Machine and Template View
				#} else if ($obj->name eq "Discovered Virtual Machine")) {
					### Virtual Machine and Template View
				#} else {
					### Virtual Machine and Template View
				}
			}
		}
	}
	return $rn;
}

sub inventory {
	my $fdc="";
	if (query_access('inventory')) {
			$STATUS_VAR="Loading Inventory";
			$main->Busy;
			if(defined($WIDM)) {$WIDM->destroy;}
			$WIDM = $mfrm->Frame(-borderwidth => 0, -height => 270, -width => 600, -relief => 'groove', -background => 'white')->pack(-fill => 'both', -expand => 1, -anchor => 'w');
			#$WIDM->Label(-text => 'Inventory')->place(-x=>10, -y=>5);
			
			$ilb = $WIDM->Scrolled("Tree", -scrollbars => 'osow', -background => 'white', -itemtype => 'text', -selectmode => 'single', -separator => '/', -browsecmd => \&inv_browse, -command => \&inv_browse, -height => 16, -indent => 10)->place(-x => 0, -y => 0, -width => 270)->pack( -fill => 'y', -expand => 1);
			#$dlb = $WIDM->Frame(-background => 'white')->place(-in => $ilb, -relx => 0, -rely => 0, -anchor => 'e')->pack(-fill => 'both', -expand => 1);
			#$WIDM->pack(-side => 'left', -anchor => 'w');
			my $datacenter_views = Vim::find_entity_views (view_type => 'Datacenter');
			#my $fdc="";
			#$ilb->delete('all');
			foreach(@$datacenter_views) {
				my $dcname=$_->name;
				$dcs{$dcname}{"-"}=$_;
				$ilb->add($dcname, -text => $dcname);
				$ilb->selectionSet($dcname);
				if ($fdc eq "") {$fdc=$dcname;}
				my $result = get_entities(view_type => 'Folder', obj => $_);
				foreach (@$result) {
					my $obj_content = $_;
					my $mob = $obj_content->obj;
					my $fobj = Vim::get_view(mo_ref=>$mob);
					#print $fobj->name."\n";
					if($fobj->name eq "host") {
						### Host and Cluster View
						##### Only Host View
						$hresult = get_entities(view_type => 'HostSystem',obj => $fobj);
						foreach (@$hresult) {
							my $hobj_content = $_;
							my $hmob = $hobj_content->obj;
							my $hobj = Vim::get_view(mo_ref=>$hmob);
							$inv{$hobj->name}{'-'}=$hobj;
							$dcs{$dcname}{$hobj->name}=$hobj;
							$ilb->add($dcname."/".$hobj->name, -text => $hobj->name);
							$ilb->setmode($dcname."/".$hobj->name,'open');
							my $vresult = get_entities(view_type => 'VirtualMachine',obj => $hobj);
							foreach (@$vresult) {
								my $vobj_content = $_;
								my $vmob = $vobj_content->obj;
								my $vobj = Vim::get_view(mo_ref=>$vmob);
								$inv{$hobj->name}{$vobj->name} = $vobj;
								$ilb->add($dcname."/".$hobj->name."/".$vobj->name, -text => $vobj->name);
								$ilb->hide(entry => $dcname."/".$hobj->name."/".$vobj->name);
							}		
						}
					#} else if ($obj->name eq "vm") {
						### Virtual Machine and Template View
					#} else if ($obj->name eq "Discovered Virtual Machine")) {
						### Virtual Machine and Template View
					#} else {
						### Virtual Machine and Template View
					}
				}
			}
			#Vim::logout();
			$main->Unbusy;
			inv_browse($fdc);
			$STATUS_VAR="Inventory Loaded";
			$SIG{ALRM}= \&inv_arlm;
			alarm 1000;
	}
}

1;
