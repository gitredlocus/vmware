package CIM_EnabledLogicalElement;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_LogicalElement;
use strict;


@CIM_EnabledLogicalElement::ISA = qw(_Initializable CIM_LogicalElement);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_LogicalElement::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{EnabledState} = undef;
    $self->{OtherEnabledState} = undef;
    $self->{RequestedState} = undef;
    $self->{EnabledDefault} = undef;
    $self->{TimeOfLastStateChange} = undef;
    $self->{AvailableRequestedStates} = undef;
    $self->{TransitioningToState} = undef;
    $self->{epr_name} = undef;  
    $self->{invokableMethods}->{RequestStateChange} = { input => ['RequestedState', 'TimeoutPeriod'], output => ['Job'] };
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
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
#            OtherEnabledState accessor method.
#===============================================================================

sub OtherEnabledState{
    my ($self, $newval) = @_;
    $self->{OtherEnabledState} = $newval if @_ > 1;
    return $self->{OtherEnabledState};
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
#            EnabledDefault accessor method.
#===============================================================================

sub EnabledDefault{
    my ($self, $newval) = @_;
    $self->{EnabledDefault} = $newval if @_ > 1;
    return $self->{EnabledDefault};
}
#===============================================================================


#===============================================================================
#            TimeOfLastStateChange accessor method.
#===============================================================================

sub TimeOfLastStateChange{
    my ($self, $newval) = @_;
    $self->{TimeOfLastStateChange} = $newval if @_ > 1;
    return $self->{TimeOfLastStateChange};
}
#===============================================================================


#===============================================================================
#            AvailableRequestedStates accessor method.
#===============================================================================

sub AvailableRequestedStates{
    my ($self, $newval) = @_;
    $self->{AvailableRequestedStates} = $newval if @_ > 1;
    return $self->{AvailableRequestedStates};
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
