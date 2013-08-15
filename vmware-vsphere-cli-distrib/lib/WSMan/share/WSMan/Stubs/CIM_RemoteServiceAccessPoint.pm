package CIM_RemoteServiceAccessPoint;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_ServiceAccessPoint;
use strict;


@CIM_RemoteServiceAccessPoint::ISA = qw(_Initializable CIM_ServiceAccessPoint);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_ServiceAccessPoint::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{AccessInfo} = undef;
    $self->{InfoFormat} = undef;
    $self->{OtherInfoFormatDescription} = undef;
    $self->{AccessContext} = undef;
    $self->{OtherAccessContext} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            AccessInfo accessor method.
#===============================================================================

sub AccessInfo{
    my ($self, $newval) = @_;
    $self->{AccessInfo} = $newval if @_ > 1;
    return $self->{AccessInfo};
}
#===============================================================================


#===============================================================================
#            InfoFormat accessor method.
#===============================================================================

sub InfoFormat{
    my ($self, $newval) = @_;
    $self->{InfoFormat} = $newval if @_ > 1;
    return $self->{InfoFormat};
}
#===============================================================================


#===============================================================================
#            OtherInfoFormatDescription accessor method.
#===============================================================================

sub OtherInfoFormatDescription{
    my ($self, $newval) = @_;
    $self->{OtherInfoFormatDescription} = $newval if @_ > 1;
    return $self->{OtherInfoFormatDescription};
}
#===============================================================================


#===============================================================================
#            AccessContext accessor method.
#===============================================================================

sub AccessContext{
    my ($self, $newval) = @_;
    $self->{AccessContext} = $newval if @_ > 1;
    return $self->{AccessContext};
}
#===============================================================================


#===============================================================================
#            OtherAccessContext accessor method.
#===============================================================================

sub OtherAccessContext{
    my ($self, $newval) = @_;
    $self->{OtherAccessContext} = $newval if @_ > 1;
    return $self->{OtherAccessContext};
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
