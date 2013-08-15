package CIM_FCPort;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_NetworkPort;
use strict;


@CIM_FCPort::ISA = qw(_Initializable CIM_NetworkPort);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_NetworkPort::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{PortType} = undef;
    $self->{SupportedCOS} = undef;
    $self->{ActiveCOS} = undef;
    $self->{SupportedFC4Types} = undef;
    $self->{ActiveFC4Types} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            PortType accessor method.
#===============================================================================

sub PortType{
    my ($self, $newval) = @_;
    $self->{PortType} = $newval if @_ > 1;
    return $self->{PortType};
}
#===============================================================================


#===============================================================================
#            SupportedCOS accessor method.
#===============================================================================

sub SupportedCOS{
    my ($self, $newval) = @_;
    $self->{SupportedCOS} = $newval if @_ > 1;
    return $self->{SupportedCOS};
}
#===============================================================================


#===============================================================================
#            ActiveCOS accessor method.
#===============================================================================

sub ActiveCOS{
    my ($self, $newval) = @_;
    $self->{ActiveCOS} = $newval if @_ > 1;
    return $self->{ActiveCOS};
}
#===============================================================================


#===============================================================================
#            SupportedFC4Types accessor method.
#===============================================================================

sub SupportedFC4Types{
    my ($self, $newval) = @_;
    $self->{SupportedFC4Types} = $newval if @_ > 1;
    return $self->{SupportedFC4Types};
}
#===============================================================================


#===============================================================================
#            ActiveFC4Types accessor method.
#===============================================================================

sub ActiveFC4Types{
    my ($self, $newval) = @_;
    $self->{ActiveFC4Types} = $newval if @_ > 1;
    return $self->{ActiveFC4Types};
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
