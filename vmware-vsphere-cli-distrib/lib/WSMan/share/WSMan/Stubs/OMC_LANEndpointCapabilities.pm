package OMC_LANEndpointCapabilities;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_EnabledLogicalElementCapabilities;
use strict;


@OMC_LANEndpointCapabilities::ISA = qw(_Initializable CIM_EnabledLogicalElementCapabilities);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_EnabledLogicalElementCapabilities::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{InstanceID} = undef;
    $self->{RequestedStatesSupported} = undef;
    $self->{ElementNameEditSupported} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            InstanceID accessor method.
#===============================================================================

sub InstanceID{
    my ($self, $newval) = @_;
    $self->{InstanceID} = $newval if @_ > 1;
    return $self->{InstanceID};
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
#            ElementNameEditSupported accessor method.
#===============================================================================

sub ElementNameEditSupported{
    my ($self, $newval) = @_;
    $self->{ElementNameEditSupported} = $newval if @_ > 1;
    return $self->{ElementNameEditSupported};
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
