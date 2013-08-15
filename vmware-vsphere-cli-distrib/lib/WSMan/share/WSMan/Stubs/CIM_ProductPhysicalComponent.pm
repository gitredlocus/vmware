package CIM_ProductPhysicalComponent;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_ProductElementComponent;
use strict;


@CIM_ProductPhysicalComponent::ISA = qw(_Initializable CIM_ProductElementComponent);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_ProductElementComponent::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{PartComponent} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            PartComponent accessor method.
#===============================================================================

sub PartComponent{
    my ($self, $newval) = @_;
    $self->{PartComponent} = $newval if @_ > 1;
    return $self->{PartComponent};
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
