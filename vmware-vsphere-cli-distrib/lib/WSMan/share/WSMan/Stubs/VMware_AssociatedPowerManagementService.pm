package VMware_AssociatedPowerManagementService;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_AssociatedPowerManagementService;
use strict;


@VMware_AssociatedPowerManagementService::ISA = qw(_Initializable CIM_AssociatedPowerManagementService);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_AssociatedPowerManagementService::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{ServiceProvided} = undef;
    $self->{UserOfService} = undef;
    $self->{PowerState} = undef;
    $self->{RequestedPowerState} = undef;
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
#            UserOfService accessor method.
#===============================================================================

sub UserOfService{
    my ($self, $newval) = @_;
    $self->{UserOfService} = $newval if @_ > 1;
    return $self->{UserOfService};
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
#            RequestedPowerState accessor method.
#===============================================================================

sub RequestedPowerState{
    my ($self, $newval) = @_;
    $self->{RequestedPowerState} = $newval if @_ > 1;
    return $self->{RequestedPowerState};
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
