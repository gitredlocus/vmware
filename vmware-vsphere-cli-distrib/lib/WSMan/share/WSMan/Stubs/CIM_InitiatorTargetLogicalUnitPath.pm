package CIM_InitiatorTargetLogicalUnitPath;
use WSMan::Stubs::Initializable;
use strict;


@CIM_InitiatorTargetLogicalUnitPath::ISA = qw(_Initializable);


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
    $self->{Initiator} = undef;
    $self->{Target} = undef;
    $self->{LogicalUnit} = undef;
    $self->{State} = undef;
    $self->{epr_name} = undef;  
    push @{$self->{id_keys}}, 'Initiator';
    push @{$self->{id_keys}}, 'Target';
    push @{$self->{id_keys}}, 'LogicalUnit';
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            Initiator accessor method.
#===============================================================================

sub Initiator{
    my ($self, $newval) = @_;
    $self->{Initiator} = $newval if @_ > 1;
    return $self->{Initiator};
}
#===============================================================================


#===============================================================================
#            Target accessor method.
#===============================================================================

sub Target{
    my ($self, $newval) = @_;
    $self->{Target} = $newval if @_ > 1;
    return $self->{Target};
}
#===============================================================================


#===============================================================================
#            LogicalUnit accessor method.
#===============================================================================

sub LogicalUnit{
    my ($self, $newval) = @_;
    $self->{LogicalUnit} = $newval if @_ > 1;
    return $self->{LogicalUnit};
}
#===============================================================================


#===============================================================================
#            State accessor method.
#===============================================================================

sub State{
    my ($self, $newval) = @_;
    $self->{State} = $newval if @_ > 1;
    return $self->{State};
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
