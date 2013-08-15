package OMC_OwningRedundancyCollectionElement;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_OwningCollectionElement;
use strict;


@OMC_OwningRedundancyCollectionElement::ISA = qw(_Initializable CIM_OwningCollectionElement);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_OwningCollectionElement::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{OwningElement} = undef;
    $self->{OwnedElement} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            OwningElement accessor method.
#===============================================================================

sub OwningElement{
    my ($self, $newval) = @_;
    $self->{OwningElement} = $newval if @_ > 1;
    return $self->{OwningElement};
}
#===============================================================================


#===============================================================================
#            OwnedElement accessor method.
#===============================================================================

sub OwnedElement{
    my ($self, $newval) = @_;
    $self->{OwnedElement} = $newval if @_ > 1;
    return $self->{OwnedElement};
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
