package VMware_CIMHeartbeat;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_ProcessIndication;
use strict;


@VMware_CIMHeartbeat::ISA = qw(_Initializable CIM_ProcessIndication);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_ProcessIndication::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{hostname} = undef;
    $self->{stamp} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            hostname accessor method.
#===============================================================================

sub hostname{
    my ($self, $newval) = @_;
    $self->{hostname} = $newval if @_ > 1;
    return $self->{hostname};
}
#===============================================================================


#===============================================================================
#            stamp accessor method.
#===============================================================================

sub stamp{
    my ($self, $newval) = @_;
    $self->{stamp} = $newval if @_ > 1;
    return $self->{stamp};
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
