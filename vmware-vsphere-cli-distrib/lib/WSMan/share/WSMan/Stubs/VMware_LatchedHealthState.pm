package VMware_LatchedHealthState;
use WSMan::Stubs::Initializable;
use strict;


@VMware_LatchedHealthState::ISA = qw(_Initializable);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{EventId} = undef;
    $self->{LatchedClassName} = undef;
    $self->{LatchedNamespace} = undef;
    $self->{HealthState} = undef;
    $self->{Timestamp} = undef;
    $self->{epr_name} = undef;  
    push @{$self->{id_keys}}, 'EventId';
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            EventId accessor method.
#===============================================================================

sub EventId{
    my ($self, $newval) = @_;
    $self->{EventId} = $newval if @_ > 1;
    return $self->{EventId};
}
#===============================================================================


#===============================================================================
#            LatchedClassName accessor method.
#===============================================================================

sub LatchedClassName{
    my ($self, $newval) = @_;
    $self->{LatchedClassName} = $newval if @_ > 1;
    return $self->{LatchedClassName};
}
#===============================================================================


#===============================================================================
#            LatchedNamespace accessor method.
#===============================================================================

sub LatchedNamespace{
    my ($self, $newval) = @_;
    $self->{LatchedNamespace} = $newval if @_ > 1;
    return $self->{LatchedNamespace};
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
#            Timestamp accessor method.
#===============================================================================

sub Timestamp{
    my ($self, $newval) = @_;
    $self->{Timestamp} = $newval if @_ > 1;
    return $self->{Timestamp};
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
