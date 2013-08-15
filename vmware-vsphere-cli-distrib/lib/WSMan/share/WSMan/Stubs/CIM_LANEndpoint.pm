package CIM_LANEndpoint;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_ProtocolEndpoint;
use strict;


@CIM_LANEndpoint::ISA = qw(_Initializable CIM_ProtocolEndpoint);


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
    $self->{LANID} = undef;
    $self->{LANType} = undef;
    $self->{OtherLANType} = undef;
    $self->{MACAddress} = undef;
    $self->{AliasAddresses} = undef;
    $self->{GroupAddresses} = undef;
    $self->{MaxDataSize} = undef;
    $self->{ProtocolIFType} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            LANID accessor method.
#===============================================================================

sub LANID{
    my ($self, $newval) = @_;
    $self->{LANID} = $newval if @_ > 1;
    return $self->{LANID};
}
#===============================================================================


#===============================================================================
#            LANType accessor method.
#===============================================================================

sub LANType{
    my ($self, $newval) = @_;
    $self->{LANType} = $newval if @_ > 1;
    return $self->{LANType};
}
#===============================================================================


#===============================================================================
#            OtherLANType accessor method.
#===============================================================================

sub OtherLANType{
    my ($self, $newval) = @_;
    $self->{OtherLANType} = $newval if @_ > 1;
    return $self->{OtherLANType};
}
#===============================================================================


#===============================================================================
#            MACAddress accessor method.
#===============================================================================

sub MACAddress{
    my ($self, $newval) = @_;
    $self->{MACAddress} = $newval if @_ > 1;
    return $self->{MACAddress};
}
#===============================================================================


#===============================================================================
#            AliasAddresses accessor method.
#===============================================================================

sub AliasAddresses{
    my ($self, $newval) = @_;
    $self->{AliasAddresses} = $newval if @_ > 1;
    return $self->{AliasAddresses};
}
#===============================================================================


#===============================================================================
#            GroupAddresses accessor method.
#===============================================================================

sub GroupAddresses{
    my ($self, $newval) = @_;
    $self->{GroupAddresses} = $newval if @_ > 1;
    return $self->{GroupAddresses};
}
#===============================================================================


#===============================================================================
#            MaxDataSize accessor method.
#===============================================================================

sub MaxDataSize{
    my ($self, $newval) = @_;
    $self->{MaxDataSize} = $newval if @_ > 1;
    return $self->{MaxDataSize};
}
#===============================================================================


#===============================================================================
#            ProtocolIFType accessor method.
#===============================================================================

sub ProtocolIFType{
    my ($self, $newval) = @_;
    $self->{ProtocolIFType} = $newval if @_ > 1;
    return $self->{ProtocolIFType};
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
