package ELXHBA_FCPortConformsToProfile;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_ElementConformsToProfile;
use strict;


@ELXHBA_FCPortConformsToProfile::ISA = qw(_Initializable CIM_ElementConformsToProfile);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_ElementConformsToProfile::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{ConformantStandard} = undef;
    $self->{ManagedElement} = undef;
    $self->{Caption} = undef;
    $self->{epr_name} = undef;  
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
#            Caption accessor method.
#===============================================================================

sub Caption{
    my ($self, $newval) = @_;
    $self->{Caption} = $newval if @_ > 1;
    return $self->{Caption};
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
