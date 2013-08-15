package CIM_DHCPSettingData;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_IPAssignmentSettingData;
use strict;


@CIM_DHCPSettingData::ISA = qw(_Initializable CIM_IPAssignmentSettingData);


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
    $self->{RequestedIPv4Address} = undef;
    $self->{RequestedLeaseTime} = undef;
    $self->{ClientIdentifier} = undef;
    $self->{VendorClassIdentifier} = undef;
    $self->{RequestedOptions} = undef;
    $self->{RequiredOptions} = undef;
    $self->{IPv6RequestedOptions} = undef;
    $self->{IPv6RequiredOptions} = undef;
    $self->{RequestedIPv6Address} = undef;
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
#            RequestedIPv4Address accessor method.
#===============================================================================

sub RequestedIPv4Address{
    my ($self, $newval) = @_;
    $self->{RequestedIPv4Address} = $newval if @_ > 1;
    return $self->{RequestedIPv4Address};
}
#===============================================================================


#===============================================================================
#            RequestedLeaseTime accessor method.
#===============================================================================

sub RequestedLeaseTime{
    my ($self, $newval) = @_;
    $self->{RequestedLeaseTime} = $newval if @_ > 1;
    return $self->{RequestedLeaseTime};
}
#===============================================================================


#===============================================================================
#            ClientIdentifier accessor method.
#===============================================================================

sub ClientIdentifier{
    my ($self, $newval) = @_;
    $self->{ClientIdentifier} = $newval if @_ > 1;
    return $self->{ClientIdentifier};
}
#===============================================================================


#===============================================================================
#            VendorClassIdentifier accessor method.
#===============================================================================

sub VendorClassIdentifier{
    my ($self, $newval) = @_;
    $self->{VendorClassIdentifier} = $newval if @_ > 1;
    return $self->{VendorClassIdentifier};
}
#===============================================================================


#===============================================================================
#            RequestedOptions accessor method.
#===============================================================================

sub RequestedOptions{
    my ($self, $newval) = @_;
    $self->{RequestedOptions} = $newval if @_ > 1;
    return $self->{RequestedOptions};
}
#===============================================================================


#===============================================================================
#            RequiredOptions accessor method.
#===============================================================================

sub RequiredOptions{
    my ($self, $newval) = @_;
    $self->{RequiredOptions} = $newval if @_ > 1;
    return $self->{RequiredOptions};
}
#===============================================================================


#===============================================================================
#            IPv6RequestedOptions accessor method.
#===============================================================================

sub IPv6RequestedOptions{
    my ($self, $newval) = @_;
    $self->{IPv6RequestedOptions} = $newval if @_ > 1;
    return $self->{IPv6RequestedOptions};
}
#===============================================================================


#===============================================================================
#            IPv6RequiredOptions accessor method.
#===============================================================================

sub IPv6RequiredOptions{
    my ($self, $newval) = @_;
    $self->{IPv6RequiredOptions} = $newval if @_ > 1;
    return $self->{IPv6RequiredOptions};
}
#===============================================================================


#===============================================================================
#            RequestedIPv6Address accessor method.
#===============================================================================

sub RequestedIPv6Address{
    my ($self, $newval) = @_;
    $self->{RequestedIPv6Address} = $newval if @_ > 1;
    return $self->{RequestedIPv6Address};
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
