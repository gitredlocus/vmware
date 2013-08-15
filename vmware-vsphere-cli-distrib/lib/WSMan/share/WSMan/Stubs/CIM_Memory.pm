package CIM_Memory;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_StorageExtent;
use strict;


@CIM_Memory::ISA = qw(_Initializable CIM_StorageExtent);


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
    $self->{Volatile} = undef;
    $self->{ErrorMethodology} = undef;
    $self->{StartingAddress} = undef;
    $self->{EndingAddress} = undef;
    $self->{ErrorInfo} = undef;
    $self->{OtherErrorDescription} = undef;
    $self->{CorrectableError} = undef;
    $self->{ErrorTime} = undef;
    $self->{ErrorAccess} = undef;
    $self->{ErrorTransferSize} = undef;
    $self->{ErrorData} = undef;
    $self->{ErrorDataOrder} = undef;
    $self->{ErrorAddress} = undef;
    $self->{SystemLevelAddress} = undef;
    $self->{ErrorResolution} = undef;
    $self->{AdditionalErrorData} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
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
#            ErrorMethodology accessor method.
#===============================================================================

sub ErrorMethodology{
    my ($self, $newval) = @_;
    $self->{ErrorMethodology} = $newval if @_ > 1;
    return $self->{ErrorMethodology};
}
#===============================================================================


#===============================================================================
#            StartingAddress accessor method.
#===============================================================================

sub StartingAddress{
    my ($self, $newval) = @_;
    $self->{StartingAddress} = $newval if @_ > 1;
    return $self->{StartingAddress};
}
#===============================================================================


#===============================================================================
#            EndingAddress accessor method.
#===============================================================================

sub EndingAddress{
    my ($self, $newval) = @_;
    $self->{EndingAddress} = $newval if @_ > 1;
    return $self->{EndingAddress};
}
#===============================================================================


#===============================================================================
#            ErrorInfo accessor method.
#===============================================================================

sub ErrorInfo{
    my ($self, $newval) = @_;
    $self->{ErrorInfo} = $newval if @_ > 1;
    return $self->{ErrorInfo};
}
#===============================================================================


#===============================================================================
#            OtherErrorDescription accessor method.
#===============================================================================

sub OtherErrorDescription{
    my ($self, $newval) = @_;
    $self->{OtherErrorDescription} = $newval if @_ > 1;
    return $self->{OtherErrorDescription};
}
#===============================================================================


#===============================================================================
#            CorrectableError accessor method.
#===============================================================================

sub CorrectableError{
    my ($self, $newval) = @_;
    $self->{CorrectableError} = $newval if @_ > 1;
    return $self->{CorrectableError};
}
#===============================================================================


#===============================================================================
#            ErrorTime accessor method.
#===============================================================================

sub ErrorTime{
    my ($self, $newval) = @_;
    $self->{ErrorTime} = $newval if @_ > 1;
    return $self->{ErrorTime};
}
#===============================================================================


#===============================================================================
#            ErrorAccess accessor method.
#===============================================================================

sub ErrorAccess{
    my ($self, $newval) = @_;
    $self->{ErrorAccess} = $newval if @_ > 1;
    return $self->{ErrorAccess};
}
#===============================================================================


#===============================================================================
#            ErrorTransferSize accessor method.
#===============================================================================

sub ErrorTransferSize{
    my ($self, $newval) = @_;
    $self->{ErrorTransferSize} = $newval if @_ > 1;
    return $self->{ErrorTransferSize};
}
#===============================================================================


#===============================================================================
#            ErrorData accessor method.
#===============================================================================

sub ErrorData{
    my ($self, $newval) = @_;
    $self->{ErrorData} = $newval if @_ > 1;
    return $self->{ErrorData};
}
#===============================================================================


#===============================================================================
#            ErrorDataOrder accessor method.
#===============================================================================

sub ErrorDataOrder{
    my ($self, $newval) = @_;
    $self->{ErrorDataOrder} = $newval if @_ > 1;
    return $self->{ErrorDataOrder};
}
#===============================================================================


#===============================================================================
#            ErrorAddress accessor method.
#===============================================================================

sub ErrorAddress{
    my ($self, $newval) = @_;
    $self->{ErrorAddress} = $newval if @_ > 1;
    return $self->{ErrorAddress};
}
#===============================================================================


#===============================================================================
#            SystemLevelAddress accessor method.
#===============================================================================

sub SystemLevelAddress{
    my ($self, $newval) = @_;
    $self->{SystemLevelAddress} = $newval if @_ > 1;
    return $self->{SystemLevelAddress};
}
#===============================================================================


#===============================================================================
#            ErrorResolution accessor method.
#===============================================================================

sub ErrorResolution{
    my ($self, $newval) = @_;
    $self->{ErrorResolution} = $newval if @_ > 1;
    return $self->{ErrorResolution};
}
#===============================================================================


#===============================================================================
#            AdditionalErrorData accessor method.
#===============================================================================

sub AdditionalErrorData{
    my ($self, $newval) = @_;
    $self->{AdditionalErrorData} = $newval if @_ > 1;
    return $self->{AdditionalErrorData};
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
