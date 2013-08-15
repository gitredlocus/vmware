package OMC_PowerSupplyRedundancySet;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::OMC_RedundancySet;
use strict;


@OMC_PowerSupplyRedundancySet::ISA = qw(_Initializable OMC_RedundancySet);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->OMC_RedundancySet::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{Caption} = undef;
    $self->{Description} = undef;
    $self->{ElementName} = undef;
    $self->{InstanceID} = undef;
    $self->{LoadBalanceAlgorithm} = undef;
    $self->{MinNumberNeeded} = undef;
    $self->{RedundancyStatus} = undef;
    $self->{TypeOfSet} = undef;
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
#            InstanceID accessor method.
#===============================================================================

sub InstanceID{
    my ($self, $newval) = @_;
    $self->{InstanceID} = $newval if @_ > 1;
    return $self->{InstanceID};
}
#===============================================================================


#===============================================================================
#            LoadBalanceAlgorithm accessor method.
#===============================================================================

sub LoadBalanceAlgorithm{
    my ($self, $newval) = @_;
    $self->{LoadBalanceAlgorithm} = $newval if @_ > 1;
    return $self->{LoadBalanceAlgorithm};
}
#===============================================================================


#===============================================================================
#            MinNumberNeeded accessor method.
#===============================================================================

sub MinNumberNeeded{
    my ($self, $newval) = @_;
    $self->{MinNumberNeeded} = $newval if @_ > 1;
    return $self->{MinNumberNeeded};
}
#===============================================================================


#===============================================================================
#            RedundancyStatus accessor method.
#===============================================================================

sub RedundancyStatus{
    my ($self, $newval) = @_;
    $self->{RedundancyStatus} = $newval if @_ > 1;
    return $self->{RedundancyStatus};
}
#===============================================================================


#===============================================================================
#            TypeOfSet accessor method.
#===============================================================================

sub TypeOfSet{
    my ($self, $newval) = @_;
    $self->{TypeOfSet} = $newval if @_ > 1;
    return $self->{TypeOfSet};
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
