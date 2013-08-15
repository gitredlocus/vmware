package CIM_ProtocolService;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_Service;
use strict;


@CIM_ProtocolService::ISA = qw(_Initializable CIM_Service);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_Service::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{Protocol} = undef;
    $self->{OtherProtocol} = undef;
    $self->{MaxConnections} = undef;
    $self->{CurrentActiveConnections} = undef;
    $self->{epr_name} = undef;  
    $self->{invokableMethods}->{ListenOnPort} = { input => ['PortNumber', 'IPEndpoint'], output => ['TCPEndpoint'] };
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            Protocol accessor method.
#===============================================================================

sub Protocol{
    my ($self, $newval) = @_;
    $self->{Protocol} = $newval if @_ > 1;
    return $self->{Protocol};
}
#===============================================================================


#===============================================================================
#            OtherProtocol accessor method.
#===============================================================================

sub OtherProtocol{
    my ($self, $newval) = @_;
    $self->{OtherProtocol} = $newval if @_ > 1;
    return $self->{OtherProtocol};
}
#===============================================================================


#===============================================================================
#            MaxConnections accessor method.
#===============================================================================

sub MaxConnections{
    my ($self, $newval) = @_;
    $self->{MaxConnections} = $newval if @_ > 1;
    return $self->{MaxConnections};
}
#===============================================================================


#===============================================================================
#            CurrentActiveConnections accessor method.
#===============================================================================

sub CurrentActiveConnections{
    my ($self, $newval) = @_;
    $self->{CurrentActiveConnections} = $newval if @_ > 1;
    return $self->{CurrentActiveConnections};
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
