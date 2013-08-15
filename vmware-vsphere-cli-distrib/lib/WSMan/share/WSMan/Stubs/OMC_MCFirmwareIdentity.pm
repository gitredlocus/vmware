package OMC_MCFirmwareIdentity;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::OMC_SoftwareIdentity;
use strict;


@OMC_MCFirmwareIdentity::ISA = qw(_Initializable OMC_SoftwareIdentity);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->OMC_SoftwareIdentity::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{IsEntity} = undef;
    $self->{ReleaseDate} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            IsEntity accessor method.
#===============================================================================

sub IsEntity{
    my ($self, $newval) = @_;
    $self->{IsEntity} = $newval if @_ > 1;
    return $self->{IsEntity};
}
#===============================================================================


#===============================================================================
#            ReleaseDate accessor method.
#===============================================================================

sub ReleaseDate{
    my ($self, $newval) = @_;
    $self->{ReleaseDate} = $newval if @_ > 1;
    return $self->{ReleaseDate};
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
