package CIM_ObjectManagerCommunicationMechanism;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_ServiceAccessPoint;
use strict;


@CIM_ObjectManagerCommunicationMechanism::ISA = qw(_Initializable CIM_ServiceAccessPoint);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_ServiceAccessPoint::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{CommunicationMechanism} = undef;
    $self->{OtherCommunicationMechanismDescription} = undef;
    $self->{FunctionalProfilesSupported} = undef;
    $self->{FunctionalProfileDescriptions} = undef;
    $self->{MultipleOperationsSupported} = undef;
    $self->{AuthenticationMechanismsSupported} = undef;
    $self->{AuthenticationMechanismDescriptions} = undef;
    $self->{Version} = undef;
    $self->{AdvertiseTypes} = undef;
    $self->{AdvertiseTypeDescriptions} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            CommunicationMechanism accessor method.
#===============================================================================

sub CommunicationMechanism{
    my ($self, $newval) = @_;
    $self->{CommunicationMechanism} = $newval if @_ > 1;
    return $self->{CommunicationMechanism};
}
#===============================================================================


#===============================================================================
#            OtherCommunicationMechanismDescription accessor method.
#===============================================================================

sub OtherCommunicationMechanismDescription{
    my ($self, $newval) = @_;
    $self->{OtherCommunicationMechanismDescription} = $newval if @_ > 1;
    return $self->{OtherCommunicationMechanismDescription};
}
#===============================================================================


#===============================================================================
#            FunctionalProfilesSupported accessor method.
#===============================================================================

sub FunctionalProfilesSupported{
    my ($self, $newval) = @_;
    $self->{FunctionalProfilesSupported} = $newval if @_ > 1;
    return $self->{FunctionalProfilesSupported};
}
#===============================================================================


#===============================================================================
#            FunctionalProfileDescriptions accessor method.
#===============================================================================

sub FunctionalProfileDescriptions{
    my ($self, $newval) = @_;
    $self->{FunctionalProfileDescriptions} = $newval if @_ > 1;
    return $self->{FunctionalProfileDescriptions};
}
#===============================================================================


#===============================================================================
#            MultipleOperationsSupported accessor method.
#===============================================================================

sub MultipleOperationsSupported{
    my ($self, $newval) = @_;
    $self->{MultipleOperationsSupported} = $newval if @_ > 1;
    return $self->{MultipleOperationsSupported};
}
#===============================================================================


#===============================================================================
#            AuthenticationMechanismsSupported accessor method.
#===============================================================================

sub AuthenticationMechanismsSupported{
    my ($self, $newval) = @_;
    $self->{AuthenticationMechanismsSupported} = $newval if @_ > 1;
    return $self->{AuthenticationMechanismsSupported};
}
#===============================================================================


#===============================================================================
#            AuthenticationMechanismDescriptions accessor method.
#===============================================================================

sub AuthenticationMechanismDescriptions{
    my ($self, $newval) = @_;
    $self->{AuthenticationMechanismDescriptions} = $newval if @_ > 1;
    return $self->{AuthenticationMechanismDescriptions};
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
#           epr_name accessor method.
#===============================================================================

sub epr_name{
    my ($self, $newval) = @_;
    $self->{epr_name} = $newval if @_ > 1;
    return $self->{epr_name};
}
#===============================================================================


1;
