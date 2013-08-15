package OMC_EthernetPort;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_EthernetPort;
use strict;


@OMC_EthernetPort::ISA = qw(_Initializable CIM_EthernetPort);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_EthernetPort::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{LinkTechnology} = undef;
    $self->{PermanentAddress} = undef;
    $self->{SystemCreationClassName} = undef;
    $self->{SystemName} = undef;
    $self->{CreationClassName} = undef;
    $self->{DeviceID} = undef;
    $self->{EnabledState} = undef;
    $self->{RequestedState} = undef;
    $self->{ElementName} = undef;
    $self->{PortType} = undef;
    $self->{NetworkAddresses} = undef;
    $self->{Capabilities} = undef;
    $self->{EnabledCapabilities} = undef;
    $self->{epr_name} = undef;  
    $self->{invokableMethods}->{RequestStateChange} = { input => ['RequestedState', 'TimeoutPeriod'], output => ['Job'] };
    push @{$self->{id_keys}}, 'CreationClassName';
    push @{$self->{id_keys}}, 'DeviceID';
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
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
#            PermanentAddress accessor method.
#===============================================================================

sub PermanentAddress{
    my ($self, $newval) = @_;
    $self->{PermanentAddress} = $newval if @_ > 1;
    return $self->{PermanentAddress};
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
#            SystemName accessor method.
#===============================================================================

sub SystemName{
    my ($self, $newval) = @_;
    $self->{SystemName} = $newval if @_ > 1;
    return $self->{SystemName};
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
#            DeviceID accessor method.
#===============================================================================

sub DeviceID{
    my ($self, $newval) = @_;
    $self->{DeviceID} = $newval if @_ > 1;
    return $self->{DeviceID};
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
#            RequestedState accessor method.
#===============================================================================

sub RequestedState{
    my ($self, $newval) = @_;
    $self->{RequestedState} = $newval if @_ > 1;
    return $self->{RequestedState};
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
#            Capabilities accessor method.
#===============================================================================

sub Capabilities{
    my ($self, $newval) = @_;
    $self->{Capabilities} = $newval if @_ > 1;
    return $self->{Capabilities};
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
#           epr_name accessor method.
#===============================================================================

sub epr_name{
    my ($self, $newval) = @_;
    $self->{epr_name} = $newval if @_ > 1;
    return $self->{epr_name};
}
#===============================================================================


1;
