package OMC_IsSpareFan;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_IsSpare;
use strict;


@OMC_IsSpareFan::ISA = qw(_Initializable CIM_IsSpare);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_IsSpare::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{Antecedent} = undef;
    $self->{Dependent} = undef;
    $self->{SpareStatus} = undef;
    $self->{FailoverSupported} = undef;
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
#            SpareStatus accessor method.
#===============================================================================

sub SpareStatus{
    my ($self, $newval) = @_;
    $self->{SpareStatus} = $newval if @_ > 1;
    return $self->{SpareStatus};
}
#===============================================================================


#===============================================================================
#            FailoverSupported accessor method.
#===============================================================================

sub FailoverSupported{
    my ($self, $newval) = @_;
    $self->{FailoverSupported} = $newval if @_ > 1;
    return $self->{FailoverSupported};
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
