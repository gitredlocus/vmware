package CIM_VirtualSystemSettingData;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_SettingData;
use strict;


@CIM_VirtualSystemSettingData::ISA = qw(_Initializable CIM_SettingData);


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
    $self->{VirtualSystemIdentifier} = undef;
    $self->{VirtualSystemType} = undef;
    $self->{Notes} = undef;
    $self->{CreationTime} = undef;
    $self->{ConfigurationID} = undef;
    $self->{ConfigurationDataRoot} = undef;
    $self->{ConfigurationFile} = undef;
    $self->{SnapshotDataRoot} = undef;
    $self->{SuspendDataRoot} = undef;
    $self->{SwapFileDataRoot} = undef;
    $self->{LogDataRoot} = undef;
    $self->{AutomaticStartupAction} = undef;
    $self->{AutomaticStartupActionDelay} = undef;
    $self->{AutomaticStartupActionSequenceNumber} = undef;
    $self->{AutomaticShutdownAction} = undef;
    $self->{AutomaticRecoveryAction} = undef;
    $self->{RecoveryFile} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            VirtualSystemIdentifier accessor method.
#===============================================================================

sub VirtualSystemIdentifier{
    my ($self, $newval) = @_;
    $self->{VirtualSystemIdentifier} = $newval if @_ > 1;
    return $self->{VirtualSystemIdentifier};
}
#===============================================================================


#===============================================================================
#            VirtualSystemType accessor method.
#===============================================================================

sub VirtualSystemType{
    my ($self, $newval) = @_;
    $self->{VirtualSystemType} = $newval if @_ > 1;
    return $self->{VirtualSystemType};
}
#===============================================================================


#===============================================================================
#            Notes accessor method.
#===============================================================================

sub Notes{
    my ($self, $newval) = @_;
    $self->{Notes} = $newval if @_ > 1;
    return $self->{Notes};
}
#===============================================================================


#===============================================================================
#            CreationTime accessor method.
#===============================================================================

sub CreationTime{
    my ($self, $newval) = @_;
    $self->{CreationTime} = $newval if @_ > 1;
    return $self->{CreationTime};
}
#===============================================================================


#===============================================================================
#            ConfigurationID accessor method.
#===============================================================================

sub ConfigurationID{
    my ($self, $newval) = @_;
    $self->{ConfigurationID} = $newval if @_ > 1;
    return $self->{ConfigurationID};
}
#===============================================================================


#===============================================================================
#            ConfigurationDataRoot accessor method.
#===============================================================================

sub ConfigurationDataRoot{
    my ($self, $newval) = @_;
    $self->{ConfigurationDataRoot} = $newval if @_ > 1;
    return $self->{ConfigurationDataRoot};
}
#===============================================================================


#===============================================================================
#            ConfigurationFile accessor method.
#===============================================================================

sub ConfigurationFile{
    my ($self, $newval) = @_;
    $self->{ConfigurationFile} = $newval if @_ > 1;
    return $self->{ConfigurationFile};
}
#===============================================================================


#===============================================================================
#            SnapshotDataRoot accessor method.
#===============================================================================

sub SnapshotDataRoot{
    my ($self, $newval) = @_;
    $self->{SnapshotDataRoot} = $newval if @_ > 1;
    return $self->{SnapshotDataRoot};
}
#===============================================================================


#===============================================================================
#            SuspendDataRoot accessor method.
#===============================================================================

sub SuspendDataRoot{
    my ($self, $newval) = @_;
    $self->{SuspendDataRoot} = $newval if @_ > 1;
    return $self->{SuspendDataRoot};
}
#===============================================================================


#===============================================================================
#            SwapFileDataRoot accessor method.
#===============================================================================

sub SwapFileDataRoot{
    my ($self, $newval) = @_;
    $self->{SwapFileDataRoot} = $newval if @_ > 1;
    return $self->{SwapFileDataRoot};
}
#===============================================================================


#===============================================================================
#            LogDataRoot accessor method.
#===============================================================================

sub LogDataRoot{
    my ($self, $newval) = @_;
    $self->{LogDataRoot} = $newval if @_ > 1;
    return $self->{LogDataRoot};
}
#===============================================================================


#===============================================================================
#            AutomaticStartupAction accessor method.
#===============================================================================

sub AutomaticStartupAction{
    my ($self, $newval) = @_;
    $self->{AutomaticStartupAction} = $newval if @_ > 1;
    return $self->{AutomaticStartupAction};
}
#===============================================================================


#===============================================================================
#            AutomaticStartupActionDelay accessor method.
#===============================================================================

sub AutomaticStartupActionDelay{
    my ($self, $newval) = @_;
    $self->{AutomaticStartupActionDelay} = $newval if @_ > 1;
    return $self->{AutomaticStartupActionDelay};
}
#===============================================================================


#===============================================================================
#            AutomaticStartupActionSequenceNumber accessor method.
#===============================================================================

sub AutomaticStartupActionSequenceNumber{
    my ($self, $newval) = @_;
    $self->{AutomaticStartupActionSequenceNumber} = $newval if @_ > 1;
    return $self->{AutomaticStartupActionSequenceNumber};
}
#===============================================================================


#===============================================================================
#            AutomaticShutdownAction accessor method.
#===============================================================================

sub AutomaticShutdownAction{
    my ($self, $newval) = @_;
    $self->{AutomaticShutdownAction} = $newval if @_ > 1;
    return $self->{AutomaticShutdownAction};
}
#===============================================================================


#===============================================================================
#            AutomaticRecoveryAction accessor method.
#===============================================================================

sub AutomaticRecoveryAction{
    my ($self, $newval) = @_;
    $self->{AutomaticRecoveryAction} = $newval if @_ > 1;
    return $self->{AutomaticRecoveryAction};
}
#===============================================================================


#===============================================================================
#            RecoveryFile accessor method.
#===============================================================================

sub RecoveryFile{
    my ($self, $newval) = @_;
    $self->{RecoveryFile} = $newval if @_ > 1;
    return $self->{RecoveryFile};
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
