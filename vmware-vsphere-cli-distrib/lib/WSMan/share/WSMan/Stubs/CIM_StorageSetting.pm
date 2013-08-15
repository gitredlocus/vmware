package CIM_StorageSetting;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_SettingData;
use strict;


@CIM_StorageSetting::ISA = qw(_Initializable CIM_SettingData);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_SettingData::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{NoSinglePointOfFailure} = undef;
    $self->{DataRedundancyMax} = undef;
    $self->{DataRedundancyMin} = undef;
    $self->{DataRedundancyGoal} = undef;
    $self->{PackageRedundancyMax} = undef;
    $self->{PackageRedundancyMin} = undef;
    $self->{PackageRedundancyGoal} = undef;
    $self->{DeltaReservationMax} = undef;
    $self->{DeltaReservationMin} = undef;
    $self->{DeltaReservationGoal} = undef;
    $self->{ChangeableType} = undef;
    $self->{ExtentStripeLength} = undef;
    $self->{ExtentStripeLengthMin} = undef;
    $self->{ExtentStripeLengthMax} = undef;
    $self->{ParityLayout} = undef;
    $self->{UserDataStripeDepth} = undef;
    $self->{UserDataStripeDepthMin} = undef;
    $self->{UserDataStripeDepthMax} = undef;
    $self->{IncrementalDeltas} = undef;
    $self->{PersistentReplica} = undef;
    $self->{UseReplicationBuffer} = undef;
    $self->{InitialSynchronization} = undef;
    $self->{ReplicationPriority} = undef;
    $self->{SpaceLimit} = undef;
    $self->{SpaceLimitWarningThreshold} = undef;
    $self->{LowSpaceWarningThreshold} = undef;
    $self->{StorageExtentInitialUsage} = undef;
    $self->{StoragePoolInitialUsage} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            NoSinglePointOfFailure accessor method.
#===============================================================================

sub NoSinglePointOfFailure{
    my ($self, $newval) = @_;
    $self->{NoSinglePointOfFailure} = $newval if @_ > 1;
    return $self->{NoSinglePointOfFailure};
}
#===============================================================================


#===============================================================================
#            DataRedundancyMax accessor method.
#===============================================================================

sub DataRedundancyMax{
    my ($self, $newval) = @_;
    $self->{DataRedundancyMax} = $newval if @_ > 1;
    return $self->{DataRedundancyMax};
}
#===============================================================================


#===============================================================================
#            DataRedundancyMin accessor method.
#===============================================================================

sub DataRedundancyMin{
    my ($self, $newval) = @_;
    $self->{DataRedundancyMin} = $newval if @_ > 1;
    return $self->{DataRedundancyMin};
}
#===============================================================================


#===============================================================================
#            DataRedundancyGoal accessor method.
#===============================================================================

sub DataRedundancyGoal{
    my ($self, $newval) = @_;
    $self->{DataRedundancyGoal} = $newval if @_ > 1;
    return $self->{DataRedundancyGoal};
}
#===============================================================================


#===============================================================================
#            PackageRedundancyMax accessor method.
#===============================================================================

sub PackageRedundancyMax{
    my ($self, $newval) = @_;
    $self->{PackageRedundancyMax} = $newval if @_ > 1;
    return $self->{PackageRedundancyMax};
}
#===============================================================================


#===============================================================================
#            PackageRedundancyMin accessor method.
#===============================================================================

sub PackageRedundancyMin{
    my ($self, $newval) = @_;
    $self->{PackageRedundancyMin} = $newval if @_ > 1;
    return $self->{PackageRedundancyMin};
}
#===============================================================================


#===============================================================================
#            PackageRedundancyGoal accessor method.
#===============================================================================

sub PackageRedundancyGoal{
    my ($self, $newval) = @_;
    $self->{PackageRedundancyGoal} = $newval if @_ > 1;
    return $self->{PackageRedundancyGoal};
}
#===============================================================================


#===============================================================================
#            DeltaReservationMax accessor method.
#===============================================================================

sub DeltaReservationMax{
    my ($self, $newval) = @_;
    $self->{DeltaReservationMax} = $newval if @_ > 1;
    return $self->{DeltaReservationMax};
}
#===============================================================================


#===============================================================================
#            DeltaReservationMin accessor method.
#===============================================================================

sub DeltaReservationMin{
    my ($self, $newval) = @_;
    $self->{DeltaReservationMin} = $newval if @_ > 1;
    return $self->{DeltaReservationMin};
}
#===============================================================================


#===============================================================================
#            DeltaReservationGoal accessor method.
#===============================================================================

sub DeltaReservationGoal{
    my ($self, $newval) = @_;
    $self->{DeltaReservationGoal} = $newval if @_ > 1;
    return $self->{DeltaReservationGoal};
}
#===============================================================================


#===============================================================================
#            ChangeableType accessor method.
#===============================================================================

sub ChangeableType{
    my ($self, $newval) = @_;
    $self->{ChangeableType} = $newval if @_ > 1;
    return $self->{ChangeableType};
}
#===============================================================================


#===============================================================================
#            ExtentStripeLength accessor method.
#===============================================================================

sub ExtentStripeLength{
    my ($self, $newval) = @_;
    $self->{ExtentStripeLength} = $newval if @_ > 1;
    return $self->{ExtentStripeLength};
}
#===============================================================================


#===============================================================================
#            ExtentStripeLengthMin accessor method.
#===============================================================================

sub ExtentStripeLengthMin{
    my ($self, $newval) = @_;
    $self->{ExtentStripeLengthMin} = $newval if @_ > 1;
    return $self->{ExtentStripeLengthMin};
}
#===============================================================================


#===============================================================================
#            ExtentStripeLengthMax accessor method.
#===============================================================================

sub ExtentStripeLengthMax{
    my ($self, $newval) = @_;
    $self->{ExtentStripeLengthMax} = $newval if @_ > 1;
    return $self->{ExtentStripeLengthMax};
}
#===============================================================================


#===============================================================================
#            ParityLayout accessor method.
#===============================================================================

sub ParityLayout{
    my ($self, $newval) = @_;
    $self->{ParityLayout} = $newval if @_ > 1;
    return $self->{ParityLayout};
}
#===============================================================================


#===============================================================================
#            UserDataStripeDepth accessor method.
#===============================================================================

sub UserDataStripeDepth{
    my ($self, $newval) = @_;
    $self->{UserDataStripeDepth} = $newval if @_ > 1;
    return $self->{UserDataStripeDepth};
}
#===============================================================================


#===============================================================================
#            UserDataStripeDepthMin accessor method.
#===============================================================================

sub UserDataStripeDepthMin{
    my ($self, $newval) = @_;
    $self->{UserDataStripeDepthMin} = $newval if @_ > 1;
    return $self->{UserDataStripeDepthMin};
}
#===============================================================================


#===============================================================================
#            UserDataStripeDepthMax accessor method.
#===============================================================================

sub UserDataStripeDepthMax{
    my ($self, $newval) = @_;
    $self->{UserDataStripeDepthMax} = $newval if @_ > 1;
    return $self->{UserDataStripeDepthMax};
}
#===============================================================================


#===============================================================================
#            IncrementalDeltas accessor method.
#===============================================================================

sub IncrementalDeltas{
    my ($self, $newval) = @_;
    $self->{IncrementalDeltas} = $newval if @_ > 1;
    return $self->{IncrementalDeltas};
}
#===============================================================================


#===============================================================================
#            PersistentReplica accessor method.
#===============================================================================

sub PersistentReplica{
    my ($self, $newval) = @_;
    $self->{PersistentReplica} = $newval if @_ > 1;
    return $self->{PersistentReplica};
}
#===============================================================================


#===============================================================================
#            UseReplicationBuffer accessor method.
#===============================================================================

sub UseReplicationBuffer{
    my ($self, $newval) = @_;
    $self->{UseReplicationBuffer} = $newval if @_ > 1;
    return $self->{UseReplicationBuffer};
}
#===============================================================================


#===============================================================================
#            InitialSynchronization accessor method.
#===============================================================================

sub InitialSynchronization{
    my ($self, $newval) = @_;
    $self->{InitialSynchronization} = $newval if @_ > 1;
    return $self->{InitialSynchronization};
}
#===============================================================================


#===============================================================================
#            ReplicationPriority accessor method.
#===============================================================================

sub ReplicationPriority{
    my ($self, $newval) = @_;
    $self->{ReplicationPriority} = $newval if @_ > 1;
    return $self->{ReplicationPriority};
}
#===============================================================================


#===============================================================================
#            SpaceLimit accessor method.
#===============================================================================

sub SpaceLimit{
    my ($self, $newval) = @_;
    $self->{SpaceLimit} = $newval if @_ > 1;
    return $self->{SpaceLimit};
}
#===============================================================================


#===============================================================================
#            SpaceLimitWarningThreshold accessor method.
#===============================================================================

sub SpaceLimitWarningThreshold{
    my ($self, $newval) = @_;
    $self->{SpaceLimitWarningThreshold} = $newval if @_ > 1;
    return $self->{SpaceLimitWarningThreshold};
}
#===============================================================================


#===============================================================================
#            LowSpaceWarningThreshold accessor method.
#===============================================================================

sub LowSpaceWarningThreshold{
    my ($self, $newval) = @_;
    $self->{LowSpaceWarningThreshold} = $newval if @_ > 1;
    return $self->{LowSpaceWarningThreshold};
}
#===============================================================================


#===============================================================================
#            StorageExtentInitialUsage accessor method.
#===============================================================================

sub StorageExtentInitialUsage{
    my ($self, $newval) = @_;
    $self->{StorageExtentInitialUsage} = $newval if @_ > 1;
    return $self->{StorageExtentInitialUsage};
}
#===============================================================================


#===============================================================================
#            StoragePoolInitialUsage accessor method.
#===============================================================================

sub StoragePoolInitialUsage{
    my ($self, $newval) = @_;
    $self->{StoragePoolInitialUsage} = $newval if @_ > 1;
    return $self->{StoragePoolInitialUsage};
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
