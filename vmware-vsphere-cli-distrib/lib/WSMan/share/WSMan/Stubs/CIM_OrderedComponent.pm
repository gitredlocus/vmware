package CIM_OrderedComponent;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_Component;
use strict;


@CIM_OrderedComponent::ISA = qw(_Initializable CIM_Component);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_Component::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{AssignedSequence} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            AssignedSequence accessor method.
#===============================================================================

sub AssignedSequence{
    my ($self, $newval) = @_;
    $self->{AssignedSequence} = $newval if @_ > 1;
    return $self->{AssignedSequence};
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
