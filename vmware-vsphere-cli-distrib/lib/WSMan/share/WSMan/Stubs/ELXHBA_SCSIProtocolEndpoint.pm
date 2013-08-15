package ELXHBA_SCSIProtocolEndpoint;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_SCSIProtocolEndpoint;
use strict;


@ELXHBA_SCSIProtocolEndpoint::ISA = qw(_Initializable CIM_SCSIProtocolEndpoint);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_SCSIProtocolEndpoint::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{OtherIdentifyingInfo} = undef;
    $self->{IdentifyingDescriptions} = undef;
    $self->{FCID} = undef;
    $self->{SCSIBusNumber} = undef;
    $self->{SCSITargetNumber} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            OtherIdentifyingInfo accessor method.
#===============================================================================

sub OtherIdentifyingInfo{
    my ($self, $newval) = @_;
    $self->{OtherIdentifyingInfo} = $newval if @_ > 1;
    return $self->{OtherIdentifyingInfo};
}
#===============================================================================


#===============================================================================
#            IdentifyingDescriptions accessor method.
#===============================================================================

sub IdentifyingDescriptions{
    my ($self, $newval) = @_;
    $self->{IdentifyingDescriptions} = $newval if @_ > 1;
    return $self->{IdentifyingDescriptions};
}
#===============================================================================


#===============================================================================
#            FCID accessor method.
#===============================================================================

sub FCID{
    my ($self, $newval) = @_;
    $self->{FCID} = $newval if @_ > 1;
    return $self->{FCID};
}
#===============================================================================


#===============================================================================
#            SCSIBusNumber accessor method.
#===============================================================================

sub SCSIBusNumber{
    my ($self, $newval) = @_;
    $self->{SCSIBusNumber} = $newval if @_ > 1;
    return $self->{SCSIBusNumber};
}
#===============================================================================


#===============================================================================
#            SCSITargetNumber accessor method.
#===============================================================================

sub SCSITargetNumber{
    my ($self, $newval) = @_;
    $self->{SCSITargetNumber} = $newval if @_ > 1;
    return $self->{SCSITargetNumber};
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
