package CIM_LogicalDevice;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_EnabledLogicalElement;
use strict;


@CIM_LogicalDevice::ISA = qw(_Initializable CIM_EnabledLogicalElement);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_EnabledLogicalElement::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{SystemCreationClassName} = undef;
    $self->{SystemName} = undef;
    $self->{CreationClassName} = undef;
    $self->{DeviceID} = undef;
    $self->{PowerManagementSupported} = undef;
    $self->{PowerManagementCapabilities} = undef;
    $self->{Availability} = undef;
    $self->{StatusInfo} = undef;
    $self->{LastErrorCode} = undef;
    $self->{ErrorDescription} = undef;
    $self->{ErrorCleared} = undef;
    $self->{OtherIdentifyingInfo} = undef;
    $self->{PowerOnHours} = undef;
    $self->{TotalPowerOnHours} = undef;
    $self->{IdentifyingDescriptions} = undef;
    $self->{AdditionalAvailability} = undef;
    $self->{MaxQuiesceTime} = undef;
    $self->{LocationIndicator} = undef;
    $self->{epr_name} = undef;  
    $self->{invokableMethods}->{Reset} = { input => [], output => [] };
    $self->{invokableMethods}->{SetPowerState} = { input => ['PowerState', 'Time'], output => [] };
    $self->{invokableMethods}->{QuiesceDevice} = { input => ['Quiesce'], output => [] };
    $self->{invokableMethods}->{EnableDevice} = { input => ['Enabled'], output => [] };
    $self->{invokableMethods}->{OnlineDevice} = { input => ['Online'], output => [] };
    $self->{invokableMethods}->{SaveProperties} = { input => [], output => [] };
    $self->{invokableMethods}->{RestoreProperties} = { input => [], output => [] };
    push @{$self->{id_keys}}, 'SystemCreationClassName';
    push @{$self->{id_keys}}, 'SystemName';
    push @{$self->{id_keys}}, 'CreationClassName';
    push @{$self->{id_keys}}, 'DeviceID';
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            SystemCreationClassName accessor method.
#===============================================================================

sub SystemCreationClassName{
    my ($self, $newval) = @_;
    $self->{SystemCreationClassName} = $newval if @_ > 1;
    return $self->{SystemCreationClassName};
}
#===============================================================================


#===============================================================================
#            SystemName accessor method.
#===============================================================================

sub SystemName{
    my ($self, $newval) = @_;
    $self->{SystemName} = $newval if @_ > 1;
    return $self->{SystemName};
}
#===============================================================================


#===============================================================================
#            CreationClassName accessor method.
#===============================================================================

sub CreationClassName{
    my ($self, $newval) = @_;
    $self->{CreationClassName} = $newval if @_ > 1;
    return $self->{CreationClassName};
}
#===============================================================================


#===============================================================================
#            DeviceID accessor method.
#===============================================================================

sub DeviceID{
    my ($self, $newval) = @_;
    $self->{DeviceID} = $newval if @_ > 1;
    return $self->{DeviceID};
}
#===============================================================================


#===============================================================================
#            PowerManagementSupported accessor method.
#===============================================================================

sub PowerManagementSupported{
    my ($self, $newval) = @_;
    $self->{PowerManagementSupported} = $newval if @_ > 1;
    return $self->{PowerManagementSupported};
}
#===============================================================================


#===============================================================================
#            PowerManagementCapabilities accessor method.
#===============================================================================

sub PowerManagementCapabilities{
    my ($self, $newval) = @_;
    $self->{PowerManagementCapabilities} = $newval if @_ > 1;
    return $self->{PowerManagementCapabilities};
}
#===============================================================================


#===============================================================================
#            Availability accessor method.
#===============================================================================

sub Availability{
    my ($self, $newval) = @_;
    $self->{Availability} = $newval if @_ > 1;
    return $self->{Availability};
}
#===============================================================================


#===============================================================================
#            StatusInfo accessor method.
#===============================================================================

sub StatusInfo{
    my ($self, $newval) = @_;
    $self->{StatusInfo} = $newval if @_ > 1;
    return $self->{StatusInfo};
}
#===============================================================================


#===============================================================================
#            LastErrorCode accessor method.
#===============================================================================

sub LastErrorCode{
    my ($self, $newval) = @_;
    $self->{LastErrorCode} = $newval if @_ > 1;
    return $self->{LastErrorCode};
}
#===============================================================================


#===============================================================================
#            ErrorDescription accessor method.
#===============================================================================

sub ErrorDescription{
    my ($self, $newval) = @_;
    $self->{ErrorDescription} = $newval if @_ > 1;
    return $self->{ErrorDescription};
}
#===============================================================================


#===============================================================================
#            ErrorCleared accessor method.
#===============================================================================

sub ErrorCleared{
    my ($self, $newval) = @_;
    $self->{ErrorCleared} = $newval if @_ > 1;
    return $self->{ErrorCleared};
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
#            PowerOnHours accessor method.
#===============================================================================

sub PowerOnHours{
    my ($self, $newval) = @_;
    $self->{PowerOnHours} = $newval if @_ > 1;
    return $self->{PowerOnHours};
}
#===============================================================================


#===============================================================================
#            TotalPowerOnHours accessor method.
#===============================================================================

sub TotalPowerOnHours{
    my ($self, $newval) = @_;
    $self->{TotalPowerOnHours} = $newval if @_ > 1;
    return $self->{TotalPowerOnHours};
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
#            AdditionalAvailability accessor method.
#===============================================================================

sub AdditionalAvailability{
    my ($self, $newval) = @_;
    $self->{AdditionalAvailability} = $newval if @_ > 1;
    return $self->{AdditionalAvailability};
}
#===============================================================================


#===============================================================================
#            MaxQuiesceTime accessor method.
#===============================================================================

sub MaxQuiesceTime{
    my ($self, $newval) = @_;
    $self->{MaxQuiesceTime} = $newval if @_ > 1;
    return $self->{MaxQuiesceTime};
}
#===============================================================================


#===============================================================================
#            LocationIndicator accessor method.
#===============================================================================

sub LocationIndicator{
    my ($self, $newval) = @_;
    $self->{LocationIndicator} = $newval if @_ > 1;
    return $self->{LocationIndicator};
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
