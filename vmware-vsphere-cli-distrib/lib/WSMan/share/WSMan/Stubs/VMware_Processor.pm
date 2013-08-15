package VMware_Processor;
use WSMan::Stubs::Initializable;
use strict;


@VMware_Processor::ISA = qw(_Initializable);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{DeviceID} = undef;
    $self->{ElementName} = undef;
    $self->{SystemCreationClassName} = undef;
    $self->{SystemName} = undef;
    $self->{CreationClassName} = undef;
    $self->{Vendor} = undef;
    $self->{OperationalStatus} = undef;
    $self->{NumberOfEnabledCores} = undef;
    $self->{Stepping} = undef;
    $self->{ModelName} = undef;
    $self->{DataWidth} = undef;
    $self->{OtherIdentifyingInfo} = undef;
    $self->{IdentifyingDescriptions} = undef;
    $self->{Characteristics} = undef;
    $self->{EnabledProcessorCharacteristics} = undef;
    $self->{epr_name} = undef;  
    push @{$self->{id_keys}}, 'DeviceID';
    push @{$self->{id_keys}}, 'SystemCreationClassName';
    push @{$self->{id_keys}}, 'SystemName';
    push @{$self->{id_keys}}, 'CreationClassName';
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
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
#            ElementName accessor method.
#===============================================================================

sub ElementName{
    my ($self, $newval) = @_;
    $self->{ElementName} = $newval if @_ > 1;
    return $self->{ElementName};
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
#            Vendor accessor method.
#===============================================================================

sub Vendor{
    my ($self, $newval) = @_;
    $self->{Vendor} = $newval if @_ > 1;
    return $self->{Vendor};
}
#===============================================================================


#===============================================================================
#            OperationalStatus accessor method.
#===============================================================================

sub OperationalStatus{
    my ($self, $newval) = @_;
    $self->{OperationalStatus} = $newval if @_ > 1;
    return $self->{OperationalStatus};
}
#===============================================================================


#===============================================================================
#            NumberOfEnabledCores accessor method.
#===============================================================================

sub NumberOfEnabledCores{
    my ($self, $newval) = @_;
    $self->{NumberOfEnabledCores} = $newval if @_ > 1;
    return $self->{NumberOfEnabledCores};
}
#===============================================================================


#===============================================================================
#            Stepping accessor method.
#===============================================================================

sub Stepping{
    my ($self, $newval) = @_;
    $self->{Stepping} = $newval if @_ > 1;
    return $self->{Stepping};
}
#===============================================================================


#===============================================================================
#            ModelName accessor method.
#===============================================================================

sub ModelName{
    my ($self, $newval) = @_;
    $self->{ModelName} = $newval if @_ > 1;
    return $self->{ModelName};
}
#===============================================================================


#===============================================================================
#            DataWidth accessor method.
#===============================================================================

sub DataWidth{
    my ($self, $newval) = @_;
    $self->{DataWidth} = $newval if @_ > 1;
    return $self->{DataWidth};
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
#            IdentifyingDescriptions accessor method.
#===============================================================================

sub IdentifyingDescriptions{
    my ($self, $newval) = @_;
    $self->{IdentifyingDescriptions} = $newval if @_ > 1;
    return $self->{IdentifyingDescriptions};
}
#===============================================================================


#===============================================================================
#            Characteristics accessor method.
#===============================================================================

sub Characteristics{
    my ($self, $newval) = @_;
    $self->{Characteristics} = $newval if @_ > 1;
    return $self->{Characteristics};
}
#===============================================================================


#===============================================================================
#            EnabledProcessorCharacteristics accessor method.
#===============================================================================

sub EnabledProcessorCharacteristics{
    my ($self, $newval) = @_;
    $self->{EnabledProcessorCharacteristics} = $newval if @_ > 1;
    return $self->{EnabledProcessorCharacteristics};
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
