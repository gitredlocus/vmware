package OMC_Memory;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_Memory;
use strict;


@OMC_Memory::ISA = qw(_Initializable CIM_Memory);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_Memory::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{Access} = undef;
    $self->{BlockSize} = undef;
    $self->{CreationClassName} = undef;
    $self->{DataOrganization} = undef;
    $self->{DeviceID} = undef;
    $self->{ElementName} = undef;
    $self->{EnabledDefault} = undef;
    $self->{EnabledState} = undef;
    $self->{HealthState} = undef;
    $self->{IsBasedOnUnderlyingRedundancy} = undef;
    $self->{Name} = undef;
    $self->{NumberOfBlocks} = undef;
    $self->{OperationalStatus} = undef;
    $self->{Primordial} = undef;
    $self->{RequestedState} = undef;
    $self->{SequentialAccess} = undef;
    $self->{SystemCreationClassName} = undef;
    $self->{SystemName} = undef;
    $self->{TransitioningToState} = undef;
    $self->{Volatile} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            Access accessor method.
#===============================================================================

sub Access{
    my ($self, $newval) = @_;
    $self->{Access} = $newval if @_ > 1;
    return $self->{Access};
}
#===============================================================================


#===============================================================================
#            BlockSize accessor method.
#===============================================================================

sub BlockSize{
    my ($self, $newval) = @_;
    $self->{BlockSize} = $newval if @_ > 1;
    return $self->{BlockSize};
}
#===============================================================================


#===============================================================================
#            CreationClassName accessor method.
#===============================================================================

sub CreationClassName{
    my ($self, $newval) = @_;
    $self->{CreationClassName} = $newval if @_ > 1;
    return $self->{CreationClassName};
}
#===============================================================================


#===============================================================================
#            DataOrganization accessor method.
#===============================================================================

sub DataOrganization{
    my ($self, $newval) = @_;
    $self->{DataOrganization} = $newval if @_ > 1;
    return $self->{DataOrganization};
}
#===============================================================================


#===============================================================================
#            DeviceID accessor method.
#===============================================================================

sub DeviceID{
    my ($self, $newval) = @_;
    $self->{DeviceID} = $newval if @_ > 1;
    return $self->{DeviceID};
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
#            EnabledDefault accessor method.
#===============================================================================

sub EnabledDefault{
    my ($self, $newval) = @_;
    $self->{EnabledDefault} = $newval if @_ > 1;
    return $self->{EnabledDefault};
}
#===============================================================================


#===============================================================================
#            EnabledState accessor method.
#===============================================================================

sub EnabledState{
    my ($self, $newval) = @_;
    $self->{EnabledState} = $newval if @_ > 1;
    return $self->{EnabledState};
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
#            IsBasedOnUnderlyingRedundancy accessor method.
#===============================================================================

sub IsBasedOnUnderlyingRedundancy{
    my ($self, $newval) = @_;
    $self->{IsBasedOnUnderlyingRedundancy} = $newval if @_ > 1;
    return $self->{IsBasedOnUnderlyingRedundancy};
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
#            NumberOfBlocks accessor method.
#===============================================================================

sub NumberOfBlocks{
    my ($self, $newval) = @_;
    $self->{NumberOfBlocks} = $newval if @_ > 1;
    return $self->{NumberOfBlocks};
}
#===============================================================================


#===============================================================================
#            OperationalStatus accessor method.
#===============================================================================

sub OperationalStatus{
    my ($self, $newval) = @_;
    $self->{OperationalStatus} = $newval if @_ > 1;
    return $self->{OperationalStatus};
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
#            RequestedState accessor method.
#===============================================================================

sub RequestedState{
    my ($self, $newval) = @_;
    $self->{RequestedState} = $newval if @_ > 1;
    return $self->{RequestedState};
}
#===============================================================================


#===============================================================================
#            SequentialAccess accessor method.
#===============================================================================

sub SequentialAccess{
    my ($self, $newval) = @_;
    $self->{SequentialAccess} = $newval if @_ > 1;
    return $self->{SequentialAccess};
}
#===============================================================================


#===============================================================================
#            SystemCreationClassName accessor method.
#===============================================================================

sub SystemCreationClassName{
    my ($self, $newval) = @_;
    $self->{SystemCreationClassName} = $newval if @_ > 1;
    return $self->{SystemCreationClassName};
}
#===============================================================================


#===============================================================================
#            SystemName accessor method.
#===============================================================================

sub SystemName{
    my ($self, $newval) = @_;
    $self->{SystemName} = $newval if @_ > 1;
    return $self->{SystemName};
}
#===============================================================================


#===============================================================================
#            TransitioningToState accessor method.
#===============================================================================

sub TransitioningToState{
    my ($self, $newval) = @_;
    $self->{TransitioningToState} = $newval if @_ > 1;
    return $self->{TransitioningToState};
}
#===============================================================================


#===============================================================================
#            Volatile accessor method.
#===============================================================================

sub Volatile{
    my ($self, $newval) = @_;
    $self->{Volatile} = $newval if @_ > 1;
    return $self->{Volatile};
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
