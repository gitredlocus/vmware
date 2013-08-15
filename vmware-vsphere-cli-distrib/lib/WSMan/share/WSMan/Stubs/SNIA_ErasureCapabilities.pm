package SNIA_ErasureCapabilities;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_Capabilities;
use strict;


@SNIA_ErasureCapabilities::ISA = qw(_Initializable CIM_Capabilities);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_Capabilities::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{ErasureMethod} = undef;
    $self->{DefaultErasureMethod} = undef;
    $self->{CanEraseOnReturnToStoragePool} = undef;
    $self->{ElementTypesSupported} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            ErasureMethod accessor method.
#===============================================================================

sub ErasureMethod{
    my ($self, $newval) = @_;
    $self->{ErasureMethod} = $newval if @_ > 1;
    return $self->{ErasureMethod};
}
#===============================================================================


#===============================================================================
#            DefaultErasureMethod accessor method.
#===============================================================================

sub DefaultErasureMethod{
    my ($self, $newval) = @_;
    $self->{DefaultErasureMethod} = $newval if @_ > 1;
    return $self->{DefaultErasureMethod};
}
#===============================================================================


#===============================================================================
#            CanEraseOnReturnToStoragePool accessor method.
#===============================================================================

sub CanEraseOnReturnToStoragePool{
    my ($self, $newval) = @_;
    $self->{CanEraseOnReturnToStoragePool} = $newval if @_ > 1;
    return $self->{CanEraseOnReturnToStoragePool};
}
#===============================================================================


#===============================================================================
#            ElementTypesSupported accessor method.
#===============================================================================

sub ElementTypesSupported{
    my ($self, $newval) = @_;
    $self->{ElementTypesSupported} = $newval if @_ > 1;
    return $self->{ElementTypesSupported};
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
