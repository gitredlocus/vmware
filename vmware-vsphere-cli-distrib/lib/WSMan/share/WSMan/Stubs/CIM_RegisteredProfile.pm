package CIM_RegisteredProfile;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_RegisteredSpecification;
use strict;


@CIM_RegisteredProfile::ISA = qw(_Initializable CIM_RegisteredSpecification);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_RegisteredSpecification::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{SpecificationType} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            SpecificationType accessor method.
#===============================================================================

sub SpecificationType{
    my ($self, $newval) = @_;
    $self->{SpecificationType} = $newval if @_ > 1;
    return $self->{SpecificationType};
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
