package CIM_SCSIArbitraryLogicalUnit;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_LogicalDevice;
use strict;


@CIM_SCSIArbitraryLogicalUnit::ISA = qw(_Initializable CIM_LogicalDevice);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_LogicalDevice::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{DeviceType} = undef;
    $self->{OtherDeviceType} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            DeviceType accessor method.
#===============================================================================

sub DeviceType{
    my ($self, $newval) = @_;
    $self->{DeviceType} = $newval if @_ > 1;
    return $self->{DeviceType};
}
#===============================================================================


#===============================================================================
#            OtherDeviceType accessor method.
#===============================================================================

sub OtherDeviceType{
    my ($self, $newval) = @_;
    $self->{OtherDeviceType} = $newval if @_ > 1;
    return $self->{OtherDeviceType};
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
