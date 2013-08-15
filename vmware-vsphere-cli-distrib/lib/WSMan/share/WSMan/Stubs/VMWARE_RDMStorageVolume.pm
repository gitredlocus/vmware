package VMWARE_RDMStorageVolume;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_StorageVolume;
use strict;


@VMWARE_RDMStorageVolume::ISA = qw(_Initializable CIM_StorageVolume);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_StorageVolume::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{passthru} = undef;
    $self->{SystemCreationClassName} = undef;
    $self->{SystemName} = undef;
    $self->{CreationClassName} = undef;
    $self->{DeviceID} = undef;
    $self->{ElementName} = undef;
    $self->{Name} = undef;
    $self->{NameFormat} = undef;
    $self->{OtherNameFormat} = undef;
    $self->{ExtentStatus} = undef;
    $self->{OperationalStatus} = undef;
    $self->{BlockSize} = undef;
    $self->{NumberOfBlocks} = undef;
    $self->{IsBasedOnUnderlyingRedundancy} = undef;
    $self->{NoSinglePointOfFailure} = undef;
    $self->{DataRedundancy} = undef;
    $self->{PackageRedundancy} = undef;
    $self->{DeltaReservation} = undef;
    $self->{epr_name} = undef;  
    push @{$self->{id_keys}}, 'SystemCreationClassName';
    push @{$self->{id_keys}}, 'SystemName';
    push @{$self->{id_keys}}, 'CreationClassName';
    push @{$self->{id_keys}}, 'DeviceID';
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            passthru accessor method.
#===============================================================================

sub passthru{
    my ($self, $newval) = @_;
    $self->{passthru} = $newval if @_ > 1;
    return $self->{passthru};
}
#===============================================================================


#===============================================================================
#            SystemCreationClassName accessor method.
#===============================================================================

sub SystemCreationClassName{
    my ($self, $newval) = @_;
    $self->{SystemCreationClassName} = $newval if @_ > 1;
    return $self->{SystemCreationClassName};
}
#===============================================================================


#===============================================================================
#            SystemName accessor method.
#===============================================================================

sub SystemName{
    my ($self, $newval) = @_;
    $self->{SystemName} = $newval if @_ > 1;
    return $self->{SystemName};
}
#===============================================================================


#===============================================================================
#            CreationClassName accessor method.
#===============================================================================

sub CreationClassName{
    my ($self, $newval) = @_;
    $self->{CreationClassName} = $newval if @_ > 1;
    return $self->{CreationClassName};
}
#===============================================================================


#===============================================================================
#            DeviceID accessor method.
#===============================================================================

sub DeviceID{
    my ($self, $newval) = @_;
    $self->{DeviceID} = $newval if @_ > 1;
    return $self->{DeviceID};
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
#            Name accessor method.
#===============================================================================

sub Name{
    my ($self, $newval) = @_;
    $self->{Name} = $newval if @_ > 1;
    return $self->{Name};
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
#            OtherNameFormat accessor method.
#===============================================================================

sub OtherNameFormat{
    my ($self, $newval) = @_;
    $self->{OtherNameFormat} = $newval if @_ > 1;
    return $self->{OtherNameFormat};
}
#===============================================================================


#===============================================================================
#            ExtentStatus accessor method.
#===============================================================================

sub ExtentStatus{
    my ($self, $newval) = @_;
    $self->{ExtentStatus} = $newval if @_ > 1;
    return $self->{ExtentStatus};
}
#===============================================================================


#===============================================================================
#            OperationalStatus accessor method.
#===============================================================================

sub OperationalStatus{
    my ($self, $newval) = @_;
    $self->{OperationalStatus} = $newval if @_ > 1;
    return $self->{OperationalStatus};
}
#===============================================================================


#===============================================================================
#            BlockSize accessor method.
#===============================================================================

sub BlockSize{
    my ($self, $newval) = @_;
    $self->{BlockSize} = $newval if @_ > 1;
    return $self->{BlockSize};
}
#===============================================================================


#===============================================================================
#            NumberOfBlocks accessor method.
#===============================================================================

sub NumberOfBlocks{
    my ($self, $newval) = @_;
    $self->{NumberOfBlocks} = $newval if @_ > 1;
    return $self->{NumberOfBlocks};
}
#===============================================================================


#===============================================================================
#            IsBasedOnUnderlyingRedundancy accessor method.
#===============================================================================

sub IsBasedOnUnderlyingRedundancy{
    my ($self, $newval) = @_;
    $self->{IsBasedOnUnderlyingRedundancy} = $newval if @_ > 1;
    return $self->{IsBasedOnUnderlyingRedundancy};
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
#            DataRedundancy accessor method.
#===============================================================================

sub DataRedundancy{
    my ($self, $newval) = @_;
    $self->{DataRedundancy} = $newval if @_ > 1;
    return $self->{DataRedundancy};
}
#===============================================================================


#===============================================================================
#            PackageRedundancy accessor method.
#===============================================================================

sub PackageRedundancy{
    my ($self, $newval) = @_;
    $self->{PackageRedundancy} = $newval if @_ > 1;
    return $self->{PackageRedundancy};
}
#===============================================================================


#===============================================================================
#            DeltaReservation accessor method.
#===============================================================================

sub DeltaReservation{
    my ($self, $newval) = @_;
    $self->{DeltaReservation} = $newval if @_ > 1;
    return $self->{DeltaReservation};
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
