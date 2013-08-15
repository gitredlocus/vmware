package CIM_ManagedSystemElement;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_ManagedElement;
use strict;


@CIM_ManagedSystemElement::ISA = qw(_Initializable CIM_ManagedElement);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_ManagedElement::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{InstallDate} = undef;
    $self->{Name} = undef;
    $self->{OperationalStatus} = undef;
    $self->{StatusDescriptions} = undef;
    $self->{Status} = undef;
    $self->{HealthState} = undef;
    $self->{PrimaryStatus} = undef;
    $self->{DetailedStatus} = undef;
    $self->{OperatingStatus} = undef;
    $self->{CommunicationStatus} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            InstallDate accessor method.
#===============================================================================

sub InstallDate{
    my ($self, $newval) = @_;
    $self->{InstallDate} = $newval if @_ > 1;
    return $self->{InstallDate};
}
#===============================================================================


#===============================================================================
#            Name accessor method.
#===============================================================================

sub Name{
    my ($self, $newval) = @_;
    $self->{Name} = $newval if @_ > 1;
    return $self->{Name};
}
#===============================================================================


#===============================================================================
#            OperationalStatus accessor method.
#===============================================================================

sub OperationalStatus{
    my ($self, $newval) = @_;
    $self->{OperationalStatus} = $newval if @_ > 1;
    return $self->{OperationalStatus};
}
#===============================================================================


#===============================================================================
#            StatusDescriptions accessor method.
#===============================================================================

sub StatusDescriptions{
    my ($self, $newval) = @_;
    $self->{StatusDescriptions} = $newval if @_ > 1;
    return $self->{StatusDescriptions};
}
#===============================================================================


#===============================================================================
#            Status accessor method.
#===============================================================================

sub Status{
    my ($self, $newval) = @_;
    $self->{Status} = $newval if @_ > 1;
    return $self->{Status};
}
#===============================================================================


#===============================================================================
#            HealthState accessor method.
#===============================================================================

sub HealthState{
    my ($self, $newval) = @_;
    $self->{HealthState} = $newval if @_ > 1;
    return $self->{HealthState};
}
#===============================================================================


#===============================================================================
#            PrimaryStatus accessor method.
#===============================================================================

sub PrimaryStatus{
    my ($self, $newval) = @_;
    $self->{PrimaryStatus} = $newval if @_ > 1;
    return $self->{PrimaryStatus};
}
#===============================================================================


#===============================================================================
#            DetailedStatus accessor method.
#===============================================================================

sub DetailedStatus{
    my ($self, $newval) = @_;
    $self->{DetailedStatus} = $newval if @_ > 1;
    return $self->{DetailedStatus};
}
#===============================================================================


#===============================================================================
#            OperatingStatus accessor method.
#===============================================================================

sub OperatingStatus{
    my ($self, $newval) = @_;
    $self->{OperatingStatus} = $newval if @_ > 1;
    return $self->{OperatingStatus};
}
#===============================================================================


#===============================================================================
#            CommunicationStatus accessor method.
#===============================================================================

sub CommunicationStatus{
    my ($self, $newval) = @_;
    $self->{CommunicationStatus} = $newval if @_ > 1;
    return $self->{CommunicationStatus};
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
