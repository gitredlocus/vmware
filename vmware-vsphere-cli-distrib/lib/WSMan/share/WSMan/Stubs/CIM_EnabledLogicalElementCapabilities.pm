package CIM_EnabledLogicalElementCapabilities;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_Capabilities;
use strict;


@CIM_EnabledLogicalElementCapabilities::ISA = qw(_Initializable CIM_Capabilities);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_Capabilities::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{ElementNameEditSupported} = undef;
    $self->{MaxElementNameLen} = undef;
    $self->{RequestedStatesSupported} = undef;
    $self->{ElementNameMask} = undef;
    $self->{StateAwareness} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            ElementNameEditSupported accessor method.
#===============================================================================

sub ElementNameEditSupported{
    my ($self, $newval) = @_;
    $self->{ElementNameEditSupported} = $newval if @_ > 1;
    return $self->{ElementNameEditSupported};
}
#===============================================================================


#===============================================================================
#            MaxElementNameLen accessor method.
#===============================================================================

sub MaxElementNameLen{
    my ($self, $newval) = @_;
    $self->{MaxElementNameLen} = $newval if @_ > 1;
    return $self->{MaxElementNameLen};
}
#===============================================================================


#===============================================================================
#            RequestedStatesSupported accessor method.
#===============================================================================

sub RequestedStatesSupported{
    my ($self, $newval) = @_;
    $self->{RequestedStatesSupported} = $newval if @_ > 1;
    return $self->{RequestedStatesSupported};
}
#===============================================================================


#===============================================================================
#            ElementNameMask accessor method.
#===============================================================================

sub ElementNameMask{
    my ($self, $newval) = @_;
    $self->{ElementNameMask} = $newval if @_ > 1;
    return $self->{ElementNameMask};
}
#===============================================================================


#===============================================================================
#            StateAwareness accessor method.
#===============================================================================

sub StateAwareness{
    my ($self, $newval) = @_;
    $self->{StateAwareness} = $newval if @_ > 1;
    return $self->{StateAwareness};
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
