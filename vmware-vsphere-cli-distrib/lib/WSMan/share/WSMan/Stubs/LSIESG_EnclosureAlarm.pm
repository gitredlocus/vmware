package LSIESG_EnclosureAlarm;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_AlarmDevice;
use strict;


@LSIESG_EnclosureAlarm::ISA = qw(_Initializable CIM_AlarmDevice);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_AlarmDevice::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{epr_name} = undef;  
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
