package CIM_StaticIPAssignmentSettingData;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_IPAssignmentSettingData;
use strict;


@CIM_StaticIPAssignmentSettingData::ISA = qw(_Initializable CIM_IPAssignmentSettingData);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_IPAssignmentSettingData::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{AddressOrigin} = undef;
    $self->{IPv4Address} = undef;
    $self->{SubnetMask} = undef;
    $self->{GatewayIPv4Address} = undef;
    $self->{GatewayIPv6Address} = undef;
    $self->{IPv6Address} = undef;
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
#            AddressOrigin accessor method.
#===============================================================================

sub AddressOrigin{
    my ($self, $newval) = @_;
    $self->{AddressOrigin} = $newval if @_ > 1;
    return $self->{AddressOrigin};
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
#            SubnetMask accessor method.
#===============================================================================

sub SubnetMask{
    my ($self, $newval) = @_;
    $self->{SubnetMask} = $newval if @_ > 1;
    return $self->{SubnetMask};
}
#===============================================================================


#===============================================================================
#            GatewayIPv4Address accessor method.
#===============================================================================

sub GatewayIPv4Address{
    my ($self, $newval) = @_;
    $self->{GatewayIPv4Address} = $newval if @_ > 1;
    return $self->{GatewayIPv4Address};
}
#===============================================================================


#===============================================================================
#            GatewayIPv6Address accessor method.
#===============================================================================

sub GatewayIPv6Address{
    my ($self, $newval) = @_;
    $self->{GatewayIPv6Address} = $newval if @_ > 1;
    return $self->{GatewayIPv6Address};
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
