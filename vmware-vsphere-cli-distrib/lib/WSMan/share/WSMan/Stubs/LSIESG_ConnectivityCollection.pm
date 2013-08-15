package LSIESG_ConnectivityCollection;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_ConnectivityCollection;
use strict;


@LSIESG_ConnectivityCollection::ISA = qw(_Initializable CIM_ConnectivityCollection);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_ConnectivityCollection::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{InitiatorProtocolEndpoint_Name} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            InitiatorProtocolEndpoint_Name accessor method.
#===============================================================================

sub InitiatorProtocolEndpoint_Name{
    my ($self, $newval) = @_;
    $self->{InitiatorProtocolEndpoint_Name} = $newval if @_ > 1;
    return $self->{InitiatorProtocolEndpoint_Name};
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
