package CIM_Slot;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_PhysicalConnector;
use strict;


@CIM_Slot::ISA = qw(_Initializable CIM_PhysicalConnector);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_PhysicalConnector::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{ConnectorType} = undef;
    $self->{PoweredOn} = undef;
    $self->{SupportsHotPlug} = undef;
    $self->{HeightAllowed} = undef;
    $self->{LengthAllowed} = undef;
    $self->{MaxDataWidth} = undef;
    $self->{VccMixedVoltageSupport} = undef;
    $self->{VppMixedVoltageSupport} = undef;
    $self->{ThermalRating} = undef;
    $self->{SpecialPurpose} = undef;
    $self->{PurposeDescription} = undef;
    $self->{Number} = undef;
    $self->{Powered} = undef;
    $self->{OpenSwitch} = undef;
    $self->{MaxLinkWidth} = undef;
    $self->{VendorCompatibilityStrings} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            ConnectorType accessor method.
#===============================================================================

sub ConnectorType{
    my ($self, $newval) = @_;
    $self->{ConnectorType} = $newval if @_ > 1;
    return $self->{ConnectorType};
}
#===============================================================================


#===============================================================================
#            PoweredOn accessor method.
#===============================================================================

sub PoweredOn{
    my ($self, $newval) = @_;
    $self->{PoweredOn} = $newval if @_ > 1;
    return $self->{PoweredOn};
}
#===============================================================================


#===============================================================================
#            SupportsHotPlug accessor method.
#===============================================================================

sub SupportsHotPlug{
    my ($self, $newval) = @_;
    $self->{SupportsHotPlug} = $newval if @_ > 1;
    return $self->{SupportsHotPlug};
}
#===============================================================================


#===============================================================================
#            HeightAllowed accessor method.
#===============================================================================

sub HeightAllowed{
    my ($self, $newval) = @_;
    $self->{HeightAllowed} = $newval if @_ > 1;
    return $self->{HeightAllowed};
}
#===============================================================================


#===============================================================================
#            LengthAllowed accessor method.
#===============================================================================

sub LengthAllowed{
    my ($self, $newval) = @_;
    $self->{LengthAllowed} = $newval if @_ > 1;
    return $self->{LengthAllowed};
}
#===============================================================================


#===============================================================================
#            MaxDataWidth accessor method.
#===============================================================================

sub MaxDataWidth{
    my ($self, $newval) = @_;
    $self->{MaxDataWidth} = $newval if @_ > 1;
    return $self->{MaxDataWidth};
}
#===============================================================================


#===============================================================================
#            VccMixedVoltageSupport accessor method.
#===============================================================================

sub VccMixedVoltageSupport{
    my ($self, $newval) = @_;
    $self->{VccMixedVoltageSupport} = $newval if @_ > 1;
    return $self->{VccMixedVoltageSupport};
}
#===============================================================================


#===============================================================================
#            VppMixedVoltageSupport accessor method.
#===============================================================================

sub VppMixedVoltageSupport{
    my ($self, $newval) = @_;
    $self->{VppMixedVoltageSupport} = $newval if @_ > 1;
    return $self->{VppMixedVoltageSupport};
}
#===============================================================================


#===============================================================================
#            ThermalRating accessor method.
#===============================================================================

sub ThermalRating{
    my ($self, $newval) = @_;
    $self->{ThermalRating} = $newval if @_ > 1;
    return $self->{ThermalRating};
}
#===============================================================================


#===============================================================================
#            SpecialPurpose accessor method.
#===============================================================================

sub SpecialPurpose{
    my ($self, $newval) = @_;
    $self->{SpecialPurpose} = $newval if @_ > 1;
    return $self->{SpecialPurpose};
}
#===============================================================================


#===============================================================================
#            PurposeDescription accessor method.
#===============================================================================

sub PurposeDescription{
    my ($self, $newval) = @_;
    $self->{PurposeDescription} = $newval if @_ > 1;
    return $self->{PurposeDescription};
}
#===============================================================================


#===============================================================================
#            Number accessor method.
#===============================================================================

sub Number{
    my ($self, $newval) = @_;
    $self->{Number} = $newval if @_ > 1;
    return $self->{Number};
}
#===============================================================================


#===============================================================================
#            Powered accessor method.
#===============================================================================

sub Powered{
    my ($self, $newval) = @_;
    $self->{Powered} = $newval if @_ > 1;
    return $self->{Powered};
}
#===============================================================================


#===============================================================================
#            OpenSwitch accessor method.
#===============================================================================

sub OpenSwitch{
    my ($self, $newval) = @_;
    $self->{OpenSwitch} = $newval if @_ > 1;
    return $self->{OpenSwitch};
}
#===============================================================================


#===============================================================================
#            MaxLinkWidth accessor method.
#===============================================================================

sub MaxLinkWidth{
    my ($self, $newval) = @_;
    $self->{MaxLinkWidth} = $newval if @_ > 1;
    return $self->{MaxLinkWidth};
}
#===============================================================================


#===============================================================================
#            VendorCompatibilityStrings accessor method.
#===============================================================================

sub VendorCompatibilityStrings{
    my ($self, $newval) = @_;
    $self->{VendorCompatibilityStrings} = $newval if @_ > 1;
    return $self->{VendorCompatibilityStrings};
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
