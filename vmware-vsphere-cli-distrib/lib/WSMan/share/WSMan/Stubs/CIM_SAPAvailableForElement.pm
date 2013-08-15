package CIM_SAPAvailableForElement;
use WSMan::Stubs::Initializable;
use strict;


@CIM_SAPAvailableForElement::ISA = qw(_Initializable);


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
    $self->{AvailableSAP} = undef;
    $self->{ManagedElement} = undef;
    $self->{epr_name} = undef;  
    push @{$self->{id_keys}}, 'AvailableSAP';
    push @{$self->{id_keys}}, 'ManagedElement';
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            AvailableSAP accessor method.
#===============================================================================

sub AvailableSAP{
    my ($self, $newval) = @_;
    $self->{AvailableSAP} = $newval if @_ > 1;
    return $self->{AvailableSAP};
}
#===============================================================================


#===============================================================================
#            ManagedElement accessor method.
#===============================================================================

sub ManagedElement{
    my ($self, $newval) = @_;
    $self->{ManagedElement} = $newval if @_ > 1;
    return $self->{ManagedElement};
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
