package VMware_PackageSoftwareIdentity;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_SoftwareIdentity;
use strict;


@VMware_PackageSoftwareIdentity::ISA = qw(_Initializable CIM_SoftwareIdentity);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_SoftwareIdentity::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{InstanceID} = undef;
    $self->{ElementName} = undef;
    $self->{Caption} = undef;
    $self->{IsEntity} = undef;
    $self->{VersionString} = undef;
    $self->{Description} = undef;
    $self->{InstallDate} = undef;
    $self->{ReleaseDate} = undef;
    $self->{Manufacturer} = undef;
    $self->{TargetTypes} = undef;
    $self->{IsLargeBuildNumber} = undef;
    $self->{ExtendedResourceType} = undef;
    $self->{TargetOSTypes} = undef;
    $self->{epr_name} = undef;  
    push @{$self->{id_keys}}, 'InstanceID';
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
#            IsEntity accessor method.
#===============================================================================

sub IsEntity{
    my ($self, $newval) = @_;
    $self->{IsEntity} = $newval if @_ > 1;
    return $self->{IsEntity};
}
#===============================================================================


#===============================================================================
#            VersionString accessor method.
#===============================================================================

sub VersionString{
    my ($self, $newval) = @_;
    $self->{VersionString} = $newval if @_ > 1;
    return $self->{VersionString};
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
#            InstallDate accessor method.
#===============================================================================

sub InstallDate{
    my ($self, $newval) = @_;
    $self->{InstallDate} = $newval if @_ > 1;
    return $self->{InstallDate};
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
#            Manufacturer accessor method.
#===============================================================================

sub Manufacturer{
    my ($self, $newval) = @_;
    $self->{Manufacturer} = $newval if @_ > 1;
    return $self->{Manufacturer};
}
#===============================================================================


#===============================================================================
#            TargetTypes accessor method.
#===============================================================================

sub TargetTypes{
    my ($self, $newval) = @_;
    $self->{TargetTypes} = $newval if @_ > 1;
    return $self->{TargetTypes};
}
#===============================================================================


#===============================================================================
#            IsLargeBuildNumber accessor method.
#===============================================================================

sub IsLargeBuildNumber{
    my ($self, $newval) = @_;
    $self->{IsLargeBuildNumber} = $newval if @_ > 1;
    return $self->{IsLargeBuildNumber};
}
#===============================================================================


#===============================================================================
#            ExtendedResourceType accessor method.
#===============================================================================

sub ExtendedResourceType{
    my ($self, $newval) = @_;
    $self->{ExtendedResourceType} = $newval if @_ > 1;
    return $self->{ExtendedResourceType};
}
#===============================================================================


#===============================================================================
#            TargetOSTypes accessor method.
#===============================================================================

sub TargetOSTypes{
    my ($self, $newval) = @_;
    $self->{TargetOSTypes} = $newval if @_ > 1;
    return $self->{TargetOSTypes};
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
