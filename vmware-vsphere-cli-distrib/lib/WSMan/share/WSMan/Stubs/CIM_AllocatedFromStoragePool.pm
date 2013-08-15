package CIM_AllocatedFromStoragePool;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_ElementAllocatedFromPool;
use strict;


@CIM_AllocatedFromStoragePool::ISA = qw(_Initializable CIM_ElementAllocatedFromPool);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_ElementAllocatedFromPool::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{Antecedent} = undef;
    $self->{Dependent} = undef;
    $self->{SpaceConsumed} = undef;
    $self->{SpaceLimit} = undef;
    $self->{SpaceLimitWarningThreshold} = undef;
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
#            SpaceConsumed accessor method.
#===============================================================================

sub SpaceConsumed{
    my ($self, $newval) = @_;
    $self->{SpaceConsumed} = $newval if @_ > 1;
    return $self->{SpaceConsumed};
}
#===============================================================================


#===============================================================================
#            SpaceLimit accessor method.
#===============================================================================

sub SpaceLimit{
    my ($self, $newval) = @_;
    $self->{SpaceLimit} = $newval if @_ > 1;
    return $self->{SpaceLimit};
}
#===============================================================================


#===============================================================================
#            SpaceLimitWarningThreshold accessor method.
#===============================================================================

sub SpaceLimitWarningThreshold{
    my ($self, $newval) = @_;
    $self->{SpaceLimitWarningThreshold} = $newval if @_ > 1;
    return $self->{SpaceLimitWarningThreshold};
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
