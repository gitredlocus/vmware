package CIM_AffectedJobElement;
use WSMan::Stubs::Initializable;
use strict;


@CIM_AffectedJobElement::ISA = qw(_Initializable);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{AffectedElement} = undef;
    $self->{AffectingElement} = undef;
    $self->{ElementEffects} = undef;
    $self->{OtherElementEffectsDescriptions} = undef;
    $self->{epr_name} = undef;  
    push @{$self->{id_keys}}, 'AffectedElement';
    push @{$self->{id_keys}}, 'AffectingElement';
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
#            ElementEffects accessor method.
#===============================================================================

sub ElementEffects{
    my ($self, $newval) = @_;
    $self->{ElementEffects} = $newval if @_ > 1;
    return $self->{ElementEffects};
}
#===============================================================================


#===============================================================================
#            OtherElementEffectsDescriptions accessor method.
#===============================================================================

sub OtherElementEffectsDescriptions{
    my ($self, $newval) = @_;
    $self->{OtherElementEffectsDescriptions} = $newval if @_ > 1;
    return $self->{OtherElementEffectsDescriptions};
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
