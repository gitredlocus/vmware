package CIM_RedundancySet;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_SystemSpecificCollection;
use strict;


@CIM_RedundancySet::ISA = qw(_Initializable CIM_SystemSpecificCollection);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_SystemSpecificCollection::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{RedundancyStatus} = undef;
    $self->{TypeOfSet} = undef;
    $self->{MinNumberNeeded} = undef;
    $self->{MaxNumberSupported} = undef;
    $self->{VendorIdentifyingInfo} = undef;
    $self->{OtherTypeOfSet} = undef;
    $self->{LoadBalanceAlgorithm} = undef;
    $self->{OtherLoadBalanceAlgorithm} = undef;
    $self->{epr_name} = undef;  
    $self->{invokableMethods}->{Failover} = { input => ['FailoverFrom', 'FailoverTo'], output => [] };
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            RedundancyStatus accessor method.
#===============================================================================

sub RedundancyStatus{
    my ($self, $newval) = @_;
    $self->{RedundancyStatus} = $newval if @_ > 1;
    return $self->{RedundancyStatus};
}
#===============================================================================


#===============================================================================
#            TypeOfSet accessor method.
#===============================================================================

sub TypeOfSet{
    my ($self, $newval) = @_;
    $self->{TypeOfSet} = $newval if @_ > 1;
    return $self->{TypeOfSet};
}
#===============================================================================


#===============================================================================
#            MinNumberNeeded accessor method.
#===============================================================================

sub MinNumberNeeded{
    my ($self, $newval) = @_;
    $self->{MinNumberNeeded} = $newval if @_ > 1;
    return $self->{MinNumberNeeded};
}
#===============================================================================


#===============================================================================
#            MaxNumberSupported accessor method.
#===============================================================================

sub MaxNumberSupported{
    my ($self, $newval) = @_;
    $self->{MaxNumberSupported} = $newval if @_ > 1;
    return $self->{MaxNumberSupported};
}
#===============================================================================


#===============================================================================
#            VendorIdentifyingInfo accessor method.
#===============================================================================

sub VendorIdentifyingInfo{
    my ($self, $newval) = @_;
    $self->{VendorIdentifyingInfo} = $newval if @_ > 1;
    return $self->{VendorIdentifyingInfo};
}
#===============================================================================


#===============================================================================
#            OtherTypeOfSet accessor method.
#===============================================================================

sub OtherTypeOfSet{
    my ($self, $newval) = @_;
    $self->{OtherTypeOfSet} = $newval if @_ > 1;
    return $self->{OtherTypeOfSet};
}
#===============================================================================


#===============================================================================
#            LoadBalanceAlgorithm accessor method.
#===============================================================================

sub LoadBalanceAlgorithm{
    my ($self, $newval) = @_;
    $self->{LoadBalanceAlgorithm} = $newval if @_ > 1;
    return $self->{LoadBalanceAlgorithm};
}
#===============================================================================


#===============================================================================
#            OtherLoadBalanceAlgorithm accessor method.
#===============================================================================

sub OtherLoadBalanceAlgorithm{
    my ($self, $newval) = @_;
    $self->{OtherLoadBalanceAlgorithm} = $newval if @_ > 1;
    return $self->{OtherLoadBalanceAlgorithm};
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
