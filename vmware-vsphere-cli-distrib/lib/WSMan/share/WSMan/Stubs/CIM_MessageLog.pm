package CIM_MessageLog;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_Log;
use strict;


@CIM_MessageLog::ISA = qw(_Initializable CIM_Log);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_Log::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{CreationClassName} = undef;
    $self->{Name} = undef;
    $self->{Capabilities} = undef;
    $self->{CapabilitiesDescriptions} = undef;
    $self->{MaxLogSize} = undef;
    $self->{SizeOfHeader} = undef;
    $self->{HeaderFormat} = undef;
    $self->{MaxRecordSize} = undef;
    $self->{SizeOfRecordHeader} = undef;
    $self->{RecordHeaderFormat} = undef;
    $self->{OverwritePolicy} = undef;
    $self->{OtherPolicyDescription} = undef;
    $self->{TimeWhenOutdated} = undef;
    $self->{PercentageNearFull} = undef;
    $self->{LastChange} = undef;
    $self->{TimeOfLastChange} = undef;
    $self->{RecordLastChanged} = undef;
    $self->{IsFrozen} = undef;
    $self->{CharacterSet} = undef;
    $self->{epr_name} = undef;  
    $self->{invokableMethods}->{DeleteRecord} = { input => ['IterationIdentifier', 'PositionToNext'], output => ['IterationIdentifier', 'RecordNumber', 'RecordData'] };
    $self->{invokableMethods}->{GetRecord} = { input => ['IterationIdentifier', 'PositionToNext'], output => ['IterationIdentifier', 'RecordNumber', 'RecordData'] };
    $self->{invokableMethods}->{CancelIteration} = { input => ['IterationIdentifier'], output => [] };
    $self->{invokableMethods}->{FreezeLog} = { input => ['Freeze'], output => [] };
    $self->{invokableMethods}->{PositionAtRecord} = { input => ['IterationIdentifier', 'MoveAbsolute', 'RecordNumber'], output => ['IterationIdentifier', 'RecordNumber'] };
    $self->{invokableMethods}->{FlagRecordForOverwrite} = { input => ['IterationIdentifier', 'PositionToNext'], output => ['IterationIdentifier', 'RecordNumber'] };
    $self->{invokableMethods}->{PositionToFirstRecord} = { input => [], output => ['IterationIdentifier'] };
    $self->{invokableMethods}->{WriteRecord} = { input => ['IterationIdentifier', 'PositionToNext', 'RecordData'], output => ['IterationIdentifier', 'RecordNumber'] };
    push @{$self->{id_keys}}, 'CreationClassName';
    push @{$self->{id_keys}}, 'Name';
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            CreationClassName accessor method.
#===============================================================================

sub CreationClassName{
    my ($self, $newval) = @_;
    $self->{CreationClassName} = $newval if @_ > 1;
    return $self->{CreationClassName};
}
#===============================================================================


#===============================================================================
#            Name accessor method.
#===============================================================================

sub Name{
    my ($self, $newval) = @_;
    $self->{Name} = $newval if @_ > 1;
    return $self->{Name};
}
#===============================================================================


#===============================================================================
#            Capabilities accessor method.
#===============================================================================

sub Capabilities{
    my ($self, $newval) = @_;
    $self->{Capabilities} = $newval if @_ > 1;
    return $self->{Capabilities};
}
#===============================================================================


#===============================================================================
#            CapabilitiesDescriptions accessor method.
#===============================================================================

sub CapabilitiesDescriptions{
    my ($self, $newval) = @_;
    $self->{CapabilitiesDescriptions} = $newval if @_ > 1;
    return $self->{CapabilitiesDescriptions};
}
#===============================================================================


#===============================================================================
#            MaxLogSize accessor method.
#===============================================================================

sub MaxLogSize{
    my ($self, $newval) = @_;
    $self->{MaxLogSize} = $newval if @_ > 1;
    return $self->{MaxLogSize};
}
#===============================================================================


#===============================================================================
#            SizeOfHeader accessor method.
#===============================================================================

sub SizeOfHeader{
    my ($self, $newval) = @_;
    $self->{SizeOfHeader} = $newval if @_ > 1;
    return $self->{SizeOfHeader};
}
#===============================================================================


#===============================================================================
#            HeaderFormat accessor method.
#===============================================================================

sub HeaderFormat{
    my ($self, $newval) = @_;
    $self->{HeaderFormat} = $newval if @_ > 1;
    return $self->{HeaderFormat};
}
#===============================================================================


#===============================================================================
#            MaxRecordSize accessor method.
#===============================================================================

sub MaxRecordSize{
    my ($self, $newval) = @_;
    $self->{MaxRecordSize} = $newval if @_ > 1;
    return $self->{MaxRecordSize};
}
#===============================================================================


#===============================================================================
#            SizeOfRecordHeader accessor method.
#===============================================================================

sub SizeOfRecordHeader{
    my ($self, $newval) = @_;
    $self->{SizeOfRecordHeader} = $newval if @_ > 1;
    return $self->{SizeOfRecordHeader};
}
#===============================================================================


#===============================================================================
#            RecordHeaderFormat accessor method.
#===============================================================================

sub RecordHeaderFormat{
    my ($self, $newval) = @_;
    $self->{RecordHeaderFormat} = $newval if @_ > 1;
    return $self->{RecordHeaderFormat};
}
#===============================================================================


#===============================================================================
#            OverwritePolicy accessor method.
#===============================================================================

sub OverwritePolicy{
    my ($self, $newval) = @_;
    $self->{OverwritePolicy} = $newval if @_ > 1;
    return $self->{OverwritePolicy};
}
#===============================================================================


#===============================================================================
#            OtherPolicyDescription accessor method.
#===============================================================================

sub OtherPolicyDescription{
    my ($self, $newval) = @_;
    $self->{OtherPolicyDescription} = $newval if @_ > 1;
    return $self->{OtherPolicyDescription};
}
#===============================================================================


#===============================================================================
#            TimeWhenOutdated accessor method.
#===============================================================================

sub TimeWhenOutdated{
    my ($self, $newval) = @_;
    $self->{TimeWhenOutdated} = $newval if @_ > 1;
    return $self->{TimeWhenOutdated};
}
#===============================================================================


#===============================================================================
#            PercentageNearFull accessor method.
#===============================================================================

sub PercentageNearFull{
    my ($self, $newval) = @_;
    $self->{PercentageNearFull} = $newval if @_ > 1;
    return $self->{PercentageNearFull};
}
#===============================================================================


#===============================================================================
#            LastChange accessor method.
#===============================================================================

sub LastChange{
    my ($self, $newval) = @_;
    $self->{LastChange} = $newval if @_ > 1;
    return $self->{LastChange};
}
#===============================================================================


#===============================================================================
#            TimeOfLastChange accessor method.
#===============================================================================

sub TimeOfLastChange{
    my ($self, $newval) = @_;
    $self->{TimeOfLastChange} = $newval if @_ > 1;
    return $self->{TimeOfLastChange};
}
#===============================================================================


#===============================================================================
#            RecordLastChanged accessor method.
#===============================================================================

sub RecordLastChanged{
    my ($self, $newval) = @_;
    $self->{RecordLastChanged} = $newval if @_ > 1;
    return $self->{RecordLastChanged};
}
#===============================================================================


#===============================================================================
#            IsFrozen accessor method.
#===============================================================================

sub IsFrozen{
    my ($self, $newval) = @_;
    $self->{IsFrozen} = $newval if @_ > 1;
    return $self->{IsFrozen};
}
#===============================================================================


#===============================================================================
#            CharacterSet accessor method.
#===============================================================================

sub CharacterSet{
    my ($self, $newval) = @_;
    $self->{CharacterSet} = $newval if @_ > 1;
    return $self->{CharacterSet};
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
