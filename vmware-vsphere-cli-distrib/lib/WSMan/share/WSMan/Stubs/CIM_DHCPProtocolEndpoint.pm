package CIM_DHCPProtocolEndpoint;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_ProtocolEndpoint;
use strict;


@CIM_DHCPProtocolEndpoint::ISA = qw(_Initializable CIM_ProtocolEndpoint);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_ProtocolEndpoint::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{ClientState} = undef;
    $self->{RenewalTime} = undef;
    $self->{RebindingTime} = undef;
    $self->{LeaseTime} = undef;
    $self->{LeaseObtained} = undef;
    $self->{LeaseExpires} = undef;
    $self->{OptionsReceived} = undef;
    $self->{IPv6OptionsReceived} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            ClientState accessor method.
#===============================================================================

sub ClientState{
    my ($self, $newval) = @_;
    $self->{ClientState} = $newval if @_ > 1;
    return $self->{ClientState};
}
#===============================================================================


#===============================================================================
#            RenewalTime accessor method.
#===============================================================================

sub RenewalTime{
    my ($self, $newval) = @_;
    $self->{RenewalTime} = $newval if @_ > 1;
    return $self->{RenewalTime};
}
#===============================================================================


#===============================================================================
#            RebindingTime accessor method.
#===============================================================================

sub RebindingTime{
    my ($self, $newval) = @_;
    $self->{RebindingTime} = $newval if @_ > 1;
    return $self->{RebindingTime};
}
#===============================================================================


#===============================================================================
#            LeaseTime accessor method.
#===============================================================================

sub LeaseTime{
    my ($self, $newval) = @_;
    $self->{LeaseTime} = $newval if @_ > 1;
    return $self->{LeaseTime};
}
#===============================================================================


#===============================================================================
#            LeaseObtained accessor method.
#===============================================================================

sub LeaseObtained{
    my ($self, $newval) = @_;
    $self->{LeaseObtained} = $newval if @_ > 1;
    return $self->{LeaseObtained};
}
#===============================================================================


#===============================================================================
#            LeaseExpires accessor method.
#===============================================================================

sub LeaseExpires{
    my ($self, $newval) = @_;
    $self->{LeaseExpires} = $newval if @_ > 1;
    return $self->{LeaseExpires};
}
#===============================================================================


#===============================================================================
#            OptionsReceived accessor method.
#===============================================================================

sub OptionsReceived{
    my ($self, $newval) = @_;
    $self->{OptionsReceived} = $newval if @_ > 1;
    return $self->{OptionsReceived};
}
#===============================================================================


#===============================================================================
#            IPv6OptionsReceived accessor method.
#===============================================================================

sub IPv6OptionsReceived{
    my ($self, $newval) = @_;
    $self->{IPv6OptionsReceived} = $newval if @_ > 1;
    return $self->{IPv6OptionsReceived};
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
