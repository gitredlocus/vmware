package VMware_AffectedSoftwareIdentity;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_AffectedJobElement;
use strict;


@VMware_AffectedSoftwareIdentity::ISA = qw(_Initializable CIM_AffectedJobElement);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_AffectedJobElement::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{AffectedElement} = undef;
    $self->{AffectingElement} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            AffectedElement accessor method.
#===============================================================================

sub AffectedElement{
    my ($self, $newval) = @_;
    $self->{AffectedElement} = $newval if @_ > 1;
    return $self->{AffectedElement};
}
#===============================================================================


#===============================================================================
#            AffectingElement accessor method.
#===============================================================================

sub AffectingElement{
    my ($self, $newval) = @_;
    $self->{AffectingElement} = $newval if @_ > 1;
    return $self->{AffectingElement};
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
