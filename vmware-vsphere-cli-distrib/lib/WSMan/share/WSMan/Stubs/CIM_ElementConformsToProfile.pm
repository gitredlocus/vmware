package CIM_ElementConformsToProfile;
use WSMan::Stubs::Initializable;
use strict;


@CIM_ElementConformsToProfile::ISA = qw(_Initializable);


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
    $self->{ConformantStandard} = undef;
    $self->{ManagedElement} = undef;
    $self->{epr_name} = undef;  
    push @{$self->{id_keys}}, 'ConformantStandard';
    push @{$self->{id_keys}}, 'ManagedElement';
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            ConformantStandard accessor method.
#===============================================================================

sub ConformantStandard{
    my ($self, $newval) = @_;
    $self->{ConformantStandard} = $newval if @_ > 1;
    return $self->{ConformantStandard};
}
#===============================================================================


#===============================================================================
#            ManagedElement accessor method.
#===============================================================================

sub ManagedElement{
    my ($self, $newval) = @_;
    $self->{ManagedElement} = $newval if @_ > 1;
    return $self->{ManagedElement};
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
