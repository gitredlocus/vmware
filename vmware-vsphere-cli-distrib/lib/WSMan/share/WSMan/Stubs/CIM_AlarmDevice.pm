package CIM_AlarmDevice;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_LogicalDevice;
use strict;


@CIM_AlarmDevice::ISA = qw(_Initializable CIM_LogicalDevice);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_LogicalDevice::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{AudibleAlarm} = undef;
    $self->{VisibleAlarm} = undef;
    $self->{MotionAlarm} = undef;
    $self->{Urgency} = undef;
    $self->{AlarmState} = undef;
    $self->{AudioIndicatorIsDisabled} = undef;
    $self->{VisualIndicatorIsDisabled} = undef;
    $self->{MotionIndicatorIsDisabled} = undef;
    $self->{epr_name} = undef;  
    $self->{invokableMethods}->{SetAlarmIndicator} = { input => ['AudioIndicator', 'VisualIndicator', 'MotionIndicator'], output => [] };
    $self->{invokableMethods}->{SetUrgency} = { input => ['RequestedUrgency'], output => [] };
    $self->{invokableMethods}->{SetAlarmState} = { input => ['RequestedAlarmState'], output => [] };
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            AudibleAlarm accessor method.
#===============================================================================

sub AudibleAlarm{
    my ($self, $newval) = @_;
    $self->{AudibleAlarm} = $newval if @_ > 1;
    return $self->{AudibleAlarm};
}
#===============================================================================


#===============================================================================
#            VisibleAlarm accessor method.
#===============================================================================

sub VisibleAlarm{
    my ($self, $newval) = @_;
    $self->{VisibleAlarm} = $newval if @_ > 1;
    return $self->{VisibleAlarm};
}
#===============================================================================


#===============================================================================
#            MotionAlarm accessor method.
#===============================================================================

sub MotionAlarm{
    my ($self, $newval) = @_;
    $self->{MotionAlarm} = $newval if @_ > 1;
    return $self->{MotionAlarm};
}
#===============================================================================


#===============================================================================
#            Urgency accessor method.
#===============================================================================

sub Urgency{
    my ($self, $newval) = @_;
    $self->{Urgency} = $newval if @_ > 1;
    return $self->{Urgency};
}
#===============================================================================


#===============================================================================
#            AlarmState accessor method.
#===============================================================================

sub AlarmState{
    my ($self, $newval) = @_;
    $self->{AlarmState} = $newval if @_ > 1;
    return $self->{AlarmState};
}
#===============================================================================


#===============================================================================
#            AudioIndicatorIsDisabled accessor method.
#===============================================================================

sub AudioIndicatorIsDisabled{
    my ($self, $newval) = @_;
    $self->{AudioIndicatorIsDisabled} = $newval if @_ > 1;
    return $self->{AudioIndicatorIsDisabled};
}
#===============================================================================


#===============================================================================
#            VisualIndicatorIsDisabled accessor method.
#===============================================================================

sub VisualIndicatorIsDisabled{
    my ($self, $newval) = @_;
    $self->{VisualIndicatorIsDisabled} = $newval if @_ > 1;
    return $self->{VisualIndicatorIsDisabled};
}
#===============================================================================


#===============================================================================
#            MotionIndicatorIsDisabled accessor method.
#===============================================================================

sub MotionIndicatorIsDisabled{
    my ($self, $newval) = @_;
    $self->{MotionIndicatorIsDisabled} = $newval if @_ > 1;
    return $self->{MotionIndicatorIsDisabled};
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
