package CIM_InstModification;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_InstIndication;
use strict;


@CIM_InstModification::ISA = qw(_Initializable CIM_InstIndication);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_InstIndication::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{PreviousInstance} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            PreviousInstance accessor method.
#===============================================================================

sub PreviousInstance{
    my ($self, $newval) = @_;
    $self->{PreviousInstance} = $newval if @_ > 1;
    return $self->{PreviousInstance};
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
