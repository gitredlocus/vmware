package LSIESG_PottedStorageSetting;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::LSIESG_StorageSetting;
use strict;


@LSIESG_PottedStorageSetting::ISA = qw(_Initializable LSIESG_StorageSetting);


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
    $self->{StorageCapabilities_InstanceID} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            StorageCapabilities_InstanceID accessor method.
#===============================================================================

sub StorageCapabilities_InstanceID{
    my ($self, $newval) = @_;
    $self->{StorageCapabilities_InstanceID} = $newval if @_ > 1;
    return $self->{StorageCapabilities_InstanceID};
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
