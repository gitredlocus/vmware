package OMC_PhysicalConnector;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_PhysicalConnector;
use strict;


@OMC_PhysicalConnector::ISA = qw(_Initializable CIM_PhysicalConnector);


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
    $self->{Caption} = undef;
    $self->{ConnectorDescription} = undef;
    $self->{ConnectorGender} = undef;
    $self->{ConnectorLayout} = undef;
    $self->{ConnectorType} = undef;
    $self->{CreationClassName} = undef;
    $self->{Description} = undef;
    $self->{ElementName} = undef;
    $self->{NumPhysicalPins} = undef;
    $self->{Tag} = undef;
    $self->{epr_name} = undef;  
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
#            ConnectorDescription accessor method.
#===============================================================================

sub ConnectorDescription{
    my ($self, $newval) = @_;
    $self->{ConnectorDescription} = $newval if @_ > 1;
    return $self->{ConnectorDescription};
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
#            NumPhysicalPins accessor method.
#===============================================================================

sub NumPhysicalPins{
    my ($self, $newval) = @_;
    $self->{NumPhysicalPins} = $newval if @_ > 1;
    return $self->{NumPhysicalPins};
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
#           epr_name accessor method.
#===============================================================================

sub epr_name{
    my ($self, $newval) = @_;
    $self->{epr_name} = $newval if @_ > 1;
    return $self->{epr_name};
}
#===============================================================================


1;
