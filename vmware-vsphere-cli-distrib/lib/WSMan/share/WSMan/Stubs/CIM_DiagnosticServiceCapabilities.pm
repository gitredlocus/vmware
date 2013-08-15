package CIM_DiagnosticServiceCapabilities;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_Capabilities;
use strict;


@CIM_DiagnosticServiceCapabilities::ISA = qw(_Initializable CIM_Capabilities);


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
    $self->{SupportedServiceModes} = undef;
    $self->{OtherSupportedServiceModesDescriptions} = undef;
    $self->{SupportedLoopControl} = undef;
    $self->{OtherSupportedLoopControlDescriptions} = undef;
    $self->{SupportedLogOptions} = undef;
    $self->{OtherSupportedLogOptionsDescriptions} = undef;
    $self->{SupportedLogStorage} = undef;
    $self->{OtherSupportedLogStorageDescriptions} = undef;
    $self->{SupportedExecutionControls} = undef;
    $self->{OtherSupportedExecutionControlsDescriptions} = undef;
    $self->{SupportedTestWarnings} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            SupportedServiceModes accessor method.
#===============================================================================

sub SupportedServiceModes{
    my ($self, $newval) = @_;
    $self->{SupportedServiceModes} = $newval if @_ > 1;
    return $self->{SupportedServiceModes};
}
#===============================================================================


#===============================================================================
#            OtherSupportedServiceModesDescriptions accessor method.
#===============================================================================

sub OtherSupportedServiceModesDescriptions{
    my ($self, $newval) = @_;
    $self->{OtherSupportedServiceModesDescriptions} = $newval if @_ > 1;
    return $self->{OtherSupportedServiceModesDescriptions};
}
#===============================================================================


#===============================================================================
#            SupportedLoopControl accessor method.
#===============================================================================

sub SupportedLoopControl{
    my ($self, $newval) = @_;
    $self->{SupportedLoopControl} = $newval if @_ > 1;
    return $self->{SupportedLoopControl};
}
#===============================================================================


#===============================================================================
#            OtherSupportedLoopControlDescriptions accessor method.
#===============================================================================

sub OtherSupportedLoopControlDescriptions{
    my ($self, $newval) = @_;
    $self->{OtherSupportedLoopControlDescriptions} = $newval if @_ > 1;
    return $self->{OtherSupportedLoopControlDescriptions};
}
#===============================================================================


#===============================================================================
#            SupportedLogOptions accessor method.
#===============================================================================

sub SupportedLogOptions{
    my ($self, $newval) = @_;
    $self->{SupportedLogOptions} = $newval if @_ > 1;
    return $self->{SupportedLogOptions};
}
#===============================================================================


#===============================================================================
#            OtherSupportedLogOptionsDescriptions accessor method.
#===============================================================================

sub OtherSupportedLogOptionsDescriptions{
    my ($self, $newval) = @_;
    $self->{OtherSupportedLogOptionsDescriptions} = $newval if @_ > 1;
    return $self->{OtherSupportedLogOptionsDescriptions};
}
#===============================================================================


#===============================================================================
#            SupportedLogStorage accessor method.
#===============================================================================

sub SupportedLogStorage{
    my ($self, $newval) = @_;
    $self->{SupportedLogStorage} = $newval if @_ > 1;
    return $self->{SupportedLogStorage};
}
#===============================================================================


#===============================================================================
#            OtherSupportedLogStorageDescriptions accessor method.
#===============================================================================

sub OtherSupportedLogStorageDescriptions{
    my ($self, $newval) = @_;
    $self->{OtherSupportedLogStorageDescriptions} = $newval if @_ > 1;
    return $self->{OtherSupportedLogStorageDescriptions};
}
#===============================================================================


#===============================================================================
#            SupportedExecutionControls accessor method.
#===============================================================================

sub SupportedExecutionControls{
    my ($self, $newval) = @_;
    $self->{SupportedExecutionControls} = $newval if @_ > 1;
    return $self->{SupportedExecutionControls};
}
#===============================================================================


#===============================================================================
#            OtherSupportedExecutionControlsDescriptions accessor method.
#===============================================================================

sub OtherSupportedExecutionControlsDescriptions{
    my ($self, $newval) = @_;
    $self->{OtherSupportedExecutionControlsDescriptions} = $newval if @_ > 1;
    return $self->{OtherSupportedExecutionControlsDescriptions};
}
#===============================================================================


#===============================================================================
#            SupportedTestWarnings accessor method.
#===============================================================================

sub SupportedTestWarnings{
    my ($self, $newval) = @_;
    $self->{SupportedTestWarnings} = $newval if @_ > 1;
    return $self->{SupportedTestWarnings};
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
