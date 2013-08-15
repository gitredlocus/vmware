package LSIESG_ConfigLog;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_MessageLog;
use strict;


@LSIESG_ConfigLog::ISA = qw(_Initializable CIM_MessageLog);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_MessageLog::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{epr_name} = undef;  
    $self->{invokableMethods}->{DeleteRecord} = { input => ['IterationIdentifier', 'PositionToNext'], output => ['IterationIdentifier', 'RecordNumber', 'RecordData'] };
    $self->{invokableMethods}->{GetRecord} = { input => ['IterationIdentifier', 'PositionToNext'], output => ['IterationIdentifier', 'RecordNumber', 'RecordData'] };
    $self->{invokableMethods}->{CancelIteration} = { input => ['IterationIdentifier'], output => [] };
    $self->{invokableMethods}->{FreezeLog} = { input => ['Freeze'], output => [] };
    $self->{invokableMethods}->{PositionAtRecord} = { input => ['IterationIdentifier', 'MoveAbsolute', 'RecordNumber'], output => ['IterationIdentifier', 'RecordNumber'] };
    $self->{invokableMethods}->{FlagRecordForOverwrite} = { input => ['IterationIdentifier', 'PositionToNext'], output => ['IterationIdentifier', 'RecordNumber'] };
    $self->{invokableMethods}->{PositionToFirstRecord} = { input => [], output => ['IterationIdentifier'] };
    $self->{invokableMethods}->{WriteRecord} = { input => ['IterationIdentifier', 'PositionToNext', 'RecordData'], output => ['IterationIdentifier', 'RecordNumber'] };
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
