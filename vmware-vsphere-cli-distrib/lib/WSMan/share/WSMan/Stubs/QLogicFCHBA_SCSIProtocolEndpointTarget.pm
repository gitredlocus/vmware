package QLogicFCHBA_SCSIProtocolEndpointTarget;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::QLogicFCHBA_SCSIProtocolEndpoint;
use strict;


@QLogicFCHBA_SCSIProtocolEndpointTarget::ISA = qw(_Initializable QLogicFCHBA_SCSIProtocolEndpoint);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->QLogicFCHBA_SCSIProtocolEndpoint::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{InitiatorHBA} = undef;
    $self->{epr_name} = undef;  
    push @{$self->{id_keys}}, 'InitiatorHBA';
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            InitiatorHBA accessor method.
#===============================================================================

sub InitiatorHBA{
    my ($self, $newval) = @_;
    $self->{InitiatorHBA} = $newval if @_ > 1;
    return $self->{InitiatorHBA};
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
