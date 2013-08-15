package OMC_IPMIIPProtocolEndpoint;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_IPProtocolEndpoint;
use strict;


@OMC_IPMIIPProtocolEndpoint::ISA = qw(_Initializable CIM_IPProtocolEndpoint);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_IPProtocolEndpoint::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{AddressOrigin} = undef;
    $self->{Caption} = undef;
    $self->{CreationClassName} = undef;
    $self->{ElementName} = undef;
    $self->{Name} = undef;
    $self->{NameFormat} = undef;
    $self->{SystemName} = undef;
    $self->{SystemCreationClassName} = undef;
    $self->{EnabledDefault} = undef;
    $self->{EnabledState} = undef;
    $self->{IPv4Address} = undef;
    $self->{IPv4DefaultGateway} = undef;
    $self->{SubnetMask} = undef;
    $self->{RequestedState} = undef;
    $self->{ProtocolIFType} = undef;
    $self->{TransitioningToState} = undef;
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
#            Caption accessor method.
#===============================================================================

sub Caption{
    my ($self, $newval) = @_;
    $self->{Caption} = $newval if @_ > 1;
    return $self->{Caption};
}
#===============================================================================


#===============================================================================
#            CreationClassName accessor method.
#===============================================================================

sub CreationClassName{
    my ($self, $newval) = @_;
    $self->{CreationClassName} = $newval if @_ > 1;
    return $self->{CreationClassName};
}
#===============================================================================


#===============================================================================
#            ElementName accessor method.
#===============================================================================

sub ElementName{
    my ($self, $newval) = @_;
    $self->{ElementName} = $newval if @_ > 1;
    return $self->{ElementName};
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
#            NameFormat accessor method.
#===============================================================================

sub NameFormat{
    my ($self, $newval) = @_;
    $self->{NameFormat} = $newval if @_ > 1;
    return $self->{NameFormat};
}
#===============================================================================


#===============================================================================
#            SystemName accessor method.
#===============================================================================

sub SystemName{
    my ($self, $newval) = @_;
    $self->{SystemName} = $newval if @_ > 1;
    return $self->{SystemName};
}
#===============================================================================


#===============================================================================
#            SystemCreationClassName accessor method.
#===============================================================================

sub SystemCreationClassName{
    my ($self, $newval) = @_;
    $self->{SystemCreationClassName} = $newval if @_ > 1;
    return $self->{SystemCreationClassName};
}
#===============================================================================


#===============================================================================
#            EnabledDefault accessor method.
#===============================================================================

sub EnabledDefault{
    my ($self, $newval) = @_;
    $self->{EnabledDefault} = $newval if @_ > 1;
    return $self->{EnabledDefault};
}
#===============================================================================


#===============================================================================
#            EnabledState accessor method.
#===============================================================================

sub EnabledState{
    my ($self, $newval) = @_;
    $self->{EnabledState} = $newval if @_ > 1;
    return $self->{EnabledState};
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
#            IPv4DefaultGateway accessor method.
#===============================================================================

sub IPv4DefaultGateway{
    my ($self, $newval) = @_;
    $self->{IPv4DefaultGateway} = $newval if @_ > 1;
    return $self->{IPv4DefaultGateway};
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
#            RequestedState accessor method.
#===============================================================================

sub RequestedState{
    my ($self, $newval) = @_;
    $self->{RequestedState} = $newval if @_ > 1;
    return $self->{RequestedState};
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
#            TransitioningToState accessor method.
#===============================================================================

sub TransitioningToState{
    my ($self, $newval) = @_;
    $self->{TransitioningToState} = $newval if @_ > 1;
    return $self->{TransitioningToState};
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
