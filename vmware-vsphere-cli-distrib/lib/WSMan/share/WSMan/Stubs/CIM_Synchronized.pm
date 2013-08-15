package CIM_Synchronized;
use WSMan::Stubs::Initializable;
use strict;


@CIM_Synchronized::ISA = qw(_Initializable);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{SystemElement} = undef;
    $self->{SyncedElement} = undef;
    $self->{WhenSynced} = undef;
    $self->{SyncMaintained} = undef;
    $self->{CopyState} = undef;
    $self->{Mode} = undef;
    $self->{PercentSynced} = undef;
    $self->{ProgressStatus} = undef;
    $self->{RequestedCopyState} = undef;
    $self->{SyncType} = undef;
    $self->{WhenActivated} = undef;
    $self->{WhenDeactivated} = undef;
    $self->{WhenEstablished} = undef;
    $self->{WhenSuspended} = undef;
    $self->{WhenSynchronized} = undef;
    $self->{epr_name} = undef;  
    push @{$self->{id_keys}}, 'SystemElement';
    push @{$self->{id_keys}}, 'SyncedElement';
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            SystemElement accessor method.
#===============================================================================

sub SystemElement{
    my ($self, $newval) = @_;
    $self->{SystemElement} = $newval if @_ > 1;
    return $self->{SystemElement};
}
#===============================================================================


#===============================================================================
#            SyncedElement accessor method.
#===============================================================================

sub SyncedElement{
    my ($self, $newval) = @_;
    $self->{SyncedElement} = $newval if @_ > 1;
    return $self->{SyncedElement};
}
#===============================================================================


#===============================================================================
#            WhenSynced accessor method.
#===============================================================================

sub WhenSynced{
    my ($self, $newval) = @_;
    $self->{WhenSynced} = $newval if @_ > 1;
    return $self->{WhenSynced};
}
#===============================================================================


#===============================================================================
#            SyncMaintained accessor method.
#===============================================================================

sub SyncMaintained{
    my ($self, $newval) = @_;
    $self->{SyncMaintained} = $newval if @_ > 1;
    return $self->{SyncMaintained};
}
#===============================================================================


#===============================================================================
#            CopyState accessor method.
#===============================================================================

sub CopyState{
    my ($self, $newval) = @_;
    $self->{CopyState} = $newval if @_ > 1;
    return $self->{CopyState};
}
#===============================================================================


#===============================================================================
#            Mode accessor method.
#===============================================================================

sub Mode{
    my ($self, $newval) = @_;
    $self->{Mode} = $newval if @_ > 1;
    return $self->{Mode};
}
#===============================================================================


#===============================================================================
#            PercentSynced accessor method.
#===============================================================================

sub PercentSynced{
    my ($self, $newval) = @_;
    $self->{PercentSynced} = $newval if @_ > 1;
    return $self->{PercentSynced};
}
#===============================================================================


#===============================================================================
#            ProgressStatus accessor method.
#===============================================================================

sub ProgressStatus{
    my ($self, $newval) = @_;
    $self->{ProgressStatus} = $newval if @_ > 1;
    return $self->{ProgressStatus};
}
#===============================================================================


#===============================================================================
#            RequestedCopyState accessor method.
#===============================================================================

sub RequestedCopyState{
    my ($self, $newval) = @_;
    $self->{RequestedCopyState} = $newval if @_ > 1;
    return $self->{RequestedCopyState};
}
#===============================================================================


#===============================================================================
#            SyncType accessor method.
#===============================================================================

sub SyncType{
    my ($self, $newval) = @_;
    $self->{SyncType} = $newval if @_ > 1;
    return $self->{SyncType};
}
#===============================================================================


#===============================================================================
#            WhenActivated accessor method.
#===============================================================================

sub WhenActivated{
    my ($self, $newval) = @_;
    $self->{WhenActivated} = $newval if @_ > 1;
    return $self->{WhenActivated};
}
#===============================================================================


#===============================================================================
#            WhenDeactivated accessor method.
#===============================================================================

sub WhenDeactivated{
    my ($self, $newval) = @_;
    $self->{WhenDeactivated} = $newval if @_ > 1;
    return $self->{WhenDeactivated};
}
#===============================================================================


#===============================================================================
#            WhenEstablished accessor method.
#===============================================================================

sub WhenEstablished{
    my ($self, $newval) = @_;
    $self->{WhenEstablished} = $newval if @_ > 1;
    return $self->{WhenEstablished};
}
#===============================================================================


#===============================================================================
#            WhenSuspended accessor method.
#===============================================================================

sub WhenSuspended{
    my ($self, $newval) = @_;
    $self->{WhenSuspended} = $newval if @_ > 1;
    return $self->{WhenSuspended};
}
#===============================================================================


#===============================================================================
#            WhenSynchronized accessor method.
#===============================================================================

sub WhenSynchronized{
    my ($self, $newval) = @_;
    $self->{WhenSynchronized} = $newval if @_ > 1;
    return $self->{WhenSynchronized};
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
