package VMware_HypervisorStorageExtent;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_StorageExtent;
use strict;


@VMware_HypervisorStorageExtent::ISA = qw(_Initializable CIM_StorageExtent);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_StorageExtent::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{Name} = undef;
    $self->{NameFormat} = undef;
    $self->{ElementName} = undef;
    $self->{Description} = undef;
    $self->{IdentifyingDescriptions} = undef;
    $self->{OtherIdentifyingInfo} = undef;
    $self->{BlockSize} = undef;
    $self->{NumberOfBlocks} = undef;
    $self->{EnabledState} = undef;
    $self->{OperationalStatus} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
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
#            ElementName accessor method.
#===============================================================================

sub ElementName{
    my ($self, $newval) = @_;
    $self->{ElementName} = $newval if @_ > 1;
    return $self->{ElementName};
}
#===============================================================================


#===============================================================================
#            Description accessor method.
#===============================================================================

sub Description{
    my ($self, $newval) = @_;
    $self->{Description} = $newval if @_ > 1;
    return $self->{Description};
}
#===============================================================================


#===============================================================================
#            IdentifyingDescriptions accessor method.
#===============================================================================

sub IdentifyingDescriptions{
    my ($self, $newval) = @_;
    $self->{IdentifyingDescriptions} = $newval if @_ > 1;
    return $self->{IdentifyingDescriptions};
}
#===============================================================================


#===============================================================================
#            OtherIdentifyingInfo accessor method.
#===============================================================================

sub OtherIdentifyingInfo{
    my ($self, $newval) = @_;
    $self->{OtherIdentifyingInfo} = $newval if @_ > 1;
    return $self->{OtherIdentifyingInfo};
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
#            EnabledState accessor method.
#===============================================================================

sub EnabledState{
    my ($self, $newval) = @_;
    $self->{EnabledState} = $newval if @_ > 1;
    return $self->{EnabledState};
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
