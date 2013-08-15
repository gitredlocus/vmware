package CIM_MediaAccessDevice;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_LogicalDevice;
use strict;


@CIM_MediaAccessDevice::ISA = qw(_Initializable CIM_LogicalDevice);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_LogicalDevice::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{Capabilities} = undef;
    $self->{CapabilityDescriptions} = undef;
    $self->{ErrorMethodology} = undef;
    $self->{CompressionMethod} = undef;
    $self->{NumberOfMediaSupported} = undef;
    $self->{MaxMediaSize} = undef;
    $self->{DefaultBlockSize} = undef;
    $self->{MaxBlockSize} = undef;
    $self->{MinBlockSize} = undef;
    $self->{NeedsCleaning} = undef;
    $self->{MediaIsLocked} = undef;
    $self->{Security} = undef;
    $self->{LastCleaned} = undef;
    $self->{MaxAccessTime} = undef;
    $self->{UncompressedDataRate} = undef;
    $self->{LoadTime} = undef;
    $self->{UnloadTime} = undef;
    $self->{MountCount} = undef;
    $self->{TimeOfLastMount} = undef;
    $self->{TotalMountTime} = undef;
    $self->{UnitsDescription} = undef;
    $self->{MaxUnitsBeforeCleaning} = undef;
    $self->{UnitsUsed} = undef;
    $self->{epr_name} = undef;  
    $self->{invokableMethods}->{LockMedia} = { input => ['Lock'], output => [] };
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            Capabilities accessor method.
#===============================================================================

sub Capabilities{
    my ($self, $newval) = @_;
    $self->{Capabilities} = $newval if @_ > 1;
    return $self->{Capabilities};
}
#===============================================================================


#===============================================================================
#            CapabilityDescriptions accessor method.
#===============================================================================

sub CapabilityDescriptions{
    my ($self, $newval) = @_;
    $self->{CapabilityDescriptions} = $newval if @_ > 1;
    return $self->{CapabilityDescriptions};
}
#===============================================================================


#===============================================================================
#            ErrorMethodology accessor method.
#===============================================================================

sub ErrorMethodology{
    my ($self, $newval) = @_;
    $self->{ErrorMethodology} = $newval if @_ > 1;
    return $self->{ErrorMethodology};
}
#===============================================================================


#===============================================================================
#            CompressionMethod accessor method.
#===============================================================================

sub CompressionMethod{
    my ($self, $newval) = @_;
    $self->{CompressionMethod} = $newval if @_ > 1;
    return $self->{CompressionMethod};
}
#===============================================================================


#===============================================================================
#            NumberOfMediaSupported accessor method.
#===============================================================================

sub NumberOfMediaSupported{
    my ($self, $newval) = @_;
    $self->{NumberOfMediaSupported} = $newval if @_ > 1;
    return $self->{NumberOfMediaSupported};
}
#===============================================================================


#===============================================================================
#            MaxMediaSize accessor method.
#===============================================================================

sub MaxMediaSize{
    my ($self, $newval) = @_;
    $self->{MaxMediaSize} = $newval if @_ > 1;
    return $self->{MaxMediaSize};
}
#===============================================================================


#===============================================================================
#            DefaultBlockSize accessor method.
#===============================================================================

sub DefaultBlockSize{
    my ($self, $newval) = @_;
    $self->{DefaultBlockSize} = $newval if @_ > 1;
    return $self->{DefaultBlockSize};
}
#===============================================================================


#===============================================================================
#            MaxBlockSize accessor method.
#===============================================================================

sub MaxBlockSize{
    my ($self, $newval) = @_;
    $self->{MaxBlockSize} = $newval if @_ > 1;
    return $self->{MaxBlockSize};
}
#===============================================================================


#===============================================================================
#            MinBlockSize accessor method.
#===============================================================================

sub MinBlockSize{
    my ($self, $newval) = @_;
    $self->{MinBlockSize} = $newval if @_ > 1;
    return $self->{MinBlockSize};
}
#===============================================================================


#===============================================================================
#            NeedsCleaning accessor method.
#===============================================================================

sub NeedsCleaning{
    my ($self, $newval) = @_;
    $self->{NeedsCleaning} = $newval if @_ > 1;
    return $self->{NeedsCleaning};
}
#===============================================================================


#===============================================================================
#            MediaIsLocked accessor method.
#===============================================================================

sub MediaIsLocked{
    my ($self, $newval) = @_;
    $self->{MediaIsLocked} = $newval if @_ > 1;
    return $self->{MediaIsLocked};
}
#===============================================================================


#===============================================================================
#            Security accessor method.
#===============================================================================

sub Security{
    my ($self, $newval) = @_;
    $self->{Security} = $newval if @_ > 1;
    return $self->{Security};
}
#===============================================================================


#===============================================================================
#            LastCleaned accessor method.
#===============================================================================

sub LastCleaned{
    my ($self, $newval) = @_;
    $self->{LastCleaned} = $newval if @_ > 1;
    return $self->{LastCleaned};
}
#===============================================================================


#===============================================================================
#            MaxAccessTime accessor method.
#===============================================================================

sub MaxAccessTime{
    my ($self, $newval) = @_;
    $self->{MaxAccessTime} = $newval if @_ > 1;
    return $self->{MaxAccessTime};
}
#===============================================================================


#===============================================================================
#            UncompressedDataRate accessor method.
#===============================================================================

sub UncompressedDataRate{
    my ($self, $newval) = @_;
    $self->{UncompressedDataRate} = $newval if @_ > 1;
    return $self->{UncompressedDataRate};
}
#===============================================================================


#===============================================================================
#            LoadTime accessor method.
#===============================================================================

sub LoadTime{
    my ($self, $newval) = @_;
    $self->{LoadTime} = $newval if @_ > 1;
    return $self->{LoadTime};
}
#===============================================================================


#===============================================================================
#            UnloadTime accessor method.
#===============================================================================

sub UnloadTime{
    my ($self, $newval) = @_;
    $self->{UnloadTime} = $newval if @_ > 1;
    return $self->{UnloadTime};
}
#===============================================================================


#===============================================================================
#            MountCount accessor method.
#===============================================================================

sub MountCount{
    my ($self, $newval) = @_;
    $self->{MountCount} = $newval if @_ > 1;
    return $self->{MountCount};
}
#===============================================================================


#===============================================================================
#            TimeOfLastMount accessor method.
#===============================================================================

sub TimeOfLastMount{
    my ($self, $newval) = @_;
    $self->{TimeOfLastMount} = $newval if @_ > 1;
    return $self->{TimeOfLastMount};
}
#===============================================================================


#===============================================================================
#            TotalMountTime accessor method.
#===============================================================================

sub TotalMountTime{
    my ($self, $newval) = @_;
    $self->{TotalMountTime} = $newval if @_ > 1;
    return $self->{TotalMountTime};
}
#===============================================================================


#===============================================================================
#            UnitsDescription accessor method.
#===============================================================================

sub UnitsDescription{
    my ($self, $newval) = @_;
    $self->{UnitsDescription} = $newval if @_ > 1;
    return $self->{UnitsDescription};
}
#===============================================================================


#===============================================================================
#            MaxUnitsBeforeCleaning accessor method.
#===============================================================================

sub MaxUnitsBeforeCleaning{
    my ($self, $newval) = @_;
    $self->{MaxUnitsBeforeCleaning} = $newval if @_ > 1;
    return $self->{MaxUnitsBeforeCleaning};
}
#===============================================================================


#===============================================================================
#            UnitsUsed accessor method.
#===============================================================================

sub UnitsUsed{
    my ($self, $newval) = @_;
    $self->{UnitsUsed} = $newval if @_ > 1;
    return $self->{UnitsUsed};
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
