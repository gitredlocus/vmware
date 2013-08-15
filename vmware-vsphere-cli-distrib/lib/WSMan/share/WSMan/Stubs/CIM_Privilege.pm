package CIM_Privilege;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_ManagedElement;
use strict;


@CIM_Privilege::ISA = qw(_Initializable CIM_ManagedElement);


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
    $self->{PrivilegeGranted} = undef;
    $self->{Activities} = undef;
    $self->{ActivityQualifiers} = undef;
    $self->{QualifierFormats} = undef;
    $self->{RepresentsAuthorizationRights} = undef;
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
#            PrivilegeGranted accessor method.
#===============================================================================

sub PrivilegeGranted{
    my ($self, $newval) = @_;
    $self->{PrivilegeGranted} = $newval if @_ > 1;
    return $self->{PrivilegeGranted};
}
#===============================================================================


#===============================================================================
#            Activities accessor method.
#===============================================================================

sub Activities{
    my ($self, $newval) = @_;
    $self->{Activities} = $newval if @_ > 1;
    return $self->{Activities};
}
#===============================================================================


#===============================================================================
#            ActivityQualifiers accessor method.
#===============================================================================

sub ActivityQualifiers{
    my ($self, $newval) = @_;
    $self->{ActivityQualifiers} = $newval if @_ > 1;
    return $self->{ActivityQualifiers};
}
#===============================================================================


#===============================================================================
#            QualifierFormats accessor method.
#===============================================================================

sub QualifierFormats{
    my ($self, $newval) = @_;
    $self->{QualifierFormats} = $newval if @_ > 1;
    return $self->{QualifierFormats};
}
#===============================================================================


#===============================================================================
#            RepresentsAuthorizationRights accessor method.
#===============================================================================

sub RepresentsAuthorizationRights{
    my ($self, $newval) = @_;
    $self->{RepresentsAuthorizationRights} = $newval if @_ > 1;
    return $self->{RepresentsAuthorizationRights};
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
