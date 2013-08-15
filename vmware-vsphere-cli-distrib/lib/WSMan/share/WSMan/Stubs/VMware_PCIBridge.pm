package VMware_PCIBridge;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::VMware_PCIDevice;
use strict;


@VMware_PCIBridge::ISA = qw(_Initializable VMware_PCIDevice);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->VMware_PCIDevice::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{BridgeType} = undef;
    $self->{SecondaryBusNumber} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            BridgeType accessor method.
#===============================================================================

sub BridgeType{
    my ($self, $newval) = @_;
    $self->{BridgeType} = $newval if @_ > 1;
    return $self->{BridgeType};
}
#===============================================================================


#===============================================================================
#            SecondaryBusNumber accessor method.
#===============================================================================

sub SecondaryBusNumber{
    my ($self, $newval) = @_;
    $self->{SecondaryBusNumber} = $newval if @_ > 1;
    return $self->{SecondaryBusNumber};
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
