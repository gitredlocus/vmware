package CIM_NumericSensor;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_Sensor;
use strict;


@CIM_NumericSensor::ISA = qw(_Initializable CIM_Sensor);


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
    $self->{BaseUnits} = undef;
    $self->{UnitModifier} = undef;
    $self->{RateUnits} = undef;
    $self->{CurrentReading} = undef;
    $self->{NominalReading} = undef;
    $self->{NormalMax} = undef;
    $self->{NormalMin} = undef;
    $self->{MaxReadable} = undef;
    $self->{MinReadable} = undef;
    $self->{Resolution} = undef;
    $self->{Tolerance} = undef;
    $self->{Accuracy} = undef;
    $self->{IsLinear} = undef;
    $self->{Hysteresis} = undef;
    $self->{LowerThresholdNonCritical} = undef;
    $self->{UpperThresholdNonCritical} = undef;
    $self->{LowerThresholdCritical} = undef;
    $self->{UpperThresholdCritical} = undef;
    $self->{LowerThresholdFatal} = undef;
    $self->{UpperThresholdFatal} = undef;
    $self->{SupportedThresholds} = undef;
    $self->{EnabledThresholds} = undef;
    $self->{SettableThresholds} = undef;
    $self->{ProgrammaticAccuracy} = undef;
    $self->{AccuracyUnits} = undef;
    $self->{ValueFormulation} = undef;
    $self->{epr_name} = undef;  
    $self->{invokableMethods}->{RestoreDefaultThresholds} = { input => [], output => [] };
    $self->{invokableMethods}->{GetNonLinearFactors} = { input => ['SensorReading'], output => ['Accuracy', 'Resolution', 'Tolerance', 'Hysteresis'] };
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
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
#            UnitModifier accessor method.
#===============================================================================

sub UnitModifier{
    my ($self, $newval) = @_;
    $self->{UnitModifier} = $newval if @_ > 1;
    return $self->{UnitModifier};
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
#            CurrentReading accessor method.
#===============================================================================

sub CurrentReading{
    my ($self, $newval) = @_;
    $self->{CurrentReading} = $newval if @_ > 1;
    return $self->{CurrentReading};
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
#            Resolution accessor method.
#===============================================================================

sub Resolution{
    my ($self, $newval) = @_;
    $self->{Resolution} = $newval if @_ > 1;
    return $self->{Resolution};
}
#===============================================================================


#===============================================================================
#            Tolerance accessor method.
#===============================================================================

sub Tolerance{
    my ($self, $newval) = @_;
    $self->{Tolerance} = $newval if @_ > 1;
    return $self->{Tolerance};
}
#===============================================================================


#===============================================================================
#            Accuracy accessor method.
#===============================================================================

sub Accuracy{
    my ($self, $newval) = @_;
    $self->{Accuracy} = $newval if @_ > 1;
    return $self->{Accuracy};
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
#            Hysteresis accessor method.
#===============================================================================

sub Hysteresis{
    my ($self, $newval) = @_;
    $self->{Hysteresis} = $newval if @_ > 1;
    return $self->{Hysteresis};
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
#            UpperThresholdNonCritical accessor method.
#===============================================================================

sub UpperThresholdNonCritical{
    my ($self, $newval) = @_;
    $self->{UpperThresholdNonCritical} = $newval if @_ > 1;
    return $self->{UpperThresholdNonCritical};
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
#            UpperThresholdCritical accessor method.
#===============================================================================

sub UpperThresholdCritical{
    my ($self, $newval) = @_;
    $self->{UpperThresholdCritical} = $newval if @_ > 1;
    return $self->{UpperThresholdCritical};
}
#===============================================================================


#===============================================================================
#            LowerThresholdFatal accessor method.
#===============================================================================

sub LowerThresholdFatal{
    my ($self, $newval) = @_;
    $self->{LowerThresholdFatal} = $newval if @_ > 1;
    return $self->{LowerThresholdFatal};
}
#===============================================================================


#===============================================================================
#            UpperThresholdFatal accessor method.
#===============================================================================

sub UpperThresholdFatal{
    my ($self, $newval) = @_;
    $self->{UpperThresholdFatal} = $newval if @_ > 1;
    return $self->{UpperThresholdFatal};
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
#            ProgrammaticAccuracy accessor method.
#===============================================================================

sub ProgrammaticAccuracy{
    my ($self, $newval) = @_;
    $self->{ProgrammaticAccuracy} = $newval if @_ > 1;
    return $self->{ProgrammaticAccuracy};
}
#===============================================================================


#===============================================================================
#            AccuracyUnits accessor method.
#===============================================================================

sub AccuracyUnits{
    my ($self, $newval) = @_;
    $self->{AccuracyUnits} = $newval if @_ > 1;
    return $self->{AccuracyUnits};
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
#           epr_name accessor method.
#===============================================================================

sub epr_name{
    my ($self, $newval) = @_;
    $self->{epr_name} = $newval if @_ > 1;
    return $self->{epr_name};
}
#===============================================================================


1;
