package CIM_InstIndication;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_Indication;
use strict;


@CIM_InstIndication::ISA = qw(_Initializable CIM_Indication);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_Indication::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{SourceInstance} = undef;
    $self->{SourceInstanceModelPath} = undef;
    $self->{SourceInstanceHost} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            SourceInstance accessor method.
#===============================================================================

sub SourceInstance{
    my ($self, $newval) = @_;
    $self->{SourceInstance} = $newval if @_ > 1;
    return $self->{SourceInstance};
}
#===============================================================================


#===============================================================================
#            SourceInstanceModelPath accessor method.
#===============================================================================

sub SourceInstanceModelPath{
    my ($self, $newval) = @_;
    $self->{SourceInstanceModelPath} = $newval if @_ > 1;
    return $self->{SourceInstanceModelPath};
}
#===============================================================================


#===============================================================================
#            SourceInstanceHost accessor method.
#===============================================================================

sub SourceInstanceHost{
    my ($self, $newval) = @_;
    $self->{SourceInstanceHost} = $newval if @_ > 1;
    return $self->{SourceInstanceHost};
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
