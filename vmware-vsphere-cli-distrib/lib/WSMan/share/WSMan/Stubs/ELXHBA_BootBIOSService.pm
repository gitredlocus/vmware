package ELXHBA_BootBIOSService;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_Service;
use strict;


@ELXHBA_BootBIOSService::ISA = qw(_Initializable CIM_Service);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_Service::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{epr_name} = undef;  
    $self->{invokableMethods}->{GetBootBIOSStatus} = { input => ['Target'], output => ['nBootBIOSStatus'] };
    $self->{invokableMethods}->{DisableBootBIOS} = { input => ['Target'], output => [] };
    $self->{invokableMethods}->{EnableBootBIOS} = { input => ['Target'], output => [] };
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
