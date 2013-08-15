package CIM_PortController;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_Controller;
use strict;


@CIM_PortController::ISA = qw(_Initializable CIM_Controller);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_Controller::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{ControllerType} = undef;
    $self->{OtherControllerType} = undef;
    $self->{ControllerVersion} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            ControllerType accessor method.
#===============================================================================

sub ControllerType{
    my ($self, $newval) = @_;
    $self->{ControllerType} = $newval if @_ > 1;
    return $self->{ControllerType};
}
#===============================================================================


#===============================================================================
#            OtherControllerType accessor method.
#===============================================================================

sub OtherControllerType{
    my ($self, $newval) = @_;
    $self->{OtherControllerType} = $newval if @_ > 1;
    return $self->{OtherControllerType};
}
#===============================================================================


#===============================================================================
#            ControllerVersion accessor method.
#===============================================================================

sub ControllerVersion{
    my ($self, $newval) = @_;
    $self->{ControllerVersion} = $newval if @_ > 1;
    return $self->{ControllerVersion};
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
