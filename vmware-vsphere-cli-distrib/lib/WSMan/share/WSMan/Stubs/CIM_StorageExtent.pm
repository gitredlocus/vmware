package CIM_StorageExtent;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_LogicalDevice;
use strict;


@CIM_StorageExtent::ISA = qw(_Initializable CIM_LogicalDevice);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_LogicalDevice::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{DataOrganization} = undef;
    $self->{Purpose} = undef;
    $self->{Access} = undef;
    $self->{ErrorMethodology} = undef;
    $self->{BlockSize} = undef;
    $self->{NumberOfBlocks} = undef;
    $self->{ConsumableBlocks} = undef;
    $self->{IsBasedOnUnderlyingRedundancy} = undef;
    $self->{SequentialAccess} = undef;
    $self->{ExtentStatus} = undef;
    $self->{NoSinglePointOfFailure} = undef;
    $self->{DataRedundancy} = undef;
    $self->{PackageRedundancy} = undef;
    $self->{DeltaReservation} = undef;
    $self->{Primordial} = undef;
    $self->{Name} = undef;
    $self->{NameFormat} = undef;
    $self->{NameNamespace} = undef;
    $self->{OtherNameNamespace} = undef;
    $self->{OtherNameFormat} = undef;
    $self->{Usage} = undef;
    $self->{OtherUsageDescription} = undef;
    $self->{ClientSettableUsage} = undef;
    $self->{ExtentInterleaveDepth} = undef;
    $self->{ExtentStripeLength} = undef;
    $self->{IsComposite} = undef;
    $self->{IsConcatenated} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
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
#            Purpose accessor method.
#===============================================================================

sub Purpose{
    my ($self, $newval) = @_;
    $self->{Purpose} = $newval if @_ > 1;
    return $self->{Purpose};
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
#            ErrorMethodology accessor method.
#===============================================================================

sub ErrorMethodology{
    my ($self, $newval) = @_;
    $self->{ErrorMethodology} = $newval if @_ > 1;
    return $self->{ErrorMethodology};
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
#            NumberOfBlocks accessor method.
#===============================================================================

sub NumberOfBlocks{
    my ($self, $newval) = @_;
    $self->{NumberOfBlocks} = $newval if @_ > 1;
    return $self->{NumberOfBlocks};
}
#===============================================================================


#===============================================================================
#            ConsumableBlocks accessor method.
#===============================================================================

sub ConsumableBlocks{
    my ($self, $newval) = @_;
    $self->{ConsumableBlocks} = $newval if @_ > 1;
    return $self->{ConsumableBlocks};
}
#===============================================================================


#===============================================================================
#            IsBasedOnUnderlyingRedundancy accessor method.
#===============================================================================

sub IsBasedOnUnderlyingRedundancy{
    my ($self, $newval) = @_;
    $self->{IsBasedOnUnderlyingRedundancy} = $newval if @_ > 1;
    return $self->{IsBasedOnUnderlyingRedundancy};
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
#            ExtentStatus accessor method.
#===============================================================================

sub ExtentStatus{
    my ($self, $newval) = @_;
    $self->{ExtentStatus} = $newval if @_ > 1;
    return $self->{ExtentStatus};
}
#===============================================================================


#===============================================================================
#            NoSinglePointOfFailure accessor method.
#===============================================================================

sub NoSinglePointOfFailure{
    my ($self, $newval) = @_;
    $self->{NoSinglePointOfFailure} = $newval if @_ > 1;
    return $self->{NoSinglePointOfFailure};
}
#===============================================================================


#===============================================================================
#            DataRedundancy accessor method.
#===============================================================================

sub DataRedundancy{
    my ($self, $newval) = @_;
    $self->{DataRedundancy} = $newval if @_ > 1;
    return $self->{DataRedundancy};
}
#===============================================================================


#===============================================================================
#            PackageRedundancy accessor method.
#===============================================================================

sub PackageRedundancy{
    my ($self, $newval) = @_;
    $self->{PackageRedundancy} = $newval if @_ > 1;
    return $self->{PackageRedundancy};
}
#===============================================================================


#===============================================================================
#            DeltaReservation accessor method.
#===============================================================================

sub DeltaReservation{
    my ($self, $newval) = @_;
    $self->{DeltaReservation} = $newval if @_ > 1;
    return $self->{DeltaReservation};
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
#            Name accessor method.
#===============================================================================

sub Name{
    my ($self, $newval) = @_;
    $self->{Name} = $newval if @_ > 1;
    return $self->{Name};
}
#===============================================================================


#===============================================================================
#            NameFormat accessor method.
#===============================================================================

sub NameFormat{
    my ($self, $newval) = @_;
    $self->{NameFormat} = $newval if @_ > 1;
    return $self->{NameFormat};
}
#===============================================================================


#===============================================================================
#            NameNamespace accessor method.
#===============================================================================

sub NameNamespace{
    my ($self, $newval) = @_;
    $self->{NameNamespace} = $newval if @_ > 1;
    return $self->{NameNamespace};
}
#===============================================================================


#===============================================================================
#            OtherNameNamespace accessor method.
#===============================================================================

sub OtherNameNamespace{
    my ($self, $newval) = @_;
    $self->{OtherNameNamespace} = $newval if @_ > 1;
    return $self->{OtherNameNamespace};
}
#===============================================================================


#===============================================================================
#            OtherNameFormat accessor method.
#===============================================================================

sub OtherNameFormat{
    my ($self, $newval) = @_;
    $self->{OtherNameFormat} = $newval if @_ > 1;
    return $self->{OtherNameFormat};
}
#===============================================================================


#===============================================================================
#            Usage accessor method.
#===============================================================================

sub Usage{
    my ($self, $newval) = @_;
    $self->{Usage} = $newval if @_ > 1;
    return $self->{Usage};
}
#===============================================================================


#===============================================================================
#            OtherUsageDescription accessor method.
#===============================================================================

sub OtherUsageDescription{
    my ($self, $newval) = @_;
    $self->{OtherUsageDescription} = $newval if @_ > 1;
    return $self->{OtherUsageDescription};
}
#===============================================================================


#===============================================================================
#            ClientSettableUsage accessor method.
#===============================================================================

sub ClientSettableUsage{
    my ($self, $newval) = @_;
    $self->{ClientSettableUsage} = $newval if @_ > 1;
    return $self->{ClientSettableUsage};
}
#===============================================================================


#===============================================================================
#            ExtentInterleaveDepth accessor method.
#===============================================================================

sub ExtentInterleaveDepth{
    my ($self, $newval) = @_;
    $self->{ExtentInterleaveDepth} = $newval if @_ > 1;
    return $self->{ExtentInterleaveDepth};
}
#===============================================================================


#===============================================================================
#            ExtentStripeLength accessor method.
#===============================================================================

sub ExtentStripeLength{
    my ($self, $newval) = @_;
    $self->{ExtentStripeLength} = $newval if @_ > 1;
    return $self->{ExtentStripeLength};
}
#===============================================================================


#===============================================================================
#            IsComposite accessor method.
#===============================================================================

sub IsComposite{
    my ($self, $newval) = @_;
    $self->{IsComposite} = $newval if @_ > 1;
    return $self->{IsComposite};
}
#===============================================================================


#===============================================================================
#            IsConcatenated accessor method.
#===============================================================================

sub IsConcatenated{
    my ($self, $newval) = @_;
    $self->{IsConcatenated} = $newval if @_ > 1;
    return $self->{IsConcatenated};
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
