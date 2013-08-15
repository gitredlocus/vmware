package VAMI_ElementSoftwareInstallationCapabilities;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::VMware_ElementSoftwareInstallationCapabilities;
use strict;


@VAMI_ElementSoftwareInstallationCapabilities::ISA = qw(_Initializable VMware_ElementSoftwareInstallationCapabilities);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->VMware_ElementSoftwareInstallationCapabilities::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{epr_name} = undef;  
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
