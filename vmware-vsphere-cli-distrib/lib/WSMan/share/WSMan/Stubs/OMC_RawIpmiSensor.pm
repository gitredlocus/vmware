package OMC_RawIpmiSensor;
use WSMan::Stubs::Initializable;
use strict;


@OMC_RawIpmiSensor::ISA = qw(_Initializable);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{DeviceID} = undef;
    $self->{EntityId} = undef;
    $self->{InstanceID} = undef;
    $self->{EntityDeviceId} = undef;
    $self->{SensorNumber} = undef;
    $self->{OwnerId} = undef;
    $self->{Channel} = undef;
    $self->{Lun} = undef;
    $self->{SensorType} = undef;
    $self->{CIMSensorType} = undef;
    $self->{OtherSensorType} = undef;
    $self->{SensorSpecificOffset} = undef;
    $self->{Description} = undef;
    $self->{PossibleStates} = undef;
    $self->{CurrentState} = undef;
    $self->{RawSensorState} = undef;
    $self->{EventReadingType} = undef;
    $self->{SensorDirection} = undef;
    $self->{RateUnit} = undef;
    $self->{BaseUnit} = undef;
    $self->{ModifierUnit} = undef;
    $self->{ModifierUnitUse} = undef;
    $self->{HysteresisSupport} = undef;
    $self->{Hysteresis} = undef;
    $self->{ThresholdAccessSupport} = undef;
    $self->{EventMessageSupport} = undef;
    $self->{RawReading} = undef;
    $self->{PollingInterval} = undef;
    $self->{ConvertedReading} = undef;
    $self->{NominalReading} = undef;
    $self->{NormalMax} = undef;
    $self->{NormalMin} = undef;
    $self->{MaxReadable} = undef;
    $self->{MinReadable} = undef;
    $self->{UpperNonRecoverableThreshold} = undef;
    $self->{UpperCriticalThreshold} = undef;
    $self->{UpperNonCriticalThreshold} = undef;
    $self->{LowerCriticalThreshold} = undef;
    $self->{LowerNonCriticalThreshold} = undef;
    $self->{LowerNonRecoverableThreshold} = undef;
    $self->{Name} = undef;
    $self->{ScanningDisabled} = undef;
    $self->{ReadingStateUnavailable} = undef;
    $self->{IsDiscrete} = undef;
    $self->{IsLinear} = undef;
    $self->{Status} = undef;
    $self->{SensorTypeString} = undef;
    $self->{SensorIdString} = undef;
    $self->{SensorDirectionString} = undef;
    $self->{BaseUnitString} = undef;
    $self->{ModifierUnitString} = undef;
    $self->{ThresholdsReadable} = undef;
    $self->{ThresholdsSettable} = undef;
    $self->{SupportedThresholds} = undef;
    $self->{EnabledThresholds} = undef;
    $self->{SettableThresholds} = undef;
    $self->{ReadableMask} = undef;
    $self->{SettableMask} = undef;
    $self->{EnabledState} = undef;
    $self->{HealthState} = undef;
    $self->{OperationalStatus} = undef;
    $self->{TimeOfLastStateChange} = undef;
    $self->{TimeOfPeakReading} = undef;
    $self->{TimeOfCurrentReading} = undef;
    $self->{MappedOemSensor} = undef;
    $self->{epr_name} = undef;  
    $self->{invokableMethods}->{RequestStateChange} = { input => ['RequestedState', 'TimeoutPeriod'], output => ['Job'] };
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
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
#            EntityId accessor method.
#===============================================================================

sub EntityId{
    my ($self, $newval) = @_;
    $self->{EntityId} = $newval if @_ > 1;
    return $self->{EntityId};
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
#            EntityDeviceId accessor method.
#===============================================================================

sub EntityDeviceId{
    my ($self, $newval) = @_;
    $self->{EntityDeviceId} = $newval if @_ > 1;
    return $self->{EntityDeviceId};
}
#===============================================================================


#===============================================================================
#            SensorNumber accessor method.
#===============================================================================

sub SensorNumber{
    my ($self, $newval) = @_;
    $self->{SensorNumber} = $newval if @_ > 1;
    return $self->{SensorNumber};
}
#===============================================================================


#===============================================================================
#            OwnerId accessor method.
#===============================================================================

sub OwnerId{
    my ($self, $newval) = @_;
    $self->{OwnerId} = $newval if @_ > 1;
    return $self->{OwnerId};
}
#===============================================================================


#===============================================================================
#            Channel accessor method.
#===============================================================================

sub Channel{
    my ($self, $newval) = @_;
    $self->{Channel} = $newval if @_ > 1;
    return $self->{Channel};
}
#===============================================================================


#===============================================================================
#            Lun accessor method.
#===============================================================================

sub Lun{
    my ($self, $newval) = @_;
    $self->{Lun} = $newval if @_ > 1;
    return $self->{Lun};
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
#            CIMSensorType accessor method.
#===============================================================================

sub CIMSensorType{
    my ($self, $newval) = @_;
    $self->{CIMSensorType} = $newval if @_ > 1;
    return $self->{CIMSensorType};
}
#===============================================================================


#===============================================================================
#            OtherSensorType accessor method.
#===============================================================================

sub OtherSensorType{
    my ($self, $newval) = @_;
    $self->{OtherSensorType} = $newval if @_ > 1;
    return $self->{OtherSensorType};
}
#===============================================================================


#===============================================================================
#            SensorSpecificOffset accessor method.
#===============================================================================

sub SensorSpecificOffset{
    my ($self, $newval) = @_;
    $self->{SensorSpecificOffset} = $newval if @_ > 1;
    return $self->{SensorSpecificOffset};
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
#            PossibleStates accessor method.
#===============================================================================

sub PossibleStates{
    my ($self, $newval) = @_;
    $self->{PossibleStates} = $newval if @_ > 1;
    return $self->{PossibleStates};
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
#            RawSensorState accessor method.
#===============================================================================

sub RawSensorState{
    my ($self, $newval) = @_;
    $self->{RawSensorState} = $newval if @_ > 1;
    return $self->{RawSensorState};
}
#===============================================================================


#===============================================================================
#            EventReadingType accessor method.
#===============================================================================

sub EventReadingType{
    my ($self, $newval) = @_;
    $self->{EventReadingType} = $newval if @_ > 1;
    return $self->{EventReadingType};
}
#===============================================================================


#===============================================================================
#            SensorDirection accessor method.
#===============================================================================

sub SensorDirection{
    my ($self, $newval) = @_;
    $self->{SensorDirection} = $newval if @_ > 1;
    return $self->{SensorDirection};
}
#===============================================================================


#===============================================================================
#            RateUnit accessor method.
#===============================================================================

sub RateUnit{
    my ($self, $newval) = @_;
    $self->{RateUnit} = $newval if @_ > 1;
    return $self->{RateUnit};
}
#===============================================================================


#===============================================================================
#            BaseUnit accessor method.
#===============================================================================

sub BaseUnit{
    my ($self, $newval) = @_;
    $self->{BaseUnit} = $newval if @_ > 1;
    return $self->{BaseUnit};
}
#===============================================================================


#===============================================================================
#            ModifierUnit accessor method.
#===============================================================================

sub ModifierUnit{
    my ($self, $newval) = @_;
    $self->{ModifierUnit} = $newval if @_ > 1;
    return $self->{ModifierUnit};
}
#===============================================================================


#===============================================================================
#            ModifierUnitUse accessor method.
#===============================================================================

sub ModifierUnitUse{
    my ($self, $newval) = @_;
    $self->{ModifierUnitUse} = $newval if @_ > 1;
    return $self->{ModifierUnitUse};
}
#===============================================================================


#===============================================================================
#            HysteresisSupport accessor method.
#===============================================================================

sub HysteresisSupport{
    my ($self, $newval) = @_;
    $self->{HysteresisSupport} = $newval if @_ > 1;
    return $self->{HysteresisSupport};
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
#            ThresholdAccessSupport accessor method.
#===============================================================================

sub ThresholdAccessSupport{
    my ($self, $newval) = @_;
    $self->{ThresholdAccessSupport} = $newval if @_ > 1;
    return $self->{ThresholdAccessSupport};
}
#===============================================================================


#===============================================================================
#            EventMessageSupport accessor method.
#===============================================================================

sub EventMessageSupport{
    my ($self, $newval) = @_;
    $self->{EventMessageSupport} = $newval if @_ > 1;
    return $self->{EventMessageSupport};
}
#===============================================================================


#===============================================================================
#            RawReading accessor method.
#===============================================================================

sub RawReading{
    my ($self, $newval) = @_;
    $self->{RawReading} = $newval if @_ > 1;
    return $self->{RawReading};
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
#            ConvertedReading accessor method.
#===============================================================================

sub ConvertedReading{
    my ($self, $newval) = @_;
    $self->{ConvertedReading} = $newval if @_ > 1;
    return $self->{ConvertedReading};
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
#            UpperNonRecoverableThreshold accessor method.
#===============================================================================

sub UpperNonRecoverableThreshold{
    my ($self, $newval) = @_;
    $self->{UpperNonRecoverableThreshold} = $newval if @_ > 1;
    return $self->{UpperNonRecoverableThreshold};
}
#===============================================================================


#===============================================================================
#            UpperCriticalThreshold accessor method.
#===============================================================================

sub UpperCriticalThreshold{
    my ($self, $newval) = @_;
    $self->{UpperCriticalThreshold} = $newval if @_ > 1;
    return $self->{UpperCriticalThreshold};
}
#===============================================================================


#===============================================================================
#            UpperNonCriticalThreshold accessor method.
#===============================================================================

sub UpperNonCriticalThreshold{
    my ($self, $newval) = @_;
    $self->{UpperNonCriticalThreshold} = $newval if @_ > 1;
    return $self->{UpperNonCriticalThreshold};
}
#===============================================================================


#===============================================================================
#            LowerCriticalThreshold accessor method.
#===============================================================================

sub LowerCriticalThreshold{
    my ($self, $newval) = @_;
    $self->{LowerCriticalThreshold} = $newval if @_ > 1;
    return $self->{LowerCriticalThreshold};
}
#===============================================================================


#===============================================================================
#            LowerNonCriticalThreshold accessor method.
#===============================================================================

sub LowerNonCriticalThreshold{
    my ($self, $newval) = @_;
    $self->{LowerNonCriticalThreshold} = $newval if @_ > 1;
    return $self->{LowerNonCriticalThreshold};
}
#===============================================================================


#===============================================================================
#            LowerNonRecoverableThreshold accessor method.
#===============================================================================

sub LowerNonRecoverableThreshold{
    my ($self, $newval) = @_;
    $self->{LowerNonRecoverableThreshold} = $newval if @_ > 1;
    return $self->{LowerNonRecoverableThreshold};
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
#            ScanningDisabled accessor method.
#===============================================================================

sub ScanningDisabled{
    my ($self, $newval) = @_;
    $self->{ScanningDisabled} = $newval if @_ > 1;
    return $self->{ScanningDisabled};
}
#===============================================================================


#===============================================================================
#            ReadingStateUnavailable accessor method.
#===============================================================================

sub ReadingStateUnavailable{
    my ($self, $newval) = @_;
    $self->{ReadingStateUnavailable} = $newval if @_ > 1;
    return $self->{ReadingStateUnavailable};
}
#===============================================================================


#===============================================================================
#            IsDiscrete accessor method.
#===============================================================================

sub IsDiscrete{
    my ($self, $newval) = @_;
    $self->{IsDiscrete} = $newval if @_ > 1;
    return $self->{IsDiscrete};
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
#            Status accessor method.
#===============================================================================

sub Status{
    my ($self, $newval) = @_;
    $self->{Status} = $newval if @_ > 1;
    return $self->{Status};
}
#===============================================================================


#===============================================================================
#            SensorTypeString accessor method.
#===============================================================================

sub SensorTypeString{
    my ($self, $newval) = @_;
    $self->{SensorTypeString} = $newval if @_ > 1;
    return $self->{SensorTypeString};
}
#===============================================================================


#===============================================================================
#            SensorIdString accessor method.
#===============================================================================

sub SensorIdString{
    my ($self, $newval) = @_;
    $self->{SensorIdString} = $newval if @_ > 1;
    return $self->{SensorIdString};
}
#===============================================================================


#===============================================================================
#            SensorDirectionString accessor method.
#===============================================================================

sub SensorDirectionString{
    my ($self, $newval) = @_;
    $self->{SensorDirectionString} = $newval if @_ > 1;
    return $self->{SensorDirectionString};
}
#===============================================================================


#===============================================================================
#            BaseUnitString accessor method.
#===============================================================================

sub BaseUnitString{
    my ($self, $newval) = @_;
    $self->{BaseUnitString} = $newval if @_ > 1;
    return $self->{BaseUnitString};
}
#===============================================================================


#===============================================================================
#            ModifierUnitString accessor method.
#===============================================================================

sub ModifierUnitString{
    my ($self, $newval) = @_;
    $self->{ModifierUnitString} = $newval if @_ > 1;
    return $self->{ModifierUnitString};
}
#===============================================================================


#===============================================================================
#            ThresholdsReadable accessor method.
#===============================================================================

sub ThresholdsReadable{
    my ($self, $newval) = @_;
    $self->{ThresholdsReadable} = $newval if @_ > 1;
    return $self->{ThresholdsReadable};
}
#===============================================================================


#===============================================================================
#            ThresholdsSettable accessor method.
#===============================================================================

sub ThresholdsSettable{
    my ($self, $newval) = @_;
    $self->{ThresholdsSettable} = $newval if @_ > 1;
    return $self->{ThresholdsSettable};
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
#            EnabledThresholds accessor method.
#===============================================================================

sub EnabledThresholds{
    my ($self, $newval) = @_;
    $self->{EnabledThresholds} = $newval if @_ > 1;
    return $self->{EnabledThresholds};
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
#            ReadableMask accessor method.
#===============================================================================

sub ReadableMask{
    my ($self, $newval) = @_;
    $self->{ReadableMask} = $newval if @_ > 1;
    return $self->{ReadableMask};
}
#===============================================================================


#===============================================================================
#            SettableMask accessor method.
#===============================================================================

sub SettableMask{
    my ($self, $newval) = @_;
    $self->{SettableMask} = $newval if @_ > 1;
    return $self->{SettableMask};
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
#            OperationalStatus accessor method.
#===============================================================================

sub OperationalStatus{
    my ($self, $newval) = @_;
    $self->{OperationalStatus} = $newval if @_ > 1;
    return $self->{OperationalStatus};
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
#            TimeOfPeakReading accessor method.
#===============================================================================

sub TimeOfPeakReading{
    my ($self, $newval) = @_;
    $self->{TimeOfPeakReading} = $newval if @_ > 1;
    return $self->{TimeOfPeakReading};
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
#            MappedOemSensor accessor method.
#===============================================================================

sub MappedOemSensor{
    my ($self, $newval) = @_;
    $self->{MappedOemSensor} = $newval if @_ > 1;
    return $self->{MappedOemSensor};
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
