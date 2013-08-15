package VMware_StoragePool;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_StoragePool;
use strict;


@VMware_StoragePool::ISA = qw(_Initializable CIM_StoragePool);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_StoragePool::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
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

#SMI-S version

package VMWARE_StoragePool;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_StoragePool;
use strict;


@VMWARE_StoragePool::ISA = qw(_Initializable CIM_StoragePool);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_StoragePool::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{InstanceID} = undef;
    $self->{Name} = undef;
    $self->{ElementName} = undef;
    $self->{PoolID} = undef;
    $self->{Primordial} = undef;
    $self->{TotalManagedSpace} = undef;
    $self->{RemainingManagedSpace} = undef;
    $self->{epr_name} = undef;  
    push @{$self->{id_keys}}, 'InstanceID';
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
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
#            Name accessor method.
#===============================================================================

sub Name{
    my ($self, $newval) = @_;
    $self->{Name} = $newval if @_ > 1;
    return $self->{Name};
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
#            TotalManagedSpace accessor method.
#===============================================================================

sub TotalManagedSpace{
    my ($self, $newval) = @_;
    $self->{TotalManagedSpace} = $newval if @_ > 1;
    return $self->{TotalManagedSpace};
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
#           epr_name accessor method.
#===============================================================================

sub epr_name{
    my ($self, $newval) = @_;
    $self->{epr_name} = $newval if @_ > 1;
    return $self->{epr_name};
}
#===============================================================================


1;
