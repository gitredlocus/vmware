package CIM_HelpService;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_Service;
use strict;


@CIM_HelpService::ISA = qw(_Initializable CIM_Service);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_Service::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{DeliveryOptions} = undef;
    $self->{OtherDeliveryOptionDescription} = undef;
    $self->{DocumentsAvailable} = undef;
    $self->{DocumentDescriptions} = undef;
    $self->{DocumentFormat} = undef;
    $self->{OtherDocumentFormatDescription} = undef;
    $self->{epr_name} = undef;  
    $self->{invokableMethods}->{GetHelp} = { input => ['RequestedDocument', 'Format', 'RequestedDelivery'], output => ['Format', 'DocumentInfo'] };
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            DeliveryOptions accessor method.
#===============================================================================

sub DeliveryOptions{
    my ($self, $newval) = @_;
    $self->{DeliveryOptions} = $newval if @_ > 1;
    return $self->{DeliveryOptions};
}
#===============================================================================


#===============================================================================
#            OtherDeliveryOptionDescription accessor method.
#===============================================================================

sub OtherDeliveryOptionDescription{
    my ($self, $newval) = @_;
    $self->{OtherDeliveryOptionDescription} = $newval if @_ > 1;
    return $self->{OtherDeliveryOptionDescription};
}
#===============================================================================


#===============================================================================
#            DocumentsAvailable accessor method.
#===============================================================================

sub DocumentsAvailable{
    my ($self, $newval) = @_;
    $self->{DocumentsAvailable} = $newval if @_ > 1;
    return $self->{DocumentsAvailable};
}
#===============================================================================


#===============================================================================
#            DocumentDescriptions accessor method.
#===============================================================================

sub DocumentDescriptions{
    my ($self, $newval) = @_;
    $self->{DocumentDescriptions} = $newval if @_ > 1;
    return $self->{DocumentDescriptions};
}
#===============================================================================


#===============================================================================
#            DocumentFormat accessor method.
#===============================================================================

sub DocumentFormat{
    my ($self, $newval) = @_;
    $self->{DocumentFormat} = $newval if @_ > 1;
    return $self->{DocumentFormat};
}
#===============================================================================


#===============================================================================
#            OtherDocumentFormatDescription accessor method.
#===============================================================================

sub OtherDocumentFormatDescription{
    my ($self, $newval) = @_;
    $self->{OtherDocumentFormatDescription} = $newval if @_ > 1;
    return $self->{OtherDocumentFormatDescription};
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
