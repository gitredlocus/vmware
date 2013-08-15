package OMC_IpmiAlertIndication;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_AlertIndication;
use strict;


@OMC_IpmiAlertIndication::ISA = qw(_Initializable CIM_AlertIndication);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_AlertIndication::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{Description} = undef;
    $self->{EventTime} = undef;
    $self->{IndicationTime} = undef;
    $self->{PerceivedSeverity} = undef;
    $self->{AlertType} = undef;
    $self->{SystemCreationClassName} = undef;
    $self->{AlertingManagedElement} = undef;
    $self->{AlertingElementFormat} = undef;
    $self->{SystemName} = undef;
    $self->{ProviderName} = undef;
    $self->{epr_name} = undef;  
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
#            EventTime accessor method.
#===============================================================================

sub EventTime{
    my ($self, $newval) = @_;
    $self->{EventTime} = $newval if @_ > 1;
    return $self->{EventTime};
}
#===============================================================================


#===============================================================================
#            IndicationTime accessor method.
#===============================================================================

sub IndicationTime{
    my ($self, $newval) = @_;
    $self->{IndicationTime} = $newval if @_ > 1;
    return $self->{IndicationTime};
}
#===============================================================================


#===============================================================================
#            PerceivedSeverity accessor method.
#===============================================================================

sub PerceivedSeverity{
    my ($self, $newval) = @_;
    $self->{PerceivedSeverity} = $newval if @_ > 1;
    return $self->{PerceivedSeverity};
}
#===============================================================================


#===============================================================================
#            AlertType accessor method.
#===============================================================================

sub AlertType{
    my ($self, $newval) = @_;
    $self->{AlertType} = $newval if @_ > 1;
    return $self->{AlertType};
}
#===============================================================================


#===============================================================================
#            SystemCreationClassName accessor method.
#===============================================================================

sub SystemCreationClassName{
    my ($self, $newval) = @_;
    $self->{SystemCreationClassName} = $newval if @_ > 1;
    return $self->{SystemCreationClassName};
}
#===============================================================================


#===============================================================================
#            AlertingManagedElement accessor method.
#===============================================================================

sub AlertingManagedElement{
    my ($self, $newval) = @_;
    $self->{AlertingManagedElement} = $newval if @_ > 1;
    return $self->{AlertingManagedElement};
}
#===============================================================================


#===============================================================================
#            AlertingElementFormat accessor method.
#===============================================================================

sub AlertingElementFormat{
    my ($self, $newval) = @_;
    $self->{AlertingElementFormat} = $newval if @_ > 1;
    return $self->{AlertingElementFormat};
}
#===============================================================================


#===============================================================================
#            SystemName accessor method.
#===============================================================================

sub SystemName{
    my ($self, $newval) = @_;
    $self->{SystemName} = $newval if @_ > 1;
    return $self->{SystemName};
}
#===============================================================================


#===============================================================================
#            ProviderName accessor method.
#===============================================================================

sub ProviderName{
    my ($self, $newval) = @_;
    $self->{ProviderName} = $newval if @_ > 1;
    return $self->{ProviderName};
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
