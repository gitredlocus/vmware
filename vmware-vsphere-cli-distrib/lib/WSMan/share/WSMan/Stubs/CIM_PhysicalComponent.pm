package CIM_PhysicalComponent;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_PhysicalElement;
use strict;


@CIM_PhysicalComponent::ISA = qw(_Initializable CIM_PhysicalElement);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_PhysicalElement::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{RemovalConditions} = undef;
    $self->{Removable} = undef;
    $self->{Replaceable} = undef;
    $self->{HotSwappable} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            RemovalConditions accessor method.
#===============================================================================

sub RemovalConditions{
    my ($self, $newval) = @_;
    $self->{RemovalConditions} = $newval if @_ > 1;
    return $self->{RemovalConditions};
}
#===============================================================================


#===============================================================================
#            Removable accessor method.
#===============================================================================

sub Removable{
    my ($self, $newval) = @_;
    $self->{Removable} = $newval if @_ > 1;
    return $self->{Removable};
}
#===============================================================================


#===============================================================================
#            Replaceable accessor method.
#===============================================================================

sub Replaceable{
    my ($self, $newval) = @_;
    $self->{Replaceable} = $newval if @_ > 1;
    return $self->{Replaceable};
}
#===============================================================================


#===============================================================================
#            HotSwappable accessor method.
#===============================================================================

sub HotSwappable{
    my ($self, $newval) = @_;
    $self->{HotSwappable} = $newval if @_ > 1;
    return $self->{HotSwappable};
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
