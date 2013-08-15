package VMware_EthernetPort;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_EthernetPort;
use strict;


@VMware_EthernetPort::ISA = qw(_Initializable CIM_EthernetPort);


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
    $self->{Capabilities} = undef;
    $self->{Caption} = undef;
    $self->{CreationClassName} = undef;
    $self->{DeviceID} = undef;
    $self->{ElementName} = undef;
    $self->{EnabledCapabilities} = undef;
    $self->{EnabledDefault} = undef;
    $self->{EnabledState} = undef;
    $self->{LinkTechnology} = undef;
    $self->{Name} = undef;
    $self->{NetworkAddresses} = undef;
    $self->{OperationalStatus} = undef;
    $self->{PermanentAddress} = undef;
    $self->{RequestedState} = undef;
    $self->{Speed} = undef;
    $self->{SystemCreationClassName} = undef;
    $self->{SystemName} = undef;
    $self->{TransitioningToState} = undef;
    $self->{UsageRestriction} = undef;
    $self->{FullDuplex} = undef;
    $self->{ActiveMaximumTransmissionUnit} = undef;
    $self->{OtherIdentifyingInfo} = undef;
    $self->{IdentifyingDescriptions} = undef;
    $self->{PortType} = undef;
    $self->{AutoSense} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
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
#            DeviceID accessor method.
#===============================================================================

sub DeviceID{
    my ($self, $newval) = @_;
    $self->{DeviceID} = $newval if @_ > 1;
    return $self->{DeviceID};
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
#            EnabledCapabilities accessor method.
#===============================================================================

sub EnabledCapabilities{
    my ($self, $newval) = @_;
    $self->{EnabledCapabilities} = $newval if @_ > 1;
    return $self->{EnabledCapabilities};
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
#            LinkTechnology accessor method.
#===============================================================================

sub LinkTechnology{
    my ($self, $newval) = @_;
    $self->{LinkTechnology} = $newval if @_ > 1;
    return $self->{LinkTechnology};
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
#            NetworkAddresses accessor method.
#===============================================================================

sub NetworkAddresses{
    my ($self, $newval) = @_;
    $self->{NetworkAddresses} = $newval if @_ > 1;
    return $self->{NetworkAddresses};
}
#===============================================================================


#===============================================================================
#            OperationalStatus accessor method.
#===============================================================================

sub OperationalStatus{
    my ($self, $newval) = @_;
    $self->{OperationalStatus} = $newval if @_ > 1;
    return $self->{OperationalStatus};
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
#            RequestedState accessor method.
#===============================================================================

sub RequestedState{
    my ($self, $newval) = @_;
    $self->{RequestedState} = $newval if @_ > 1;
    return $self->{RequestedState};
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
#            TransitioningToState accessor method.
#===============================================================================

sub TransitioningToState{
    my ($self, $newval) = @_;
    $self->{TransitioningToState} = $newval if @_ > 1;
    return $self->{TransitioningToState};
}
#===============================================================================


#===============================================================================
#            UsageRestriction accessor method.
#===============================================================================

sub UsageRestriction{
    my ($self, $newval) = @_;
    $self->{UsageRestriction} = $newval if @_ > 1;
    return $self->{UsageRestriction};
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
#            ActiveMaximumTransmissionUnit accessor method.
#===============================================================================

sub ActiveMaximumTransmissionUnit{
    my ($self, $newval) = @_;
    $self->{ActiveMaximumTransmissionUnit} = $newval if @_ > 1;
    return $self->{ActiveMaximumTransmissionUnit};
}
#===============================================================================


#===============================================================================
#            OtherIdentifyingInfo accessor method.
#===============================================================================

sub OtherIdentifyingInfo{
    my ($self, $newval) = @_;
    $self->{OtherIdentifyingInfo} = $newval if @_ > 1;
    return $self->{OtherIdentifyingInfo};
}
#===============================================================================


#===============================================================================
#            IdentifyingDescriptions accessor method.
#===============================================================================

sub IdentifyingDescriptions{
    my ($self, $newval) = @_;
    $self->{IdentifyingDescriptions} = $newval if @_ > 1;
    return $self->{IdentifyingDescriptions};
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
#            AutoSense accessor method.
#===============================================================================

sub AutoSense{
    my ($self, $newval) = @_;
    $self->{AutoSense} = $newval if @_ > 1;
    return $self->{AutoSense};
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


#SMI-S version

package VMWARE_EthernetPort;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_EthernetPort;
use strict;


@VMWARE_EthernetPort::ISA = qw(_Initializable CIM_EthernetPort);


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
    $self->{SystemCreationClassName} = undef;
    $self->{SystemName} = undef;
    $self->{CreationClassName} = undef;
    $self->{DeviceID} = undef;
    $self->{epr_name} = undef;  
    push @{$self->{id_keys}}, 'SystemCreationClassName';
    push @{$self->{id_keys}}, 'SystemName';
    push @{$self->{id_keys}}, 'CreationClassName';
    push @{$self->{id_keys}}, 'DeviceID';
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
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
#           epr_name accessor method.
#===============================================================================

sub epr_name{
    my ($self, $newval) = @_;
    $self->{epr_name} = $newval if @_ > 1;
    return $self->{epr_name};
}
#===============================================================================


1;
