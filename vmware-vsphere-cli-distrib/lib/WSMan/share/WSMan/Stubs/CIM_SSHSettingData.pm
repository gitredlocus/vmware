package CIM_SSHSettingData;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_SettingData;
use strict;


@CIM_SSHSettingData::ISA = qw(_Initializable CIM_SettingData);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_SettingData::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{EnabledSSHVersions} = undef;
    $self->{OtherEnabledSSHVersion} = undef;
    $self->{SSHVersion} = undef;
    $self->{OtherSSHVersion} = undef;
    $self->{EnabledEncryptionAlgorithms} = undef;
    $self->{OtherEnabledEncryptionAlgorithm} = undef;
    $self->{EncryptionAlgorithm} = undef;
    $self->{OtherEncryptionAlgorithm} = undef;
    $self->{IdleTimeout} = undef;
    $self->{KeepAlive} = undef;
    $self->{ForwardX11} = undef;
    $self->{Compression} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            EnabledSSHVersions accessor method.
#===============================================================================

sub EnabledSSHVersions{
    my ($self, $newval) = @_;
    $self->{EnabledSSHVersions} = $newval if @_ > 1;
    return $self->{EnabledSSHVersions};
}
#===============================================================================


#===============================================================================
#            OtherEnabledSSHVersion accessor method.
#===============================================================================

sub OtherEnabledSSHVersion{
    my ($self, $newval) = @_;
    $self->{OtherEnabledSSHVersion} = $newval if @_ > 1;
    return $self->{OtherEnabledSSHVersion};
}
#===============================================================================


#===============================================================================
#            SSHVersion accessor method.
#===============================================================================

sub SSHVersion{
    my ($self, $newval) = @_;
    $self->{SSHVersion} = $newval if @_ > 1;
    return $self->{SSHVersion};
}
#===============================================================================


#===============================================================================
#            OtherSSHVersion accessor method.
#===============================================================================

sub OtherSSHVersion{
    my ($self, $newval) = @_;
    $self->{OtherSSHVersion} = $newval if @_ > 1;
    return $self->{OtherSSHVersion};
}
#===============================================================================


#===============================================================================
#            EnabledEncryptionAlgorithms accessor method.
#===============================================================================

sub EnabledEncryptionAlgorithms{
    my ($self, $newval) = @_;
    $self->{EnabledEncryptionAlgorithms} = $newval if @_ > 1;
    return $self->{EnabledEncryptionAlgorithms};
}
#===============================================================================


#===============================================================================
#            OtherEnabledEncryptionAlgorithm accessor method.
#===============================================================================

sub OtherEnabledEncryptionAlgorithm{
    my ($self, $newval) = @_;
    $self->{OtherEnabledEncryptionAlgorithm} = $newval if @_ > 1;
    return $self->{OtherEnabledEncryptionAlgorithm};
}
#===============================================================================


#===============================================================================
#            EncryptionAlgorithm accessor method.
#===============================================================================

sub EncryptionAlgorithm{
    my ($self, $newval) = @_;
    $self->{EncryptionAlgorithm} = $newval if @_ > 1;
    return $self->{EncryptionAlgorithm};
}
#===============================================================================


#===============================================================================
#            OtherEncryptionAlgorithm accessor method.
#===============================================================================

sub OtherEncryptionAlgorithm{
    my ($self, $newval) = @_;
    $self->{OtherEncryptionAlgorithm} = $newval if @_ > 1;
    return $self->{OtherEncryptionAlgorithm};
}
#===============================================================================


#===============================================================================
#            IdleTimeout accessor method.
#===============================================================================

sub IdleTimeout{
    my ($self, $newval) = @_;
    $self->{IdleTimeout} = $newval if @_ > 1;
    return $self->{IdleTimeout};
}
#===============================================================================


#===============================================================================
#            KeepAlive accessor method.
#===============================================================================

sub KeepAlive{
    my ($self, $newval) = @_;
    $self->{KeepAlive} = $newval if @_ > 1;
    return $self->{KeepAlive};
}
#===============================================================================


#===============================================================================
#            ForwardX11 accessor method.
#===============================================================================

sub ForwardX11{
    my ($self, $newval) = @_;
    $self->{ForwardX11} = $newval if @_ > 1;
    return $self->{ForwardX11};
}
#===============================================================================


#===============================================================================
#            Compression accessor method.
#===============================================================================

sub Compression{
    my ($self, $newval) = @_;
    $self->{Compression} = $newval if @_ > 1;
    return $self->{Compression};
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
