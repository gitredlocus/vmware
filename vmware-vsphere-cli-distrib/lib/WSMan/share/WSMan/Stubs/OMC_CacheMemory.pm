package OMC_CacheMemory;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_Memory;
use strict;


@OMC_CacheMemory::ISA = qw(_Initializable CIM_Memory);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_Memory::_init();
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
    $self->{Access} = undef;
    $self->{BlockSize} = undef;
    $self->{Caption} = undef;
    $self->{CreationClassName} = undef;
    $self->{DataOrganization} = undef;
    $self->{DeviceID} = undef;
    $self->{ElementName} = undef;
    $self->{EnabledDefault} = undef;
    $self->{EnabledState} = undef;
    $self->{ErrorMethodology} = undef;
    $self->{Name} = undef;
    $self->{NumberOfBlocks} = undef;
    $self->{Primordial} = undef;
    $self->{Purpose} = undef;
    $self->{RequestedState} = undef;
    $self->{SequentialAccess} = undef;
    $self->{SystemCreationClassName} = undef;
    $self->{SystemName} = undef;
    $self->{TransitioningToState} = undef;
    $self->{Volatile} = undef;
    $self->{HealthState} = undef;
    $self->{OperationalStatus} = undef;
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
#            Access accessor method.
#===============================================================================

sub Access{
    my ($self, $newval) = @_;
    $self->{Access} = $newval if @_ > 1;
    return $self->{Access};
}
#===============================================================================


#===============================================================================
#            BlockSize accessor method.
#===============================================================================

sub BlockSize{
    my ($self, $newval) = @_;
    $self->{BlockSize} = $newval if @_ > 1;
    return $self->{BlockSize};
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
#            CreationClassName accessor method.
#===============================================================================

sub CreationClassName{
    my ($self, $newval) = @_;
    $self->{CreationClassName} = $newval if @_ > 1;
    return $self->{CreationClassName};
}
#===============================================================================


#===============================================================================
#            DataOrganization accessor method.
#===============================================================================

sub DataOrganization{
    my ($self, $newval) = @_;
    $self->{DataOrganization} = $newval if @_ > 1;
    return $self->{DataOrganization};
}
#===============================================================================


#===============================================================================
#            DeviceID accessor method.
#===============================================================================

sub DeviceID{
    my ($self, $newval) = @_;
    $self->{DeviceID} = $newval if @_ > 1;
    return $self->{DeviceID};
}
#===============================================================================


#===============================================================================
#            ElementName accessor method.
#===============================================================================

sub ElementName{
    my ($self, $newval) = @_;
    $self->{ElementName} = $newval if @_ > 1;
    return $self->{ElementName};
}
#===============================================================================


#===============================================================================
#            EnabledDefault accessor method.
#===============================================================================

sub EnabledDefault{
    my ($self, $newval) = @_;
    $self->{EnabledDefault} = $newval if @_ > 1;
    return $self->{EnabledDefault};
}
#===============================================================================


#===============================================================================
#            EnabledState accessor method.
#===============================================================================

sub EnabledState{
    my ($self, $newval) = @_;
    $self->{EnabledState} = $newval if @_ > 1;
    return $self->{EnabledState};
}
#===============================================================================


#===============================================================================
#            ErrorMethodology accessor method.
#===============================================================================

sub ErrorMethodology{
    my ($self, $newval) = @_;
    $self->{ErrorMethodology} = $newval if @_ > 1;
    return $self->{ErrorMethodology};
}
#===============================================================================


#===============================================================================
#            Name accessor method.
#===============================================================================

sub Name{
    my ($self, $newval) = @_;
    $self->{Name} = $newval if @_ > 1;
    return $self->{Name};
}
#===============================================================================


#===============================================================================
#            NumberOfBlocks accessor method.
#===============================================================================

sub NumberOfBlocks{
    my ($self, $newval) = @_;
    $self->{NumberOfBlocks} = $newval if @_ > 1;
    return $self->{NumberOfBlocks};
}
#===============================================================================


#===============================================================================
#            Primordial accessor method.
#===============================================================================

sub Primordial{
    my ($self, $newval) = @_;
    $self->{Primordial} = $newval if @_ > 1;
    return $self->{Primordial};
}
#===============================================================================


#===============================================================================
#            Purpose accessor method.
#===============================================================================

sub Purpose{
    my ($self, $newval) = @_;
    $self->{Purpose} = $newval if @_ > 1;
    return $self->{Purpose};
}
#===============================================================================


#===============================================================================
#            RequestedState accessor method.
#===============================================================================

sub RequestedState{
    my ($self, $newval) = @_;
    $self->{RequestedState} = $newval if @_ > 1;
    return $self->{RequestedState};
}
#===============================================================================


#===============================================================================
#            SequentialAccess accessor method.
#===============================================================================

sub SequentialAccess{
    my ($self, $newval) = @_;
    $self->{SequentialAccess} = $newval if @_ > 1;
    return $self->{SequentialAccess};
}
#===============================================================================


#===============================================================================
#            SystemCreationClassName accessor method.
#===============================================================================

sub SystemCreationClassName{
    my ($self, $newval) = @_;
    $self->{SystemCreationClassName} = $newval if @_ > 1;
    return $self->{SystemCreationClassName};
}
#===============================================================================


#===============================================================================
#            SystemName accessor method.
#===============================================================================

sub SystemName{
    my ($self, $newval) = @_;
    $self->{SystemName} = $newval if @_ > 1;
    return $self->{SystemName};
}
#===============================================================================


#===============================================================================
#            TransitioningToState accessor method.
#===============================================================================

sub TransitioningToState{
    my ($self, $newval) = @_;
    $self->{TransitioningToState} = $newval if @_ > 1;
    return $self->{TransitioningToState};
}
#===============================================================================


#===============================================================================
#            Volatile accessor method.
#===============================================================================

sub Volatile{
    my ($self, $newval) = @_;
    $self->{Volatile} = $newval if @_ > 1;
    return $self->{Volatile};
}
#===============================================================================


#===============================================================================
#            HealthState accessor method.
#===============================================================================

sub HealthState{
    my ($self, $newval) = @_;
    $self->{HealthState} = $newval if @_ > 1;
    return $self->{HealthState};
}
#===============================================================================


#===============================================================================
#            OperationalStatus accessor method.
#===============================================================================

sub OperationalStatus{
    my ($self, $newval) = @_;
    $self->{OperationalStatus} = $newval if @_ > 1;
    return $self->{OperationalStatus};
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
