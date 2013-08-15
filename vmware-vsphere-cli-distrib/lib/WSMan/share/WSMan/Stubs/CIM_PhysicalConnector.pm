package CIM_PhysicalConnector;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_PhysicalElement;
use strict;


@CIM_PhysicalConnector::ISA = qw(_Initializable CIM_PhysicalElement);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_PhysicalElement::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{ConnectorPinout} = undef;
    $self->{ConnectorType} = undef;
    $self->{OtherTypeDescription} = undef;
    $self->{ConnectorGender} = undef;
    $self->{ConnectorElectricalCharacteristics} = undef;
    $self->{OtherElectricalCharacteristics} = undef;
    $self->{NumPhysicalPins} = undef;
    $self->{ConnectorLayout} = undef;
    $self->{ConnectorDescription} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            ConnectorPinout accessor method.
#===============================================================================

sub ConnectorPinout{
    my ($self, $newval) = @_;
    $self->{ConnectorPinout} = $newval if @_ > 1;
    return $self->{ConnectorPinout};
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
#            OtherTypeDescription accessor method.
#===============================================================================

sub OtherTypeDescription{
    my ($self, $newval) = @_;
    $self->{OtherTypeDescription} = $newval if @_ > 1;
    return $self->{OtherTypeDescription};
}
#===============================================================================


#===============================================================================
#            ConnectorGender accessor method.
#===============================================================================

sub ConnectorGender{
    my ($self, $newval) = @_;
    $self->{ConnectorGender} = $newval if @_ > 1;
    return $self->{ConnectorGender};
}
#===============================================================================


#===============================================================================
#            ConnectorElectricalCharacteristics accessor method.
#===============================================================================

sub ConnectorElectricalCharacteristics{
    my ($self, $newval) = @_;
    $self->{ConnectorElectricalCharacteristics} = $newval if @_ > 1;
    return $self->{ConnectorElectricalCharacteristics};
}
#===============================================================================


#===============================================================================
#            OtherElectricalCharacteristics accessor method.
#===============================================================================

sub OtherElectricalCharacteristics{
    my ($self, $newval) = @_;
    $self->{OtherElectricalCharacteristics} = $newval if @_ > 1;
    return $self->{OtherElectricalCharacteristics};
}
#===============================================================================


#===============================================================================
#            NumPhysicalPins accessor method.
#===============================================================================

sub NumPhysicalPins{
    my ($self, $newval) = @_;
    $self->{NumPhysicalPins} = $newval if @_ > 1;
    return $self->{NumPhysicalPins};
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
#            ConnectorDescription accessor method.
#===============================================================================

sub ConnectorDescription{
    my ($self, $newval) = @_;
    $self->{ConnectorDescription} = $newval if @_ > 1;
    return $self->{ConnectorDescription};
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
