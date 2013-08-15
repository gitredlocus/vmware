package CIM_ATAProtocolEndpoint;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_ProtocolEndpoint;
use strict;


@CIM_ATAProtocolEndpoint::ISA = qw(_Initializable CIM_ProtocolEndpoint);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_ProtocolEndpoint::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{Name} = undef;
    $self->{ConnectionType} = undef;
    $self->{Role} = undef;
    $self->{OtherConnectionType} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            Name accessor method.
#===============================================================================

sub Name{
    my ($self, $newval) = @_;
    $self->{Name} = $newval if @_ > 1;
    return $self->{Name};
}
#===============================================================================


#===============================================================================
#            ConnectionType accessor method.
#===============================================================================

sub ConnectionType{
    my ($self, $newval) = @_;
    $self->{ConnectionType} = $newval if @_ > 1;
    return $self->{ConnectionType};
}
#===============================================================================


#===============================================================================
#            Role accessor method.
#===============================================================================

sub Role{
    my ($self, $newval) = @_;
    $self->{Role} = $newval if @_ > 1;
    return $self->{Role};
}
#===============================================================================


#===============================================================================
#            OtherConnectionType accessor method.
#===============================================================================

sub OtherConnectionType{
    my ($self, $newval) = @_;
    $self->{OtherConnectionType} = $newval if @_ > 1;
    return $self->{OtherConnectionType};
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
