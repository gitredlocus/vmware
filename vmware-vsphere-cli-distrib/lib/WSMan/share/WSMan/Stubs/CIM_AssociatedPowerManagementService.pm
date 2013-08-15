package CIM_AssociatedPowerManagementService;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_ServiceAvailableToElement;
use strict;


@CIM_AssociatedPowerManagementService::ISA = qw(_Initializable CIM_ServiceAvailableToElement);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_ServiceAvailableToElement::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{ServiceProvided} = undef;
    $self->{PowerState} = undef;
    $self->{OtherPowerState} = undef;
    $self->{RequestedPowerState} = undef;
    $self->{OtherRequestedPowerState} = undef;
    $self->{PowerOnTime} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            ServiceProvided accessor method.
#===============================================================================

sub ServiceProvided{
    my ($self, $newval) = @_;
    $self->{ServiceProvided} = $newval if @_ > 1;
    return $self->{ServiceProvided};
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
#            OtherPowerState accessor method.
#===============================================================================

sub OtherPowerState{
    my ($self, $newval) = @_;
    $self->{OtherPowerState} = $newval if @_ > 1;
    return $self->{OtherPowerState};
}
#===============================================================================


#===============================================================================
#            RequestedPowerState accessor method.
#===============================================================================

sub RequestedPowerState{
    my ($self, $newval) = @_;
    $self->{RequestedPowerState} = $newval if @_ > 1;
    return $self->{RequestedPowerState};
}
#===============================================================================


#===============================================================================
#            OtherRequestedPowerState accessor method.
#===============================================================================

sub OtherRequestedPowerState{
    my ($self, $newval) = @_;
    $self->{OtherRequestedPowerState} = $newval if @_ > 1;
    return $self->{OtherRequestedPowerState};
}
#===============================================================================


#===============================================================================
#            PowerOnTime accessor method.
#===============================================================================

sub PowerOnTime{
    my ($self, $newval) = @_;
    $self->{PowerOnTime} = $newval if @_ > 1;
    return $self->{PowerOnTime};
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
