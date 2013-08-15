package VMware_HypervisorSoftwareIdentity;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::vmware_softwareidentity;
use strict;


@VMware_HypervisorSoftwareIdentity::ISA = qw(_Initializable VMware_SoftwareIdentity);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->VMware_SoftwareIdentity::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{Caption} = undef;
    $self->{Description} = undef;
    $self->{ElementName} = undef;
    $self->{InstanceID} = undef;
    $self->{IsEntity} = undef;
    $self->{LargeBuildNumber} = undef;
    $self->{LastStartTime} = undef;
    $self->{MajorVersion} = undef;
    $self->{Manufacturer} = undef;
    $self->{MinorVersion} = undef;
    $self->{Name} = undef;
    $self->{ReleaseDate} = undef;
    $self->{RevisionNumber} = undef;
    $self->{VersionString} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
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
#            ElementName accessor method.
#===============================================================================

sub ElementName{
    my ($self, $newval) = @_;
    $self->{ElementName} = $newval if @_ > 1;
    return $self->{ElementName};
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
#            IsEntity accessor method.
#===============================================================================

sub IsEntity{
    my ($self, $newval) = @_;
    $self->{IsEntity} = $newval if @_ > 1;
    return $self->{IsEntity};
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
#            LastStartTime accessor method.
#===============================================================================

sub LastStartTime{
    my ($self, $newval) = @_;
    $self->{LastStartTime} = $newval if @_ > 1;
    return $self->{LastStartTime};
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
#            Manufacturer accessor method.
#===============================================================================

sub Manufacturer{
    my ($self, $newval) = @_;
    $self->{Manufacturer} = $newval if @_ > 1;
    return $self->{Manufacturer};
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
#            Name accessor method.
#===============================================================================

sub Name{
    my ($self, $newval) = @_;
    $self->{Name} = $newval if @_ > 1;
    return $self->{Name};
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
#            RevisionNumber accessor method.
#===============================================================================

sub RevisionNumber{
    my ($self, $newval) = @_;
    $self->{RevisionNumber} = $newval if @_ > 1;
    return $self->{RevisionNumber};
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
#           epr_name accessor method.
#===============================================================================

sub epr_name{
    my ($self, $newval) = @_;
    $self->{epr_name} = $newval if @_ > 1;
    return $self->{epr_name};
}
#===============================================================================


1;
