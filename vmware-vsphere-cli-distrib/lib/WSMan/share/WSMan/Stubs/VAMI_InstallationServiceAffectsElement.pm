package VAMI_InstallationServiceAffectsElement;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::VMware_InstallationServiceAffectsElement;
use strict;


@VAMI_InstallationServiceAffectsElement::ISA = qw(_Initializable VMware_InstallationServiceAffectsElement);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->VMware_InstallationServiceAffectsElement::_init();
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
