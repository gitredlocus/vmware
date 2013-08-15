package LSIESG_AlertIndication;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_AlertIndication;
use strict;


@LSIESG_AlertIndication::ISA = qw(_Initializable CIM_AlertIndication);


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
    $self->{NonPersistent} = undef;
    $self->{CtrlId} = undef;
    $self->{Locale} = undef;
    $self->{ArgType} = undef;
    $self->{ArgUnion} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            NonPersistent accessor method.
#===============================================================================

sub NonPersistent{
    my ($self, $newval) = @_;
    $self->{NonPersistent} = $newval if @_ > 1;
    return $self->{NonPersistent};
}
#===============================================================================


#===============================================================================
#            CtrlId accessor method.
#===============================================================================

sub CtrlId{
    my ($self, $newval) = @_;
    $self->{CtrlId} = $newval if @_ > 1;
    return $self->{CtrlId};
}
#===============================================================================


#===============================================================================
#            Locale accessor method.
#===============================================================================

sub Locale{
    my ($self, $newval) = @_;
    $self->{Locale} = $newval if @_ > 1;
    return $self->{Locale};
}
#===============================================================================


#===============================================================================
#            ArgType accessor method.
#===============================================================================

sub ArgType{
    my ($self, $newval) = @_;
    $self->{ArgType} = $newval if @_ > 1;
    return $self->{ArgType};
}
#===============================================================================


#===============================================================================
#            ArgUnion accessor method.
#===============================================================================

sub ArgUnion{
    my ($self, $newval) = @_;
    $self->{ArgUnion} = $newval if @_ > 1;
    return $self->{ArgUnion};
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
