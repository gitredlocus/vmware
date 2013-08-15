package CIM_PowerSupply;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_PowerSource;
use strict;


@CIM_PowerSupply::ISA = qw(_Initializable CIM_PowerSource);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_PowerSource::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{IsSwitchingSupply} = undef;
    $self->{Range1InputVoltageLow} = undef;
    $self->{Range1InputVoltageHigh} = undef;
    $self->{Range1InputFrequencyLow} = undef;
    $self->{Range1InputFrequencyHigh} = undef;
    $self->{Range2InputVoltageLow} = undef;
    $self->{Range2InputVoltageHigh} = undef;
    $self->{Range2InputFrequencyLow} = undef;
    $self->{Range2InputFrequencyHigh} = undef;
    $self->{ActiveInputVoltage} = undef;
    $self->{TypeOfRangeSwitching} = undef;
    $self->{TotalOutputPower} = undef;
    $self->{Range1MaxOutputPower} = undef;
    $self->{Range2MaxOutputPower} = undef;
    $self->{OutputPowerUnits} = undef;
    $self->{Range1MaxInputPower} = undef;
    $self->{Range2MaxInputPower} = undef;
    $self->{InputPowerUnits} = undef;
    $self->{IsACInput} = undef;
    $self->{NumberOfPhasesUtilized} = undef;
    $self->{NominalPhaseWiring} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            IsSwitchingSupply accessor method.
#===============================================================================

sub IsSwitchingSupply{
    my ($self, $newval) = @_;
    $self->{IsSwitchingSupply} = $newval if @_ > 1;
    return $self->{IsSwitchingSupply};
}
#===============================================================================


#===============================================================================
#            Range1InputVoltageLow accessor method.
#===============================================================================

sub Range1InputVoltageLow{
    my ($self, $newval) = @_;
    $self->{Range1InputVoltageLow} = $newval if @_ > 1;
    return $self->{Range1InputVoltageLow};
}
#===============================================================================


#===============================================================================
#            Range1InputVoltageHigh accessor method.
#===============================================================================

sub Range1InputVoltageHigh{
    my ($self, $newval) = @_;
    $self->{Range1InputVoltageHigh} = $newval if @_ > 1;
    return $self->{Range1InputVoltageHigh};
}
#===============================================================================


#===============================================================================
#            Range1InputFrequencyLow accessor method.
#===============================================================================

sub Range1InputFrequencyLow{
    my ($self, $newval) = @_;
    $self->{Range1InputFrequencyLow} = $newval if @_ > 1;
    return $self->{Range1InputFrequencyLow};
}
#===============================================================================


#===============================================================================
#            Range1InputFrequencyHigh accessor method.
#===============================================================================

sub Range1InputFrequencyHigh{
    my ($self, $newval) = @_;
    $self->{Range1InputFrequencyHigh} = $newval if @_ > 1;
    return $self->{Range1InputFrequencyHigh};
}
#===============================================================================


#===============================================================================
#            Range2InputVoltageLow accessor method.
#===============================================================================

sub Range2InputVoltageLow{
    my ($self, $newval) = @_;
    $self->{Range2InputVoltageLow} = $newval if @_ > 1;
    return $self->{Range2InputVoltageLow};
}
#===============================================================================


#===============================================================================
#            Range2InputVoltageHigh accessor method.
#===============================================================================

sub Range2InputVoltageHigh{
    my ($self, $newval) = @_;
    $self->{Range2InputVoltageHigh} = $newval if @_ > 1;
    return $self->{Range2InputVoltageHigh};
}
#===============================================================================


#===============================================================================
#            Range2InputFrequencyLow accessor method.
#===============================================================================

sub Range2InputFrequencyLow{
    my ($self, $newval) = @_;
    $self->{Range2InputFrequencyLow} = $newval if @_ > 1;
    return $self->{Range2InputFrequencyLow};
}
#===============================================================================


#===============================================================================
#            Range2InputFrequencyHigh accessor method.
#===============================================================================

sub Range2InputFrequencyHigh{
    my ($self, $newval) = @_;
    $self->{Range2InputFrequencyHigh} = $newval if @_ > 1;
    return $self->{Range2InputFrequencyHigh};
}
#===============================================================================


#===============================================================================
#            ActiveInputVoltage accessor method.
#===============================================================================

sub ActiveInputVoltage{
    my ($self, $newval) = @_;
    $self->{ActiveInputVoltage} = $newval if @_ > 1;
    return $self->{ActiveInputVoltage};
}
#===============================================================================


#===============================================================================
#            TypeOfRangeSwitching accessor method.
#===============================================================================

sub TypeOfRangeSwitching{
    my ($self, $newval) = @_;
    $self->{TypeOfRangeSwitching} = $newval if @_ > 1;
    return $self->{TypeOfRangeSwitching};
}
#===============================================================================


#===============================================================================
#            TotalOutputPower accessor method.
#===============================================================================

sub TotalOutputPower{
    my ($self, $newval) = @_;
    $self->{TotalOutputPower} = $newval if @_ > 1;
    return $self->{TotalOutputPower};
}
#===============================================================================


#===============================================================================
#            Range1MaxOutputPower accessor method.
#===============================================================================

sub Range1MaxOutputPower{
    my ($self, $newval) = @_;
    $self->{Range1MaxOutputPower} = $newval if @_ > 1;
    return $self->{Range1MaxOutputPower};
}
#===============================================================================


#===============================================================================
#            Range2MaxOutputPower accessor method.
#===============================================================================

sub Range2MaxOutputPower{
    my ($self, $newval) = @_;
    $self->{Range2MaxOutputPower} = $newval if @_ > 1;
    return $self->{Range2MaxOutputPower};
}
#===============================================================================


#===============================================================================
#            OutputPowerUnits accessor method.
#===============================================================================

sub OutputPowerUnits{
    my ($self, $newval) = @_;
    $self->{OutputPowerUnits} = $newval if @_ > 1;
    return $self->{OutputPowerUnits};
}
#===============================================================================


#===============================================================================
#            Range1MaxInputPower accessor method.
#===============================================================================

sub Range1MaxInputPower{
    my ($self, $newval) = @_;
    $self->{Range1MaxInputPower} = $newval if @_ > 1;
    return $self->{Range1MaxInputPower};
}
#===============================================================================


#===============================================================================
#            Range2MaxInputPower accessor method.
#===============================================================================

sub Range2MaxInputPower{
    my ($self, $newval) = @_;
    $self->{Range2MaxInputPower} = $newval if @_ > 1;
    return $self->{Range2MaxInputPower};
}
#===============================================================================


#===============================================================================
#            InputPowerUnits accessor method.
#===============================================================================

sub InputPowerUnits{
    my ($self, $newval) = @_;
    $self->{InputPowerUnits} = $newval if @_ > 1;
    return $self->{InputPowerUnits};
}
#===============================================================================


#===============================================================================
#            IsACInput accessor method.
#===============================================================================

sub IsACInput{
    my ($self, $newval) = @_;
    $self->{IsACInput} = $newval if @_ > 1;
    return $self->{IsACInput};
}
#===============================================================================


#===============================================================================
#            NumberOfPhasesUtilized accessor method.
#===============================================================================

sub NumberOfPhasesUtilized{
    my ($self, $newval) = @_;
    $self->{NumberOfPhasesUtilized} = $newval if @_ > 1;
    return $self->{NumberOfPhasesUtilized};
}
#===============================================================================


#===============================================================================
#            NominalPhaseWiring accessor method.
#===============================================================================

sub NominalPhaseWiring{
    my ($self, $newval) = @_;
    $self->{NominalPhaseWiring} = $newval if @_ > 1;
    return $self->{NominalPhaseWiring};
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
