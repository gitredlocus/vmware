package OMC_BootServiceAffectsComputerSystem;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_ServiceAffectsElement;
use strict;


@OMC_BootServiceAffectsComputerSystem::ISA = qw(_Initializable CIM_ServiceAffectsElement);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_ServiceAffectsElement::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{AffectingElement} = undef;
    $self->{AffectedElement} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            AffectingElement accessor method.
#===============================================================================

sub AffectingElement{
    my ($self, $newval) = @_;
    $self->{AffectingElement} = $newval if @_ > 1;
    return $self->{AffectingElement};
}
#===============================================================================


#===============================================================================
#            AffectedElement accessor method.
#===============================================================================

sub AffectedElement{
    my ($self, $newval) = @_;
    $self->{AffectedElement} = $newval if @_ > 1;
    return $self->{AffectedElement};
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
