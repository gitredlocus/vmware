package VMware_ConcreteJob;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_ConcreteJob;
use strict;


@VMware_ConcreteJob::ISA = qw(_Initializable CIM_ConcreteJob);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_ConcreteJob::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{InstanceID} = undef;
    $self->{Name} = undef;
    $self->{Description} = undef;
    $self->{Caption} = undef;
    $self->{ElementName} = undef;
    $self->{JobState} = undef;
    $self->{HealthState} = undef;
    $self->{OperationalStatus} = undef;
    $self->{JobStatus} = undef;
    $self->{TimeSubmitted} = undef;
    $self->{StartTime} = undef;
    $self->{ElapsedTime} = undef;
    $self->{PercentComplete} = undef;
    $self->{DeleteOnCompletion} = undef;
    $self->{ErrorCode} = undef;
    $self->{ErrorDescription} = undef;
    $self->{TimeOfLastStateChange} = undef;
    $self->{TimeBeforeRemoval} = undef;
    $self->{epr_name} = undef;  
    $self->{invokableMethods}->{GetError} = { input => [], output => [] };
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
#            Description accessor method.
#===============================================================================

sub Description{
    my ($self, $newval) = @_;
    $self->{Description} = $newval if @_ > 1;
    return $self->{Description};
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
#            JobState accessor method.
#===============================================================================

sub JobState{
    my ($self, $newval) = @_;
    $self->{JobState} = $newval if @_ > 1;
    return $self->{JobState};
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
#            OperationalStatus accessor method.
#===============================================================================

sub OperationalStatus{
    my ($self, $newval) = @_;
    $self->{OperationalStatus} = $newval if @_ > 1;
    return $self->{OperationalStatus};
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
#            TimeOfLastStateChange accessor method.
#===============================================================================

sub TimeOfLastStateChange{
    my ($self, $newval) = @_;
    $self->{TimeOfLastStateChange} = $newval if @_ > 1;
    return $self->{TimeOfLastStateChange};
}
#===============================================================================


#===============================================================================
#            TimeBeforeRemoval accessor method.
#===============================================================================

sub TimeBeforeRemoval{
    my ($self, $newval) = @_;
    $self->{TimeBeforeRemoval} = $newval if @_ > 1;
    return $self->{TimeBeforeRemoval};
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
