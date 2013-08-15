package CIM_TextRedirectionSAP;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_ServiceAccessPoint;
use strict;


@CIM_TextRedirectionSAP::ISA = qw(_Initializable CIM_ServiceAccessPoint);


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
    $self->{SessionTerminateSequence} = undef;
    $self->{TextFlowType} = undef;
    $self->{OtherTextFlowType} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            SessionTerminateSequence accessor method.
#===============================================================================

sub SessionTerminateSequence{
    my ($self, $newval) = @_;
    $self->{SessionTerminateSequence} = $newval if @_ > 1;
    return $self->{SessionTerminateSequence};
}
#===============================================================================


#===============================================================================
#            TextFlowType accessor method.
#===============================================================================

sub TextFlowType{
    my ($self, $newval) = @_;
    $self->{TextFlowType} = $newval if @_ > 1;
    return $self->{TextFlowType};
}
#===============================================================================


#===============================================================================
#            OtherTextFlowType accessor method.
#===============================================================================

sub OtherTextFlowType{
    my ($self, $newval) = @_;
    $self->{OtherTextFlowType} = $newval if @_ > 1;
    return $self->{OtherTextFlowType};
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
