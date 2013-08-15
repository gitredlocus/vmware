package OMC_ProcessorCore;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_ProcessorCore;
use strict;


@OMC_ProcessorCore::ISA = qw(_Initializable CIM_ProcessorCore);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_ProcessorCore::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{Caption} = undef;
    $self->{CoreEnabledState} = undef;
    $self->{Description} = undef;
    $self->{ElementName} = undef;
    $self->{EnabledDefault} = undef;
    $self->{EnabledState} = undef;
    $self->{HealthState} = undef;
    $self->{InstanceID} = undef;
    $self->{OperationalStatus} = undef;
    $self->{RequestedState} = undef;
    $self->{TransitioningToState} = undef;
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
#            CoreEnabledState accessor method.
#===============================================================================

sub CoreEnabledState{
    my ($self, $newval) = @_;
    $self->{CoreEnabledState} = $newval if @_ > 1;
    return $self->{CoreEnabledState};
}
#===============================================================================


#===============================================================================
#            Description accessor method.
#===============================================================================

sub Description{
    my ($self, $newval) = @_;
    $self->{Description} = $newval if @_ > 1;
    return $self->{Description};
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
#            InstanceID accessor method.
#===============================================================================

sub InstanceID{
    my ($self, $newval) = @_;
    $self->{InstanceID} = $newval if @_ > 1;
    return $self->{InstanceID};
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
#            RequestedState accessor method.
#===============================================================================

sub RequestedState{
    my ($self, $newval) = @_;
    $self->{RequestedState} = $newval if @_ > 1;
    return $self->{RequestedState};
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
#           epr_name accessor method.
#===============================================================================

sub epr_name{
    my ($self, $newval) = @_;
    $self->{epr_name} = $newval if @_ > 1;
    return $self->{epr_name};
}
#===============================================================================


1;
