package CIM_ComputerSystem;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_System;
use strict;


@CIM_ComputerSystem::ISA = qw(_Initializable CIM_System);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_System::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{NameFormat} = undef;
    $self->{Dedicated} = undef;
    $self->{OtherDedicatedDescriptions} = undef;
    $self->{ResetCapability} = undef;
    $self->{PowerManagementCapabilities} = undef;
    $self->{epr_name} = undef;  
    $self->{invokableMethods}->{SetPowerState} = { input => ['PowerState', 'Time'], output => [] };
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
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
#            Dedicated accessor method.
#===============================================================================

sub Dedicated{
    my ($self, $newval) = @_;
    $self->{Dedicated} = $newval if @_ > 1;
    return $self->{Dedicated};
}
#===============================================================================


#===============================================================================
#            OtherDedicatedDescriptions accessor method.
#===============================================================================

sub OtherDedicatedDescriptions{
    my ($self, $newval) = @_;
    $self->{OtherDedicatedDescriptions} = $newval if @_ > 1;
    return $self->{OtherDedicatedDescriptions};
}
#===============================================================================


#===============================================================================
#            ResetCapability accessor method.
#===============================================================================

sub ResetCapability{
    my ($self, $newval) = @_;
    $self->{ResetCapability} = $newval if @_ > 1;
    return $self->{ResetCapability};
}
#===============================================================================


#===============================================================================
#            PowerManagementCapabilities accessor method.
#===============================================================================

sub PowerManagementCapabilities{
    my ($self, $newval) = @_;
    $self->{PowerManagementCapabilities} = $newval if @_ > 1;
    return $self->{PowerManagementCapabilities};
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
