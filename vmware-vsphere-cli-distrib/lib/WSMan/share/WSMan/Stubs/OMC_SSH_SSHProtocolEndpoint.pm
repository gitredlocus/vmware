package OMC_SSH_SSHProtocolEndpoint;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_SSHProtocolEndpoint;
use strict;


@OMC_SSH_SSHProtocolEndpoint::ISA = qw(_Initializable CIM_SSHProtocolEndpoint);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_SSHProtocolEndpoint::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{AuthenticatedUser} = undef;
    $self->{RemoteHost} = undef;
    $self->{RemotePort} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            AuthenticatedUser accessor method.
#===============================================================================

sub AuthenticatedUser{
    my ($self, $newval) = @_;
    $self->{AuthenticatedUser} = $newval if @_ > 1;
    return $self->{AuthenticatedUser};
}
#===============================================================================


#===============================================================================
#            RemoteHost accessor method.
#===============================================================================

sub RemoteHost{
    my ($self, $newval) = @_;
    $self->{RemoteHost} = $newval if @_ > 1;
    return $self->{RemoteHost};
}
#===============================================================================


#===============================================================================
#            RemotePort accessor method.
#===============================================================================

sub RemotePort{
    my ($self, $newval) = @_;
    $self->{RemotePort} = $newval if @_ > 1;
    return $self->{RemotePort};
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
