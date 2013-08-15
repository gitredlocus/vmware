package CIM_IPConfigurationService;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_Service;
use strict;


@CIM_IPConfigurationService::ISA = qw(_Initializable CIM_Service);


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
    $self->{invokableMethods}->{AddStaticIPv4Interface} = { input => ['Configuration', 'Address', 'SubnetMask', 'Gateway'], output => ['StaticSetting'] };
    $self->{invokableMethods}->{ApplySettingToLANEndpoint} = { input => ['Configuration', 'Endpoint'], output => ['Job'] };
    $self->{invokableMethods}->{ApplySettingToIPProtocolEndpoint} = { input => ['Configuration', 'Endpoint'], output => ['Job'] };
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
