package CIM_DNSSettingData;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_IPAssignmentSettingData;
use strict;


@CIM_DNSSettingData::ISA = qw(_Initializable CIM_IPAssignmentSettingData);


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
    $self->{DomainName} = undef;
    $self->{RequestedHostname} = undef;
    $self->{UseSuffixWhenRegistering} = undef;
    $self->{RegisterThisConnectionsAddress} = undef;
    $self->{DNSServerAddresses} = undef;
    $self->{DHCPOptionsToUse} = undef;
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
#            DomainName accessor method.
#===============================================================================

sub DomainName{
    my ($self, $newval) = @_;
    $self->{DomainName} = $newval if @_ > 1;
    return $self->{DomainName};
}
#===============================================================================


#===============================================================================
#            RequestedHostname accessor method.
#===============================================================================

sub RequestedHostname{
    my ($self, $newval) = @_;
    $self->{RequestedHostname} = $newval if @_ > 1;
    return $self->{RequestedHostname};
}
#===============================================================================


#===============================================================================
#            UseSuffixWhenRegistering accessor method.
#===============================================================================

sub UseSuffixWhenRegistering{
    my ($self, $newval) = @_;
    $self->{UseSuffixWhenRegistering} = $newval if @_ > 1;
    return $self->{UseSuffixWhenRegistering};
}
#===============================================================================


#===============================================================================
#            RegisterThisConnectionsAddress accessor method.
#===============================================================================

sub RegisterThisConnectionsAddress{
    my ($self, $newval) = @_;
    $self->{RegisterThisConnectionsAddress} = $newval if @_ > 1;
    return $self->{RegisterThisConnectionsAddress};
}
#===============================================================================


#===============================================================================
#            DNSServerAddresses accessor method.
#===============================================================================

sub DNSServerAddresses{
    my ($self, $newval) = @_;
    $self->{DNSServerAddresses} = $newval if @_ > 1;
    return $self->{DNSServerAddresses};
}
#===============================================================================


#===============================================================================
#            DHCPOptionsToUse accessor method.
#===============================================================================

sub DHCPOptionsToUse{
    my ($self, $newval) = @_;
    $self->{DHCPOptionsToUse} = $newval if @_ > 1;
    return $self->{DHCPOptionsToUse};
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
