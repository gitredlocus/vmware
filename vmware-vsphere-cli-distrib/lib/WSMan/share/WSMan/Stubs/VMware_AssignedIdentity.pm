package VMware_AssignedIdentity;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_AssignedIdentity;
use strict;


@VMware_AssignedIdentity::ISA = qw(_Initializable CIM_AssignedIdentity);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_AssignedIdentity::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{IdentityInfo} = undef;
    $self->{ManagedElement} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            IdentityInfo accessor method.
#===============================================================================

sub IdentityInfo{
    my ($self, $newval) = @_;
    $self->{IdentityInfo} = $newval if @_ > 1;
    return $self->{IdentityInfo};
}
#===============================================================================


#===============================================================================
#            ManagedElement accessor method.
#===============================================================================

sub ManagedElement{
    my ($self, $newval) = @_;
    $self->{ManagedElement} = $newval if @_ > 1;
    return $self->{ManagedElement};
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
