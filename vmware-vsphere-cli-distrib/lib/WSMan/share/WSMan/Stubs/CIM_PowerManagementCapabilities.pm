package CIM_PowerManagementCapabilities;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_Capabilities;
use strict;


@CIM_PowerManagementCapabilities::ISA = qw(_Initializable CIM_Capabilities);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_Capabilities::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{PowerCapabilities} = undef;
    $self->{OtherPowerCapabilitiesDescriptions} = undef;
    $self->{PowerStatesSupported} = undef;
    $self->{PowerChangeCapabilities} = undef;
    $self->{OtherPowerChangeCapabilities} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            PowerCapabilities accessor method.
#===============================================================================

sub PowerCapabilities{
    my ($self, $newval) = @_;
    $self->{PowerCapabilities} = $newval if @_ > 1;
    return $self->{PowerCapabilities};
}
#===============================================================================


#===============================================================================
#            OtherPowerCapabilitiesDescriptions accessor method.
#===============================================================================

sub OtherPowerCapabilitiesDescriptions{
    my ($self, $newval) = @_;
    $self->{OtherPowerCapabilitiesDescriptions} = $newval if @_ > 1;
    return $self->{OtherPowerCapabilitiesDescriptions};
}
#===============================================================================


#===============================================================================
#            PowerStatesSupported accessor method.
#===============================================================================

sub PowerStatesSupported{
    my ($self, $newval) = @_;
    $self->{PowerStatesSupported} = $newval if @_ > 1;
    return $self->{PowerStatesSupported};
}
#===============================================================================


#===============================================================================
#            PowerChangeCapabilities accessor method.
#===============================================================================

sub PowerChangeCapabilities{
    my ($self, $newval) = @_;
    $self->{PowerChangeCapabilities} = $newval if @_ > 1;
    return $self->{PowerChangeCapabilities};
}
#===============================================================================


#===============================================================================
#            OtherPowerChangeCapabilities accessor method.
#===============================================================================

sub OtherPowerChangeCapabilities{
    my ($self, $newval) = @_;
    $self->{OtherPowerChangeCapabilities} = $newval if @_ > 1;
    return $self->{OtherPowerChangeCapabilities};
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
