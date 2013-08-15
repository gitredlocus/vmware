package VMware_Privilege;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_Privilege;
use strict;


@VMware_Privilege::ISA = qw(_Initializable CIM_Privilege);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_Privilege::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{ElementName} = undef;
    $self->{InstanceID} = undef;
    $self->{PrivilegeGranted} = undef;
    $self->{RepresentsAuthorizationRights} = undef;
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
#            PrivilegeGranted accessor method.
#===============================================================================

sub PrivilegeGranted{
    my ($self, $newval) = @_;
    $self->{PrivilegeGranted} = $newval if @_ > 1;
    return $self->{PrivilegeGranted};
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
