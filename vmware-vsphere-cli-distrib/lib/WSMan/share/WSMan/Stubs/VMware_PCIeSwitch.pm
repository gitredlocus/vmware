package VMware_PCIeSwitch;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::VMware_PCIDevice;
use strict;


@VMware_PCIeSwitch::ISA = qw(_Initializable VMware_PCIDevice);


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
    $self->{NumberOfPorts} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            NumberOfPorts accessor method.
#===============================================================================

sub NumberOfPorts{
    my ($self, $newval) = @_;
    $self->{NumberOfPorts} = $newval if @_ > 1;
    return $self->{NumberOfPorts};
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
