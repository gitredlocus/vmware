#!/usr/bin/perl -w
#
# Copyright 2006 VMware, Inc.  All rights reserved.
#
# This script allows users to create, relocate, and clone a vm. Each operation requires
# certain parameters to be specified.

use strict;
use warnings;

use VMware::VIRuntime;

my %opts = (
   vmhost => {
      type => "=s",
      help => "The name of the host",
      required => 1,
   },
   vmname => {
      type => "=s",
      help => "The name of the vm",
      required => 1,
   },
   datacenter => {
      type => "=s",
      help => "The name of the datacenter (required for create)",
      required => 0,
   },
   operation => {
      alias => "op",
      type => "=s", 
      help => "The name of the operation (clone or relocate or create)",
      required => 1,
   },
   vmname_destination => {
      type => "=s", 
      help => "The name of the target vm for a clone",
      required => 0,
   },
   vmhost_destination => {
      type => "=s", 
      help => "The name of the destination host for a clone or relocate",
      required => 0,
   },
   guestid => {
      type => "=s", 
      help => "The guest os identifier (used for create)",
      required => 0,
      default => "winXPProGuest",
   },
   datastore => {
      type => "=s", 
      help => "The name of the datastore (used for all operations, " .
              "required for relocate, defaults to whichever datastore " .
              "has the most freespace)",
      required => 0,
   },
   disksize => {
      type => "=i", 
      help => "The size of the virtual disk in KB (used for create)",
      required => 0,
      default => 4096, # 4 MB
   },
   memory => {
      type => "=i", 
      help => "The size of the virtual memory in MB (used for create)",
      required => 0,
      default => 256, 
   },
   num_cpus => {
      type => "=i", 
      help => "The number of virtual cpus (used for create)",
      required => 0,
      default => 1,
   },
   nic_network => {
      type => "=s", 
      help => "The name of the network to connect the virtual NIC to " .
              "(used for create, default is to have no NICs)",
      required => 0,
   },
   nic_poweron => {
      type => "=i", 
      help => "Flag to specify whether or not to connect the NIC " .
              "when the virtual machine starts (used for create)",
      required => 0,
      default => 1,
   },
   number_of_vms => {
      type => "=i",
      help => "The number of virtual machines to create (used for create)",
      required => 0,
      default => 1,
   }, 
);

Opts::add_options(%opts);
Opts::parse();
Opts::validate(\&validate);
Util::connect();

# Perform <create|clone|relocate> operation
my $op = Opts::get_option('operation');
if ($op eq 'create') {
   create_vms();
} elsif ($op eq 'clone' || $op eq 'relocate') {
   clone_relocate_vm();
}

Util::disconnect();


# Clone or relocate vm operation
# ==============================
sub clone_relocate_vm {
   my $op = Opts::get_option('operation');
   my $vm_name = Opts::get_option('vmname');
   my $vm_view = Vim::find_entity_view(view_type => 'VirtualMachine',
                                       filter => {'name' => $vm_name});
   if (!$vm_view) {
      die "Source virtual machine '$vm_name' not found\n";
   }
   
   # Get destination host and compute resource views
   my $host_view = get_host_view(Opts::get_option('vmhost_destination'));
   my $comp_res_view = Vim::get_view(mo_ref => $host_view->parent);

   # Get datastore info for the destination host
   my $ds_name = Opts::get_option('datastore');
   my %ds_info = get_datastore(host_view => $host_view,
                               datastore => $ds_name);

   # Create RelocateSpec using the destination host's resource pool;
   # datastore was either specified by the user or was picked from the
   # available datastores on the host
   # XXX Allow setting things like 'transform' and 'disk'  
   my $relocate_spec = VirtualMachineRelocateSpec->new(
                                          datastore => $ds_info{mor},
                                          host => $host_view,
                                          pool => $comp_res_view->resourcePool);

   if ($op eq "clone") {
      # Create CloneSpec corresponding to the RelocateSpec
      # XXX Don't hardcode things here, like 'powerOn', 'template', etc.
      my $clone_spec = VirtualMachineCloneSpec->new(
                                          powerOn => 0,
                                          template => 0,
                                          location => $relocate_spec);

      # Clone source vm, pass vm host, folder and new vm name
      $vm_view->CloneVM(folder => $vm_view->parent,
                        name => Opts::get_option('vmname_destination'),
                        spec => $clone_spec);
   } elsif ($op eq "relocate") {
      # Relocate the vm
      $vm_view->RelocateVM(spec => $relocate_spec);
   }
}

# Creates n vms
#==============
sub create_vms {
   my $count = Opts::get_option('number_of_vms');
   my $vm_prefix = Opts::get_option('vmname');
   for (my $i = 0; $i < $count; $i++) {
      my $vm_name = $vm_prefix;
      if ($i != 0) {
         $vm_name = $vm_name . "_$i";
      }
      create_vm(vmname => $vm_name);
   }
}

# Create vm operation
# ===================
sub create_vm {
   my %args = @_;
   my $vm_name = $args{vmname};

   my @vm_devices;

   my $host_view = get_host_view(Opts::get_option('vmhost'));
   my $comp_res_view = Vim::get_view(mo_ref => $host_view->parent);
         
   # Get the datastore
   my $ds_name = Opts::get_option('datastore');
   my %ds_info = get_datastore(host_view => $host_view,
                               datastore => $ds_name);
   my $ds_path = "[" . $ds_info{name} . "]";

   ##      
   # Create the controller
   # XXX Don't hardcode in BusLogic 
   ##

   my $controller = VirtualBusLogicController->new(key => 0,
                           device => [0],
                           busNumber => 0,
                           sharedBus => VirtualSCSISharing->new('noSharing'));
   
   my $controller_vm_dev_conf_spec = VirtualDeviceConfigSpec->new(
                     device => $controller,
                     operation => VirtualDeviceConfigSpecOperation->new('add'));
   
   ##   
   # Create the virtual disk 
   # XXX Don't hardcode in number of disks, disk backing type, etc.
   ##
   
   my $disk_backing_info = VirtualDiskFlatVer2BackingInfo->new(
                                                   diskMode => 'persistent',
                                                   fileName => $ds_path);
      
   my $disk = VirtualDisk->new(backing => $disk_backing_info,
                               controllerKey => 0,
                               key => 0,
                               unitNumber => 0,
                               capacityInKB => Opts::get_option('disksize'));
   
   my $disk_vm_dev_conf_spec = VirtualDeviceConfigSpec->new(device => $disk,
         fileOperation => VirtualDeviceConfigSpecFileOperation->new('create'),
         operation => VirtualDeviceConfigSpecOperation->new('add'));

   ## 
   # Create the virtual NIC
   # XXX Don't hardcode in the number of NICS, the type of the NIC, the backing type, etc.
   ##

   my $network_name = Opts::get_option('nic_network');
   my $poweron = Opts::get_option('nic_poweron');
   my $network = undef;
   my $unit_num = 1;  # 1 since 0 is used by disk
         
   if(defined($network_name)) {
      my $network_list = Vim::get_views(mo_ref_array => $host_view->network);
      foreach (@$network_list) {
         if($network_name eq $_->name) {
            $network = $_;
                   
            
            my $nic_backing_info = VirtualEthernetCardNetworkBackingInfo->new(
                                              deviceName => $network_name,
                                              network => $network);
         
            my $vd_connect_info = VirtualDeviceConnectInfo->new(
                                             allowGuestControl => 1,
                                             connected => 0,
                                             startConnected => $poweron);
            
            my $nic = VirtualPCNet32->new(backing => $nic_backing_info,
                                          key => 0,  # same controller as disk
                                          unitNumber => $unit_num,
                                          addressType => 'generated',
                                          connectable => $vd_connect_info);
            
            my $nic_vm_dev_conf_spec = VirtualDeviceConfigSpec->new(
                  device => $nic,
                  operation => VirtualDeviceConfigSpecOperation->new('add'));
   
            push(@vm_devices, $nic_vm_dev_conf_spec);
         }
      }
      if (!defined($network)) {
         die "Network '$network_name' not found\n";
      }
   }
   
   # Add controller and disk VirtualDeviceConfigSpecs to device list
   push(@vm_devices, $controller_vm_dev_conf_spec);
   push(@vm_devices, $disk_vm_dev_conf_spec);

   my $files = VirtualMachineFileInfo->new(logDirectory => undef,
                                           snapshotDirectory => undef,
                                           suspendDirectory => undef,
                                           vmPathName => $ds_path);

   # Create vm configuration spec
   my $vm_config_spec = VirtualMachineConfigSpec->new(
                                             name => $vm_name,
                                             memoryMB => Opts::get_option('memory'),
                                             files => $files,
                                             numCPUs => Opts::get_option('num_cpus'),
                                             guestId => Opts::get_option('guestid'),
                                             deviceChange => \@vm_devices);

   # Get vm folder based on datacenter name
   my $datacenter = Vim::find_entity_view(view_type => 'Datacenter',
                                       filter => { name => Opts::get_option('datacenter')});

   my $vm_folder_view = Vim::get_view(mo_ref => $datacenter->vmFolder);

   # Finally, create the vm
   $vm_folder_view->CreateVM(config => $vm_config_spec,
                             pool => $comp_res_view->resourcePool,
                             host => $host_view);
}

# Get vm host view
# ================
sub get_host_view {
   my $host_name = shift;
   my $host_view = Vim::find_entity_view(view_type => 'HostSystem',
                                         filter => {'name' => $host_name});
   if (!$host_view) {
      die "Host '$host_name' not found\n";
   }
   return $host_view;
}

# Retrieve a datastore which is accessible from the vm host.
# If a particular datastore is specified, retreive that.
# Else, just get the accessible datastore with the largest 
# amount of free space.
# ==========================================================
sub get_datastore {   
   my %args = @_;
   my $host_view = $args{host_view};
   my $config_datastore = $args{datastore};
   my $name = undef;
   my $mor = undef;   
   
   my $ds_mor_array = $host_view->datastore;
   my $datastores = Vim::get_views(mo_ref_array => $ds_mor_array);

   my $found_datastore = 0;
   
   # User specified datatstore name.  It's possible no such
   # datastore exists, in which case an error is generated.
   if(defined($config_datastore)) {
      foreach (@$datastores) {
         $name = $_->summary->name;                  
         if($name eq $config_datastore) { # if datastore available to host
            $found_datastore = 1;
            $mor = $_->{mo_ref};
            last;
         }
      }
   }
   # No datatstore name specified.  The only only way to not find a
   # datastore in this case is if the host doesn't have any attached.
   else {
      my $disksize = 0;
      foreach (@$datastores) {
         my $ds_disksize = ($_->summary->freeSpace);
         
         if($ds_disksize > $disksize && $_->summary->accessible) {
            $found_datastore = 1;
            $name = $_->summary->name;
            $mor = $_->{mo_ref};
            $disksize = $ds_disksize;
         }
      }
   }

   if (!$found_datastore) {
      my $host_name = $host_view->name;
      my $ds_name = "<any accessible datastore>";
      if (Opts::option_is_set('datastore')) {
         $ds_name = Opts::get_option('datastore');
      }
      die "Datastore '$ds_name' is not available to host $host_name\n";
   }

   return (name => $name, mor => $mor);
}


# Additional parameter validation
sub validate {
   my $valid = 1;
   my $op = Opts::get_option('operation');

   if (($op ne 'create') && ($op ne 'clone') && ($op ne 'relocate')) {
      Util::trace(0, "Invalid operation '$op': must be create, clone or relocate\n");
      $valid = 0;
   }
   
   if ($op eq 'clone') {
      if (!Opts::option_is_set('vmname_destination')) {
         Util::trace(0, "Must specify vmname_destination for operation $op\n");
         $valid = 0;
      }
   }
   
   if (($op eq 'clone') || ($op eq 'relocate')) {
      if (!Opts::option_is_set('vmhost_destination')) {
         Util::trace(0, "Must specify vmhost_destination for operation $op\n");
         $valid = 0;
      }
   }
   
   if ($op eq 'create') {
      if (!Opts::option_is_set('datacenter')) {
         Util::trace(0, "Must specify datacenter for operation $op\n");
         $valid = 0;
      }
   }
   
   if ($op eq 'relocate') {
      if (!Opts::option_is_set('datastore')) {
         Util::trace(0, "Must specify datastore for operation $op\n");
         $valid = 0;
      }
   }

   return $valid;
}

__END__

=head1 NAME

vmprovision.pl - Create, clone and relocate virtual machines.

=head1 SYNOPSIS

    vmprovision.pl --operation <create|clone|relocate> [options]

=head1 DESCRIPTION

This VI Perl command-line utility provides an interface for three
common provisioning operations: creating a virtual machine from
scratch, cloning an existing virtual machine, and relocating an
existing virtual machine from one host/datastore to another.

=head1 OPTIONS

=head2 GENERAL OPTIONS

=over

=item B<operation>

Operation to be performed.  One of the following: I<create> (create
one or more new virtual machines), I<relocate> (relocate an existing
virtual machine), I<clone> (clone an existing virtual machine).

=item B<vmname>

For I<clone> and I<relocate> operations, the name of the source
virtual machine.  For I<create>, base name of the new virtual machine;
if multiple virtual machines are being created, the names will be
uniquified using a numeric suffix.

=item B<datastore>

Name of the target datastore.  If unspecified, use the datastore with
the most free space.

=back

=head2 CREATE OPTIONS

=over

=item B<number_of_vms>

Number of virtual machines to create; defaults to 1.

=item B<vmhost>

Name of the target host for the new virtual machine(s).

=item B<datacenter>

Name of the target datacenter for the new virtual machine(s).

=item B<guestid>

Guest operating system identifier, chosen from the
VirtualMachineGuestOsIdentifier enumeration; defaults to
I<winXPProGuest>. 

=item B<disksize>

Virtual disk size (in KB); defaults to 4096KB.

=item B<memory>

Memory size (in MB); defaults to 256MB.

=item B<num_cpus>

Number of virtual CPUs; defaults to 1.

=item B<nic_network>

If specified, create the virtual machine with a single NIC connected
to the specified network; if not, create the virtual machine(s) with
no NIC.

=item B<nic_poweron>

Flag to specify whether the virtual NIC should be connected at
power-on time; ignored if I<nic_network> is unset.

=back

=head2 CLONE/RELOCATE OPTIONS

=over

=item B<vmhost_destination>

Target host for the new virtual machine.

=back

=head2 CLONE OPTIONS

=over

=item B<vmname_destination>

Name for the new virtual machine.

=back

=head1 EXAMPLES

Create three new virtual machines with the same configuration
settings:

    vmprovision.pl --op create --number_of_vms 3
        --server vc-server.example.com --vmhost esx1.example.com
        --datacenter 'My Datacenter' --datastore 'local-esx1'
        --vmname 'ubuntuGuest'

Clone a virtual machine, automatically choosing the datastore with the
most free space that is accessible by the destination host:

    vmprovision.pl --op clone --server vc-server.example.com
        --vmhost esx1.example.com --vmhost_destination esx2.example.com
        --vmname 'My Virtual Machine' --vmname_destination 'My Clone'

Relocate a virtual machine to the specified host and datastore:

    vmprovision.pl --op relocate --server vc-server.example.com
        --vmhost esx1.example.com --vmhost_destination esx2.example.com
        --vmname 'My Virtual Machine' --datastore 'new-san'

=head1 SUPPORTED PLATFORMS

All operations work with VMware VirtualCenter 2.0 or later.

Create operations work with VMware ESX Server 3.0 or later; clone and
relocate are not supported.
