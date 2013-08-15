package CIM_StatisticalData;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_ManagedElement;
use strict;


@CIM_StatisticalData::ISA = qw(_Initializable CIM_ManagedElement);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_ManagedElement::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{InstanceID} = undef;
    $self->{ElementName} = undef;
    $self->{StartStatisticTime} = undef;
    $self->{StatisticTime} = undef;
    $self->{SampleInterval} = undef;
    $self->{epr_name} = undef;  
    $self->{invokableMethods}->{ResetSelectedStats} = { input => ['SelectedStatistics'], output => [] };
    push @{$self->{id_keys}}, 'InstanceID';
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            InstanceID accessor method.
#===============================================================================

sub InstanceID{
    my ($self, $newval) = @_;
    $self->{InstanceID} = $newval if @_ > 1;
    return $self->{InstanceID};
}
#===============================================================================


#===============================================================================
#            ElementName accessor method.
#===============================================================================

sub ElementName{
    my ($self, $newval) = @_;
    $self->{ElementName} = $newval if @_ > 1;
    return $self->{ElementName};
}
#===============================================================================


#===============================================================================
#            StartStatisticTime accessor method.
#===============================================================================

sub StartStatisticTime{
    my ($self, $newval) = @_;
    $self->{StartStatisticTime} = $newval if @_ > 1;
    return $self->{StartStatisticTime};
}
#===============================================================================


#===============================================================================
#            StatisticTime accessor method.
#===============================================================================

sub StatisticTime{
    my ($self, $newval) = @_;
    $self->{StatisticTime} = $newval if @_ > 1;
    return $self->{StatisticTime};
}
#===============================================================================


#===============================================================================
#            SampleInterval accessor method.
#===============================================================================

sub SampleInterval{
    my ($self, $newval) = @_;
    $self->{SampleInterval} = $newval if @_ > 1;
    return $self->{SampleInterval};
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
