package CIM_CIMXMLCommunicationMechanism;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_ObjectManagerCommunicationMechanism;
use strict;


@CIM_CIMXMLCommunicationMechanism::ISA = qw(_Initializable CIM_ObjectManagerCommunicationMechanism);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_ObjectManagerCommunicationMechanism::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{CommunicationMechanism} = undef;
    $self->{Version} = undef;
    $self->{CIMXMLProtocolVersion} = undef;
    $self->{CIMValidated} = undef;
    $self->{PulledEnumerationClosureOnExceedingServerLimitsSupported} = undef;
    $self->{PulledEnumerationContinuationOnErrorSupported} = undef;
    $self->{PulledEnumerationNoOperationTimeoutSupported} = undef;
    $self->{PulledEnumerationMinimumOperationTimeout} = undef;
    $self->{PulledEnumerationMaximumOperationTimeout} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            CommunicationMechanism accessor method.
#===============================================================================

sub CommunicationMechanism{
    my ($self, $newval) = @_;
    $self->{CommunicationMechanism} = $newval if @_ > 1;
    return $self->{CommunicationMechanism};
}
#===============================================================================


#===============================================================================
#            Version accessor method.
#===============================================================================

sub Version{
    my ($self, $newval) = @_;
    $self->{Version} = $newval if @_ > 1;
    return $self->{Version};
}
#===============================================================================


#===============================================================================
#            CIMXMLProtocolVersion accessor method.
#===============================================================================

sub CIMXMLProtocolVersion{
    my ($self, $newval) = @_;
    $self->{CIMXMLProtocolVersion} = $newval if @_ > 1;
    return $self->{CIMXMLProtocolVersion};
}
#===============================================================================


#===============================================================================
#            CIMValidated accessor method.
#===============================================================================

sub CIMValidated{
    my ($self, $newval) = @_;
    $self->{CIMValidated} = $newval if @_ > 1;
    return $self->{CIMValidated};
}
#===============================================================================


#===============================================================================
#            PulledEnumerationClosureOnExceedingServerLimitsSupported accessor method.
#===============================================================================

sub PulledEnumerationClosureOnExceedingServerLimitsSupported{
    my ($self, $newval) = @_;
    $self->{PulledEnumerationClosureOnExceedingServerLimitsSupported} = $newval if @_ > 1;
    return $self->{PulledEnumerationClosureOnExceedingServerLimitsSupported};
}
#===============================================================================


#===============================================================================
#            PulledEnumerationContinuationOnErrorSupported accessor method.
#===============================================================================

sub PulledEnumerationContinuationOnErrorSupported{
    my ($self, $newval) = @_;
    $self->{PulledEnumerationContinuationOnErrorSupported} = $newval if @_ > 1;
    return $self->{PulledEnumerationContinuationOnErrorSupported};
}
#===============================================================================


#===============================================================================
#            PulledEnumerationNoOperationTimeoutSupported accessor method.
#===============================================================================

sub PulledEnumerationNoOperationTimeoutSupported{
    my ($self, $newval) = @_;
    $self->{PulledEnumerationNoOperationTimeoutSupported} = $newval if @_ > 1;
    return $self->{PulledEnumerationNoOperationTimeoutSupported};
}
#===============================================================================


#===============================================================================
#            PulledEnumerationMinimumOperationTimeout accessor method.
#===============================================================================

sub PulledEnumerationMinimumOperationTimeout{
    my ($self, $newval) = @_;
    $self->{PulledEnumerationMinimumOperationTimeout} = $newval if @_ > 1;
    return $self->{PulledEnumerationMinimumOperationTimeout};
}
#===============================================================================


#===============================================================================
#            PulledEnumerationMaximumOperationTimeout accessor method.
#===============================================================================

sub PulledEnumerationMaximumOperationTimeout{
    my ($self, $newval) = @_;
    $self->{PulledEnumerationMaximumOperationTimeout} = $newval if @_ > 1;
    return $self->{PulledEnumerationMaximumOperationTimeout};
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
