package LSIESG_MegaRAIDHBA;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_ComputerSystem;
use strict;


@LSIESG_MegaRAIDHBA::ISA = qw(_Initializable CIM_ComputerSystem);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_ComputerSystem::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{RegisteredProfile_InstanceID} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            RegisteredProfile_InstanceID accessor method.
#===============================================================================

sub RegisteredProfile_InstanceID{
    my ($self, $newval) = @_;
    $self->{RegisteredProfile_InstanceID} = $newval if @_ > 1;
    return $self->{RegisteredProfile_InstanceID};
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
