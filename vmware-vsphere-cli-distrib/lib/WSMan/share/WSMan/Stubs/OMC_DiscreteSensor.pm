package OMC_DiscreteSensor;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_Sensor;
use strict;


@OMC_DiscreteSensor::ISA = qw(_Initializable CIM_Sensor);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_Sensor::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{Caption} = undef;
    $self->{CreationClassName} = undef;
    $self->{CurrentState} = undef;
    $self->{DeviceID} = undef;
    $self->{ElementName} = undef;
    $self->{EnabledDefault} = undef;
    $self->{EnabledState} = undef;
    $self->{HealthState} = undef;
    $self->{IpmiSensorType} = undef;
    $self->{MonitoredDeviceId} = undef;
    $self->{Name} = undef;
    $self->{OperationalStatus} = undef;
    $self->{OtherSensorTypeDescription} = undef;
    $self->{PollingInterval} = undef;
    $self->{PossibleStates} = undef;
    $self->{RequestedState} = undef;
    $self->{SensorType} = undef;
    $self->{StatusDescriptions} = undef;
    $self->{SystemCreationClassName} = undef;
    $self->{SystemName} = undef;
    $self->{TransitioningToState} = undef;
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
#            HealthState accessor method.
#===============================================================================

sub HealthState{
    my ($self, $newval) = @_;
    $self->{HealthState} = $newval if @_ > 1;
    return $self->{HealthState};
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
#            OperationalStatus accessor method.
#===============================================================================

sub OperationalStatus{
    my ($self, $newval) = @_;
    $self->{OperationalStatus} = $newval if @_ > 1;
    return $self->{OperationalStatus};
}
#===============================================================================


#===============================================================================
#            OtherSensorTypeDescription accessor method.
#===============================================================================

sub OtherSensorTypeDescription{
    my ($self, $newval) = @_;
    $self->{OtherSensorTypeDescription} = $newval if @_ > 1;
    return $self->{OtherSensorTypeDescription};
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
#            StatusDescriptions accessor method.
#===============================================================================

sub StatusDescriptions{
    my ($self, $newval) = @_;
    $self->{StatusDescriptions} = $newval if @_ > 1;
    return $self->{StatusDescriptions};
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
