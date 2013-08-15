package LSIESG_ParentStoragePool;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_StoragePool;
use strict;


@LSIESG_ParentStoragePool::ISA = qw(_Initializable CIM_StoragePool);


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
#           epr_name accessor method.
#===============================================================================

sub epr_name{
    my ($self, $newval) = @_;
    $self->{epr_name} = $newval if @_ > 1;
    return $self->{epr_name};
}
#===============================================================================


1;
