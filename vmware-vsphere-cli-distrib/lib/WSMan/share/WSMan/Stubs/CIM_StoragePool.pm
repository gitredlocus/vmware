package CIM_StoragePool;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_ResourcePool;
use strict;


@CIM_StoragePool::ISA = qw(_Initializable CIM_ResourcePool);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_ResourcePool::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{InstanceID} = undef;
    $self->{PoolID} = undef;
    $self->{Primordial} = undef;
    $self->{TotalManagedSpace} = undef;
    $self->{RemainingManagedSpace} = undef;
    $self->{LowSpaceWarningThreshold} = undef;
    $self->{Usage} = undef;
    $self->{OtherUsageDescription} = undef;
    $self->{ClientSettableUsage} = undef;
    $self->{epr_name} = undef;  
    $self->{invokableMethods}->{GetSupportedSizes} = { input => ['ElementType', 'Goal', 'Sizes'], output => ['Sizes'] };
    $self->{invokableMethods}->{GetSupportedSizeRange} = { input => ['ElementType', 'Goal', 'MinimumVolumeSize', 'MaximumVolumeSize', 'VolumeSizeDivisor'], output => ['MinimumVolumeSize', 'MaximumVolumeSize', 'VolumeSizeDivisor'] };
    $self->{invokableMethods}->{GetAvailableExtents} = { input => ['Goal'], output => ['AvailableExtents'] };
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
#            LowSpaceWarningThreshold accessor method.
#===============================================================================

sub LowSpaceWarningThreshold{
    my ($self, $newval) = @_;
    $self->{LowSpaceWarningThreshold} = $newval if @_ > 1;
    return $self->{LowSpaceWarningThreshold};
}
#===============================================================================


#===============================================================================
#            Usage accessor method.
#===============================================================================

sub Usage{
    my ($self, $newval) = @_;
    $self->{Usage} = $newval if @_ > 1;
    return $self->{Usage};
}
#===============================================================================


#===============================================================================
#            OtherUsageDescription accessor method.
#===============================================================================

sub OtherUsageDescription{
    my ($self, $newval) = @_;
    $self->{OtherUsageDescription} = $newval if @_ > 1;
    return $self->{OtherUsageDescription};
}
#===============================================================================


#===============================================================================
#            ClientSettableUsage accessor method.
#===============================================================================

sub ClientSettableUsage{
    my ($self, $newval) = @_;
    $self->{ClientSettableUsage} = $newval if @_ > 1;
    return $self->{ClientSettableUsage};
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
