package CIM_ActiveConnection;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_SAPSAPDependency;
use strict;


@CIM_ActiveConnection::ISA = qw(_Initializable CIM_SAPSAPDependency);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_SAPSAPDependency::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{Antecedent} = undef;
    $self->{Dependent} = undef;
    $self->{TrafficType} = undef;
    $self->{OtherTrafficDescription} = undef;
    $self->{IsUnidirectional} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            Antecedent accessor method.
#===============================================================================

sub Antecedent{
    my ($self, $newval) = @_;
    $self->{Antecedent} = $newval if @_ > 1;
    return $self->{Antecedent};
}
#===============================================================================


#===============================================================================
#            Dependent accessor method.
#===============================================================================

sub Dependent{
    my ($self, $newval) = @_;
    $self->{Dependent} = $newval if @_ > 1;
    return $self->{Dependent};
}
#===============================================================================


#===============================================================================
#            TrafficType accessor method.
#===============================================================================

sub TrafficType{
    my ($self, $newval) = @_;
    $self->{TrafficType} = $newval if @_ > 1;
    return $self->{TrafficType};
}
#===============================================================================


#===============================================================================
#            OtherTrafficDescription accessor method.
#===============================================================================

sub OtherTrafficDescription{
    my ($self, $newval) = @_;
    $self->{OtherTrafficDescription} = $newval if @_ > 1;
    return $self->{OtherTrafficDescription};
}
#===============================================================================


#===============================================================================
#            IsUnidirectional accessor method.
#===============================================================================

sub IsUnidirectional{
    my ($self, $newval) = @_;
    $self->{IsUnidirectional} = $newval if @_ > 1;
    return $self->{IsUnidirectional};
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
