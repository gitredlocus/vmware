package CIM_PCIController;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_Controller;
use strict;


@CIM_PCIController::ISA = qw(_Initializable CIM_Controller);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_Controller::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{CommandRegister} = undef;
    $self->{Capabilities} = undef;
    $self->{CapabilityDescriptions} = undef;
    $self->{DeviceSelectTiming} = undef;
    $self->{ClassCode} = undef;
    $self->{CacheLineSize} = undef;
    $self->{LatencyTimer} = undef;
    $self->{InterruptPin} = undef;
    $self->{ExpansionROMBaseAddress} = undef;
    $self->{SelfTestEnabled} = undef;
    $self->{epr_name} = undef;  
    $self->{invokableMethods}->{BISTExecution} = { input => [], output => [] };
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            CommandRegister accessor method.
#===============================================================================

sub CommandRegister{
    my ($self, $newval) = @_;
    $self->{CommandRegister} = $newval if @_ > 1;
    return $self->{CommandRegister};
}
#===============================================================================


#===============================================================================
#            Capabilities accessor method.
#===============================================================================

sub Capabilities{
    my ($self, $newval) = @_;
    $self->{Capabilities} = $newval if @_ > 1;
    return $self->{Capabilities};
}
#===============================================================================


#===============================================================================
#            CapabilityDescriptions accessor method.
#===============================================================================

sub CapabilityDescriptions{
    my ($self, $newval) = @_;
    $self->{CapabilityDescriptions} = $newval if @_ > 1;
    return $self->{CapabilityDescriptions};
}
#===============================================================================


#===============================================================================
#            DeviceSelectTiming accessor method.
#===============================================================================

sub DeviceSelectTiming{
    my ($self, $newval) = @_;
    $self->{DeviceSelectTiming} = $newval if @_ > 1;
    return $self->{DeviceSelectTiming};
}
#===============================================================================


#===============================================================================
#            ClassCode accessor method.
#===============================================================================

sub ClassCode{
    my ($self, $newval) = @_;
    $self->{ClassCode} = $newval if @_ > 1;
    return $self->{ClassCode};
}
#===============================================================================


#===============================================================================
#            CacheLineSize accessor method.
#===============================================================================

sub CacheLineSize{
    my ($self, $newval) = @_;
    $self->{CacheLineSize} = $newval if @_ > 1;
    return $self->{CacheLineSize};
}
#===============================================================================


#===============================================================================
#            LatencyTimer accessor method.
#===============================================================================

sub LatencyTimer{
    my ($self, $newval) = @_;
    $self->{LatencyTimer} = $newval if @_ > 1;
    return $self->{LatencyTimer};
}
#===============================================================================


#===============================================================================
#            InterruptPin accessor method.
#===============================================================================

sub InterruptPin{
    my ($self, $newval) = @_;
    $self->{InterruptPin} = $newval if @_ > 1;
    return $self->{InterruptPin};
}
#===============================================================================


#===============================================================================
#            ExpansionROMBaseAddress accessor method.
#===============================================================================

sub ExpansionROMBaseAddress{
    my ($self, $newval) = @_;
    $self->{ExpansionROMBaseAddress} = $newval if @_ > 1;
    return $self->{ExpansionROMBaseAddress};
}
#===============================================================================


#===============================================================================
#            SelfTestEnabled accessor method.
#===============================================================================

sub SelfTestEnabled{
    my ($self, $newval) = @_;
    $self->{SelfTestEnabled} = $newval if @_ > 1;
    return $self->{SelfTestEnabled};
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
