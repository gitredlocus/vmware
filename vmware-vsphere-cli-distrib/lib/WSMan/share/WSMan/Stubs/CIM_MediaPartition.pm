package CIM_MediaPartition;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_StorageExtent;
use strict;


@CIM_MediaPartition::ISA = qw(_Initializable CIM_StorageExtent);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_StorageExtent::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{Bootable} = undef;
    $self->{Allocatable} = undef;
    $self->{Signature} = undef;
    $self->{SignatureAlgorithm} = undef;
    $self->{SignatureState} = undef;
    $self->{Extendable} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            Bootable accessor method.
#===============================================================================

sub Bootable{
    my ($self, $newval) = @_;
    $self->{Bootable} = $newval if @_ > 1;
    return $self->{Bootable};
}
#===============================================================================


#===============================================================================
#            Allocatable accessor method.
#===============================================================================

sub Allocatable{
    my ($self, $newval) = @_;
    $self->{Allocatable} = $newval if @_ > 1;
    return $self->{Allocatable};
}
#===============================================================================


#===============================================================================
#            Signature accessor method.
#===============================================================================

sub Signature{
    my ($self, $newval) = @_;
    $self->{Signature} = $newval if @_ > 1;
    return $self->{Signature};
}
#===============================================================================


#===============================================================================
#            SignatureAlgorithm accessor method.
#===============================================================================

sub SignatureAlgorithm{
    my ($self, $newval) = @_;
    $self->{SignatureAlgorithm} = $newval if @_ > 1;
    return $self->{SignatureAlgorithm};
}
#===============================================================================


#===============================================================================
#            SignatureState accessor method.
#===============================================================================

sub SignatureState{
    my ($self, $newval) = @_;
    $self->{SignatureState} = $newval if @_ > 1;
    return $self->{SignatureState};
}
#===============================================================================


#===============================================================================
#            Extendable accessor method.
#===============================================================================

sub Extendable{
    my ($self, $newval) = @_;
    $self->{Extendable} = $newval if @_ > 1;
    return $self->{Extendable};
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
