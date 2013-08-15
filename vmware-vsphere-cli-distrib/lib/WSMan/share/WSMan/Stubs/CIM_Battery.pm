package CIM_Battery;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_PowerSource;
use strict;


@CIM_Battery::ISA = qw(_Initializable CIM_PowerSource);


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
    $self->{BatteryStatus} = undef;
    $self->{TimeOnBattery} = undef;
    $self->{EstimatedRunTime} = undef;
    $self->{EstimatedChargeRemaining} = undef;
    $self->{Chemistry} = undef;
    $self->{DesignCapacity} = undef;
    $self->{FullChargeCapacity} = undef;
    $self->{DesignVoltage} = undef;
    $self->{SmartBatteryVersion} = undef;
    $self->{TimeToFullCharge} = undef;
    $self->{ExpectedLife} = undef;
    $self->{MaxRechargeTime} = undef;
    $self->{RechargeCount} = undef;
    $self->{MaxRechargeCount} = undef;
    $self->{RemainingCapacity} = undef;
    $self->{RemainingCapacityMaxError} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            BatteryStatus accessor method.
#===============================================================================

sub BatteryStatus{
    my ($self, $newval) = @_;
    $self->{BatteryStatus} = $newval if @_ > 1;
    return $self->{BatteryStatus};
}
#===============================================================================


#===============================================================================
#            TimeOnBattery accessor method.
#===============================================================================

sub TimeOnBattery{
    my ($self, $newval) = @_;
    $self->{TimeOnBattery} = $newval if @_ > 1;
    return $self->{TimeOnBattery};
}
#===============================================================================


#===============================================================================
#            EstimatedRunTime accessor method.
#===============================================================================

sub EstimatedRunTime{
    my ($self, $newval) = @_;
    $self->{EstimatedRunTime} = $newval if @_ > 1;
    return $self->{EstimatedRunTime};
}
#===============================================================================


#===============================================================================
#            EstimatedChargeRemaining accessor method.
#===============================================================================

sub EstimatedChargeRemaining{
    my ($self, $newval) = @_;
    $self->{EstimatedChargeRemaining} = $newval if @_ > 1;
    return $self->{EstimatedChargeRemaining};
}
#===============================================================================


#===============================================================================
#            Chemistry accessor method.
#===============================================================================

sub Chemistry{
    my ($self, $newval) = @_;
    $self->{Chemistry} = $newval if @_ > 1;
    return $self->{Chemistry};
}
#===============================================================================


#===============================================================================
#            DesignCapacity accessor method.
#===============================================================================

sub DesignCapacity{
    my ($self, $newval) = @_;
    $self->{DesignCapacity} = $newval if @_ > 1;
    return $self->{DesignCapacity};
}
#===============================================================================


#===============================================================================
#            FullChargeCapacity accessor method.
#===============================================================================

sub FullChargeCapacity{
    my ($self, $newval) = @_;
    $self->{FullChargeCapacity} = $newval if @_ > 1;
    return $self->{FullChargeCapacity};
}
#===============================================================================


#===============================================================================
#            DesignVoltage accessor method.
#===============================================================================

sub DesignVoltage{
    my ($self, $newval) = @_;
    $self->{DesignVoltage} = $newval if @_ > 1;
    return $self->{DesignVoltage};
}
#===============================================================================


#===============================================================================
#            SmartBatteryVersion accessor method.
#===============================================================================

sub SmartBatteryVersion{
    my ($self, $newval) = @_;
    $self->{SmartBatteryVersion} = $newval if @_ > 1;
    return $self->{SmartBatteryVersion};
}
#===============================================================================


#===============================================================================
#            TimeToFullCharge accessor method.
#===============================================================================

sub TimeToFullCharge{
    my ($self, $newval) = @_;
    $self->{TimeToFullCharge} = $newval if @_ > 1;
    return $self->{TimeToFullCharge};
}
#===============================================================================


#===============================================================================
#            ExpectedLife accessor method.
#===============================================================================

sub ExpectedLife{
    my ($self, $newval) = @_;
    $self->{ExpectedLife} = $newval if @_ > 1;
    return $self->{ExpectedLife};
}
#===============================================================================


#===============================================================================
#            MaxRechargeTime accessor method.
#===============================================================================

sub MaxRechargeTime{
    my ($self, $newval) = @_;
    $self->{MaxRechargeTime} = $newval if @_ > 1;
    return $self->{MaxRechargeTime};
}
#===============================================================================


#===============================================================================
#            RechargeCount accessor method.
#===============================================================================

sub RechargeCount{
    my ($self, $newval) = @_;
    $self->{RechargeCount} = $newval if @_ > 1;
    return $self->{RechargeCount};
}
#===============================================================================


#===============================================================================
#            MaxRechargeCount accessor method.
#===============================================================================

sub MaxRechargeCount{
    my ($self, $newval) = @_;
    $self->{MaxRechargeCount} = $newval if @_ > 1;
    return $self->{MaxRechargeCount};
}
#===============================================================================


#===============================================================================
#            RemainingCapacity accessor method.
#===============================================================================

sub RemainingCapacity{
    my ($self, $newval) = @_;
    $self->{RemainingCapacity} = $newval if @_ > 1;
    return $self->{RemainingCapacity};
}
#===============================================================================


#===============================================================================
#            RemainingCapacityMaxError accessor method.
#===============================================================================

sub RemainingCapacityMaxError{
    my ($self, $newval) = @_;
    $self->{RemainingCapacityMaxError} = $newval if @_ > 1;
    return $self->{RemainingCapacityMaxError};
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
