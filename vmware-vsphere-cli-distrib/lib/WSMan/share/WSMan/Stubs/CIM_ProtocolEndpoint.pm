package CIM_ProtocolEndpoint;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_ServiceAccessPoint;
use strict;


@CIM_ProtocolEndpoint::ISA = qw(_Initializable CIM_ServiceAccessPoint);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_ServiceAccessPoint::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{Description} = undef;
    $self->{OperationalStatus} = undef;
    $self->{EnabledState} = undef;
    $self->{TimeOfLastStateChange} = undef;
    $self->{Name} = undef;
    $self->{NameFormat} = undef;
    $self->{ProtocolType} = undef;
    $self->{ProtocolIFType} = undef;
    $self->{OtherTypeDescription} = undef;
    $self->{BroadcastResetSupported} = undef;
    $self->{epr_name} = undef;  
    $self->{invokableMethods}->{BroadcastReset} = { input => [], output => [] };
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            Description accessor method.
#===============================================================================

sub Description{
    my ($self, $newval) = @_;
    $self->{Description} = $newval if @_ > 1;
    return $self->{Description};
}
#===============================================================================


#===============================================================================
#            OperationalStatus accessor method.
#===============================================================================

sub OperationalStatus{
    my ($self, $newval) = @_;
    $self->{OperationalStatus} = $newval if @_ > 1;
    return $self->{OperationalStatus};
}
#===============================================================================


#===============================================================================
#            EnabledState accessor method.
#===============================================================================

sub EnabledState{
    my ($self, $newval) = @_;
    $self->{EnabledState} = $newval if @_ > 1;
    return $self->{EnabledState};
}
#===============================================================================


#===============================================================================
#            TimeOfLastStateChange accessor method.
#===============================================================================

sub TimeOfLastStateChange{
    my ($self, $newval) = @_;
    $self->{TimeOfLastStateChange} = $newval if @_ > 1;
    return $self->{TimeOfLastStateChange};
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
#            NameFormat accessor method.
#===============================================================================

sub NameFormat{
    my ($self, $newval) = @_;
    $self->{NameFormat} = $newval if @_ > 1;
    return $self->{NameFormat};
}
#===============================================================================


#===============================================================================
#            ProtocolType accessor method.
#===============================================================================

sub ProtocolType{
    my ($self, $newval) = @_;
    $self->{ProtocolType} = $newval if @_ > 1;
    return $self->{ProtocolType};
}
#===============================================================================


#===============================================================================
#            ProtocolIFType accessor method.
#===============================================================================

sub ProtocolIFType{
    my ($self, $newval) = @_;
    $self->{ProtocolIFType} = $newval if @_ > 1;
    return $self->{ProtocolIFType};
}
#===============================================================================


#===============================================================================
#            OtherTypeDescription accessor method.
#===============================================================================

sub OtherTypeDescription{
    my ($self, $newval) = @_;
    $self->{OtherTypeDescription} = $newval if @_ > 1;
    return $self->{OtherTypeDescription};
}
#===============================================================================


#===============================================================================
#            BroadcastResetSupported accessor method.
#===============================================================================

sub BroadcastResetSupported{
    my ($self, $newval) = @_;
    $self->{BroadcastResetSupported} = $newval if @_ > 1;
    return $self->{BroadcastResetSupported};
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
