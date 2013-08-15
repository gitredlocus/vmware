package CIM_SSHCapabilities;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_ProtocolServiceCapabilities;
use strict;


@CIM_SSHCapabilities::ISA = qw(_Initializable CIM_ProtocolServiceCapabilities);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_ProtocolServiceCapabilities::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{SupportedSSHVersions} = undef;
    $self->{OtherSupportedSSHVersion} = undef;
    $self->{SupportedEncryptionAlgorithms} = undef;
    $self->{OtherSupportedEncryptionAlgorithm} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            SupportedSSHVersions accessor method.
#===============================================================================

sub SupportedSSHVersions{
    my ($self, $newval) = @_;
    $self->{SupportedSSHVersions} = $newval if @_ > 1;
    return $self->{SupportedSSHVersions};
}
#===============================================================================


#===============================================================================
#            OtherSupportedSSHVersion accessor method.
#===============================================================================

sub OtherSupportedSSHVersion{
    my ($self, $newval) = @_;
    $self->{OtherSupportedSSHVersion} = $newval if @_ > 1;
    return $self->{OtherSupportedSSHVersion};
}
#===============================================================================


#===============================================================================
#            SupportedEncryptionAlgorithms accessor method.
#===============================================================================

sub SupportedEncryptionAlgorithms{
    my ($self, $newval) = @_;
    $self->{SupportedEncryptionAlgorithms} = $newval if @_ > 1;
    return $self->{SupportedEncryptionAlgorithms};
}
#===============================================================================


#===============================================================================
#            OtherSupportedEncryptionAlgorithm accessor method.
#===============================================================================

sub OtherSupportedEncryptionAlgorithm{
    my ($self, $newval) = @_;
    $self->{OtherSupportedEncryptionAlgorithm} = $newval if @_ > 1;
    return $self->{OtherSupportedEncryptionAlgorithm};
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
