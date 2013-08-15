package CIM_Fan;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_CoolingDevice;
use strict;


@CIM_Fan::ISA = qw(_Initializable CIM_CoolingDevice);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_CoolingDevice::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{VariableSpeed} = undef;
    $self->{DesiredSpeed} = undef;
    $self->{ControlModesSupported} = undef;
    $self->{ControlMode} = undef;
    $self->{DesiredControlMode} = undef;
    $self->{epr_name} = undef;  
    $self->{invokableMethods}->{SetSpeed} = { input => ['DesiredSpeed'], output => [] };
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            VariableSpeed accessor method.
#===============================================================================

sub VariableSpeed{
    my ($self, $newval) = @_;
    $self->{VariableSpeed} = $newval if @_ > 1;
    return $self->{VariableSpeed};
}
#===============================================================================


#===============================================================================
#            DesiredSpeed accessor method.
#===============================================================================

sub DesiredSpeed{
    my ($self, $newval) = @_;
    $self->{DesiredSpeed} = $newval if @_ > 1;
    return $self->{DesiredSpeed};
}
#===============================================================================


#===============================================================================
#            ControlModesSupported accessor method.
#===============================================================================

sub ControlModesSupported{
    my ($self, $newval) = @_;
    $self->{ControlModesSupported} = $newval if @_ > 1;
    return $self->{ControlModesSupported};
}
#===============================================================================


#===============================================================================
#            ControlMode accessor method.
#===============================================================================

sub ControlMode{
    my ($self, $newval) = @_;
    $self->{ControlMode} = $newval if @_ > 1;
    return $self->{ControlMode};
}
#===============================================================================


#===============================================================================
#            DesiredControlMode accessor method.
#===============================================================================

sub DesiredControlMode{
    my ($self, $newval) = @_;
    $self->{DesiredControlMode} = $newval if @_ > 1;
    return $self->{DesiredControlMode};
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
