package LSIESG_ParentStoragePoolCapabilities;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_StorageCapabilities;
use strict;


@LSIESG_ParentStoragePoolCapabilities::ISA = qw(_Initializable CIM_StorageCapabilities);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_StorageCapabilities::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{StoragePool_InstanceID} = undef;
    $self->{epr_name} = undef;  
    $self->{invokableMethods}->{GetSupportedStripeLengths} = { input => [], output => ['StripeLengths'] };
    $self->{invokableMethods}->{GetSupportedStripeDepthRange} = { input => [], output => ['MinimumStripeDepth', 'MaximumStripeDepth', 'StripeDepthDivisor'] };
    $self->{invokableMethods}->{GetSupportedStripeDepths} = { input => [], output => ['StripeDepths'] };
    $self->{invokableMethods}->{GetSupportedStripeLengthRange} = { input => [], output => ['MinimumStripeLength', 'MaximumStripeLength', 'StripeLengthDivisor'] };
    $self->{invokableMethods}->{CreateSetting} = { input => ['SettingType'], output => ['NewSetting'] };
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            StoragePool_InstanceID accessor method.
#===============================================================================

sub StoragePool_InstanceID{
    my ($self, $newval) = @_;
    $self->{StoragePool_InstanceID} = $newval if @_ > 1;
    return $self->{StoragePool_InstanceID};
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
