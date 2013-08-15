package VAMI_ComputerSystem;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::OMC_UnitaryComputerSystem;
use strict;


@VAMI_ComputerSystem::ISA = qw(_Initializable OMC_UnitaryComputerSystem);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->OMC_UnitaryComputerSystem::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{Caption} = undef;
    $self->{ElementName} = undef;
    $self->{Dedicated} = undef;
    $self->{OtherDedicatedDescriptions} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
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
#            ElementName accessor method.
#===============================================================================

sub ElementName{
    my ($self, $newval) = @_;
    $self->{ElementName} = $newval if @_ > 1;
    return $self->{ElementName};
}
#===============================================================================


#===============================================================================
#            Dedicated accessor method.
#===============================================================================

sub Dedicated{
    my ($self, $newval) = @_;
    $self->{Dedicated} = $newval if @_ > 1;
    return $self->{Dedicated};
}
#===============================================================================


#===============================================================================
#            OtherDedicatedDescriptions accessor method.
#===============================================================================

sub OtherDedicatedDescriptions{
    my ($self, $newval) = @_;
    $self->{OtherDedicatedDescriptions} = $newval if @_ > 1;
    return $self->{OtherDedicatedDescriptions};
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
