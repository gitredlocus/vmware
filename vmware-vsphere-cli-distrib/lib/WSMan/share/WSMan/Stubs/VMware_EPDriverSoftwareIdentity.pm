package VMware_EPDriverSoftwareIdentity;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_SoftwareIdentity;
use strict;


@VMware_EPDriverSoftwareIdentity::ISA = qw(_Initializable CIM_SoftwareIdentity);


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
    $self->{ElementName} = undef;
    $self->{InstanceID} = undef;
    $self->{IsEntity} = undef;
    $self->{VersionString} = undef;
    $self->{IsLargeBuildNumber} = undef;
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
#            VersionString accessor method.
#===============================================================================

sub VersionString{
    my ($self, $newval) = @_;
    $self->{VersionString} = $newval if @_ > 1;
    return $self->{VersionString};
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
#           epr_name accessor method.
#===============================================================================

sub epr_name{
    my ($self, $newval) = @_;
    $self->{epr_name} = $newval if @_ > 1;
    return $self->{epr_name};
}
#===============================================================================


1;
