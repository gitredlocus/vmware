package VMware_SoftwareInstallationServiceCapabilities;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_SoftwareInstallationServiceCapabilities;
use strict;


@VMware_SoftwareInstallationServiceCapabilities::ISA = qw(_Initializable CIM_SoftwareInstallationServiceCapabilities);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_SoftwareInstallationServiceCapabilities::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{InstanceID} = undef;
    $self->{ElementName} = undef;
    $self->{Caption} = undef;
    $self->{Description} = undef;
    $self->{SupportedAsynchronousActions} = undef;
    $self->{SupportedSynchronousActions} = undef;
    $self->{SupportedExtendedResourceTypes} = undef;
    $self->{CanAddToCollection} = undef;
    $self->{SupportedInstallOptions} = undef;
    $self->{SupportedTargetTypes} = undef;
    $self->{SupportedURISchemes} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            InstanceID accessor method.
#===============================================================================

sub InstanceID{
    my ($self, $newval) = @_;
    $self->{InstanceID} = $newval if @_ > 1;
    return $self->{InstanceID};
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
#            Caption accessor method.
#===============================================================================

sub Caption{
    my ($self, $newval) = @_;
    $self->{Caption} = $newval if @_ > 1;
    return $self->{Caption};
}
#===============================================================================


#===============================================================================
#            Description accessor method.
#===============================================================================

sub Description{
    my ($self, $newval) = @_;
    $self->{Description} = $newval if @_ > 1;
    return $self->{Description};
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
#            SupportedTargetTypes accessor method.
#===============================================================================

sub SupportedTargetTypes{
    my ($self, $newval) = @_;
    $self->{SupportedTargetTypes} = $newval if @_ > 1;
    return $self->{SupportedTargetTypes};
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
