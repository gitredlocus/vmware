package OMC_SSHEndpointProcess;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::OMC_ProtocolEndpointProcess;
use strict;


@OMC_SSHEndpointProcess::ISA = qw(_Initializable OMC_ProtocolEndpointProcess);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->OMC_ProtocolEndpointProcess::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{Endpoint} = undef;
    $self->{Process} = undef;
    $self->{epr_name} = undef;  
    push @{$self->{id_keys}}, 'Endpoint';
    push @{$self->{id_keys}}, 'Process';
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            Endpoint accessor method.
#===============================================================================

sub Endpoint{
    my ($self, $newval) = @_;
    $self->{Endpoint} = $newval if @_ > 1;
    return $self->{Endpoint};
}
#===============================================================================


#===============================================================================
#            Process accessor method.
#===============================================================================

sub Process{
    my ($self, $newval) = @_;
    $self->{Process} = $newval if @_ > 1;
    return $self->{Process};
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
