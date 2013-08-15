package CIM_NetworkPortStatistics;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_StatisticalData;
use strict;


@CIM_NetworkPortStatistics::ISA = qw(_Initializable CIM_StatisticalData);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_StatisticalData::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{BytesTransmitted} = undef;
    $self->{BytesReceived} = undef;
    $self->{PacketsTransmitted} = undef;
    $self->{PacketsReceived} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            BytesTransmitted accessor method.
#===============================================================================

sub BytesTransmitted{
    my ($self, $newval) = @_;
    $self->{BytesTransmitted} = $newval if @_ > 1;
    return $self->{BytesTransmitted};
}
#===============================================================================


#===============================================================================
#            BytesReceived accessor method.
#===============================================================================

sub BytesReceived{
    my ($self, $newval) = @_;
    $self->{BytesReceived} = $newval if @_ > 1;
    return $self->{BytesReceived};
}
#===============================================================================


#===============================================================================
#            PacketsTransmitted accessor method.
#===============================================================================

sub PacketsTransmitted{
    my ($self, $newval) = @_;
    $self->{PacketsTransmitted} = $newval if @_ > 1;
    return $self->{PacketsTransmitted};
}
#===============================================================================


#===============================================================================
#            PacketsReceived accessor method.
#===============================================================================

sub PacketsReceived{
    my ($self, $newval) = @_;
    $self->{PacketsReceived} = $newval if @_ > 1;
    return $self->{PacketsReceived};
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
