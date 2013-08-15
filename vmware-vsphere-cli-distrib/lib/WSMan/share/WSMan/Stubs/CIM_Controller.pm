package CIM_Controller;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_LogicalDevice;
use strict;


@CIM_Controller::ISA = qw(_Initializable CIM_LogicalDevice);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_LogicalDevice::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{TimeOfLastReset} = undef;
    $self->{ProtocolSupported} = undef;
    $self->{MaxNumberControlled} = undef;
    $self->{ProtocolDescription} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            TimeOfLastReset accessor method.
#===============================================================================

sub TimeOfLastReset{
    my ($self, $newval) = @_;
    $self->{TimeOfLastReset} = $newval if @_ > 1;
    return $self->{TimeOfLastReset};
}
#===============================================================================


#===============================================================================
#            ProtocolSupported accessor method.
#===============================================================================

sub ProtocolSupported{
    my ($self, $newval) = @_;
    $self->{ProtocolSupported} = $newval if @_ > 1;
    return $self->{ProtocolSupported};
}
#===============================================================================


#===============================================================================
#            MaxNumberControlled accessor method.
#===============================================================================

sub MaxNumberControlled{
    my ($self, $newval) = @_;
    $self->{MaxNumberControlled} = $newval if @_ > 1;
    return $self->{MaxNumberControlled};
}
#===============================================================================


#===============================================================================
#            ProtocolDescription accessor method.
#===============================================================================

sub ProtocolDescription{
    my ($self, $newval) = @_;
    $self->{ProtocolDescription} = $newval if @_ > 1;
    return $self->{ProtocolDescription};
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
