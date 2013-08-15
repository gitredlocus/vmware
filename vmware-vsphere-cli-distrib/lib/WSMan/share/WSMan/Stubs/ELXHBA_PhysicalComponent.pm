package ELXHBA_PhysicalComponent;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_PhysicalComponent;
use strict;


@ELXHBA_PhysicalComponent::ISA = qw(_Initializable CIM_PhysicalComponent);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_PhysicalComponent::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{PartNumber} = undef;
    $self->{OUI} = undef;
    $self->{Identifier} = undef;
    $self->{ExtIdentifier} = undef;
    $self->{Connector} = undef;
    $self->{WaveLength} = undef;
    $self->{Temperature} = undef;
    $self->{Vcc} = undef;
    $self->{TxBiasCurrent} = undef;
    $self->{TxPower} = undef;
    $self->{RxPower} = undef;
    $self->{TemperatureUnit} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            PartNumber accessor method.
#===============================================================================

sub PartNumber{
    my ($self, $newval) = @_;
    $self->{PartNumber} = $newval if @_ > 1;
    return $self->{PartNumber};
}
#===============================================================================


#===============================================================================
#            OUI accessor method.
#===============================================================================

sub OUI{
    my ($self, $newval) = @_;
    $self->{OUI} = $newval if @_ > 1;
    return $self->{OUI};
}
#===============================================================================


#===============================================================================
#            Identifier accessor method.
#===============================================================================

sub Identifier{
    my ($self, $newval) = @_;
    $self->{Identifier} = $newval if @_ > 1;
    return $self->{Identifier};
}
#===============================================================================


#===============================================================================
#            ExtIdentifier accessor method.
#===============================================================================

sub ExtIdentifier{
    my ($self, $newval) = @_;
    $self->{ExtIdentifier} = $newval if @_ > 1;
    return $self->{ExtIdentifier};
}
#===============================================================================


#===============================================================================
#            Connector accessor method.
#===============================================================================

sub Connector{
    my ($self, $newval) = @_;
    $self->{Connector} = $newval if @_ > 1;
    return $self->{Connector};
}
#===============================================================================


#===============================================================================
#            WaveLength accessor method.
#===============================================================================

sub WaveLength{
    my ($self, $newval) = @_;
    $self->{WaveLength} = $newval if @_ > 1;
    return $self->{WaveLength};
}
#===============================================================================


#===============================================================================
#            Temperature accessor method.
#===============================================================================

sub Temperature{
    my ($self, $newval) = @_;
    $self->{Temperature} = $newval if @_ > 1;
    return $self->{Temperature};
}
#===============================================================================


#===============================================================================
#            Vcc accessor method.
#===============================================================================

sub Vcc{
    my ($self, $newval) = @_;
    $self->{Vcc} = $newval if @_ > 1;
    return $self->{Vcc};
}
#===============================================================================


#===============================================================================
#            TxBiasCurrent accessor method.
#===============================================================================

sub TxBiasCurrent{
    my ($self, $newval) = @_;
    $self->{TxBiasCurrent} = $newval if @_ > 1;
    return $self->{TxBiasCurrent};
}
#===============================================================================


#===============================================================================
#            TxPower accessor method.
#===============================================================================

sub TxPower{
    my ($self, $newval) = @_;
    $self->{TxPower} = $newval if @_ > 1;
    return $self->{TxPower};
}
#===============================================================================


#===============================================================================
#            RxPower accessor method.
#===============================================================================

sub RxPower{
    my ($self, $newval) = @_;
    $self->{RxPower} = $newval if @_ > 1;
    return $self->{RxPower};
}
#===============================================================================


#===============================================================================
#            TemperatureUnit accessor method.
#===============================================================================

sub TemperatureUnit{
    my ($self, $newval) = @_;
    $self->{TemperatureUnit} = $newval if @_ > 1;
    return $self->{TemperatureUnit};
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
