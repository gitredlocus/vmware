package ELXHBA_PortControllerSystemDevice;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_SystemDevice;
use strict;


@ELXHBA_PortControllerSystemDevice::ISA = qw(_Initializable CIM_SystemDevice);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_SystemDevice::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{GroupComponent} = undef;
    $self->{PartComponent} = undef;
    $self->{Caption} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            GroupComponent accessor method.
#===============================================================================

sub GroupComponent{
    my ($self, $newval) = @_;
    $self->{GroupComponent} = $newval if @_ > 1;
    return $self->{GroupComponent};
}
#===============================================================================


#===============================================================================
#            PartComponent accessor method.
#===============================================================================

sub PartComponent{
    my ($self, $newval) = @_;
    $self->{PartComponent} = $newval if @_ > 1;
    return $self->{PartComponent};
}
#===============================================================================


#===============================================================================
#            Caption accessor method.
#===============================================================================

sub Caption{
    my ($self, $newval) = @_;
    $self->{Caption} = $newval if @_ > 1;
    return $self->{Caption};
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
