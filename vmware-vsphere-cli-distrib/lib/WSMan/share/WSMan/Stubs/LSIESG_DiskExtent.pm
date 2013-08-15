package LSIESG_DiskExtent;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_StorageExtent;
use strict;


@LSIESG_DiskExtent::ISA = qw(_Initializable CIM_StorageExtent);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_StorageExtent::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{StoragePool_InstanceID} = undef;
    $self->{FailoverStorageExtentsCollection_InstanceID} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            StoragePool_InstanceID accessor method.
#===============================================================================

sub StoragePool_InstanceID{
    my ($self, $newval) = @_;
    $self->{StoragePool_InstanceID} = $newval if @_ > 1;
    return $self->{StoragePool_InstanceID};
}
#===============================================================================


#===============================================================================
#            FailoverStorageExtentsCollection_InstanceID accessor method.
#===============================================================================

sub FailoverStorageExtentsCollection_InstanceID{
    my ($self, $newval) = @_;
    $self->{FailoverStorageExtentsCollection_InstanceID} = $newval if @_ > 1;
    return $self->{FailoverStorageExtentsCollection_InstanceID};
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
