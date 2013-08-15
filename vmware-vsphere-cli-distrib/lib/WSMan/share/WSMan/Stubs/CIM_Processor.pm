package CIM_Processor;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_LogicalDevice;
use strict;


@CIM_Processor::ISA = qw(_Initializable CIM_LogicalDevice);


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
    $self->{Role} = undef;
    $self->{Family} = undef;
    $self->{OtherFamilyDescription} = undef;
    $self->{UpgradeMethod} = undef;
    $self->{MaxClockSpeed} = undef;
    $self->{CurrentClockSpeed} = undef;
    $self->{DataWidth} = undef;
    $self->{AddressWidth} = undef;
    $self->{LoadPercentage} = undef;
    $self->{Stepping} = undef;
    $self->{UniqueID} = undef;
    $self->{CPUStatus} = undef;
    $self->{ExternalBusClockSpeed} = undef;
    $self->{Characteristics} = undef;
    $self->{NumberOfEnabledCores} = undef;
    $self->{EnabledProcessorCharacteristics} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            Role accessor method.
#===============================================================================

sub Role{
    my ($self, $newval) = @_;
    $self->{Role} = $newval if @_ > 1;
    return $self->{Role};
}
#===============================================================================


#===============================================================================
#            Family accessor method.
#===============================================================================

sub Family{
    my ($self, $newval) = @_;
    $self->{Family} = $newval if @_ > 1;
    return $self->{Family};
}
#===============================================================================


#===============================================================================
#            OtherFamilyDescription accessor method.
#===============================================================================

sub OtherFamilyDescription{
    my ($self, $newval) = @_;
    $self->{OtherFamilyDescription} = $newval if @_ > 1;
    return $self->{OtherFamilyDescription};
}
#===============================================================================


#===============================================================================
#            UpgradeMethod accessor method.
#===============================================================================

sub UpgradeMethod{
    my ($self, $newval) = @_;
    $self->{UpgradeMethod} = $newval if @_ > 1;
    return $self->{UpgradeMethod};
}
#===============================================================================


#===============================================================================
#            MaxClockSpeed accessor method.
#===============================================================================

sub MaxClockSpeed{
    my ($self, $newval) = @_;
    $self->{MaxClockSpeed} = $newval if @_ > 1;
    return $self->{MaxClockSpeed};
}
#===============================================================================


#===============================================================================
#            CurrentClockSpeed accessor method.
#===============================================================================

sub CurrentClockSpeed{
    my ($self, $newval) = @_;
    $self->{CurrentClockSpeed} = $newval if @_ > 1;
    return $self->{CurrentClockSpeed};
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
#            AddressWidth accessor method.
#===============================================================================

sub AddressWidth{
    my ($self, $newval) = @_;
    $self->{AddressWidth} = $newval if @_ > 1;
    return $self->{AddressWidth};
}
#===============================================================================


#===============================================================================
#            LoadPercentage accessor method.
#===============================================================================

sub LoadPercentage{
    my ($self, $newval) = @_;
    $self->{LoadPercentage} = $newval if @_ > 1;
    return $self->{LoadPercentage};
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
#            UniqueID accessor method.
#===============================================================================

sub UniqueID{
    my ($self, $newval) = @_;
    $self->{UniqueID} = $newval if @_ > 1;
    return $self->{UniqueID};
}
#===============================================================================


#===============================================================================
#            CPUStatus accessor method.
#===============================================================================

sub CPUStatus{
    my ($self, $newval) = @_;
    $self->{CPUStatus} = $newval if @_ > 1;
    return $self->{CPUStatus};
}
#===============================================================================


#===============================================================================
#            ExternalBusClockSpeed accessor method.
#===============================================================================

sub ExternalBusClockSpeed{
    my ($self, $newval) = @_;
    $self->{ExternalBusClockSpeed} = $newval if @_ > 1;
    return $self->{ExternalBusClockSpeed};
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
#            NumberOfEnabledCores accessor method.
#===============================================================================

sub NumberOfEnabledCores{
    my ($self, $newval) = @_;
    $self->{NumberOfEnabledCores} = $newval if @_ > 1;
    return $self->{NumberOfEnabledCores};
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
