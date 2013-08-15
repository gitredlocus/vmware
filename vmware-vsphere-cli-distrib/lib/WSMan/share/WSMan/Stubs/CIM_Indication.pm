package CIM_Indication;
use WSMan::Stubs::Initializable;
use strict;


@CIM_Indication::ISA = qw(_Initializable);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{IndicationIdentifier} = undef;
    $self->{CorrelatedIndications} = undef;
    $self->{IndicationTime} = undef;
    $self->{PerceivedSeverity} = undef;
    $self->{OtherSeverity} = undef;
    $self->{IndicationFilterName} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            IndicationIdentifier accessor method.
#===============================================================================

sub IndicationIdentifier{
    my ($self, $newval) = @_;
    $self->{IndicationIdentifier} = $newval if @_ > 1;
    return $self->{IndicationIdentifier};
}
#===============================================================================


#===============================================================================
#            CorrelatedIndications accessor method.
#===============================================================================

sub CorrelatedIndications{
    my ($self, $newval) = @_;
    $self->{CorrelatedIndications} = $newval if @_ > 1;
    return $self->{CorrelatedIndications};
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
#            OtherSeverity accessor method.
#===============================================================================

sub OtherSeverity{
    my ($self, $newval) = @_;
    $self->{OtherSeverity} = $newval if @_ > 1;
    return $self->{OtherSeverity};
}
#===============================================================================


#===============================================================================
#            IndicationFilterName accessor method.
#===============================================================================

sub IndicationFilterName{
    my ($self, $newval) = @_;
    $self->{IndicationFilterName} = $newval if @_ > 1;
    return $self->{IndicationFilterName};
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
