package CIM_BootService;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_Service;
use strict;


@CIM_BootService::ISA = qw(_Initializable CIM_Service);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_Service::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{epr_name} = undef;  
    $self->{invokableMethods}->{SetBootConfigUsage} = { input => ['BootConfigSetting', 'ScopingComputerSystem', 'Role'], output => ['Job'] };
    $self->{invokableMethods}->{SetBootConfigRole} = { input => ['BootConfigSetting', 'Role'], output => ['Job'] };
    $self->{invokableMethods}->{ApplyBootConfigSetting} = { input => ['ScopingComputerSystem', 'ApplyBootConfig'], output => ['Job'] };
    $self->{invokableMethods}->{CreateBootConfigSetting} = { input => ['StartingBootConfig', 'ScopingComputerSystem'], output => ['NewBootConfig', 'Job'] };
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
