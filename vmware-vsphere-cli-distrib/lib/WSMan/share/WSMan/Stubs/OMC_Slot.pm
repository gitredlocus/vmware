package OMC_Slot;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_Slot;
use strict;


@OMC_Slot::ISA = qw(_Initializable CIM_Slot);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_Slot::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{VendorCompatibilityStrings} = undef;
    $self->{Caption} = undef;
    $self->{ConnectorLayout} = undef;
    $self->{ConnectorType} = undef;
    $self->{CreationClassName} = undef;
    $self->{Description} = undef;
    $self->{ElementName} = undef;
    $self->{MaxDataWidth} = undef;
    $self->{Number} = undef;
    $self->{SupportsHotPlug} = undef;
    $self->{Tag} = undef;
    $self->{VccMixedVoltageSupport} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
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
#            Caption accessor method.
#===============================================================================

sub Caption{
    my ($self, $newval) = @_;
    $self->{Caption} = $newval if @_ > 1;
    return $self->{Caption};
}
#===============================================================================


#===============================================================================
#            ConnectorLayout accessor method.
#===============================================================================

sub ConnectorLayout{
    my ($self, $newval) = @_;
    $self->{ConnectorLayout} = $newval if @_ > 1;
    return $self->{ConnectorLayout};
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
#            ElementName accessor method.
#===============================================================================

sub ElementName{
    my ($self, $newval) = @_;
    $self->{ElementName} = $newval if @_ > 1;
    return $self->{ElementName};
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
#            Number accessor method.
#===============================================================================

sub Number{
    my ($self, $newval) = @_;
    $self->{Number} = $newval if @_ > 1;
    return $self->{Number};
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
#            Tag accessor method.
#===============================================================================

sub Tag{
    my ($self, $newval) = @_;
    $self->{Tag} = $newval if @_ > 1;
    return $self->{Tag};
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
#           epr_name accessor method.
#===============================================================================

sub epr_name{
    my ($self, $newval) = @_;
    $self->{epr_name} = $newval if @_ > 1;
    return $self->{epr_name};
}
#===============================================================================


1;
