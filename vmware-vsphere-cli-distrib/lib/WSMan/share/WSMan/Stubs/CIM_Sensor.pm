package CIM_Sensor;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_LogicalDevice;
use strict;


@CIM_Sensor::ISA = qw(_Initializable CIM_LogicalDevice);


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
    $self->{SensorType} = undef;
    $self->{OtherSensorTypeDescription} = undef;
    $self->{PossibleStates} = undef;
    $self->{CurrentState} = undef;
    $self->{PollingInterval} = undef;
    $self->{SensorContext} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
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
#            OtherSensorTypeDescription accessor method.
#===============================================================================

sub OtherSensorTypeDescription{
    my ($self, $newval) = @_;
    $self->{OtherSensorTypeDescription} = $newval if @_ > 1;
    return $self->{OtherSensorTypeDescription};
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
#            PollingInterval accessor method.
#===============================================================================

sub PollingInterval{
    my ($self, $newval) = @_;
    $self->{PollingInterval} = $newval if @_ > 1;
    return $self->{PollingInterval};
}
#===============================================================================


#===============================================================================
#            SensorContext accessor method.
#===============================================================================

sub SensorContext{
    my ($self, $newval) = @_;
    $self->{SensorContext} = $newval if @_ > 1;
    return $self->{SensorContext};
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
