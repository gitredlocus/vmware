package CIM_Job;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_LogicalElement;
use strict;


@CIM_Job::ISA = qw(_Initializable CIM_LogicalElement);


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
    $self->{JobStatus} = undef;
    $self->{TimeSubmitted} = undef;
    $self->{ScheduledStartTime} = undef;
    $self->{StartTime} = undef;
    $self->{ElapsedTime} = undef;
    $self->{JobRunTimes} = undef;
    $self->{RunMonth} = undef;
    $self->{RunDay} = undef;
    $self->{RunDayOfWeek} = undef;
    $self->{RunStartInterval} = undef;
    $self->{LocalOrUtcTime} = undef;
    $self->{UntilTime} = undef;
    $self->{Notify} = undef;
    $self->{Owner} = undef;
    $self->{Priority} = undef;
    $self->{PercentComplete} = undef;
    $self->{DeleteOnCompletion} = undef;
    $self->{ErrorCode} = undef;
    $self->{ErrorDescription} = undef;
    $self->{RecoveryAction} = undef;
    $self->{OtherRecoveryAction} = undef;
    $self->{epr_name} = undef;  
    $self->{invokableMethods}->{KillJob} = { input => ['DeleteOnKill'], output => [] };
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            JobStatus accessor method.
#===============================================================================

sub JobStatus{
    my ($self, $newval) = @_;
    $self->{JobStatus} = $newval if @_ > 1;
    return $self->{JobStatus};
}
#===============================================================================


#===============================================================================
#            TimeSubmitted accessor method.
#===============================================================================

sub TimeSubmitted{
    my ($self, $newval) = @_;
    $self->{TimeSubmitted} = $newval if @_ > 1;
    return $self->{TimeSubmitted};
}
#===============================================================================


#===============================================================================
#            ScheduledStartTime accessor method.
#===============================================================================

sub ScheduledStartTime{
    my ($self, $newval) = @_;
    $self->{ScheduledStartTime} = $newval if @_ > 1;
    return $self->{ScheduledStartTime};
}
#===============================================================================


#===============================================================================
#            StartTime accessor method.
#===============================================================================

sub StartTime{
    my ($self, $newval) = @_;
    $self->{StartTime} = $newval if @_ > 1;
    return $self->{StartTime};
}
#===============================================================================


#===============================================================================
#            ElapsedTime accessor method.
#===============================================================================

sub ElapsedTime{
    my ($self, $newval) = @_;
    $self->{ElapsedTime} = $newval if @_ > 1;
    return $self->{ElapsedTime};
}
#===============================================================================


#===============================================================================
#            JobRunTimes accessor method.
#===============================================================================

sub JobRunTimes{
    my ($self, $newval) = @_;
    $self->{JobRunTimes} = $newval if @_ > 1;
    return $self->{JobRunTimes};
}
#===============================================================================


#===============================================================================
#            RunMonth accessor method.
#===============================================================================

sub RunMonth{
    my ($self, $newval) = @_;
    $self->{RunMonth} = $newval if @_ > 1;
    return $self->{RunMonth};
}
#===============================================================================


#===============================================================================
#            RunDay accessor method.
#===============================================================================

sub RunDay{
    my ($self, $newval) = @_;
    $self->{RunDay} = $newval if @_ > 1;
    return $self->{RunDay};
}
#===============================================================================


#===============================================================================
#            RunDayOfWeek accessor method.
#===============================================================================

sub RunDayOfWeek{
    my ($self, $newval) = @_;
    $self->{RunDayOfWeek} = $newval if @_ > 1;
    return $self->{RunDayOfWeek};
}
#===============================================================================


#===============================================================================
#            RunStartInterval accessor method.
#===============================================================================

sub RunStartInterval{
    my ($self, $newval) = @_;
    $self->{RunStartInterval} = $newval if @_ > 1;
    return $self->{RunStartInterval};
}
#===============================================================================


#===============================================================================
#            LocalOrUtcTime accessor method.
#===============================================================================

sub LocalOrUtcTime{
    my ($self, $newval) = @_;
    $self->{LocalOrUtcTime} = $newval if @_ > 1;
    return $self->{LocalOrUtcTime};
}
#===============================================================================


#===============================================================================
#            UntilTime accessor method.
#===============================================================================

sub UntilTime{
    my ($self, $newval) = @_;
    $self->{UntilTime} = $newval if @_ > 1;
    return $self->{UntilTime};
}
#===============================================================================


#===============================================================================
#            Notify accessor method.
#===============================================================================

sub Notify{
    my ($self, $newval) = @_;
    $self->{Notify} = $newval if @_ > 1;
    return $self->{Notify};
}
#===============================================================================


#===============================================================================
#            Owner accessor method.
#===============================================================================

sub Owner{
    my ($self, $newval) = @_;
    $self->{Owner} = $newval if @_ > 1;
    return $self->{Owner};
}
#===============================================================================


#===============================================================================
#            Priority accessor method.
#===============================================================================

sub Priority{
    my ($self, $newval) = @_;
    $self->{Priority} = $newval if @_ > 1;
    return $self->{Priority};
}
#===============================================================================


#===============================================================================
#            PercentComplete accessor method.
#===============================================================================

sub PercentComplete{
    my ($self, $newval) = @_;
    $self->{PercentComplete} = $newval if @_ > 1;
    return $self->{PercentComplete};
}
#===============================================================================


#===============================================================================
#            DeleteOnCompletion accessor method.
#===============================================================================

sub DeleteOnCompletion{
    my ($self, $newval) = @_;
    $self->{DeleteOnCompletion} = $newval if @_ > 1;
    return $self->{DeleteOnCompletion};
}
#===============================================================================


#===============================================================================
#            ErrorCode accessor method.
#===============================================================================

sub ErrorCode{
    my ($self, $newval) = @_;
    $self->{ErrorCode} = $newval if @_ > 1;
    return $self->{ErrorCode};
}
#===============================================================================


#===============================================================================
#            ErrorDescription accessor method.
#===============================================================================

sub ErrorDescription{
    my ($self, $newval) = @_;
    $self->{ErrorDescription} = $newval if @_ > 1;
    return $self->{ErrorDescription};
}
#===============================================================================


#===============================================================================
#            RecoveryAction accessor method.
#===============================================================================

sub RecoveryAction{
    my ($self, $newval) = @_;
    $self->{RecoveryAction} = $newval if @_ > 1;
    return $self->{RecoveryAction};
}
#===============================================================================


#===============================================================================
#            OtherRecoveryAction accessor method.
#===============================================================================

sub OtherRecoveryAction{
    my ($self, $newval) = @_;
    $self->{OtherRecoveryAction} = $newval if @_ > 1;
    return $self->{OtherRecoveryAction};
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
