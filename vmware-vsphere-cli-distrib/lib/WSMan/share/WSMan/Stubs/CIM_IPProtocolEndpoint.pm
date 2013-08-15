package CIM_IPProtocolEndpoint;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_ProtocolEndpoint;
use strict;


@CIM_IPProtocolEndpoint::ISA = qw(_Initializable CIM_ProtocolEndpoint);


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
    $self->{IPv4Address} = undef;
    $self->{IPv6Address} = undef;
    $self->{Address} = undef;
    $self->{SubnetMask} = undef;
    $self->{PrefixLength} = undef;
    $self->{AddressType} = undef;
    $self->{IPVersionSupport} = undef;
    $self->{ProtocolIFType} = undef;
    $self->{AddressOrigin} = undef;
    $self->{IPv6AddressType} = undef;
    $self->{IPv6SubnetPrefixLength} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            IPv4Address accessor method.
#===============================================================================

sub IPv4Address{
    my ($self, $newval) = @_;
    $self->{IPv4Address} = $newval if @_ > 1;
    return $self->{IPv4Address};
}
#===============================================================================


#===============================================================================
#            IPv6Address accessor method.
#===============================================================================

sub IPv6Address{
    my ($self, $newval) = @_;
    $self->{IPv6Address} = $newval if @_ > 1;
    return $self->{IPv6Address};
}
#===============================================================================


#===============================================================================
#            Address accessor method.
#===============================================================================

sub Address{
    my ($self, $newval) = @_;
    $self->{Address} = $newval if @_ > 1;
    return $self->{Address};
}
#===============================================================================


#===============================================================================
#            SubnetMask accessor method.
#===============================================================================

sub SubnetMask{
    my ($self, $newval) = @_;
    $self->{SubnetMask} = $newval if @_ > 1;
    return $self->{SubnetMask};
}
#===============================================================================


#===============================================================================
#            PrefixLength accessor method.
#===============================================================================

sub PrefixLength{
    my ($self, $newval) = @_;
    $self->{PrefixLength} = $newval if @_ > 1;
    return $self->{PrefixLength};
}
#===============================================================================


#===============================================================================
#            AddressType accessor method.
#===============================================================================

sub AddressType{
    my ($self, $newval) = @_;
    $self->{AddressType} = $newval if @_ > 1;
    return $self->{AddressType};
}
#===============================================================================


#===============================================================================
#            IPVersionSupport accessor method.
#===============================================================================

sub IPVersionSupport{
    my ($self, $newval) = @_;
    $self->{IPVersionSupport} = $newval if @_ > 1;
    return $self->{IPVersionSupport};
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
#            AddressOrigin accessor method.
#===============================================================================

sub AddressOrigin{
    my ($self, $newval) = @_;
    $self->{AddressOrigin} = $newval if @_ > 1;
    return $self->{AddressOrigin};
}
#===============================================================================


#===============================================================================
#            IPv6AddressType accessor method.
#===============================================================================

sub IPv6AddressType{
    my ($self, $newval) = @_;
    $self->{IPv6AddressType} = $newval if @_ > 1;
    return $self->{IPv6AddressType};
}
#===============================================================================


#===============================================================================
#            IPv6SubnetPrefixLength accessor method.
#===============================================================================

sub IPv6SubnetPrefixLength{
    my ($self, $newval) = @_;
    $self->{IPv6SubnetPrefixLength} = $newval if @_ > 1;
    return $self->{IPv6SubnetPrefixLength};
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
