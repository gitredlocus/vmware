package CIM_BIOSElement;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_SoftwareElement;
use strict;


@CIM_BIOSElement::ISA = qw(_Initializable CIM_SoftwareElement);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_SoftwareElement::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{Version} = undef;
    $self->{Manufacturer} = undef;
    $self->{PrimaryBIOS} = undef;
    $self->{ListOfLanguages} = undef;
    $self->{CurrentLanguage} = undef;
    $self->{LoadedStartingAddress} = undef;
    $self->{LoadedEndingAddress} = undef;
    $self->{LoadUtilityInformation} = undef;
    $self->{ReleaseDate} = undef;
    $self->{SystemBIOSMajorRelease} = undef;
    $self->{SystemBIOSMinorRelease} = undef;
    $self->{EmbeddedControllerFirmwareMajorRelease} = undef;
    $self->{EmbeddedControllerFirmwareMinorRelease} = undef;
    $self->{RegistryURIs} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            Version accessor method.
#===============================================================================

sub Version{
    my ($self, $newval) = @_;
    $self->{Version} = $newval if @_ > 1;
    return $self->{Version};
}
#===============================================================================


#===============================================================================
#            Manufacturer accessor method.
#===============================================================================

sub Manufacturer{
    my ($self, $newval) = @_;
    $self->{Manufacturer} = $newval if @_ > 1;
    return $self->{Manufacturer};
}
#===============================================================================


#===============================================================================
#            PrimaryBIOS accessor method.
#===============================================================================

sub PrimaryBIOS{
    my ($self, $newval) = @_;
    $self->{PrimaryBIOS} = $newval if @_ > 1;
    return $self->{PrimaryBIOS};
}
#===============================================================================


#===============================================================================
#            ListOfLanguages accessor method.
#===============================================================================

sub ListOfLanguages{
    my ($self, $newval) = @_;
    $self->{ListOfLanguages} = $newval if @_ > 1;
    return $self->{ListOfLanguages};
}
#===============================================================================


#===============================================================================
#            CurrentLanguage accessor method.
#===============================================================================

sub CurrentLanguage{
    my ($self, $newval) = @_;
    $self->{CurrentLanguage} = $newval if @_ > 1;
    return $self->{CurrentLanguage};
}
#===============================================================================


#===============================================================================
#            LoadedStartingAddress accessor method.
#===============================================================================

sub LoadedStartingAddress{
    my ($self, $newval) = @_;
    $self->{LoadedStartingAddress} = $newval if @_ > 1;
    return $self->{LoadedStartingAddress};
}
#===============================================================================


#===============================================================================
#            LoadedEndingAddress accessor method.
#===============================================================================

sub LoadedEndingAddress{
    my ($self, $newval) = @_;
    $self->{LoadedEndingAddress} = $newval if @_ > 1;
    return $self->{LoadedEndingAddress};
}
#===============================================================================


#===============================================================================
#            LoadUtilityInformation accessor method.
#===============================================================================

sub LoadUtilityInformation{
    my ($self, $newval) = @_;
    $self->{LoadUtilityInformation} = $newval if @_ > 1;
    return $self->{LoadUtilityInformation};
}
#===============================================================================


#===============================================================================
#            ReleaseDate accessor method.
#===============================================================================

sub ReleaseDate{
    my ($self, $newval) = @_;
    $self->{ReleaseDate} = $newval if @_ > 1;
    return $self->{ReleaseDate};
}
#===============================================================================


#===============================================================================
#            SystemBIOSMajorRelease accessor method.
#===============================================================================

sub SystemBIOSMajorRelease{
    my ($self, $newval) = @_;
    $self->{SystemBIOSMajorRelease} = $newval if @_ > 1;
    return $self->{SystemBIOSMajorRelease};
}
#===============================================================================


#===============================================================================
#            SystemBIOSMinorRelease accessor method.
#===============================================================================

sub SystemBIOSMinorRelease{
    my ($self, $newval) = @_;
    $self->{SystemBIOSMinorRelease} = $newval if @_ > 1;
    return $self->{SystemBIOSMinorRelease};
}
#===============================================================================


#===============================================================================
#            EmbeddedControllerFirmwareMajorRelease accessor method.
#===============================================================================

sub EmbeddedControllerFirmwareMajorRelease{
    my ($self, $newval) = @_;
    $self->{EmbeddedControllerFirmwareMajorRelease} = $newval if @_ > 1;
    return $self->{EmbeddedControllerFirmwareMajorRelease};
}
#===============================================================================


#===============================================================================
#            EmbeddedControllerFirmwareMinorRelease accessor method.
#===============================================================================

sub EmbeddedControllerFirmwareMinorRelease{
    my ($self, $newval) = @_;
    $self->{EmbeddedControllerFirmwareMinorRelease} = $newval if @_ > 1;
    return $self->{EmbeddedControllerFirmwareMinorRelease};
}
#===============================================================================


#===============================================================================
#            RegistryURIs accessor method.
#===============================================================================

sub RegistryURIs{
    my ($self, $newval) = @_;
    $self->{RegistryURIs} = $newval if @_ > 1;
    return $self->{RegistryURIs};
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
