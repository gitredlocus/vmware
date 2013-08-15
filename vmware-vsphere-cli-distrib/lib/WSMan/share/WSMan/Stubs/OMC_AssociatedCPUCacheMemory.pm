package OMC_AssociatedCPUCacheMemory;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_AssociatedCacheMemory;
use strict;


@OMC_AssociatedCPUCacheMemory::ISA = qw(_Initializable CIM_AssociatedCacheMemory);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_AssociatedCacheMemory::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{Antecedent} = undef;
    $self->{Dependent} = undef;
    $self->{Associativity} = undef;
    $self->{CacheType} = undef;
    $self->{Level} = undef;
    $self->{ReadPolicy} = undef;
    $self->{WritePolicy} = undef;
    $self->{epr_name} = undef;  
    push @{$self->{id_keys}}, 'Antecedent';
    push @{$self->{id_keys}}, 'Dependent';
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            Antecedent accessor method.
#===============================================================================

sub Antecedent{
    my ($self, $newval) = @_;
    $self->{Antecedent} = $newval if @_ > 1;
    return $self->{Antecedent};
}
#===============================================================================


#===============================================================================
#            Dependent accessor method.
#===============================================================================

sub Dependent{
    my ($self, $newval) = @_;
    $self->{Dependent} = $newval if @_ > 1;
    return $self->{Dependent};
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
#            CacheType accessor method.
#===============================================================================

sub CacheType{
    my ($self, $newval) = @_;
    $self->{CacheType} = $newval if @_ > 1;
    return $self->{CacheType};
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
#            ReadPolicy accessor method.
#===============================================================================

sub ReadPolicy{
    my ($self, $newval) = @_;
    $self->{ReadPolicy} = $newval if @_ > 1;
    return $self->{ReadPolicy};
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
#           epr_name accessor method.
#===============================================================================

sub epr_name{
    my ($self, $newval) = @_;
    $self->{epr_name} = $newval if @_ > 1;
    return $self->{epr_name};
}
#===============================================================================


1;
