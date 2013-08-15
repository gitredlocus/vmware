package CIM_RoleBasedAuthorizationService;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_PrivilegeManagementService;
use strict;


@CIM_RoleBasedAuthorizationService::ISA = qw(_Initializable CIM_PrivilegeManagementService);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_PrivilegeManagementService::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{epr_name} = undef;  
    $self->{invokableMethods}->{ModifyRole} = { input => ['Privileges', 'RoleLimitedToTargets', 'Role'], output => [] };
    $self->{invokableMethods}->{ShowRoles} = { input => ['Subject', 'Target'], output => ['Roles', 'Privileges'] };
    $self->{invokableMethods}->{AssignRoles} = { input => ['Identity', 'Roles'], output => [] };
    $self->{invokableMethods}->{CreateRole} = { input => ['RoleTemplate', 'OwningSystem', 'Privileges', 'RoleLimitedToTargets'], output => ['Role'] };
    $self->{invokableMethods}->{DeleteRole} = { input => ['Role'], output => [] };
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
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
