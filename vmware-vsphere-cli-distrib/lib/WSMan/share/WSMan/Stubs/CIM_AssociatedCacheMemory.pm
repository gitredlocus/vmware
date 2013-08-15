package CIM_AssociatedCacheMemory;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_AssociatedMemory;
use strict;


@CIM_AssociatedCacheMemory::ISA = qw(_Initializable CIM_AssociatedMemory);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_AssociatedMemory::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{Level} = undef;
    $self->{OtherLevelDescription} = undef;
    $self->{WritePolicy} = undef;
    $self->{OtherWritePolicyDescription} = undef;
    $self->{CacheType} = undef;
    $self->{OtherCacheTypeDescription} = undef;
    $self->{LineSize} = undef;
    $self->{ReplacementPolicy} = undef;
    $self->{OtherReplacementPolicyDescription} = undef;
    $self->{ReadPolicy} = undef;
    $self->{OtherReadPolicyDescription} = undef;
    $self->{FlushTimer} = undef;
    $self->{Associativity} = undef;
    $self->{OtherAssociativityDescription} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            Level accessor method.
#===============================================================================

sub Level{
    my ($self, $newval) = @_;
    $self->{Level} = $newval if @_ > 1;
    return $self->{Level};
}
#===============================================================================


#===============================================================================
#            OtherLevelDescription accessor method.
#===============================================================================

sub OtherLevelDescription{
    my ($self, $newval) = @_;
    $self->{OtherLevelDescription} = $newval if @_ > 1;
    return $self->{OtherLevelDescription};
}
#===============================================================================


#===============================================================================
#            WritePolicy accessor method.
#===============================================================================

sub WritePolicy{
    my ($self, $newval) = @_;
    $self->{WritePolicy} = $newval if @_ > 1;
    return $self->{WritePolicy};
}
#===============================================================================


#===============================================================================
#            OtherWritePolicyDescription accessor method.
#===============================================================================

sub OtherWritePolicyDescription{
    my ($self, $newval) = @_;
    $self->{OtherWritePolicyDescription} = $newval if @_ > 1;
    return $self->{OtherWritePolicyDescription};
}
#===============================================================================


#===============================================================================
#            CacheType accessor method.
#===============================================================================

sub CacheType{
    my ($self, $newval) = @_;
    $self->{CacheType} = $newval if @_ > 1;
    return $self->{CacheType};
}
#===============================================================================


#===============================================================================
#            OtherCacheTypeDescription accessor method.
#===============================================================================

sub OtherCacheTypeDescription{
    my ($self, $newval) = @_;
    $self->{OtherCacheTypeDescription} = $newval if @_ > 1;
    return $self->{OtherCacheTypeDescription};
}
#===============================================================================


#===============================================================================
#            LineSize accessor method.
#===============================================================================

sub LineSize{
    my ($self, $newval) = @_;
    $self->{LineSize} = $newval if @_ > 1;
    return $self->{LineSize};
}
#===============================================================================


#===============================================================================
#            ReplacementPolicy accessor method.
#===============================================================================

sub ReplacementPolicy{
    my ($self, $newval) = @_;
    $self->{ReplacementPolicy} = $newval if @_ > 1;
    return $self->{ReplacementPolicy};
}
#===============================================================================


#===============================================================================
#            OtherReplacementPolicyDescription accessor method.
#===============================================================================

sub OtherReplacementPolicyDescription{
    my ($self, $newval) = @_;
    $self->{OtherReplacementPolicyDescription} = $newval if @_ > 1;
    return $self->{OtherReplacementPolicyDescription};
}
#===============================================================================


#===============================================================================
#            ReadPolicy accessor method.
#===============================================================================

sub ReadPolicy{
    my ($self, $newval) = @_;
    $self->{ReadPolicy} = $newval if @_ > 1;
    return $self->{ReadPolicy};
}
#===============================================================================


#===============================================================================
#            OtherReadPolicyDescription accessor method.
#===============================================================================

sub OtherReadPolicyDescription{
    my ($self, $newval) = @_;
    $self->{OtherReadPolicyDescription} = $newval if @_ > 1;
    return $self->{OtherReadPolicyDescription};
}
#===============================================================================


#===============================================================================
#            FlushTimer accessor method.
#===============================================================================

sub FlushTimer{
    my ($self, $newval) = @_;
    $self->{FlushTimer} = $newval if @_ > 1;
    return $self->{FlushTimer};
}
#===============================================================================


#===============================================================================
#            Associativity accessor method.
#===============================================================================

sub Associativity{
    my ($self, $newval) = @_;
    $self->{Associativity} = $newval if @_ > 1;
    return $self->{Associativity};
}
#===============================================================================


#===============================================================================
#            OtherAssociativityDescription accessor method.
#===============================================================================

sub OtherAssociativityDescription{
    my ($self, $newval) = @_;
    $self->{OtherAssociativityDescription} = $newval if @_ > 1;
    return $self->{OtherAssociativityDescription};
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
