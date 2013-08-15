package VMware_HHRCStoragePool;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::vmware_storagepool;
use strict;


@VMware_HHRCStoragePool::ISA = qw(_Initializable VMware_StoragePool);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->VMware_StoragePool::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{Caption} = undef;
    $self->{ElementName} = undef;
    $self->{HealthState} = undef;
    $self->{InstanceID} = undef;
    $self->{PoolID} = undef;
    $self->{Primordial} = undef;
    $self->{RemainingManagedSpace} = undef;
    $self->{TotalManagedSpace} = undef;
    $self->{CardType} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            Caption accessor method.
#===============================================================================

sub Caption{
    my ($self, $newval) = @_;
    $self->{Caption} = $newval if @_ > 1;
    return $self->{Caption};
}
#===============================================================================


#===============================================================================
#            ElementName accessor method.
#===============================================================================

sub ElementName{
    my ($self, $newval) = @_;
    $self->{ElementName} = $newval if @_ > 1;
    return $self->{ElementName};
}
#===============================================================================


#===============================================================================
#            HealthState accessor method.
#===============================================================================

sub HealthState{
    my ($self, $newval) = @_;
    $self->{HealthState} = $newval if @_ > 1;
    return $self->{HealthState};
}
#===============================================================================


#===============================================================================
#            InstanceID accessor method.
#===============================================================================

sub InstanceID{
    my ($self, $newval) = @_;
    $self->{InstanceID} = $newval if @_ > 1;
    return $self->{InstanceID};
}
#===============================================================================


#===============================================================================
#            PoolID accessor method.
#===============================================================================

sub PoolID{
    my ($self, $newval) = @_;
    $self->{PoolID} = $newval if @_ > 1;
    return $self->{PoolID};
}
#===============================================================================


#===============================================================================
#            Primordial accessor method.
#===============================================================================

sub Primordial{
    my ($self, $newval) = @_;
    $self->{Primordial} = $newval if @_ > 1;
    return $self->{Primordial};
}
#===============================================================================


#===============================================================================
#            RemainingManagedSpace accessor method.
#===============================================================================

sub RemainingManagedSpace{
    my ($self, $newval) = @_;
    $self->{RemainingManagedSpace} = $newval if @_ > 1;
    return $self->{RemainingManagedSpace};
}
#===============================================================================


#===============================================================================
#            TotalManagedSpace accessor method.
#===============================================================================

sub TotalManagedSpace{
    my ($self, $newval) = @_;
    $self->{TotalManagedSpace} = $newval if @_ > 1;
    return $self->{TotalManagedSpace};
}
#===============================================================================


#===============================================================================
#            CardType accessor method.
#===============================================================================

sub CardType{
    my ($self, $newval) = @_;
    $self->{CardType} = $newval if @_ > 1;
    return $self->{CardType};
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
