package ELXHBA_TapeDrive;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_TapeDrive;
use strict;


@ELXHBA_TapeDrive::ISA = qw(_Initializable CIM_TapeDrive);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_TapeDrive::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{Capacity} = undef;
    $self->{CapacityUnit} = undef;
    $self->{MaskingState} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            Capacity accessor method.
#===============================================================================

sub Capacity{
    my ($self, $newval) = @_;
    $self->{Capacity} = $newval if @_ > 1;
    return $self->{Capacity};
}
#===============================================================================


#===============================================================================
#            CapacityUnit accessor method.
#===============================================================================

sub CapacityUnit{
    my ($self, $newval) = @_;
    $self->{CapacityUnit} = $newval if @_ > 1;
    return $self->{CapacityUnit};
}
#===============================================================================


#===============================================================================
#            MaskingState accessor method.
#===============================================================================

sub MaskingState{
    my ($self, $newval) = @_;
    $self->{MaskingState} = $newval if @_ > 1;
    return $self->{MaskingState};
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
