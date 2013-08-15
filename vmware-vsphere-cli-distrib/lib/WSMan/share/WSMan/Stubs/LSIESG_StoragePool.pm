package LSIESG_StoragePool;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_StoragePool;
use strict;


@LSIESG_StoragePool::ISA = qw(_Initializable CIM_StoragePool);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_StoragePool::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{ComputerSystem_Name} = undef;
    $self->{StoragePool_SpaceConsumed} = undef;
    $self->{OtherIdentifyingInfo} = undef;
    $self->{epr_name} = undef;  
    $self->{invokableMethods}->{GetSupportedSizes} = { input => ['ElementType', 'Goal'], output => ['Sizes'] };
    $self->{invokableMethods}->{GetSupportedSizeRange} = { input => ['ElementType', 'Goal'], output => ['MinimumVolumeSize', 'MaximumVolumeSize', 'VolumeSizeDivisor'] };
    $self->{invokableMethods}->{GetAvailableExtents} = { input => ['Goal'], output => ['AvailableExtents'] };
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            ComputerSystem_Name accessor method.
#===============================================================================

sub ComputerSystem_Name{
    my ($self, $newval) = @_;
    $self->{ComputerSystem_Name} = $newval if @_ > 1;
    return $self->{ComputerSystem_Name};
}
#===============================================================================


#===============================================================================
#            StoragePool_SpaceConsumed accessor method.
#===============================================================================

sub StoragePool_SpaceConsumed{
    my ($self, $newval) = @_;
    $self->{StoragePool_SpaceConsumed} = $newval if @_ > 1;
    return $self->{StoragePool_SpaceConsumed};
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
#           epr_name accessor method.
#===============================================================================

sub epr_name{
    my ($self, $newval) = @_;
    $self->{epr_name} = $newval if @_ > 1;
    return $self->{epr_name};
}
#===============================================================================


1;
