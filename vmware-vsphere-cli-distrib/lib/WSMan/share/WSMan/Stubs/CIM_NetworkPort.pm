package CIM_NetworkPort;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_LogicalPort;
use strict;


@CIM_NetworkPort::ISA = qw(_Initializable CIM_LogicalPort);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_LogicalPort::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{Speed} = undef;
    $self->{OtherNetworkPortType} = undef;
    $self->{PortNumber} = undef;
    $self->{LinkTechnology} = undef;
    $self->{OtherLinkTechnology} = undef;
    $self->{PermanentAddress} = undef;
    $self->{NetworkAddresses} = undef;
    $self->{FullDuplex} = undef;
    $self->{AutoSense} = undef;
    $self->{SupportedMaximumTransmissionUnit} = undef;
    $self->{ActiveMaximumTransmissionUnit} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            Speed accessor method.
#===============================================================================

sub Speed{
    my ($self, $newval) = @_;
    $self->{Speed} = $newval if @_ > 1;
    return $self->{Speed};
}
#===============================================================================


#===============================================================================
#            OtherNetworkPortType accessor method.
#===============================================================================

sub OtherNetworkPortType{
    my ($self, $newval) = @_;
    $self->{OtherNetworkPortType} = $newval if @_ > 1;
    return $self->{OtherNetworkPortType};
}
#===============================================================================


#===============================================================================
#            PortNumber accessor method.
#===============================================================================

sub PortNumber{
    my ($self, $newval) = @_;
    $self->{PortNumber} = $newval if @_ > 1;
    return $self->{PortNumber};
}
#===============================================================================


#===============================================================================
#            LinkTechnology accessor method.
#===============================================================================

sub LinkTechnology{
    my ($self, $newval) = @_;
    $self->{LinkTechnology} = $newval if @_ > 1;
    return $self->{LinkTechnology};
}
#===============================================================================


#===============================================================================
#            OtherLinkTechnology accessor method.
#===============================================================================

sub OtherLinkTechnology{
    my ($self, $newval) = @_;
    $self->{OtherLinkTechnology} = $newval if @_ > 1;
    return $self->{OtherLinkTechnology};
}
#===============================================================================


#===============================================================================
#            PermanentAddress accessor method.
#===============================================================================

sub PermanentAddress{
    my ($self, $newval) = @_;
    $self->{PermanentAddress} = $newval if @_ > 1;
    return $self->{PermanentAddress};
}
#===============================================================================


#===============================================================================
#            NetworkAddresses accessor method.
#===============================================================================

sub NetworkAddresses{
    my ($self, $newval) = @_;
    $self->{NetworkAddresses} = $newval if @_ > 1;
    return $self->{NetworkAddresses};
}
#===============================================================================


#===============================================================================
#            FullDuplex accessor method.
#===============================================================================

sub FullDuplex{
    my ($self, $newval) = @_;
    $self->{FullDuplex} = $newval if @_ > 1;
    return $self->{FullDuplex};
}
#===============================================================================


#===============================================================================
#            AutoSense accessor method.
#===============================================================================

sub AutoSense{
    my ($self, $newval) = @_;
    $self->{AutoSense} = $newval if @_ > 1;
    return $self->{AutoSense};
}
#===============================================================================


#===============================================================================
#            SupportedMaximumTransmissionUnit accessor method.
#===============================================================================

sub SupportedMaximumTransmissionUnit{
    my ($self, $newval) = @_;
    $self->{SupportedMaximumTransmissionUnit} = $newval if @_ > 1;
    return $self->{SupportedMaximumTransmissionUnit};
}
#===============================================================================


#===============================================================================
#            ActiveMaximumTransmissionUnit accessor method.
#===============================================================================

sub ActiveMaximumTransmissionUnit{
    my ($self, $newval) = @_;
    $self->{ActiveMaximumTransmissionUnit} = $newval if @_ > 1;
    return $self->{ActiveMaximumTransmissionUnit};
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
