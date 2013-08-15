package VMWARE_VirtualDiskStorageSetting;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_StorageSetting;
use strict;


@VMWARE_VirtualDiskStorageSetting::ISA = qw(_Initializable CIM_StorageSetting);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_StorageSetting::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{ElementName} = undef;
    $self->{NoSinglePointOfFailure} = undef;
    $self->{DataRedundancyMax} = undef;
    $self->{DataRedundancyMin} = undef;
    $self->{DataRedundancyGoal} = undef;
    $self->{DeltaReservationMax} = undef;
    $self->{DeltaReservationMin} = undef;
    $self->{DeltaReservationGoal} = undef;
    $self->{PackageRedundancyMax} = undef;
    $self->{PackageRedundancyMin} = undef;
    $self->{PackageRedundancyGoal} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            ElementName accessor method.
#===============================================================================

sub ElementName{
    my ($self, $newval) = @_;
    $self->{ElementName} = $newval if @_ > 1;
    return $self->{ElementName};
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
#           epr_name accessor method.
#===============================================================================

sub epr_name{
    my ($self, $newval) = @_;
    $self->{epr_name} = $newval if @_ > 1;
    return $self->{epr_name};
}
#===============================================================================


1;
