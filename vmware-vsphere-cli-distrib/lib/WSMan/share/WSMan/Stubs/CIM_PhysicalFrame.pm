package CIM_PhysicalFrame;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_PhysicalPackage;
use strict;


@CIM_PhysicalFrame::ISA = qw(_Initializable CIM_PhysicalPackage);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_PhysicalPackage::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{CableManagementStrategy} = undef;
    $self->{ServicePhilosophy} = undef;
    $self->{ServiceDescriptions} = undef;
    $self->{LockPresent} = undef;
    $self->{AudibleAlarm} = undef;
    $self->{VisibleAlarm} = undef;
    $self->{SecurityBreach} = undef;
    $self->{BreachDescription} = undef;
    $self->{IsLocked} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            CableManagementStrategy accessor method.
#===============================================================================

sub CableManagementStrategy{
    my ($self, $newval) = @_;
    $self->{CableManagementStrategy} = $newval if @_ > 1;
    return $self->{CableManagementStrategy};
}
#===============================================================================


#===============================================================================
#            ServicePhilosophy accessor method.
#===============================================================================

sub ServicePhilosophy{
    my ($self, $newval) = @_;
    $self->{ServicePhilosophy} = $newval if @_ > 1;
    return $self->{ServicePhilosophy};
}
#===============================================================================


#===============================================================================
#            ServiceDescriptions accessor method.
#===============================================================================

sub ServiceDescriptions{
    my ($self, $newval) = @_;
    $self->{ServiceDescriptions} = $newval if @_ > 1;
    return $self->{ServiceDescriptions};
}
#===============================================================================


#===============================================================================
#            LockPresent accessor method.
#===============================================================================

sub LockPresent{
    my ($self, $newval) = @_;
    $self->{LockPresent} = $newval if @_ > 1;
    return $self->{LockPresent};
}
#===============================================================================


#===============================================================================
#            AudibleAlarm accessor method.
#===============================================================================

sub AudibleAlarm{
    my ($self, $newval) = @_;
    $self->{AudibleAlarm} = $newval if @_ > 1;
    return $self->{AudibleAlarm};
}
#===============================================================================


#===============================================================================
#            VisibleAlarm accessor method.
#===============================================================================

sub VisibleAlarm{
    my ($self, $newval) = @_;
    $self->{VisibleAlarm} = $newval if @_ > 1;
    return $self->{VisibleAlarm};
}
#===============================================================================


#===============================================================================
#            SecurityBreach accessor method.
#===============================================================================

sub SecurityBreach{
    my ($self, $newval) = @_;
    $self->{SecurityBreach} = $newval if @_ > 1;
    return $self->{SecurityBreach};
}
#===============================================================================


#===============================================================================
#            BreachDescription accessor method.
#===============================================================================

sub BreachDescription{
    my ($self, $newval) = @_;
    $self->{BreachDescription} = $newval if @_ > 1;
    return $self->{BreachDescription};
}
#===============================================================================


#===============================================================================
#            IsLocked accessor method.
#===============================================================================

sub IsLocked{
    my ($self, $newval) = @_;
    $self->{IsLocked} = $newval if @_ > 1;
    return $self->{IsLocked};
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
