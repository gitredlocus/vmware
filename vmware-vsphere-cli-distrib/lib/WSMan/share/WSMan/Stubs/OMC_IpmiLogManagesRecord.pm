package OMC_IpmiLogManagesRecord;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_LogManagesRecord;
use strict;


@OMC_IpmiLogManagesRecord::ISA = qw(_Initializable CIM_LogManagesRecord);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_LogManagesRecord::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{Log} = undef;
    $self->{Record} = undef;
    $self->{epr_name} = undef;  
    push @{$self->{id_keys}}, 'Log';
    push @{$self->{id_keys}}, 'Record';
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            Log accessor method.
#===============================================================================

sub Log{
    my ($self, $newval) = @_;
    $self->{Log} = $newval if @_ > 1;
    return $self->{Log};
}
#===============================================================================


#===============================================================================
#            Record accessor method.
#===============================================================================

sub Record{
    my ($self, $newval) = @_;
    $self->{Record} = $newval if @_ > 1;
    return $self->{Record};
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
