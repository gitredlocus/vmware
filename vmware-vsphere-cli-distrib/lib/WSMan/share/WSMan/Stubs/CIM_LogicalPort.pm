package CIM_LogicalPort;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_LogicalDevice;
use strict;


@CIM_LogicalPort::ISA = qw(_Initializable CIM_LogicalDevice);


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
    $self->{Speed} = undef;
    $self->{MaxSpeed} = undef;
    $self->{RequestedSpeed} = undef;
    $self->{UsageRestriction} = undef;
    $self->{PortType} = undef;
    $self->{OtherPortType} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            Speed accessor method.
#===============================================================================

sub Speed{
    my ($self, $newval) = @_;
    $self->{Speed} = $newval if @_ > 1;
    return $self->{Speed};
}
#===============================================================================


#===============================================================================
#            MaxSpeed accessor method.
#===============================================================================

sub MaxSpeed{
    my ($self, $newval) = @_;
    $self->{MaxSpeed} = $newval if @_ > 1;
    return $self->{MaxSpeed};
}
#===============================================================================


#===============================================================================
#            RequestedSpeed accessor method.
#===============================================================================

sub RequestedSpeed{
    my ($self, $newval) = @_;
    $self->{RequestedSpeed} = $newval if @_ > 1;
    return $self->{RequestedSpeed};
}
#===============================================================================


#===============================================================================
#            UsageRestriction accessor method.
#===============================================================================

sub UsageRestriction{
    my ($self, $newval) = @_;
    $self->{UsageRestriction} = $newval if @_ > 1;
    return $self->{UsageRestriction};
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
#            OtherPortType accessor method.
#===============================================================================

sub OtherPortType{
    my ($self, $newval) = @_;
    $self->{OtherPortType} = $newval if @_ > 1;
    return $self->{OtherPortType};
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
