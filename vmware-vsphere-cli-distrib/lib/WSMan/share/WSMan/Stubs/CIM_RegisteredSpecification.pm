package CIM_RegisteredSpecification;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_ManagedElement;
use strict;


@CIM_RegisteredSpecification::ISA = qw(_Initializable CIM_ManagedElement);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_ManagedElement::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{InstanceID} = undef;
    $self->{SpecificationType} = undef;
    $self->{OtherSpecificationType} = undef;
    $self->{RegisteredOrganization} = undef;
    $self->{OtherRegisteredOrganization} = undef;
    $self->{RegisteredName} = undef;
    $self->{RegisteredVersion} = undef;
    $self->{AdvertiseTypes} = undef;
    $self->{AdvertiseTypeDescriptions} = undef;
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
#            SpecificationType accessor method.
#===============================================================================

sub SpecificationType{
    my ($self, $newval) = @_;
    $self->{SpecificationType} = $newval if @_ > 1;
    return $self->{SpecificationType};
}
#===============================================================================


#===============================================================================
#            OtherSpecificationType accessor method.
#===============================================================================

sub OtherSpecificationType{
    my ($self, $newval) = @_;
    $self->{OtherSpecificationType} = $newval if @_ > 1;
    return $self->{OtherSpecificationType};
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
#            OtherRegisteredOrganization accessor method.
#===============================================================================

sub OtherRegisteredOrganization{
    my ($self, $newval) = @_;
    $self->{OtherRegisteredOrganization} = $newval if @_ > 1;
    return $self->{OtherRegisteredOrganization};
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
