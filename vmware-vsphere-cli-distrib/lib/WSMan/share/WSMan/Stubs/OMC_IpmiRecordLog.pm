package OMC_IpmiRecordLog;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_RecordLog;
use strict;


@OMC_IpmiRecordLog::ISA = qw(_Initializable CIM_RecordLog);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_RecordLog::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{AddTimeStamp} = undef;
    $self->{Caption} = undef;
    $self->{CurrentNumberOfRecords} = undef;
    $self->{ElementName} = undef;
    $self->{EnabledDefault} = undef;
    $self->{EnabledState} = undef;
    $self->{EraseTimeStamp} = undef;
    $self->{Flags} = undef;
    $self->{HealthState} = undef;
    $self->{InstanceID} = undef;
    $self->{LogState} = undef;
    $self->{MaxNumberOfRecords} = undef;
    $self->{MemoryHealthStatus} = undef;
    $self->{MemoryOperationalStatus} = undef;
    $self->{Name} = undef;
    $self->{OperationalStatus} = undef;
    $self->{OverFlowFlag} = undef;
    $self->{OverwritePolicy} = undef;
    $self->{RequestedState} = undef;
    $self->{TransitioningToState} = undef;
    $self->{Version} = undef;
    $self->{epr_name} = undef;  
    $self->{invokableMethods}->{ClearLog} = { input => [], output => [] };
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            AddTimeStamp accessor method.
#===============================================================================

sub AddTimeStamp{
    my ($self, $newval) = @_;
    $self->{AddTimeStamp} = $newval if @_ > 1;
    return $self->{AddTimeStamp};
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
#            CurrentNumberOfRecords accessor method.
#===============================================================================

sub CurrentNumberOfRecords{
    my ($self, $newval) = @_;
    $self->{CurrentNumberOfRecords} = $newval if @_ > 1;
    return $self->{CurrentNumberOfRecords};
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
#            EraseTimeStamp accessor method.
#===============================================================================

sub EraseTimeStamp{
    my ($self, $newval) = @_;
    $self->{EraseTimeStamp} = $newval if @_ > 1;
    return $self->{EraseTimeStamp};
}
#===============================================================================


#===============================================================================
#            Flags accessor method.
#===============================================================================

sub Flags{
    my ($self, $newval) = @_;
    $self->{Flags} = $newval if @_ > 1;
    return $self->{Flags};
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
#            LogState accessor method.
#===============================================================================

sub LogState{
    my ($self, $newval) = @_;
    $self->{LogState} = $newval if @_ > 1;
    return $self->{LogState};
}
#===============================================================================


#===============================================================================
#            MaxNumberOfRecords accessor method.
#===============================================================================

sub MaxNumberOfRecords{
    my ($self, $newval) = @_;
    $self->{MaxNumberOfRecords} = $newval if @_ > 1;
    return $self->{MaxNumberOfRecords};
}
#===============================================================================


#===============================================================================
#            MemoryHealthStatus accessor method.
#===============================================================================

sub MemoryHealthStatus{
    my ($self, $newval) = @_;
    $self->{MemoryHealthStatus} = $newval if @_ > 1;
    return $self->{MemoryHealthStatus};
}
#===============================================================================


#===============================================================================
#            MemoryOperationalStatus accessor method.
#===============================================================================

sub MemoryOperationalStatus{
    my ($self, $newval) = @_;
    $self->{MemoryOperationalStatus} = $newval if @_ > 1;
    return $self->{MemoryOperationalStatus};
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
#            OperationalStatus accessor method.
#===============================================================================

sub OperationalStatus{
    my ($self, $newval) = @_;
    $self->{OperationalStatus} = $newval if @_ > 1;
    return $self->{OperationalStatus};
}
#===============================================================================


#===============================================================================
#            OverFlowFlag accessor method.
#===============================================================================

sub OverFlowFlag{
    my ($self, $newval) = @_;
    $self->{OverFlowFlag} = $newval if @_ > 1;
    return $self->{OverFlowFlag};
}
#===============================================================================


#===============================================================================
#            OverwritePolicy accessor method.
#===============================================================================

sub OverwritePolicy{
    my ($self, $newval) = @_;
    $self->{OverwritePolicy} = $newval if @_ > 1;
    return $self->{OverwritePolicy};
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
#            Version accessor method.
#===============================================================================

sub Version{
    my ($self, $newval) = @_;
    $self->{Version} = $newval if @_ > 1;
    return $self->{Version};
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
