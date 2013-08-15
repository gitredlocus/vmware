package CIM_EthernetPort;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_NetworkPort;
use strict;


@CIM_EthernetPort::ISA = qw(_Initializable CIM_NetworkPort);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_NetworkPort::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{PortType} = undef;
    $self->{NetworkAddresses} = undef;
    $self->{MaxDataSize} = undef;
    $self->{Capabilities} = undef;
    $self->{CapabilityDescriptions} = undef;
    $self->{EnabledCapabilities} = undef;
    $self->{OtherEnabledCapabilities} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            PortType accessor method.
#===============================================================================

sub PortType{
    my ($self, $newval) = @_;
    $self->{PortType} = $newval if @_ > 1;
    return $self->{PortType};
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
#            MaxDataSize accessor method.
#===============================================================================

sub MaxDataSize{
    my ($self, $newval) = @_;
    $self->{MaxDataSize} = $newval if @_ > 1;
    return $self->{MaxDataSize};
}
#===============================================================================


#===============================================================================
#            Capabilities accessor method.
#===============================================================================

sub Capabilities{
    my ($self, $newval) = @_;
    $self->{Capabilities} = $newval if @_ > 1;
    return $self->{Capabilities};
}
#===============================================================================


#===============================================================================
#            CapabilityDescriptions accessor method.
#===============================================================================

sub CapabilityDescriptions{
    my ($self, $newval) = @_;
    $self->{CapabilityDescriptions} = $newval if @_ > 1;
    return $self->{CapabilityDescriptions};
}
#===============================================================================


#===============================================================================
#            EnabledCapabilities accessor method.
#===============================================================================

sub EnabledCapabilities{
    my ($self, $newval) = @_;
    $self->{EnabledCapabilities} = $newval if @_ > 1;
    return $self->{EnabledCapabilities};
}
#===============================================================================


#===============================================================================
#            OtherEnabledCapabilities accessor method.
#===============================================================================

sub OtherEnabledCapabilities{
    my ($self, $newval) = @_;
    $self->{OtherEnabledCapabilities} = $newval if @_ > 1;
    return $self->{OtherEnabledCapabilities};
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
