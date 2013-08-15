package ELXHBA_FCPortStatistics;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_FCPortStatistics;
use strict;


@ELXHBA_FCPortStatistics::ISA = qw(_Initializable CIM_FCPortStatistics);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_FCPortStatistics::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{TxSequences} = undef;
    $self->{RxSequences} = undef;
    $self->{ExCountOrig} = undef;
    $self->{ExCountResp} = undef;
    $self->{ActiveXRIs} = undef;
    $self->{ActiveRPIs} = undef;
    $self->{ElasticBufOverruns} = undef;
    $self->{LinkTransitions} = undef;
    $self->{PrimitiveSeqTimesouts} = undef;
    $self->{ArbitrationTimeouts} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            TxSequences accessor method.
#===============================================================================

sub TxSequences{
    my ($self, $newval) = @_;
    $self->{TxSequences} = $newval if @_ > 1;
    return $self->{TxSequences};
}
#===============================================================================


#===============================================================================
#            RxSequences accessor method.
#===============================================================================

sub RxSequences{
    my ($self, $newval) = @_;
    $self->{RxSequences} = $newval if @_ > 1;
    return $self->{RxSequences};
}
#===============================================================================


#===============================================================================
#            ExCountOrig accessor method.
#===============================================================================

sub ExCountOrig{
    my ($self, $newval) = @_;
    $self->{ExCountOrig} = $newval if @_ > 1;
    return $self->{ExCountOrig};
}
#===============================================================================


#===============================================================================
#            ExCountResp accessor method.
#===============================================================================

sub ExCountResp{
    my ($self, $newval) = @_;
    $self->{ExCountResp} = $newval if @_ > 1;
    return $self->{ExCountResp};
}
#===============================================================================


#===============================================================================
#            ActiveXRIs accessor method.
#===============================================================================

sub ActiveXRIs{
    my ($self, $newval) = @_;
    $self->{ActiveXRIs} = $newval if @_ > 1;
    return $self->{ActiveXRIs};
}
#===============================================================================


#===============================================================================
#            ActiveRPIs accessor method.
#===============================================================================

sub ActiveRPIs{
    my ($self, $newval) = @_;
    $self->{ActiveRPIs} = $newval if @_ > 1;
    return $self->{ActiveRPIs};
}
#===============================================================================


#===============================================================================
#            ElasticBufOverruns accessor method.
#===============================================================================

sub ElasticBufOverruns{
    my ($self, $newval) = @_;
    $self->{ElasticBufOverruns} = $newval if @_ > 1;
    return $self->{ElasticBufOverruns};
}
#===============================================================================


#===============================================================================
#            LinkTransitions accessor method.
#===============================================================================

sub LinkTransitions{
    my ($self, $newval) = @_;
    $self->{LinkTransitions} = $newval if @_ > 1;
    return $self->{LinkTransitions};
}
#===============================================================================


#===============================================================================
#            PrimitiveSeqTimesouts accessor method.
#===============================================================================

sub PrimitiveSeqTimesouts{
    my ($self, $newval) = @_;
    $self->{PrimitiveSeqTimesouts} = $newval if @_ > 1;
    return $self->{PrimitiveSeqTimesouts};
}
#===============================================================================


#===============================================================================
#            ArbitrationTimeouts accessor method.
#===============================================================================

sub ArbitrationTimeouts{
    my ($self, $newval) = @_;
    $self->{ArbitrationTimeouts} = $newval if @_ > 1;
    return $self->{ArbitrationTimeouts};
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
