package CIM_Chip;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_PhysicalComponent;
use strict;


@CIM_Chip::ISA = qw(_Initializable CIM_PhysicalComponent);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_PhysicalComponent::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{FormFactor} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            FormFactor accessor method.
#===============================================================================

sub FormFactor{
    my ($self, $newval) = @_;
    $self->{FormFactor} = $newval if @_ > 1;
    return $self->{FormFactor};
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
