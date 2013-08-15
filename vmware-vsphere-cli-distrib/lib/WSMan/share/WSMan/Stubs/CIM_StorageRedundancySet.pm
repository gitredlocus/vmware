package CIM_StorageRedundancySet;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_RedundancySet;
use strict;


@CIM_StorageRedundancySet::ISA = qw(_Initializable CIM_RedundancySet);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_RedundancySet::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{TypeOfAlgorithm} = undef;
    $self->{OtherAlgorithm} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            TypeOfAlgorithm accessor method.
#===============================================================================

sub TypeOfAlgorithm{
    my ($self, $newval) = @_;
    $self->{TypeOfAlgorithm} = $newval if @_ > 1;
    return $self->{TypeOfAlgorithm};
}
#===============================================================================


#===============================================================================
#            OtherAlgorithm accessor method.
#===============================================================================

sub OtherAlgorithm{
    my ($self, $newval) = @_;
    $self->{OtherAlgorithm} = $newval if @_ > 1;
    return $self->{OtherAlgorithm};
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
