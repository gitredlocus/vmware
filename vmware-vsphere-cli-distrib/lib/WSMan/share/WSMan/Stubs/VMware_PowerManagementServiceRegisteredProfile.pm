package VMware_PowerManagementServiceRegisteredProfile;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_RegisteredProfile;
use strict;


@VMware_PowerManagementServiceRegisteredProfile::ISA = qw(_Initializable CIM_RegisteredProfile);


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
    $self->{InstanceID} = undef;
    $self->{RegisteredName} = undef;
    $self->{RegisteredOrganization} = undef;
    $self->{RegisteredVersion} = undef;
    $self->{AdvertiseTypes} = undef;
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
#            AdvertiseTypes accessor method.
#===============================================================================

sub AdvertiseTypes{
    my ($self, $newval) = @_;
    $self->{AdvertiseTypes} = $newval if @_ > 1;
    return $self->{AdvertiseTypes};
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
