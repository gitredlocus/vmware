package CIM_CompositeExtentBasedOn;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_BasedOn;
use strict;


@CIM_CompositeExtentBasedOn::ISA = qw(_Initializable CIM_BasedOn);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_BasedOn::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{Antecedent} = undef;
    $self->{Dependent} = undef;
    $self->{OrderIndex} = undef;
    $self->{LBAsMappedByDecrementing} = undef;
    $self->{LBAMappingIncludesCheckData} = undef;
    $self->{NumberOfBlocks} = undef;
    $self->{BlockSize} = undef;
    $self->{UserDataStripeDepth} = undef;
    $self->{UnitsBeforeCheckDataInterleave} = undef;
    $self->{UnitsOfCheckData} = undef;
    $self->{UnitsOfUserData} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            Antecedent accessor method.
#===============================================================================

sub Antecedent{
    my ($self, $newval) = @_;
    $self->{Antecedent} = $newval if @_ > 1;
    return $self->{Antecedent};
}
#===============================================================================


#===============================================================================
#            Dependent accessor method.
#===============================================================================

sub Dependent{
    my ($self, $newval) = @_;
    $self->{Dependent} = $newval if @_ > 1;
    return $self->{Dependent};
}
#===============================================================================


#===============================================================================
#            OrderIndex accessor method.
#===============================================================================

sub OrderIndex{
    my ($self, $newval) = @_;
    $self->{OrderIndex} = $newval if @_ > 1;
    return $self->{OrderIndex};
}
#===============================================================================


#===============================================================================
#            LBAsMappedByDecrementing accessor method.
#===============================================================================

sub LBAsMappedByDecrementing{
    my ($self, $newval) = @_;
    $self->{LBAsMappedByDecrementing} = $newval if @_ > 1;
    return $self->{LBAsMappedByDecrementing};
}
#===============================================================================


#===============================================================================
#            LBAMappingIncludesCheckData accessor method.
#===============================================================================

sub LBAMappingIncludesCheckData{
    my ($self, $newval) = @_;
    $self->{LBAMappingIncludesCheckData} = $newval if @_ > 1;
    return $self->{LBAMappingIncludesCheckData};
}
#===============================================================================


#===============================================================================
#            NumberOfBlocks accessor method.
#===============================================================================

sub NumberOfBlocks{
    my ($self, $newval) = @_;
    $self->{NumberOfBlocks} = $newval if @_ > 1;
    return $self->{NumberOfBlocks};
}
#===============================================================================


#===============================================================================
#            BlockSize accessor method.
#===============================================================================

sub BlockSize{
    my ($self, $newval) = @_;
    $self->{BlockSize} = $newval if @_ > 1;
    return $self->{BlockSize};
}
#===============================================================================


#===============================================================================
#            UserDataStripeDepth accessor method.
#===============================================================================

sub UserDataStripeDepth{
    my ($self, $newval) = @_;
    $self->{UserDataStripeDepth} = $newval if @_ > 1;
    return $self->{UserDataStripeDepth};
}
#===============================================================================


#===============================================================================
#            UnitsBeforeCheckDataInterleave accessor method.
#===============================================================================

sub UnitsBeforeCheckDataInterleave{
    my ($self, $newval) = @_;
    $self->{UnitsBeforeCheckDataInterleave} = $newval if @_ > 1;
    return $self->{UnitsBeforeCheckDataInterleave};
}
#===============================================================================


#===============================================================================
#            UnitsOfCheckData accessor method.
#===============================================================================

sub UnitsOfCheckData{
    my ($self, $newval) = @_;
    $self->{UnitsOfCheckData} = $newval if @_ > 1;
    return $self->{UnitsOfCheckData};
}
#===============================================================================


#===============================================================================
#            UnitsOfUserData accessor method.
#===============================================================================

sub UnitsOfUserData{
    my ($self, $newval) = @_;
    $self->{UnitsOfUserData} = $newval if @_ > 1;
    return $self->{UnitsOfUserData};
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
