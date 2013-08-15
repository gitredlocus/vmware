package OMC_PowerSupply;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_PowerSupply;
use strict;


@OMC_PowerSupply::ISA = qw(_Initializable CIM_PowerSupply);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_PowerSupply::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{Availability} = undef;
    $self->{Caption} = undef;
    $self->{CreationClassName} = undef;
    $self->{Description} = undef;
    $self->{DeviceID} = undef;
    $self->{ElementName} = undef;
    $self->{EnabledDefault} = undef;
    $self->{EnabledState} = undef;
    $self->{HealthState} = undef;
    $self->{Name} = undef;
    $self->{OperationalStatus} = undef;
    $self->{Range1InputFrequencyHigh} = undef;
    $self->{Range1InputFrequencyLow} = undef;
    $self->{Range1InputVoltageHigh} = undef;
    $self->{Range1InputVoltageLow} = undef;
    $self->{Range2InputVoltageHigh} = undef;
    $self->{Range2InputVoltageLow} = undef;
    $self->{RequestedState} = undef;
    $self->{SystemCreationClassName} = undef;
    $self->{SystemName} = undef;
    $self->{TotalOutputPower} = undef;
    $self->{TransitioningToState} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            Availability accessor method.
#===============================================================================

sub Availability{
    my ($self, $newval) = @_;
    $self->{Availability} = $newval if @_ > 1;
    return $self->{Availability};
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
#            HealthState accessor method.
#===============================================================================

sub HealthState{
    my ($self, $newval) = @_;
    $self->{HealthState} = $newval if @_ > 1;
    return $self->{HealthState};
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
#            Range1InputFrequencyHigh accessor method.
#===============================================================================

sub Range1InputFrequencyHigh{
    my ($self, $newval) = @_;
    $self->{Range1InputFrequencyHigh} = $newval if @_ > 1;
    return $self->{Range1InputFrequencyHigh};
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
#            Range1InputVoltageHigh accessor method.
#===============================================================================

sub Range1InputVoltageHigh{
    my ($self, $newval) = @_;
    $self->{Range1InputVoltageHigh} = $newval if @_ > 1;
    return $self->{Range1InputVoltageHigh};
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
#            Range2InputVoltageHigh accessor method.
#===============================================================================

sub Range2InputVoltageHigh{
    my ($self, $newval) = @_;
    $self->{Range2InputVoltageHigh} = $newval if @_ > 1;
    return $self->{Range2InputVoltageHigh};
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
#            TotalOutputPower accessor method.
#===============================================================================

sub TotalOutputPower{
    my ($self, $newval) = @_;
    $self->{TotalOutputPower} = $newval if @_ > 1;
    return $self->{TotalOutputPower};
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
#           epr_name accessor method.
#===============================================================================

sub epr_name{
    my ($self, $newval) = @_;
    $self->{epr_name} = $newval if @_ > 1;
    return $self->{epr_name};
}
#===============================================================================


1;
