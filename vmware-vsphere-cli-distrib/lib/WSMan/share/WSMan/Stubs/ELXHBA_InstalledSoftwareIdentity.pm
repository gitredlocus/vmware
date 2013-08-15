package ELXHBA_InstalledSoftwareIdentity;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_InstalledSoftwareIdentity;
use strict;


@ELXHBA_InstalledSoftwareIdentity::ISA = qw(_Initializable CIM_InstalledSoftwareIdentity);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_InstalledSoftwareIdentity::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{System} = undef;
    $self->{InstalledSoftware} = undef;
    $self->{Caption} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            System accessor method.
#===============================================================================

sub System{
    my ($self, $newval) = @_;
    $self->{System} = $newval if @_ > 1;
    return $self->{System};
}
#===============================================================================


#===============================================================================
#            InstalledSoftware accessor method.
#===============================================================================

sub InstalledSoftware{
    my ($self, $newval) = @_;
    $self->{InstalledSoftware} = $newval if @_ > 1;
    return $self->{InstalledSoftware};
}
#===============================================================================


#===============================================================================
#            Caption accessor method.
#===============================================================================

sub Caption{
    my ($self, $newval) = @_;
    $self->{Caption} = $newval if @_ > 1;
    return $self->{Caption};
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
