package VAMI_SoftwareInstallationService;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::VMware_SoftwareInstallationService;
use strict;


@VAMI_SoftwareInstallationService::ISA = qw(_Initializable VMware_SoftwareInstallationService);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->VMware_SoftwareInstallationService::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{RepositoryAddress} = undef;
    $self->{ProxyServerAddress} = undef;
    $self->{AutomaticUpdates} = undef;
    $self->{epr_name} = undef;  
    $self->{invokableMethods}->{SetRepositoryAddress} = { input => [], output => [] };
    $self->{invokableMethods}->{CheckAvailableUpdates} = { input => ['Target'], output => ['Job'] };
    $self->{invokableMethods}->{SetAutomaticUpdates} = { input => ['AutomaticUpdates'], output => [] };
    $self->{invokableMethods}->{SetProxyServerAddress} = { input => [], output => [] };
    $self->{invokableMethods}->{InstallFromSoftwareIdentity} = { input => [], output => [] };
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            RepositoryAddress accessor method.
#===============================================================================

sub RepositoryAddress{
    my ($self, $newval) = @_;
    $self->{RepositoryAddress} = $newval if @_ > 1;
    return $self->{RepositoryAddress};
}
#===============================================================================


#===============================================================================
#            ProxyServerAddress accessor method.
#===============================================================================

sub ProxyServerAddress{
    my ($self, $newval) = @_;
    $self->{ProxyServerAddress} = $newval if @_ > 1;
    return $self->{ProxyServerAddress};
}
#===============================================================================


#===============================================================================
#            AutomaticUpdates accessor method.
#===============================================================================

sub AutomaticUpdates{
    my ($self, $newval) = @_;
    $self->{AutomaticUpdates} = $newval if @_ > 1;
    return $self->{AutomaticUpdates};
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
