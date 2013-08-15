package VMware_PCIDevice;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_PCIDevice;
use strict;


@VMware_PCIDevice::ISA = qw(_Initializable CIM_PCIDevice);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_PCIDevice::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{ElementName} = undef;
    $self->{HealthState} = undef;
    $self->{PrimaryStatus} = undef;
    $self->{EnabledState} = undef;
    $self->{RequestedState} = undef;
    $self->{SystemCreationClassName} = undef;
    $self->{SystemName} = undef;
    $self->{CreationClassName} = undef;
    $self->{DeviceID} = undef;
    $self->{Capabilities} = undef;
    $self->{ClassCode} = undef;
    $self->{SubsystemID} = undef;
    $self->{SubsystemVendorID} = undef;
    $self->{BusNumber} = undef;
    $self->{DeviceNumber} = undef;
    $self->{FunctionNumber} = undef;
    $self->{PCIDeviceID} = undef;
    $self->{VendorID} = undef;
    $self->{RevisionID} = undef;
    $self->{SubClassCode} = undef;
    $self->{SegmentNumber} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
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
#            HealthState accessor method.
#===============================================================================

sub HealthState{
    my ($self, $newval) = @_;
    $self->{HealthState} = $newval if @_ > 1;
    return $self->{HealthState};
}
#===============================================================================


#===============================================================================
#            PrimaryStatus accessor method.
#===============================================================================

sub PrimaryStatus{
    my ($self, $newval) = @_;
    $self->{PrimaryStatus} = $newval if @_ > 1;
    return $self->{PrimaryStatus};
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
#            Capabilities accessor method.
#===============================================================================

sub Capabilities{
    my ($self, $newval) = @_;
    $self->{Capabilities} = $newval if @_ > 1;
    return $self->{Capabilities};
}
#===============================================================================


#===============================================================================
#            ClassCode accessor method.
#===============================================================================

sub ClassCode{
    my ($self, $newval) = @_;
    $self->{ClassCode} = $newval if @_ > 1;
    return $self->{ClassCode};
}
#===============================================================================


#===============================================================================
#            SubsystemID accessor method.
#===============================================================================

sub SubsystemID{
    my ($self, $newval) = @_;
    $self->{SubsystemID} = $newval if @_ > 1;
    return $self->{SubsystemID};
}
#===============================================================================


#===============================================================================
#            SubsystemVendorID accessor method.
#===============================================================================

sub SubsystemVendorID{
    my ($self, $newval) = @_;
    $self->{SubsystemVendorID} = $newval if @_ > 1;
    return $self->{SubsystemVendorID};
}
#===============================================================================


#===============================================================================
#            BusNumber accessor method.
#===============================================================================

sub BusNumber{
    my ($self, $newval) = @_;
    $self->{BusNumber} = $newval if @_ > 1;
    return $self->{BusNumber};
}
#===============================================================================


#===============================================================================
#            DeviceNumber accessor method.
#===============================================================================

sub DeviceNumber{
    my ($self, $newval) = @_;
    $self->{DeviceNumber} = $newval if @_ > 1;
    return $self->{DeviceNumber};
}
#===============================================================================


#===============================================================================
#            FunctionNumber accessor method.
#===============================================================================

sub FunctionNumber{
    my ($self, $newval) = @_;
    $self->{FunctionNumber} = $newval if @_ > 1;
    return $self->{FunctionNumber};
}
#===============================================================================


#===============================================================================
#            PCIDeviceID accessor method.
#===============================================================================

sub PCIDeviceID{
    my ($self, $newval) = @_;
    $self->{PCIDeviceID} = $newval if @_ > 1;
    return $self->{PCIDeviceID};
}
#===============================================================================


#===============================================================================
#            VendorID accessor method.
#===============================================================================

sub VendorID{
    my ($self, $newval) = @_;
    $self->{VendorID} = $newval if @_ > 1;
    return $self->{VendorID};
}
#===============================================================================


#===============================================================================
#            RevisionID accessor method.
#===============================================================================

sub RevisionID{
    my ($self, $newval) = @_;
    $self->{RevisionID} = $newval if @_ > 1;
    return $self->{RevisionID};
}
#===============================================================================


#===============================================================================
#            SubClassCode accessor method.
#===============================================================================

sub SubClassCode{
    my ($self, $newval) = @_;
    $self->{SubClassCode} = $newval if @_ > 1;
    return $self->{SubClassCode};
}
#===============================================================================


#===============================================================================
#            SegmentNumber accessor method.
#===============================================================================

sub SegmentNumber{
    my ($self, $newval) = @_;
    $self->{SegmentNumber} = $newval if @_ > 1;
    return $self->{SegmentNumber};
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
