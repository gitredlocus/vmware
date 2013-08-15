package VMware_PowerManagementServiceCapabilities;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_PowerManagementCapabilities;
use strict;


@VMware_PowerManagementServiceCapabilities::ISA = qw(_Initializable CIM_PowerManagementCapabilities);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_PowerManagementCapabilities::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{ElementName} = undef;
    $self->{InstanceID} = undef;
    $self->{PowerChangeCapabilities} = undef;
    $self->{PowerStatesSupported} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
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
#            InstanceID accessor method.
#===============================================================================

sub InstanceID{
    my ($self, $newval) = @_;
    $self->{InstanceID} = $newval if @_ > 1;
    return $self->{InstanceID};
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
#            PowerStatesSupported accessor method.
#===============================================================================

sub PowerStatesSupported{
    my ($self, $newval) = @_;
    $self->{PowerStatesSupported} = $newval if @_ > 1;
    return $self->{PowerStatesSupported};
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
