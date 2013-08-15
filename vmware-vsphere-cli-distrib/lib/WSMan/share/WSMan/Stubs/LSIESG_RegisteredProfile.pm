package LSIESG_RegisteredProfile;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_RegisteredProfile;
use strict;


@LSIESG_RegisteredProfile::ISA = qw(_Initializable CIM_RegisteredProfile);


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
    $self->{SoftwareIdentity_InstanceID} = undef;
    $self->{DeviceType} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            SoftwareIdentity_InstanceID accessor method.
#===============================================================================

sub SoftwareIdentity_InstanceID{
    my ($self, $newval) = @_;
    $self->{SoftwareIdentity_InstanceID} = $newval if @_ > 1;
    return $self->{SoftwareIdentity_InstanceID};
}
#===============================================================================


#===============================================================================
#            DeviceType accessor method.
#===============================================================================

sub DeviceType{
    my ($self, $newval) = @_;
    $self->{DeviceType} = $newval if @_ > 1;
    return $self->{DeviceType};
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
