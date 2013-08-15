package CIM_SoftwareInstallationService;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_Service;
use strict;


@CIM_SoftwareInstallationService::ISA = qw(_Initializable CIM_Service);


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
    $self->{invokableMethods}->{InstallFromByteStream} = { input => ['Image', 'Target', 'InstallOptions', 'InstallOptionsValues'], output => ['Job'] };
    $self->{invokableMethods}->{InstallFromURI} = { input => ['URI', 'Target', 'InstallOptions', 'InstallOptionsValues'], output => ['Job'] };
    $self->{invokableMethods}->{CheckSoftwareIdentity} = { input => ['Source', 'Target', 'Collection'], output => ['InstallCharacteristics'] };
    $self->{invokableMethods}->{InstallFromSoftwareIdentity} = { input => ['InstallOptions', 'InstallOptionsValues', 'Source', 'Target', 'Collection'], output => ['Job'] };
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
