package OMC_SSHSettingData;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_SSHSettingData;
use strict;


@OMC_SSHSettingData::ISA = qw(_Initializable CIM_SSHSettingData);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_SSHSettingData::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{AcceptEnv} = undef;
    $self->{AllowGroups} = undef;
    $self->{AllowUsers} = undef;
    $self->{AllowTCPForwarding} = undef;
    $self->{AuthorizedKeysFile} = undef;
    $self->{Banner} = undef;
    $self->{ChallengeResponseAuthentication} = undef;
    $self->{Ciphers} = undef;
    $self->{ClientAliveInterval} = undef;
    $self->{ClientAliveCountMax} = undef;
    $self->{DenyGroups} = undef;
    $self->{DenyUsers} = undef;
    $self->{GatewayPorts} = undef;
    $self->{PidFile} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            AcceptEnv accessor method.
#===============================================================================

sub AcceptEnv{
    my ($self, $newval) = @_;
    $self->{AcceptEnv} = $newval if @_ > 1;
    return $self->{AcceptEnv};
}
#===============================================================================


#===============================================================================
#            AllowGroups accessor method.
#===============================================================================

sub AllowGroups{
    my ($self, $newval) = @_;
    $self->{AllowGroups} = $newval if @_ > 1;
    return $self->{AllowGroups};
}
#===============================================================================


#===============================================================================
#            AllowUsers accessor method.
#===============================================================================

sub AllowUsers{
    my ($self, $newval) = @_;
    $self->{AllowUsers} = $newval if @_ > 1;
    return $self->{AllowUsers};
}
#===============================================================================


#===============================================================================
#            AllowTCPForwarding accessor method.
#===============================================================================

sub AllowTCPForwarding{
    my ($self, $newval) = @_;
    $self->{AllowTCPForwarding} = $newval if @_ > 1;
    return $self->{AllowTCPForwarding};
}
#===============================================================================


#===============================================================================
#            AuthorizedKeysFile accessor method.
#===============================================================================

sub AuthorizedKeysFile{
    my ($self, $newval) = @_;
    $self->{AuthorizedKeysFile} = $newval if @_ > 1;
    return $self->{AuthorizedKeysFile};
}
#===============================================================================


#===============================================================================
#            Banner accessor method.
#===============================================================================

sub Banner{
    my ($self, $newval) = @_;
    $self->{Banner} = $newval if @_ > 1;
    return $self->{Banner};
}
#===============================================================================


#===============================================================================
#            ChallengeResponseAuthentication accessor method.
#===============================================================================

sub ChallengeResponseAuthentication{
    my ($self, $newval) = @_;
    $self->{ChallengeResponseAuthentication} = $newval if @_ > 1;
    return $self->{ChallengeResponseAuthentication};
}
#===============================================================================


#===============================================================================
#            Ciphers accessor method.
#===============================================================================

sub Ciphers{
    my ($self, $newval) = @_;
    $self->{Ciphers} = $newval if @_ > 1;
    return $self->{Ciphers};
}
#===============================================================================


#===============================================================================
#            ClientAliveInterval accessor method.
#===============================================================================

sub ClientAliveInterval{
    my ($self, $newval) = @_;
    $self->{ClientAliveInterval} = $newval if @_ > 1;
    return $self->{ClientAliveInterval};
}
#===============================================================================


#===============================================================================
#            ClientAliveCountMax accessor method.
#===============================================================================

sub ClientAliveCountMax{
    my ($self, $newval) = @_;
    $self->{ClientAliveCountMax} = $newval if @_ > 1;
    return $self->{ClientAliveCountMax};
}
#===============================================================================


#===============================================================================
#            DenyGroups accessor method.
#===============================================================================

sub DenyGroups{
    my ($self, $newval) = @_;
    $self->{DenyGroups} = $newval if @_ > 1;
    return $self->{DenyGroups};
}
#===============================================================================


#===============================================================================
#            DenyUsers accessor method.
#===============================================================================

sub DenyUsers{
    my ($self, $newval) = @_;
    $self->{DenyUsers} = $newval if @_ > 1;
    return $self->{DenyUsers};
}
#===============================================================================


#===============================================================================
#            GatewayPorts accessor method.
#===============================================================================

sub GatewayPorts{
    my ($self, $newval) = @_;
    $self->{GatewayPorts} = $newval if @_ > 1;
    return $self->{GatewayPorts};
}
#===============================================================================


#===============================================================================
#            PidFile accessor method.
#===============================================================================

sub PidFile{
    my ($self, $newval) = @_;
    $self->{PidFile} = $newval if @_ > 1;
    return $self->{PidFile};
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
