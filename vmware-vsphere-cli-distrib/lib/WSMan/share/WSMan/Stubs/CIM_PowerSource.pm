package CIM_PowerSource;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_LogicalDevice;
use strict;


@CIM_PowerSource::ISA = qw(_Initializable CIM_LogicalDevice);


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
    $self->{RatedMaxOutputPower} = undef;
    $self->{OutputPowerUnits} = undef;
    $self->{IsACOutput} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            RatedMaxOutputPower accessor method.
#===============================================================================

sub RatedMaxOutputPower{
    my ($self, $newval) = @_;
    $self->{RatedMaxOutputPower} = $newval if @_ > 1;
    return $self->{RatedMaxOutputPower};
}
#===============================================================================


#===============================================================================
#            OutputPowerUnits accessor method.
#===============================================================================

sub OutputPowerUnits{
    my ($self, $newval) = @_;
    $self->{OutputPowerUnits} = $newval if @_ > 1;
    return $self->{OutputPowerUnits};
}
#===============================================================================


#===============================================================================
#            IsACOutput accessor method.
#===============================================================================

sub IsACOutput{
    my ($self, $newval) = @_;
    $self->{IsACOutput} = $newval if @_ > 1;
    return $self->{IsACOutput};
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
