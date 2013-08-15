package VMware_HHRCPortController;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::VMware_PortController;
use strict;


@VMware_HHRCPortController::ISA = qw(_Initializable VMware_PortController);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->VMware_PortController::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{Caption} = undef;
    $self->{ControllerType} = undef;
    $self->{CreationClassName} = undef;
    $self->{DeviceID} = undef;
    $self->{ElementName} = undef;
    $self->{EnabledDefault} = undef;
    $self->{EnabledState} = undef;
    $self->{HealthState} = undef;
    $self->{OtherControllerType} = undef;
    $self->{RequestedState} = undef;
    $self->{SystemCreationClassName} = undef;
    $self->{SystemName} = undef;
    $self->{TransitioningToState} = undef;
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
#            ControllerType accessor method.
#===============================================================================

sub ControllerType{
    my ($self, $newval) = @_;
    $self->{ControllerType} = $newval if @_ > 1;
    return $self->{ControllerType};
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
#            OtherControllerType accessor method.
#===============================================================================

sub OtherControllerType{
    my ($self, $newval) = @_;
    $self->{OtherControllerType} = $newval if @_ > 1;
    return $self->{OtherControllerType};
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
