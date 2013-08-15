package CIM_AlertIndication;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_ProcessIndication;
use strict;


@CIM_AlertIndication::ISA = qw(_Initializable CIM_ProcessIndication);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_ProcessIndication::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{Description} = undef;
    $self->{AlertingManagedElement} = undef;
    $self->{AlertingElementFormat} = undef;
    $self->{OtherAlertingElementFormat} = undef;
    $self->{AlertType} = undef;
    $self->{OtherAlertType} = undef;
    $self->{PerceivedSeverity} = undef;
    $self->{ProbableCause} = undef;
    $self->{ProbableCauseDescription} = undef;
    $self->{Trending} = undef;
    $self->{RecommendedActions} = undef;
    $self->{EventID} = undef;
    $self->{EventTime} = undef;
    $self->{SystemCreationClassName} = undef;
    $self->{SystemName} = undef;
    $self->{ProviderName} = undef;
    $self->{OwningEntity} = undef;
    $self->{MessageID} = undef;
    $self->{Message} = undef;
    $self->{MessageArguments} = undef;
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
#            OtherAlertingElementFormat accessor method.
#===============================================================================

sub OtherAlertingElementFormat{
    my ($self, $newval) = @_;
    $self->{OtherAlertingElementFormat} = $newval if @_ > 1;
    return $self->{OtherAlertingElementFormat};
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
#            OtherAlertType accessor method.
#===============================================================================

sub OtherAlertType{
    my ($self, $newval) = @_;
    $self->{OtherAlertType} = $newval if @_ > 1;
    return $self->{OtherAlertType};
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
#            ProbableCause accessor method.
#===============================================================================

sub ProbableCause{
    my ($self, $newval) = @_;
    $self->{ProbableCause} = $newval if @_ > 1;
    return $self->{ProbableCause};
}
#===============================================================================


#===============================================================================
#            ProbableCauseDescription accessor method.
#===============================================================================

sub ProbableCauseDescription{
    my ($self, $newval) = @_;
    $self->{ProbableCauseDescription} = $newval if @_ > 1;
    return $self->{ProbableCauseDescription};
}
#===============================================================================


#===============================================================================
#            Trending accessor method.
#===============================================================================

sub Trending{
    my ($self, $newval) = @_;
    $self->{Trending} = $newval if @_ > 1;
    return $self->{Trending};
}
#===============================================================================


#===============================================================================
#            RecommendedActions accessor method.
#===============================================================================

sub RecommendedActions{
    my ($self, $newval) = @_;
    $self->{RecommendedActions} = $newval if @_ > 1;
    return $self->{RecommendedActions};
}
#===============================================================================


#===============================================================================
#            EventID accessor method.
#===============================================================================

sub EventID{
    my ($self, $newval) = @_;
    $self->{EventID} = $newval if @_ > 1;
    return $self->{EventID};
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
#            SystemCreationClassName accessor method.
#===============================================================================

sub SystemCreationClassName{
    my ($self, $newval) = @_;
    $self->{SystemCreationClassName} = $newval if @_ > 1;
    return $self->{SystemCreationClassName};
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
#            OwningEntity accessor method.
#===============================================================================

sub OwningEntity{
    my ($self, $newval) = @_;
    $self->{OwningEntity} = $newval if @_ > 1;
    return $self->{OwningEntity};
}
#===============================================================================


#===============================================================================
#            MessageID accessor method.
#===============================================================================

sub MessageID{
    my ($self, $newval) = @_;
    $self->{MessageID} = $newval if @_ > 1;
    return $self->{MessageID};
}
#===============================================================================


#===============================================================================
#            Message accessor method.
#===============================================================================

sub Message{
    my ($self, $newval) = @_;
    $self->{Message} = $newval if @_ > 1;
    return $self->{Message};
}
#===============================================================================


#===============================================================================
#            MessageArguments accessor method.
#===============================================================================

sub MessageArguments{
    my ($self, $newval) = @_;
    $self->{MessageArguments} = $newval if @_ > 1;
    return $self->{MessageArguments};
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
