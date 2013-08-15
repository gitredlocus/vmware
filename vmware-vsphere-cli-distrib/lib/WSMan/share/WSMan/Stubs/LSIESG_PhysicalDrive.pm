package LSIESG_PhysicalDrive;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_PhysicalPackage;
use strict;


@LSIESG_PhysicalDrive::ISA = qw(_Initializable CIM_PhysicalPackage);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_PhysicalPackage::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{Chassis_Tag} = undef;
    $self->{DiskDrive_DeviceID} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            Chassis_Tag accessor method.
#===============================================================================

sub Chassis_Tag{
    my ($self, $newval) = @_;
    $self->{Chassis_Tag} = $newval if @_ > 1;
    return $self->{Chassis_Tag};
}
#===============================================================================


#===============================================================================
#            DiskDrive_DeviceID accessor method.
#===============================================================================

sub DiskDrive_DeviceID{
    my ($self, $newval) = @_;
    $self->{DiskDrive_DeviceID} = $newval if @_ > 1;
    return $self->{DiskDrive_DeviceID};
}
#===============================================================================


#===============================================================================
#           epr_name accessor method.
#===============================================================================

sub epr_name{
    my ($self, $newval) = @_;
    $self->{epr_name} = $newval if @_ > 1;
    return $self->{epr_name};
}
#===============================================================================


1;
