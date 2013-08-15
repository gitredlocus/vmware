package LSIESG_ErasureSetting;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::SNIA_ErasureSetting;
use strict;


@LSIESG_ErasureSetting::ISA = qw(_Initializable SNIA_ErasureSetting);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->SNIA_ErasureSetting::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{DiskExtent_DeviceID} = undef;
    $self->{StorageVolume_DeviceID} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            DiskExtent_DeviceID accessor method.
#===============================================================================

sub DiskExtent_DeviceID{
    my ($self, $newval) = @_;
    $self->{DiskExtent_DeviceID} = $newval if @_ > 1;
    return $self->{DiskExtent_DeviceID};
}
#===============================================================================


#===============================================================================
#            StorageVolume_DeviceID accessor method.
#===============================================================================

sub StorageVolume_DeviceID{
    my ($self, $newval) = @_;
    $self->{StorageVolume_DeviceID} = $newval if @_ > 1;
    return $self->{StorageVolume_DeviceID};
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
