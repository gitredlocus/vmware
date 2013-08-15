package LSIESG_StorageConfigurationService;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_StorageConfigurationService;
use strict;


@LSIESG_StorageConfigurationService::ISA = qw(_Initializable CIM_StorageConfigurationService);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_StorageConfigurationService::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{epr_name} = undef;  
    $self->{invokableMethods}->{CreateOrModifyElementFromElements} = { input => ['ElementName', 'ElementType', 'Goal', 'Size', 'InElements', 'TheElement'], output => ['Job', 'Size', 'TheElement'] };
    $self->{invokableMethods}->{CreateReplica} = { input => ['ElementName', 'SourceElement', 'TargetSettingGoal', 'TargetPool', 'CopyType'], output => ['Job', 'TargetElement'] };
    $self->{invokableMethods}->{clearConfiguration} = { input => [], output => [] };
    $self->{invokableMethods}->{CreateOrModifyElementFromStoragePool} = { input => ['ElementName', 'ElementType', 'Goal', 'Size', 'InPool', 'TheElement'], output => ['Job', 'Size', 'TheElement'] };
    $self->{invokableMethods}->{CreateOrModifyStoragePool} = { input => ['ElementName', 'Goal', 'Size', 'InPools', 'InExtents', 'Pool'], output => ['Job', 'Size', 'Pool'] };
    $self->{invokableMethods}->{AttachReplica} = { input => ['SourceElement', 'TargetElement', 'CopyType'], output => ['Job'] };
    $self->{invokableMethods}->{ReturnToStoragePool} = { input => ['TheElement'], output => ['Job'] };
    $self->{invokableMethods}->{DeleteStoragePool} = { input => ['Pool'], output => ['Job'] };
    $self->{invokableMethods}->{ModifySynchronization} = { input => ['Operation', 'Synchronization'], output => ['Job'] };
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
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
