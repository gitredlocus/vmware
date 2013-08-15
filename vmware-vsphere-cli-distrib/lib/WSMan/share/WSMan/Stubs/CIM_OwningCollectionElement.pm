package CIM_OwningCollectionElement;
use WSMan::Stubs::Initializable;
use strict;


@CIM_OwningCollectionElement::ISA = qw(_Initializable);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{OwningElement} = undef;
    $self->{OwnedElement} = undef;
    $self->{epr_name} = undef;  
    push @{$self->{id_keys}}, 'OwningElement';
    push @{$self->{id_keys}}, 'OwnedElement';
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
