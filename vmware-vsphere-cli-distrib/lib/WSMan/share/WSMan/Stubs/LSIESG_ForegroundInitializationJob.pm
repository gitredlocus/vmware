package LSIESG_ForegroundInitializationJob;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_ConcreteJob;
use strict;


@LSIESG_ForegroundInitializationJob::ISA = qw(_Initializable CIM_ConcreteJob);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_ConcreteJob::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{epr_name} = undef;  
    $self->{invokableMethods}->{RequestStateChange} = { input => ['RequestedState', 'TimeoutPeriod'], output => [] };
    $self->{invokableMethods}->{GetError} = { input => [], output => ['Error'] };
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
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
