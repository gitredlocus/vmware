package CIM_SoftwareInstallationServiceCapabilities;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_Capabilities;
use strict;


@CIM_SoftwareInstallationServiceCapabilities::ISA = qw(_Initializable CIM_Capabilities);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_Capabilities::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{SupportedAsynchronousActions} = undef;
    $self->{SupportedSynchronousActions} = undef;
    $self->{SupportedTargetTypes} = undef;
    $self->{SupportedExtendedResourceTypes} = undef;
    $self->{CanAddToCollection} = undef;
    $self->{SupportedInstallOptions} = undef;
    $self->{OtherSupportedExtendedResourceTypeDescriptions} = undef;
    $self->{SupportedExtendedResourceTypesMajorVersions} = undef;
    $self->{SupportedExtendedResourceTypesMinorVersions} = undef;
    $self->{SupportedExtendedResourceTypesRevisionNumbers} = undef;
    $self->{SupportedExtendedResourceTypesBuildNumbers} = undef;
    $self->{SupportedURISchemes} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            SupportedAsynchronousActions accessor method.
#===============================================================================

sub SupportedAsynchronousActions{
    my ($self, $newval) = @_;
    $self->{SupportedAsynchronousActions} = $newval if @_ > 1;
    return $self->{SupportedAsynchronousActions};
}
#===============================================================================


#===============================================================================
#            SupportedSynchronousActions accessor method.
#===============================================================================

sub SupportedSynchronousActions{
    my ($self, $newval) = @_;
    $self->{SupportedSynchronousActions} = $newval if @_ > 1;
    return $self->{SupportedSynchronousActions};
}
#===============================================================================


#===============================================================================
#            SupportedTargetTypes accessor method.
#===============================================================================

sub SupportedTargetTypes{
    my ($self, $newval) = @_;
    $self->{SupportedTargetTypes} = $newval if @_ > 1;
    return $self->{SupportedTargetTypes};
}
#===============================================================================


#===============================================================================
#            SupportedExtendedResourceTypes accessor method.
#===============================================================================

sub SupportedExtendedResourceTypes{
    my ($self, $newval) = @_;
    $self->{SupportedExtendedResourceTypes} = $newval if @_ > 1;
    return $self->{SupportedExtendedResourceTypes};
}
#===============================================================================


#===============================================================================
#            CanAddToCollection accessor method.
#===============================================================================

sub CanAddToCollection{
    my ($self, $newval) = @_;
    $self->{CanAddToCollection} = $newval if @_ > 1;
    return $self->{CanAddToCollection};
}
#===============================================================================


#===============================================================================
#            SupportedInstallOptions accessor method.
#===============================================================================

sub SupportedInstallOptions{
    my ($self, $newval) = @_;
    $self->{SupportedInstallOptions} = $newval if @_ > 1;
    return $self->{SupportedInstallOptions};
}
#===============================================================================


#===============================================================================
#            OtherSupportedExtendedResourceTypeDescriptions accessor method.
#===============================================================================

sub OtherSupportedExtendedResourceTypeDescriptions{
    my ($self, $newval) = @_;
    $self->{OtherSupportedExtendedResourceTypeDescriptions} = $newval if @_ > 1;
    return $self->{OtherSupportedExtendedResourceTypeDescriptions};
}
#===============================================================================


#===============================================================================
#            SupportedExtendedResourceTypesMajorVersions accessor method.
#===============================================================================

sub SupportedExtendedResourceTypesMajorVersions{
    my ($self, $newval) = @_;
    $self->{SupportedExtendedResourceTypesMajorVersions} = $newval if @_ > 1;
    return $self->{SupportedExtendedResourceTypesMajorVersions};
}
#===============================================================================


#===============================================================================
#            SupportedExtendedResourceTypesMinorVersions accessor method.
#===============================================================================

sub SupportedExtendedResourceTypesMinorVersions{
    my ($self, $newval) = @_;
    $self->{SupportedExtendedResourceTypesMinorVersions} = $newval if @_ > 1;
    return $self->{SupportedExtendedResourceTypesMinorVersions};
}
#===============================================================================


#===============================================================================
#            SupportedExtendedResourceTypesRevisionNumbers accessor method.
#===============================================================================

sub SupportedExtendedResourceTypesRevisionNumbers{
    my ($self, $newval) = @_;
    $self->{SupportedExtendedResourceTypesRevisionNumbers} = $newval if @_ > 1;
    return $self->{SupportedExtendedResourceTypesRevisionNumbers};
}
#===============================================================================


#===============================================================================
#            SupportedExtendedResourceTypesBuildNumbers accessor method.
#===============================================================================

sub SupportedExtendedResourceTypesBuildNumbers{
    my ($self, $newval) = @_;
    $self->{SupportedExtendedResourceTypesBuildNumbers} = $newval if @_ > 1;
    return $self->{SupportedExtendedResourceTypesBuildNumbers};
}
#===============================================================================


#===============================================================================
#            SupportedURISchemes accessor method.
#===============================================================================

sub SupportedURISchemes{
    my ($self, $newval) = @_;
    $self->{SupportedURISchemes} = $newval if @_ > 1;
    return $self->{SupportedURISchemes};
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
