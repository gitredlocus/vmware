package CIM_UnitaryComputerSystem;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_ComputerSystem;
use strict;


@CIM_UnitaryComputerSystem::ISA = qw(_Initializable CIM_ComputerSystem);


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
    $self->{InitialLoadInfo} = undef;
    $self->{LastLoadInfo} = undef;
    $self->{PowerManagementSupported} = undef;
    $self->{PowerState} = undef;
    $self->{WakeUpType} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            InitialLoadInfo accessor method.
#===============================================================================

sub InitialLoadInfo{
    my ($self, $newval) = @_;
    $self->{InitialLoadInfo} = $newval if @_ > 1;
    return $self->{InitialLoadInfo};
}
#===============================================================================


#===============================================================================
#            LastLoadInfo accessor method.
#===============================================================================

sub LastLoadInfo{
    my ($self, $newval) = @_;
    $self->{LastLoadInfo} = $newval if @_ > 1;
    return $self->{LastLoadInfo};
}
#===============================================================================


#===============================================================================
#            PowerManagementSupported accessor method.
#===============================================================================

sub PowerManagementSupported{
    my ($self, $newval) = @_;
    $self->{PowerManagementSupported} = $newval if @_ > 1;
    return $self->{PowerManagementSupported};
}
#===============================================================================


#===============================================================================
#            PowerState accessor method.
#===============================================================================

sub PowerState{
    my ($self, $newval) = @_;
    $self->{PowerState} = $newval if @_ > 1;
    return $self->{PowerState};
}
#===============================================================================


#===============================================================================
#            WakeUpType accessor method.
#===============================================================================

sub WakeUpType{
    my ($self, $newval) = @_;
    $self->{WakeUpType} = $newval if @_ > 1;
    return $self->{WakeUpType};
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
