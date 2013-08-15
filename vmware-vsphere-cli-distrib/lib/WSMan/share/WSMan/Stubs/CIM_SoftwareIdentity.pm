package CIM_SoftwareIdentity;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_LogicalElement;
use strict;


@CIM_SoftwareIdentity::ISA = qw(_Initializable CIM_LogicalElement);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_LogicalElement::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{InstanceID} = undef;
    $self->{MajorVersion} = undef;
    $self->{MinorVersion} = undef;
    $self->{RevisionNumber} = undef;
    $self->{BuildNumber} = undef;
    $self->{LargeBuildNumber} = undef;
    $self->{IsLargeBuildNumber} = undef;
    $self->{VersionString} = undef;
    $self->{TargetOperatingSystems} = undef;
    $self->{Manufacturer} = undef;
    $self->{Languages} = undef;
    $self->{Classifications} = undef;
    $self->{ClassificationDescriptions} = undef;
    $self->{SerialNumber} = undef;
    $self->{TargetTypes} = undef;
    $self->{IdentityInfoValue} = undef;
    $self->{IdentityInfoType} = undef;
    $self->{ReleaseDate} = undef;
    $self->{IsEntity} = undef;
    $self->{ExtendedResourceType} = undef;
    $self->{OtherExtendedResourceTypeDescription} = undef;
    $self->{MinExtendedResourceTypeMajorVersion} = undef;
    $self->{MinExtendedResourceTypeMinorVersion} = undef;
    $self->{MinExtendedResourceTypeRevisionNumber} = undef;
    $self->{MinExtendedResourceTypeBuildNumber} = undef;
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
#            MajorVersion accessor method.
#===============================================================================

sub MajorVersion{
    my ($self, $newval) = @_;
    $self->{MajorVersion} = $newval if @_ > 1;
    return $self->{MajorVersion};
}
#===============================================================================


#===============================================================================
#            MinorVersion accessor method.
#===============================================================================

sub MinorVersion{
    my ($self, $newval) = @_;
    $self->{MinorVersion} = $newval if @_ > 1;
    return $self->{MinorVersion};
}
#===============================================================================


#===============================================================================
#            RevisionNumber accessor method.
#===============================================================================

sub RevisionNumber{
    my ($self, $newval) = @_;
    $self->{RevisionNumber} = $newval if @_ > 1;
    return $self->{RevisionNumber};
}
#===============================================================================


#===============================================================================
#            BuildNumber accessor method.
#===============================================================================

sub BuildNumber{
    my ($self, $newval) = @_;
    $self->{BuildNumber} = $newval if @_ > 1;
    return $self->{BuildNumber};
}
#===============================================================================


#===============================================================================
#            LargeBuildNumber accessor method.
#===============================================================================

sub LargeBuildNumber{
    my ($self, $newval) = @_;
    $self->{LargeBuildNumber} = $newval if @_ > 1;
    return $self->{LargeBuildNumber};
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
#            VersionString accessor method.
#===============================================================================

sub VersionString{
    my ($self, $newval) = @_;
    $self->{VersionString} = $newval if @_ > 1;
    return $self->{VersionString};
}
#===============================================================================


#===============================================================================
#            TargetOperatingSystems accessor method.
#===============================================================================

sub TargetOperatingSystems{
    my ($self, $newval) = @_;
    $self->{TargetOperatingSystems} = $newval if @_ > 1;
    return $self->{TargetOperatingSystems};
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
#            Languages accessor method.
#===============================================================================

sub Languages{
    my ($self, $newval) = @_;
    $self->{Languages} = $newval if @_ > 1;
    return $self->{Languages};
}
#===============================================================================


#===============================================================================
#            Classifications accessor method.
#===============================================================================

sub Classifications{
    my ($self, $newval) = @_;
    $self->{Classifications} = $newval if @_ > 1;
    return $self->{Classifications};
}
#===============================================================================


#===============================================================================
#            ClassificationDescriptions accessor method.
#===============================================================================

sub ClassificationDescriptions{
    my ($self, $newval) = @_;
    $self->{ClassificationDescriptions} = $newval if @_ > 1;
    return $self->{ClassificationDescriptions};
}
#===============================================================================


#===============================================================================
#            SerialNumber accessor method.
#===============================================================================

sub SerialNumber{
    my ($self, $newval) = @_;
    $self->{SerialNumber} = $newval if @_ > 1;
    return $self->{SerialNumber};
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
#            IdentityInfoValue accessor method.
#===============================================================================

sub IdentityInfoValue{
    my ($self, $newval) = @_;
    $self->{IdentityInfoValue} = $newval if @_ > 1;
    return $self->{IdentityInfoValue};
}
#===============================================================================


#===============================================================================
#            IdentityInfoType accessor method.
#===============================================================================

sub IdentityInfoType{
    my ($self, $newval) = @_;
    $self->{IdentityInfoType} = $newval if @_ > 1;
    return $self->{IdentityInfoType};
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
#            IsEntity accessor method.
#===============================================================================

sub IsEntity{
    my ($self, $newval) = @_;
    $self->{IsEntity} = $newval if @_ > 1;
    return $self->{IsEntity};
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
#            OtherExtendedResourceTypeDescription accessor method.
#===============================================================================

sub OtherExtendedResourceTypeDescription{
    my ($self, $newval) = @_;
    $self->{OtherExtendedResourceTypeDescription} = $newval if @_ > 1;
    return $self->{OtherExtendedResourceTypeDescription};
}
#===============================================================================


#===============================================================================
#            MinExtendedResourceTypeMajorVersion accessor method.
#===============================================================================

sub MinExtendedResourceTypeMajorVersion{
    my ($self, $newval) = @_;
    $self->{MinExtendedResourceTypeMajorVersion} = $newval if @_ > 1;
    return $self->{MinExtendedResourceTypeMajorVersion};
}
#===============================================================================


#===============================================================================
#            MinExtendedResourceTypeMinorVersion accessor method.
#===============================================================================

sub MinExtendedResourceTypeMinorVersion{
    my ($self, $newval) = @_;
    $self->{MinExtendedResourceTypeMinorVersion} = $newval if @_ > 1;
    return $self->{MinExtendedResourceTypeMinorVersion};
}
#===============================================================================


#===============================================================================
#            MinExtendedResourceTypeRevisionNumber accessor method.
#===============================================================================

sub MinExtendedResourceTypeRevisionNumber{
    my ($self, $newval) = @_;
    $self->{MinExtendedResourceTypeRevisionNumber} = $newval if @_ > 1;
    return $self->{MinExtendedResourceTypeRevisionNumber};
}
#===============================================================================


#===============================================================================
#            MinExtendedResourceTypeBuildNumber accessor method.
#===============================================================================

sub MinExtendedResourceTypeBuildNumber{
    my ($self, $newval) = @_;
    $self->{MinExtendedResourceTypeBuildNumber} = $newval if @_ > 1;
    return $self->{MinExtendedResourceTypeBuildNumber};
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
