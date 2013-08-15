package QLogicFCHBA_FCPortFCPortStatistics;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_ElementStatisticalData;
use strict;


@QLogicFCHBA_FCPortFCPortStatistics::ISA = qw(_Initializable CIM_ElementStatisticalData);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_ElementStatisticalData::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{ManagedElement} = undef;
    $self->{Stats} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
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
#            Stats accessor method.
#===============================================================================

sub Stats{
    my ($self, $newval) = @_;
    $self->{Stats} = $newval if @_ > 1;
    return $self->{Stats};
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
