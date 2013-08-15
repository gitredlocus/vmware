package CIM_ProtocolControllerForUnit;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_ProtocolControllerForDevice;
use strict;


@CIM_ProtocolControllerForUnit::ISA = qw(_Initializable CIM_ProtocolControllerForDevice);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_ProtocolControllerForDevice::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{Antecedent} = undef;
    $self->{Dependent} = undef;
    $self->{DeviceAccess} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            Antecedent accessor method.
#===============================================================================

sub Antecedent{
    my ($self, $newval) = @_;
    $self->{Antecedent} = $newval if @_ > 1;
    return $self->{Antecedent};
}
#===============================================================================


#===============================================================================
#            Dependent accessor method.
#===============================================================================

sub Dependent{
    my ($self, $newval) = @_;
    $self->{Dependent} = $newval if @_ > 1;
    return $self->{Dependent};
}
#===============================================================================


#===============================================================================
#            DeviceAccess accessor method.
#===============================================================================

sub DeviceAccess{
    my ($self, $newval) = @_;
    $self->{DeviceAccess} = $newval if @_ > 1;
    return $self->{DeviceAccess};
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
