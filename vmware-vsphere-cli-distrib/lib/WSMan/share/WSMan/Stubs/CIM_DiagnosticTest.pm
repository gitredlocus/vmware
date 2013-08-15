package CIM_DiagnosticTest;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_DiagnosticService;
use strict;


@CIM_DiagnosticTest::ISA = qw(_Initializable CIM_DiagnosticService);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_DiagnosticService::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{Characteristics} = undef;
    $self->{OtherCharacteristicDescription} = undef;
    $self->{OtherCharacteristicsDescriptions} = undef;
    $self->{IsInUse} = undef;
    $self->{ResourcesUsed} = undef;
    $self->{TestTypes} = undef;
    $self->{OtherTestTypesDescriptions} = undef;
    $self->{epr_name} = undef;  
    $self->{invokableMethods}->{RunTest} = { input => ['SystemElement', 'Setting'], output => ['Result'] };
    $self->{invokableMethods}->{DiscontinueTest} = { input => ['SystemElement', 'Result'], output => ['TestingStopped'] };
    $self->{invokableMethods}->{ClearResults} = { input => ['SystemElement'], output => ['ResultsNotCleared'] };
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            Characteristics accessor method.
#===============================================================================

sub Characteristics{
    my ($self, $newval) = @_;
    $self->{Characteristics} = $newval if @_ > 1;
    return $self->{Characteristics};
}
#===============================================================================


#===============================================================================
#            OtherCharacteristicDescription accessor method.
#===============================================================================

sub OtherCharacteristicDescription{
    my ($self, $newval) = @_;
    $self->{OtherCharacteristicDescription} = $newval if @_ > 1;
    return $self->{OtherCharacteristicDescription};
}
#===============================================================================


#===============================================================================
#            OtherCharacteristicsDescriptions accessor method.
#===============================================================================

sub OtherCharacteristicsDescriptions{
    my ($self, $newval) = @_;
    $self->{OtherCharacteristicsDescriptions} = $newval if @_ > 1;
    return $self->{OtherCharacteristicsDescriptions};
}
#===============================================================================


#===============================================================================
#            IsInUse accessor method.
#===============================================================================

sub IsInUse{
    my ($self, $newval) = @_;
    $self->{IsInUse} = $newval if @_ > 1;
    return $self->{IsInUse};
}
#===============================================================================


#===============================================================================
#            ResourcesUsed accessor method.
#===============================================================================

sub ResourcesUsed{
    my ($self, $newval) = @_;
    $self->{ResourcesUsed} = $newval if @_ > 1;
    return $self->{ResourcesUsed};
}
#===============================================================================


#===============================================================================
#            TestTypes accessor method.
#===============================================================================

sub TestTypes{
    my ($self, $newval) = @_;
    $self->{TestTypes} = $newval if @_ > 1;
    return $self->{TestTypes};
}
#===============================================================================


#===============================================================================
#            OtherTestTypesDescriptions accessor method.
#===============================================================================

sub OtherTestTypesDescriptions{
    my ($self, $newval) = @_;
    $self->{OtherTestTypesDescriptions} = $newval if @_ > 1;
    return $self->{OtherTestTypesDescriptions};
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
