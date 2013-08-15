package LSIESG_StorageVolumeSetting;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::LSIESG_StorageSetting;
use strict;


@LSIESG_StorageVolumeSetting::ISA = qw(_Initializable LSIESG_StorageSetting);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->LSIESG_StorageSetting::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{StorageVolume_DeviceID} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
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
