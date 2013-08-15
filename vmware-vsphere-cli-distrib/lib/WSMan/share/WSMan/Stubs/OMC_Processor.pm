package OMC_Processor;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_Processor;
use strict;


@OMC_Processor::ISA = qw(_Initializable CIM_Processor);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_Processor::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{CPUStatus} = undef;
    $self->{Caption} = undef;
    $self->{CreationClassName} = undef;
    $self->{CurrentClockSpeed} = undef;
    $self->{Description} = undef;
    $self->{DeviceID} = undef;
    $self->{ElementName} = undef;
    $self->{EnabledDefault} = undef;
    $self->{EnabledState} = undef;
    $self->{ExternalBusClockSpeed} = undef;
    $self->{Family} = undef;
    $self->{HealthState} = undef;
    $self->{MaxClockSpeed} = undef;
    $self->{NumberOfEnabledCores} = undef;
    $self->{OperationalStatus} = undef;
    $self->{RequestedState} = undef;
    $self->{SystemCreationClassName} = undef;
    $self->{SystemName} = undef;
    $self->{TransitioningToState} = undef;
    $self->{UpgradeMethod} = undef;
    $self->{Stepping} = undef;
    $self->{ModelName} = undef;
    $self->{DataWidth} = undef;
    $self->{OtherIdentifyingInfo} = undef;
    $self->{IdentifyingDescriptions} = undef;
    $self->{Characteristics} = undef;
    $self->{EnabledProcessorCharacteristics} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            CPUStatus accessor method.
#===============================================================================

sub CPUStatus{
    my ($self, $newval) = @_;
    $self->{CPUStatus} = $newval if @_ > 1;
    return $self->{CPUStatus};
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
#            CreationClassName accessor method.
#===============================================================================

sub CreationClassName{
    my ($self, $newval) = @_;
    $self->{CreationClassName} = $newval if @_ > 1;
    return $self->{CreationClassName};
}
#===============================================================================


#===============================================================================
#            CurrentClockSpeed accessor method.
#===============================================================================

sub CurrentClockSpeed{
    my ($self, $newval) = @_;
    $self->{CurrentClockSpeed} = $newval if @_ > 1;
    return $self->{CurrentClockSpeed};
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
#            ExternalBusClockSpeed accessor method.
#===============================================================================

sub ExternalBusClockSpeed{
    my ($self, $newval) = @_;
    $self->{ExternalBusClockSpeed} = $newval if @_ > 1;
    return $self->{ExternalBusClockSpeed};
}
#===============================================================================


#===============================================================================
#            Family accessor method.
#===============================================================================

sub Family{
    my ($self, $newval) = @_;
    $self->{Family} = $newval if @_ > 1;
    return $self->{Family};
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
#            MaxClockSpeed accessor method.
#===============================================================================

sub MaxClockSpeed{
    my ($self, $newval) = @_;
    $self->{MaxClockSpeed} = $newval if @_ > 1;
    return $self->{MaxClockSpeed};
}
#===============================================================================


#===============================================================================
#            NumberOfEnabledCores accessor method.
#===============================================================================

sub NumberOfEnabledCores{
    my ($self, $newval) = @_;
    $self->{NumberOfEnabledCores} = $newval if @_ > 1;
    return $self->{NumberOfEnabledCores};
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
#            UpgradeMethod accessor method.
#===============================================================================

sub UpgradeMethod{
    my ($self, $newval) = @_;
    $self->{UpgradeMethod} = $newval if @_ > 1;
    return $self->{UpgradeMethod};
}
#===============================================================================


#===============================================================================
#            Stepping accessor method.
#===============================================================================

sub Stepping{
    my ($self, $newval) = @_;
    $self->{Stepping} = $newval if @_ > 1;
    return $self->{Stepping};
}
#===============================================================================


#===============================================================================
#            ModelName accessor method.
#===============================================================================

sub ModelName{
    my ($self, $newval) = @_;
    $self->{ModelName} = $newval if @_ > 1;
    return $self->{ModelName};
}
#===============================================================================


#===============================================================================
#            DataWidth accessor method.
#===============================================================================

sub DataWidth{
    my ($self, $newval) = @_;
    $self->{DataWidth} = $newval if @_ > 1;
    return $self->{DataWidth};
}
#===============================================================================


#===============================================================================
#            OtherIdentifyingInfo accessor method.
#===============================================================================

sub OtherIdentifyingInfo{
    my ($self, $newval) = @_;
    $self->{OtherIdentifyingInfo} = $newval if @_ > 1;
    return $self->{OtherIdentifyingInfo};
}
#===============================================================================


#===============================================================================
#            IdentifyingDescriptions accessor method.
#===============================================================================

sub IdentifyingDescriptions{
    my ($self, $newval) = @_;
    $self->{IdentifyingDescriptions} = $newval if @_ > 1;
    return $self->{IdentifyingDescriptions};
}
#===============================================================================


#===============================================================================
#            Characteristics accessor method.
#===============================================================================

sub Characteristics{
    my ($self, $newval) = @_;
    $self->{Characteristics} = $newval if @_ > 1;
    return $self->{Characteristics};
}
#===============================================================================


#===============================================================================
#            EnabledProcessorCharacteristics accessor method.
#===============================================================================

sub EnabledProcessorCharacteristics{
    my ($self, $newval) = @_;
    $self->{EnabledProcessorCharacteristics} = $newval if @_ > 1;
    return $self->{EnabledProcessorCharacteristics};
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
