package OMC_ProcessorSlot;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_Slot;
use strict;


@OMC_ProcessorSlot::ISA = qw(_Initializable CIM_Slot);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_Slot::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{CreationClassName} = undef;
    $self->{ElementName} = undef;
    $self->{Number} = undef;
    $self->{ConnectorLayout} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            CreationClassName accessor method.
#===============================================================================

sub CreationClassName{
    my ($self, $newval) = @_;
    $self->{CreationClassName} = $newval if @_ > 1;
    return $self->{CreationClassName};
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
#            Number accessor method.
#===============================================================================

sub Number{
    my ($self, $newval) = @_;
    $self->{Number} = $newval if @_ > 1;
    return $self->{Number};
}
#===============================================================================


#===============================================================================
#            ConnectorLayout accessor method.
#===============================================================================

sub ConnectorLayout{
    my ($self, $newval) = @_;
    $self->{ConnectorLayout} = $newval if @_ > 1;
    return $self->{ConnectorLayout};
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
