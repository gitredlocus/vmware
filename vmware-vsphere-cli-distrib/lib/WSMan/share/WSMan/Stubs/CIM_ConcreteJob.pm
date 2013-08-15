package CIM_ConcreteJob;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_Job;
use strict;


@CIM_ConcreteJob::ISA = qw(_Initializable CIM_Job);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_Job::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{InstanceID} = undef;
    $self->{Name} = undef;
    $self->{JobState} = undef;
    $self->{TimeOfLastStateChange} = undef;
    $self->{TimeBeforeRemoval} = undef;
    $self->{epr_name} = undef;  
    $self->{invokableMethods}->{RequestStateChange} = { input => ['RequestedState', 'TimeoutPeriod'], output => [] };
    $self->{invokableMethods}->{GetError} = { input => [], output => ['Error'] };
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
#            JobState accessor method.
#===============================================================================

sub JobState{
    my ($self, $newval) = @_;
    $self->{JobState} = $newval if @_ > 1;
    return $self->{JobState};
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
