package OMC_NumericSensor;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_NumericSensor;
use strict;


@OMC_NumericSensor::ISA = qw(_Initializable CIM_NumericSensor);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_NumericSensor::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{TimeOfPeakReading} = undef;
    $self->{BaseUnits} = undef;
    $self->{Caption} = undef;
    $self->{CreationClassName} = undef;
    $self->{CurrentReading} = undef;
    $self->{CurrentState} = undef;
    $self->{DeviceID} = undef;
    $self->{ElementName} = undef;
    $self->{EnabledDefault} = undef;
    $self->{EnabledState} = undef;
    $self->{EnabledThresholds} = undef;
    $self->{HealthState} = undef;
    $self->{Hysteresis} = undef;
    $self->{IpmiSensorType} = undef;
    $self->{IsLinear} = undef;
    $self->{LowerThresholdCritical} = undef;
    $self->{LowerThresholdNonCritical} = undef;
    $self->{MaxReadable} = undef;
    $self->{MinReadable} = undef;
    $self->{MonitoredDeviceId} = undef;
    $self->{Name} = undef;
    $self->{NominalReading} = undef;
    $self->{NormalMax} = undef;
    $self->{NormalMin} = undef;
    $self->{OperationalStatus} = undef;
    $self->{PollingInterval} = undef;
    $self->{PossibleStates} = undef;
    $self->{RateUnits} = undef;
    $self->{RequestedState} = undef;
    $self->{SensorType} = undef;
    $self->{SettableThresholds} = undef;
    $self->{SupportedThresholds} = undef;
    $self->{SystemCreationClassName} = undef;
    $self->{SystemName} = undef;
    $self->{TransitioningToState} = undef;
    $self->{UnitModifier} = undef;
    $self->{UpperThresholdCritical} = undef;
    $self->{UpperThresholdNonCritical} = undef;
    $self->{ValueFormulation} = undef;
    $self->{TimeOfCurrentReading} = undef;
    $self->{epr_name} = undef;  
    $self->{invokableMethods}->{Reset} = { input => [], output => [] };
    $self->{invokableMethods}->{GetManufacturerID} = { input => [], output => ['ManufacturerID', 'Format'] };
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            TimeOfPeakReading accessor method.
#===============================================================================

sub TimeOfPeakReading{
    my ($self, $newval) = @_;
    $self->{TimeOfPeakReading} = $newval if @_ > 1;
    return $self->{TimeOfPeakReading};
}
#===============================================================================


#===============================================================================
#            BaseUnits accessor method.
#===============================================================================

sub BaseUnits{
    my ($self, $newval) = @_;
    $self->{BaseUnits} = $newval if @_ > 1;
    return $self->{BaseUnits};
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
#            CurrentReading accessor method.
#===============================================================================

sub CurrentReading{
    my ($self, $newval) = @_;
    $self->{CurrentReading} = $newval if @_ > 1;
    return $self->{CurrentReading};
}
#===============================================================================


#===============================================================================
#            CurrentState accessor method.
#===============================================================================

sub CurrentState{
    my ($self, $newval) = @_;
    $self->{CurrentState} = $newval if @_ > 1;
    return $self->{CurrentState};
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
#            EnabledThresholds accessor method.
#===============================================================================

sub EnabledThresholds{
    my ($self, $newval) = @_;
    $self->{EnabledThresholds} = $newval if @_ > 1;
    return $self->{EnabledThresholds};
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
#            Hysteresis accessor method.
#===============================================================================

sub Hysteresis{
    my ($self, $newval) = @_;
    $self->{Hysteresis} = $newval if @_ > 1;
    return $self->{Hysteresis};
}
#===============================================================================


#===============================================================================
#            IpmiSensorType accessor method.
#===============================================================================

sub IpmiSensorType{
    my ($self, $newval) = @_;
    $self->{IpmiSensorType} = $newval if @_ > 1;
    return $self->{IpmiSensorType};
}
#===============================================================================


#===============================================================================
#            IsLinear accessor method.
#===============================================================================

sub IsLinear{
    my ($self, $newval) = @_;
    $self->{IsLinear} = $newval if @_ > 1;
    return $self->{IsLinear};
}
#===============================================================================


#===============================================================================
#            LowerThresholdCritical accessor method.
#===============================================================================

sub LowerThresholdCritical{
    my ($self, $newval) = @_;
    $self->{LowerThresholdCritical} = $newval if @_ > 1;
    return $self->{LowerThresholdCritical};
}
#===============================================================================


#===============================================================================
#            LowerThresholdNonCritical accessor method.
#===============================================================================

sub LowerThresholdNonCritical{
    my ($self, $newval) = @_;
    $self->{LowerThresholdNonCritical} = $newval if @_ > 1;
    return $self->{LowerThresholdNonCritical};
}
#===============================================================================


#===============================================================================
#            MaxReadable accessor method.
#===============================================================================

sub MaxReadable{
    my ($self, $newval) = @_;
    $self->{MaxReadable} = $newval if @_ > 1;
    return $self->{MaxReadable};
}
#===============================================================================


#===============================================================================
#            MinReadable accessor method.
#===============================================================================

sub MinReadable{
    my ($self, $newval) = @_;
    $self->{MinReadable} = $newval if @_ > 1;
    return $self->{MinReadable};
}
#===============================================================================


#===============================================================================
#            MonitoredDeviceId accessor method.
#===============================================================================

sub MonitoredDeviceId{
    my ($self, $newval) = @_;
    $self->{MonitoredDeviceId} = $newval if @_ > 1;
    return $self->{MonitoredDeviceId};
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
#            NominalReading accessor method.
#===============================================================================

sub NominalReading{
    my ($self, $newval) = @_;
    $self->{NominalReading} = $newval if @_ > 1;
    return $self->{NominalReading};
}
#===============================================================================


#===============================================================================
#            NormalMax accessor method.
#===============================================================================

sub NormalMax{
    my ($self, $newval) = @_;
    $self->{NormalMax} = $newval if @_ > 1;
    return $self->{NormalMax};
}
#===============================================================================


#===============================================================================
#            NormalMin accessor method.
#===============================================================================

sub NormalMin{
    my ($self, $newval) = @_;
    $self->{NormalMin} = $newval if @_ > 1;
    return $self->{NormalMin};
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
#            PollingInterval accessor method.
#===============================================================================

sub PollingInterval{
    my ($self, $newval) = @_;
    $self->{PollingInterval} = $newval if @_ > 1;
    return $self->{PollingInterval};
}
#===============================================================================


#===============================================================================
#            PossibleStates accessor method.
#===============================================================================

sub PossibleStates{
    my ($self, $newval) = @_;
    $self->{PossibleStates} = $newval if @_ > 1;
    return $self->{PossibleStates};
}
#===============================================================================


#===============================================================================
#            RateUnits accessor method.
#===============================================================================

sub RateUnits{
    my ($self, $newval) = @_;
    $self->{RateUnits} = $newval if @_ > 1;
    return $self->{RateUnits};
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
#            SensorType accessor method.
#===============================================================================

sub SensorType{
    my ($self, $newval) = @_;
    $self->{SensorType} = $newval if @_ > 1;
    return $self->{SensorType};
}
#===============================================================================


#===============================================================================
#            SettableThresholds accessor method.
#===============================================================================

sub SettableThresholds{
    my ($self, $newval) = @_;
    $self->{SettableThresholds} = $newval if @_ > 1;
    return $self->{SettableThresholds};
}
#===============================================================================


#===============================================================================
#            SupportedThresholds accessor method.
#===============================================================================

sub SupportedThresholds{
    my ($self, $newval) = @_;
    $self->{SupportedThresholds} = $newval if @_ > 1;
    return $self->{SupportedThresholds};
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
#            UnitModifier accessor method.
#===============================================================================

sub UnitModifier{
    my ($self, $newval) = @_;
    $self->{UnitModifier} = $newval if @_ > 1;
    return $self->{UnitModifier};
}
#===============================================================================


#===============================================================================
#            UpperThresholdCritical accessor method.
#===============================================================================

sub UpperThresholdCritical{
    my ($self, $newval) = @_;
    $self->{UpperThresholdCritical} = $newval if @_ > 1;
    return $self->{UpperThresholdCritical};
}
#===============================================================================


#===============================================================================
#            UpperThresholdNonCritical accessor method.
#===============================================================================

sub UpperThresholdNonCritical{
    my ($self, $newval) = @_;
    $self->{UpperThresholdNonCritical} = $newval if @_ > 1;
    return $self->{UpperThresholdNonCritical};
}
#===============================================================================


#===============================================================================
#            ValueFormulation accessor method.
#===============================================================================

sub ValueFormulation{
    my ($self, $newval) = @_;
    $self->{ValueFormulation} = $newval if @_ > 1;
    return $self->{ValueFormulation};
}
#===============================================================================


#===============================================================================
#            TimeOfCurrentReading accessor method.
#===============================================================================

sub TimeOfCurrentReading{
    my ($self, $newval) = @_;
    $self->{TimeOfCurrentReading} = $newval if @_ > 1;
    return $self->{TimeOfCurrentReading};
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
