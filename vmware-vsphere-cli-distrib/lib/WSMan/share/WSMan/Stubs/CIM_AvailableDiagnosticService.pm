package CIM_AvailableDiagnosticService;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_ServiceAvailableToElement;
use strict;


@CIM_AvailableDiagnosticService::ISA = qw(_Initializable CIM_ServiceAvailableToElement);


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
    $self->{EstimatedDurationOfService} = undef;
    $self->{EstimatedDurationQualifier} = undef;
    $self->{IsExclusiveForME} = undef;
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
#            EstimatedDurationOfService accessor method.
#===============================================================================

sub EstimatedDurationOfService{
    my ($self, $newval) = @_;
    $self->{EstimatedDurationOfService} = $newval if @_ > 1;
    return $self->{EstimatedDurationOfService};
}
#===============================================================================


#===============================================================================
#            EstimatedDurationQualifier accessor method.
#===============================================================================

sub EstimatedDurationQualifier{
    my ($self, $newval) = @_;
    $self->{EstimatedDurationQualifier} = $newval if @_ > 1;
    return $self->{EstimatedDurationQualifier};
}
#===============================================================================


#===============================================================================
#            IsExclusiveForME accessor method.
#===============================================================================

sub IsExclusiveForME{
    my ($self, $newval) = @_;
    $self->{IsExclusiveForME} = $newval if @_ > 1;
    return $self->{IsExclusiveForME};
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
