package CIM_FCPortStatistics;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_NetworkPortStatistics;
use strict;


@CIM_FCPortStatistics::ISA = qw(_Initializable CIM_NetworkPortStatistics);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_NetworkPortStatistics::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{LIPCount} = undef;
    $self->{NOSCount} = undef;
    $self->{ErrorFrames} = undef;
    $self->{DumpedFrames} = undef;
    $self->{LinkFailures} = undef;
    $self->{LossOfSignalCounter} = undef;
    $self->{LossOfSyncCounter} = undef;
    $self->{PrimitiveSeqProtocolErrCount} = undef;
    $self->{CRCErrors} = undef;
    $self->{InvalidTransmissionWords} = undef;
    $self->{FramesTooShort} = undef;
    $self->{FramesTooLong} = undef;
    $self->{AddressErrors} = undef;
    $self->{BufferCreditNotProvided} = undef;
    $self->{BufferCreditNotReceived} = undef;
    $self->{DelimiterErrors} = undef;
    $self->{EncodingDisparityErrors} = undef;
    $self->{LinkResetsReceived} = undef;
    $self->{LinkResetsTransmitted} = undef;
    $self->{MulticastFramesReceived} = undef;
    $self->{MulticastFramesTransmitted} = undef;
    $self->{FBSYFrames} = undef;
    $self->{PBSYFrames} = undef;
    $self->{FRJTFrames} = undef;
    $self->{PRJTFrames} = undef;
    $self->{RXClass1Frames} = undef;
    $self->{TXClass1Frames} = undef;
    $self->{Class1FBSY} = undef;
    $self->{Class1PBSY} = undef;
    $self->{Class1FRJT} = undef;
    $self->{Class1PRJT} = undef;
    $self->{RXClass2Frames} = undef;
    $self->{TXClass2Frames} = undef;
    $self->{Class2FBSY} = undef;
    $self->{Class2PBSY} = undef;
    $self->{Class2FRJT} = undef;
    $self->{Class2PRJT} = undef;
    $self->{RXClass3Frames} = undef;
    $self->{TXClass3Frames} = undef;
    $self->{Class3FramesDiscarded} = undef;
    $self->{RXBroadcastFrames} = undef;
    $self->{TXBroadcastFrames} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            LIPCount accessor method.
#===============================================================================

sub LIPCount{
    my ($self, $newval) = @_;
    $self->{LIPCount} = $newval if @_ > 1;
    return $self->{LIPCount};
}
#===============================================================================


#===============================================================================
#            NOSCount accessor method.
#===============================================================================

sub NOSCount{
    my ($self, $newval) = @_;
    $self->{NOSCount} = $newval if @_ > 1;
    return $self->{NOSCount};
}
#===============================================================================


#===============================================================================
#            ErrorFrames accessor method.
#===============================================================================

sub ErrorFrames{
    my ($self, $newval) = @_;
    $self->{ErrorFrames} = $newval if @_ > 1;
    return $self->{ErrorFrames};
}
#===============================================================================


#===============================================================================
#            DumpedFrames accessor method.
#===============================================================================

sub DumpedFrames{
    my ($self, $newval) = @_;
    $self->{DumpedFrames} = $newval if @_ > 1;
    return $self->{DumpedFrames};
}
#===============================================================================


#===============================================================================
#            LinkFailures accessor method.
#===============================================================================

sub LinkFailures{
    my ($self, $newval) = @_;
    $self->{LinkFailures} = $newval if @_ > 1;
    return $self->{LinkFailures};
}
#===============================================================================


#===============================================================================
#            LossOfSignalCounter accessor method.
#===============================================================================

sub LossOfSignalCounter{
    my ($self, $newval) = @_;
    $self->{LossOfSignalCounter} = $newval if @_ > 1;
    return $self->{LossOfSignalCounter};
}
#===============================================================================


#===============================================================================
#            LossOfSyncCounter accessor method.
#===============================================================================

sub LossOfSyncCounter{
    my ($self, $newval) = @_;
    $self->{LossOfSyncCounter} = $newval if @_ > 1;
    return $self->{LossOfSyncCounter};
}
#===============================================================================


#===============================================================================
#            PrimitiveSeqProtocolErrCount accessor method.
#===============================================================================

sub PrimitiveSeqProtocolErrCount{
    my ($self, $newval) = @_;
    $self->{PrimitiveSeqProtocolErrCount} = $newval if @_ > 1;
    return $self->{PrimitiveSeqProtocolErrCount};
}
#===============================================================================


#===============================================================================
#            CRCErrors accessor method.
#===============================================================================

sub CRCErrors{
    my ($self, $newval) = @_;
    $self->{CRCErrors} = $newval if @_ > 1;
    return $self->{CRCErrors};
}
#===============================================================================


#===============================================================================
#            InvalidTransmissionWords accessor method.
#===============================================================================

sub InvalidTransmissionWords{
    my ($self, $newval) = @_;
    $self->{InvalidTransmissionWords} = $newval if @_ > 1;
    return $self->{InvalidTransmissionWords};
}
#===============================================================================


#===============================================================================
#            FramesTooShort accessor method.
#===============================================================================

sub FramesTooShort{
    my ($self, $newval) = @_;
    $self->{FramesTooShort} = $newval if @_ > 1;
    return $self->{FramesTooShort};
}
#===============================================================================


#===============================================================================
#            FramesTooLong accessor method.
#===============================================================================

sub FramesTooLong{
    my ($self, $newval) = @_;
    $self->{FramesTooLong} = $newval if @_ > 1;
    return $self->{FramesTooLong};
}
#===============================================================================


#===============================================================================
#            AddressErrors accessor method.
#===============================================================================

sub AddressErrors{
    my ($self, $newval) = @_;
    $self->{AddressErrors} = $newval if @_ > 1;
    return $self->{AddressErrors};
}
#===============================================================================


#===============================================================================
#            BufferCreditNotProvided accessor method.
#===============================================================================

sub BufferCreditNotProvided{
    my ($self, $newval) = @_;
    $self->{BufferCreditNotProvided} = $newval if @_ > 1;
    return $self->{BufferCreditNotProvided};
}
#===============================================================================


#===============================================================================
#            BufferCreditNotReceived accessor method.
#===============================================================================

sub BufferCreditNotReceived{
    my ($self, $newval) = @_;
    $self->{BufferCreditNotReceived} = $newval if @_ > 1;
    return $self->{BufferCreditNotReceived};
}
#===============================================================================


#===============================================================================
#            DelimiterErrors accessor method.
#===============================================================================

sub DelimiterErrors{
    my ($self, $newval) = @_;
    $self->{DelimiterErrors} = $newval if @_ > 1;
    return $self->{DelimiterErrors};
}
#===============================================================================


#===============================================================================
#            EncodingDisparityErrors accessor method.
#===============================================================================

sub EncodingDisparityErrors{
    my ($self, $newval) = @_;
    $self->{EncodingDisparityErrors} = $newval if @_ > 1;
    return $self->{EncodingDisparityErrors};
}
#===============================================================================


#===============================================================================
#            LinkResetsReceived accessor method.
#===============================================================================

sub LinkResetsReceived{
    my ($self, $newval) = @_;
    $self->{LinkResetsReceived} = $newval if @_ > 1;
    return $self->{LinkResetsReceived};
}
#===============================================================================


#===============================================================================
#            LinkResetsTransmitted accessor method.
#===============================================================================

sub LinkResetsTransmitted{
    my ($self, $newval) = @_;
    $self->{LinkResetsTransmitted} = $newval if @_ > 1;
    return $self->{LinkResetsTransmitted};
}
#===============================================================================


#===============================================================================
#            MulticastFramesReceived accessor method.
#===============================================================================

sub MulticastFramesReceived{
    my ($self, $newval) = @_;
    $self->{MulticastFramesReceived} = $newval if @_ > 1;
    return $self->{MulticastFramesReceived};
}
#===============================================================================


#===============================================================================
#            MulticastFramesTransmitted accessor method.
#===============================================================================

sub MulticastFramesTransmitted{
    my ($self, $newval) = @_;
    $self->{MulticastFramesTransmitted} = $newval if @_ > 1;
    return $self->{MulticastFramesTransmitted};
}
#===============================================================================


#===============================================================================
#            FBSYFrames accessor method.
#===============================================================================

sub FBSYFrames{
    my ($self, $newval) = @_;
    $self->{FBSYFrames} = $newval if @_ > 1;
    return $self->{FBSYFrames};
}
#===============================================================================


#===============================================================================
#            PBSYFrames accessor method.
#===============================================================================

sub PBSYFrames{
    my ($self, $newval) = @_;
    $self->{PBSYFrames} = $newval if @_ > 1;
    return $self->{PBSYFrames};
}
#===============================================================================


#===============================================================================
#            FRJTFrames accessor method.
#===============================================================================

sub FRJTFrames{
    my ($self, $newval) = @_;
    $self->{FRJTFrames} = $newval if @_ > 1;
    return $self->{FRJTFrames};
}
#===============================================================================


#===============================================================================
#            PRJTFrames accessor method.
#===============================================================================

sub PRJTFrames{
    my ($self, $newval) = @_;
    $self->{PRJTFrames} = $newval if @_ > 1;
    return $self->{PRJTFrames};
}
#===============================================================================


#===============================================================================
#            RXClass1Frames accessor method.
#===============================================================================

sub RXClass1Frames{
    my ($self, $newval) = @_;
    $self->{RXClass1Frames} = $newval if @_ > 1;
    return $self->{RXClass1Frames};
}
#===============================================================================


#===============================================================================
#            TXClass1Frames accessor method.
#===============================================================================

sub TXClass1Frames{
    my ($self, $newval) = @_;
    $self->{TXClass1Frames} = $newval if @_ > 1;
    return $self->{TXClass1Frames};
}
#===============================================================================


#===============================================================================
#            Class1FBSY accessor method.
#===============================================================================

sub Class1FBSY{
    my ($self, $newval) = @_;
    $self->{Class1FBSY} = $newval if @_ > 1;
    return $self->{Class1FBSY};
}
#===============================================================================


#===============================================================================
#            Class1PBSY accessor method.
#===============================================================================

sub Class1PBSY{
    my ($self, $newval) = @_;
    $self->{Class1PBSY} = $newval if @_ > 1;
    return $self->{Class1PBSY};
}
#===============================================================================


#===============================================================================
#            Class1FRJT accessor method.
#===============================================================================

sub Class1FRJT{
    my ($self, $newval) = @_;
    $self->{Class1FRJT} = $newval if @_ > 1;
    return $self->{Class1FRJT};
}
#===============================================================================


#===============================================================================
#            Class1PRJT accessor method.
#===============================================================================

sub Class1PRJT{
    my ($self, $newval) = @_;
    $self->{Class1PRJT} = $newval if @_ > 1;
    return $self->{Class1PRJT};
}
#===============================================================================


#===============================================================================
#            RXClass2Frames accessor method.
#===============================================================================

sub RXClass2Frames{
    my ($self, $newval) = @_;
    $self->{RXClass2Frames} = $newval if @_ > 1;
    return $self->{RXClass2Frames};
}
#===============================================================================


#===============================================================================
#            TXClass2Frames accessor method.
#===============================================================================

sub TXClass2Frames{
    my ($self, $newval) = @_;
    $self->{TXClass2Frames} = $newval if @_ > 1;
    return $self->{TXClass2Frames};
}
#===============================================================================


#===============================================================================
#            Class2FBSY accessor method.
#===============================================================================

sub Class2FBSY{
    my ($self, $newval) = @_;
    $self->{Class2FBSY} = $newval if @_ > 1;
    return $self->{Class2FBSY};
}
#===============================================================================


#===============================================================================
#            Class2PBSY accessor method.
#===============================================================================

sub Class2PBSY{
    my ($self, $newval) = @_;
    $self->{Class2PBSY} = $newval if @_ > 1;
    return $self->{Class2PBSY};
}
#===============================================================================


#===============================================================================
#            Class2FRJT accessor method.
#===============================================================================

sub Class2FRJT{
    my ($self, $newval) = @_;
    $self->{Class2FRJT} = $newval if @_ > 1;
    return $self->{Class2FRJT};
}
#===============================================================================


#===============================================================================
#            Class2PRJT accessor method.
#===============================================================================

sub Class2PRJT{
    my ($self, $newval) = @_;
    $self->{Class2PRJT} = $newval if @_ > 1;
    return $self->{Class2PRJT};
}
#===============================================================================


#===============================================================================
#            RXClass3Frames accessor method.
#===============================================================================

sub RXClass3Frames{
    my ($self, $newval) = @_;
    $self->{RXClass3Frames} = $newval if @_ > 1;
    return $self->{RXClass3Frames};
}
#===============================================================================


#===============================================================================
#            TXClass3Frames accessor method.
#===============================================================================

sub TXClass3Frames{
    my ($self, $newval) = @_;
    $self->{TXClass3Frames} = $newval if @_ > 1;
    return $self->{TXClass3Frames};
}
#===============================================================================


#===============================================================================
#            Class3FramesDiscarded accessor method.
#===============================================================================

sub Class3FramesDiscarded{
    my ($self, $newval) = @_;
    $self->{Class3FramesDiscarded} = $newval if @_ > 1;
    return $self->{Class3FramesDiscarded};
}
#===============================================================================


#===============================================================================
#            RXBroadcastFrames accessor method.
#===============================================================================

sub RXBroadcastFrames{
    my ($self, $newval) = @_;
    $self->{RXBroadcastFrames} = $newval if @_ > 1;
    return $self->{RXBroadcastFrames};
}
#===============================================================================


#===============================================================================
#            TXBroadcastFrames accessor method.
#===============================================================================

sub TXBroadcastFrames{
    my ($self, $newval) = @_;
    $self->{TXBroadcastFrames} = $newval if @_ > 1;
    return $self->{TXBroadcastFrames};
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
