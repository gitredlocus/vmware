package CIM_PCIDevice;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_PCIController;
use strict;


@CIM_PCIDevice::ISA = qw(_Initializable CIM_PCIController);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_PCIController::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{BaseAddress} = undef;
    $self->{SubsystemID} = undef;
    $self->{SubsystemVendorID} = undef;
    $self->{MinGrantTime} = undef;
    $self->{MaxLatency} = undef;
    $self->{BusNumber} = undef;
    $self->{DeviceNumber} = undef;
    $self->{FunctionNumber} = undef;
    $self->{PCIDeviceID} = undef;
    $self->{VendorID} = undef;
    $self->{RevisionID} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            BaseAddress accessor method.
#===============================================================================

sub BaseAddress{
    my ($self, $newval) = @_;
    $self->{BaseAddress} = $newval if @_ > 1;
    return $self->{BaseAddress};
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
#            MinGrantTime accessor method.
#===============================================================================

sub MinGrantTime{
    my ($self, $newval) = @_;
    $self->{MinGrantTime} = $newval if @_ > 1;
    return $self->{MinGrantTime};
}
#===============================================================================


#===============================================================================
#            MaxLatency accessor method.
#===============================================================================

sub MaxLatency{
    my ($self, $newval) = @_;
    $self->{MaxLatency} = $newval if @_ > 1;
    return $self->{MaxLatency};
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
#           epr_name accessor method.
#===============================================================================

sub epr_name{
    my ($self, $newval) = @_;
    $self->{epr_name} = $newval if @_ > 1;
    return $self->{epr_name};
}
#===============================================================================


1;
