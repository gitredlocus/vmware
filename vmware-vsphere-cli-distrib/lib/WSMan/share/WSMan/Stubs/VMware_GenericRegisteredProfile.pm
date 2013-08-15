package VMware_GenericRegisteredProfile;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_RegisteredProfile;
use strict;


@VMware_GenericRegisteredProfile::ISA = qw(_Initializable CIM_RegisteredProfile);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_RegisteredProfile::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{AdvertiseTypes} = undef;
    $self->{AdvertiseTypeDescriptions} = undef;
    $self->{Caption} = undef;
    $self->{Description} = undef;
    $self->{ElementName} = undef;
    $self->{InstanceID} = undef;
    $self->{RegisteredName} = undef;
    $self->{RegisteredOrganization} = undef;
    $self->{RegisteredVersion} = undef;
    $self->{SpecificationType} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            AdvertiseTypes accessor method.
#===============================================================================

sub AdvertiseTypes{
    my ($self, $newval) = @_;
    $self->{AdvertiseTypes} = $newval if @_ > 1;
    return $self->{AdvertiseTypes};
}
#===============================================================================


#===============================================================================
#            AdvertiseTypeDescriptions accessor method.
#===============================================================================

sub AdvertiseTypeDescriptions{
    my ($self, $newval) = @_;
    $self->{AdvertiseTypeDescriptions} = $newval if @_ > 1;
    return $self->{AdvertiseTypeDescriptions};
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
#            RegisteredName accessor method.
#===============================================================================

sub RegisteredName{
    my ($self, $newval) = @_;
    $self->{RegisteredName} = $newval if @_ > 1;
    return $self->{RegisteredName};
}
#===============================================================================


#===============================================================================
#            RegisteredOrganization accessor method.
#===============================================================================

sub RegisteredOrganization{
    my ($self, $newval) = @_;
    $self->{RegisteredOrganization} = $newval if @_ > 1;
    return $self->{RegisteredOrganization};
}
#===============================================================================


#===============================================================================
#            RegisteredVersion accessor method.
#===============================================================================

sub RegisteredVersion{
    my ($self, $newval) = @_;
    $self->{RegisteredVersion} = $newval if @_ > 1;
    return $self->{RegisteredVersion};
}
#===============================================================================


#===============================================================================
#            SpecificationType accessor method.
#===============================================================================

sub SpecificationType{
    my ($self, $newval) = @_;
    $self->{SpecificationType} = $newval if @_ > 1;
    return $self->{SpecificationType};
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
