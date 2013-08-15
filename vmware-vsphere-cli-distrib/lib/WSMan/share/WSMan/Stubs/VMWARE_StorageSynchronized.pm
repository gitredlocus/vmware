package VMWARE_StorageSynchronized;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_StorageSynchronized;
use strict;


@VMWARE_StorageSynchronized::ISA = qw(_Initializable CIM_StorageSynchronized);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_StorageSynchronized::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{SyncedElement} = undef;
    $self->{SystemElement} = undef;
    $self->{CopyType} = undef;
    $self->{ReplicaType} = undef;
    $self->{SyncState} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            SyncedElement accessor method.
#===============================================================================

sub SyncedElement{
    my ($self, $newval) = @_;
    $self->{SyncedElement} = $newval if @_ > 1;
    return $self->{SyncedElement};
}
#===============================================================================


#===============================================================================
#            SystemElement accessor method.
#===============================================================================

sub SystemElement{
    my ($self, $newval) = @_;
    $self->{SystemElement} = $newval if @_ > 1;
    return $self->{SystemElement};
}
#===============================================================================


#===============================================================================
#            CopyType accessor method.
#===============================================================================

sub CopyType{
    my ($self, $newval) = @_;
    $self->{CopyType} = $newval if @_ > 1;
    return $self->{CopyType};
}
#===============================================================================


#===============================================================================
#            ReplicaType accessor method.
#===============================================================================

sub ReplicaType{
    my ($self, $newval) = @_;
    $self->{ReplicaType} = $newval if @_ > 1;
    return $self->{ReplicaType};
}
#===============================================================================


#===============================================================================
#            SyncState accessor method.
#===============================================================================

sub SyncState{
    my ($self, $newval) = @_;
    $self->{SyncState} = $newval if @_ > 1;
    return $self->{SyncState};
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
