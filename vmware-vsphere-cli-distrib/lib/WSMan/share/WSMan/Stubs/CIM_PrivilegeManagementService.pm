package CIM_PrivilegeManagementService;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_AuthorizationService;
use strict;


@CIM_PrivilegeManagementService::ISA = qw(_Initializable CIM_AuthorizationService);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_AuthorizationService::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{epr_name} = undef;  
    $self->{invokableMethods}->{AssignAccess} = { input => ['Subject', 'PrivilegeGranted', 'Activities', 'ActivityQualifiers', 'QualifierFormats', 'Target', 'Privilege'], output => ['Privilege'] };
    $self->{invokableMethods}->{ChangeAccess} = { input => ['Subject', 'Target', 'PropagationPolicies', 'Privileges'], output => ['Privileges'] };
    $self->{invokableMethods}->{RemoveAccess} = { input => ['Subject', 'Privilege', 'Target'], output => [] };
    $self->{invokableMethods}->{ShowAccess} = { input => ['Subject', 'Target'], output => ['OutSubjects', 'OutTargets', 'Privileges'] };
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
