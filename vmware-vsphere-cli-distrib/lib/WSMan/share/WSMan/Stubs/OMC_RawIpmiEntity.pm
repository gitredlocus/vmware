package OMC_RawIpmiEntity;
use WSMan::Stubs::Initializable;
use strict;


@OMC_RawIpmiEntity::ISA = qw(_Initializable);


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
    $self->{Name} = undef;
    $self->{EntityId} = undef;
    $self->{InstanceID} = undef;
    $self->{HasTachSensor} = undef;
    $self->{ParentDeviceId} = undef;
    $self->{ProductName} = undef;
    $self->{ProductManufacturerName} = undef;
    $self->{ProductPartNumber} = undef;
    $self->{ProductVersion} = undef;
    $self->{ProductSerialNumber} = undef;
    $self->{ProductAssetTag} = undef;
    $self->{ChassisType} = undef;
    $self->{ChassisPartNumber} = undef;
    $self->{ChassisSerialNumber} = undef;
    $self->{BoardName} = undef;
    $self->{BoardManufacturerName} = undef;
    $self->{BoardSerialNumber} = undef;
    $self->{BoardPartNumber} = undef;
    $self->{BoardMfgDate} = undef;
    $self->{PSCapacity} = undef;
    $self->{PSPeakVA} = undef;
    $self->{PSInRushCurrent} = undef;
    $self->{PSInRushInterval} = undef;
    $self->{PSLowEndInputVoltage1} = undef;
    $self->{PSHighEndInputVoltage1} = undef;
    $self->{PSLowEndInputVoltage2} = undef;
    $self->{PSHighEndInputVoltage2} = undef;
    $self->{PSLowEndInputFrequency} = undef;
    $self->{PSHighEndInputFrequency} = undef;
    $self->{PSACDropOutTolerance} = undef;
    $self->{PSTachPulsesRotation} = undef;
    $self->{PSHotSwapSupport} = undef;
    $self->{PSAutoSwitch} = undef;
    $self->{PSPowerFactorCorrection} = undef;
    $self->{PSPredictiveFailSupport} = undef;
    $self->{PSPeakWattageHoldUpTime} = undef;
    $self->{PSPeakWattagePeakCapacity} = undef;
    $self->{PSVoltage1} = undef;
    $self->{PSVoltage2} = undef;
    $self->{PSCombinedWattage} = undef;
    $self->{PSPredictiveFailTachLowerThreshold} = undef;
    $self->{Availability} = undef;
    $self->{LANAccess} = undef;
    $self->{IPv4Address} = undef;
    $self->{IPv4DefaultGateway} = undef;
    $self->{IPv4Netmask} = undef;
    $self->{MACAddress} = undef;
    $self->{epr_name} = undef;  
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
#            Name accessor method.
#===============================================================================

sub Name{
    my ($self, $newval) = @_;
    $self->{Name} = $newval if @_ > 1;
    return $self->{Name};
}
#===============================================================================


#===============================================================================
#            EntityId accessor method.
#===============================================================================

sub EntityId{
    my ($self, $newval) = @_;
    $self->{EntityId} = $newval if @_ > 1;
    return $self->{EntityId};
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
#            HasTachSensor accessor method.
#===============================================================================

sub HasTachSensor{
    my ($self, $newval) = @_;
    $self->{HasTachSensor} = $newval if @_ > 1;
    return $self->{HasTachSensor};
}
#===============================================================================


#===============================================================================
#            ParentDeviceId accessor method.
#===============================================================================

sub ParentDeviceId{
    my ($self, $newval) = @_;
    $self->{ParentDeviceId} = $newval if @_ > 1;
    return $self->{ParentDeviceId};
}
#===============================================================================


#===============================================================================
#            ProductName accessor method.
#===============================================================================

sub ProductName{
    my ($self, $newval) = @_;
    $self->{ProductName} = $newval if @_ > 1;
    return $self->{ProductName};
}
#===============================================================================


#===============================================================================
#            ProductManufacturerName accessor method.
#===============================================================================

sub ProductManufacturerName{
    my ($self, $newval) = @_;
    $self->{ProductManufacturerName} = $newval if @_ > 1;
    return $self->{ProductManufacturerName};
}
#===============================================================================


#===============================================================================
#            ProductPartNumber accessor method.
#===============================================================================

sub ProductPartNumber{
    my ($self, $newval) = @_;
    $self->{ProductPartNumber} = $newval if @_ > 1;
    return $self->{ProductPartNumber};
}
#===============================================================================


#===============================================================================
#            ProductVersion accessor method.
#===============================================================================

sub ProductVersion{
    my ($self, $newval) = @_;
    $self->{ProductVersion} = $newval if @_ > 1;
    return $self->{ProductVersion};
}
#===============================================================================


#===============================================================================
#            ProductSerialNumber accessor method.
#===============================================================================

sub ProductSerialNumber{
    my ($self, $newval) = @_;
    $self->{ProductSerialNumber} = $newval if @_ > 1;
    return $self->{ProductSerialNumber};
}
#===============================================================================


#===============================================================================
#            ProductAssetTag accessor method.
#===============================================================================

sub ProductAssetTag{
    my ($self, $newval) = @_;
    $self->{ProductAssetTag} = $newval if @_ > 1;
    return $self->{ProductAssetTag};
}
#===============================================================================


#===============================================================================
#            ChassisType accessor method.
#===============================================================================

sub ChassisType{
    my ($self, $newval) = @_;
    $self->{ChassisType} = $newval if @_ > 1;
    return $self->{ChassisType};
}
#===============================================================================


#===============================================================================
#            ChassisPartNumber accessor method.
#===============================================================================

sub ChassisPartNumber{
    my ($self, $newval) = @_;
    $self->{ChassisPartNumber} = $newval if @_ > 1;
    return $self->{ChassisPartNumber};
}
#===============================================================================


#===============================================================================
#            ChassisSerialNumber accessor method.
#===============================================================================

sub ChassisSerialNumber{
    my ($self, $newval) = @_;
    $self->{ChassisSerialNumber} = $newval if @_ > 1;
    return $self->{ChassisSerialNumber};
}
#===============================================================================


#===============================================================================
#            BoardName accessor method.
#===============================================================================

sub BoardName{
    my ($self, $newval) = @_;
    $self->{BoardName} = $newval if @_ > 1;
    return $self->{BoardName};
}
#===============================================================================


#===============================================================================
#            BoardManufacturerName accessor method.
#===============================================================================

sub BoardManufacturerName{
    my ($self, $newval) = @_;
    $self->{BoardManufacturerName} = $newval if @_ > 1;
    return $self->{BoardManufacturerName};
}
#===============================================================================


#===============================================================================
#            BoardSerialNumber accessor method.
#===============================================================================

sub BoardSerialNumber{
    my ($self, $newval) = @_;
    $self->{BoardSerialNumber} = $newval if @_ > 1;
    return $self->{BoardSerialNumber};
}
#===============================================================================


#===============================================================================
#            BoardPartNumber accessor method.
#===============================================================================

sub BoardPartNumber{
    my ($self, $newval) = @_;
    $self->{BoardPartNumber} = $newval if @_ > 1;
    return $self->{BoardPartNumber};
}
#===============================================================================


#===============================================================================
#            BoardMfgDate accessor method.
#===============================================================================

sub BoardMfgDate{
    my ($self, $newval) = @_;
    $self->{BoardMfgDate} = $newval if @_ > 1;
    return $self->{BoardMfgDate};
}
#===============================================================================


#===============================================================================
#            PSCapacity accessor method.
#===============================================================================

sub PSCapacity{
    my ($self, $newval) = @_;
    $self->{PSCapacity} = $newval if @_ > 1;
    return $self->{PSCapacity};
}
#===============================================================================


#===============================================================================
#            PSPeakVA accessor method.
#===============================================================================

sub PSPeakVA{
    my ($self, $newval) = @_;
    $self->{PSPeakVA} = $newval if @_ > 1;
    return $self->{PSPeakVA};
}
#===============================================================================


#===============================================================================
#            PSInRushCurrent accessor method.
#===============================================================================

sub PSInRushCurrent{
    my ($self, $newval) = @_;
    $self->{PSInRushCurrent} = $newval if @_ > 1;
    return $self->{PSInRushCurrent};
}
#===============================================================================


#===============================================================================
#            PSInRushInterval accessor method.
#===============================================================================

sub PSInRushInterval{
    my ($self, $newval) = @_;
    $self->{PSInRushInterval} = $newval if @_ > 1;
    return $self->{PSInRushInterval};
}
#===============================================================================


#===============================================================================
#            PSLowEndInputVoltage1 accessor method.
#===============================================================================

sub PSLowEndInputVoltage1{
    my ($self, $newval) = @_;
    $self->{PSLowEndInputVoltage1} = $newval if @_ > 1;
    return $self->{PSLowEndInputVoltage1};
}
#===============================================================================


#===============================================================================
#            PSHighEndInputVoltage1 accessor method.
#===============================================================================

sub PSHighEndInputVoltage1{
    my ($self, $newval) = @_;
    $self->{PSHighEndInputVoltage1} = $newval if @_ > 1;
    return $self->{PSHighEndInputVoltage1};
}
#===============================================================================


#===============================================================================
#            PSLowEndInputVoltage2 accessor method.
#===============================================================================

sub PSLowEndInputVoltage2{
    my ($self, $newval) = @_;
    $self->{PSLowEndInputVoltage2} = $newval if @_ > 1;
    return $self->{PSLowEndInputVoltage2};
}
#===============================================================================


#===============================================================================
#            PSHighEndInputVoltage2 accessor method.
#===============================================================================

sub PSHighEndInputVoltage2{
    my ($self, $newval) = @_;
    $self->{PSHighEndInputVoltage2} = $newval if @_ > 1;
    return $self->{PSHighEndInputVoltage2};
}
#===============================================================================


#===============================================================================
#            PSLowEndInputFrequency accessor method.
#===============================================================================

sub PSLowEndInputFrequency{
    my ($self, $newval) = @_;
    $self->{PSLowEndInputFrequency} = $newval if @_ > 1;
    return $self->{PSLowEndInputFrequency};
}
#===============================================================================


#===============================================================================
#            PSHighEndInputFrequency accessor method.
#===============================================================================

sub PSHighEndInputFrequency{
    my ($self, $newval) = @_;
    $self->{PSHighEndInputFrequency} = $newval if @_ > 1;
    return $self->{PSHighEndInputFrequency};
}
#===============================================================================


#===============================================================================
#            PSACDropOutTolerance accessor method.
#===============================================================================

sub PSACDropOutTolerance{
    my ($self, $newval) = @_;
    $self->{PSACDropOutTolerance} = $newval if @_ > 1;
    return $self->{PSACDropOutTolerance};
}
#===============================================================================


#===============================================================================
#            PSTachPulsesRotation accessor method.
#===============================================================================

sub PSTachPulsesRotation{
    my ($self, $newval) = @_;
    $self->{PSTachPulsesRotation} = $newval if @_ > 1;
    return $self->{PSTachPulsesRotation};
}
#===============================================================================


#===============================================================================
#            PSHotSwapSupport accessor method.
#===============================================================================

sub PSHotSwapSupport{
    my ($self, $newval) = @_;
    $self->{PSHotSwapSupport} = $newval if @_ > 1;
    return $self->{PSHotSwapSupport};
}
#===============================================================================


#===============================================================================
#            PSAutoSwitch accessor method.
#===============================================================================

sub PSAutoSwitch{
    my ($self, $newval) = @_;
    $self->{PSAutoSwitch} = $newval if @_ > 1;
    return $self->{PSAutoSwitch};
}
#===============================================================================


#===============================================================================
#            PSPowerFactorCorrection accessor method.
#===============================================================================

sub PSPowerFactorCorrection{
    my ($self, $newval) = @_;
    $self->{PSPowerFactorCorrection} = $newval if @_ > 1;
    return $self->{PSPowerFactorCorrection};
}
#===============================================================================


#===============================================================================
#            PSPredictiveFailSupport accessor method.
#===============================================================================

sub PSPredictiveFailSupport{
    my ($self, $newval) = @_;
    $self->{PSPredictiveFailSupport} = $newval if @_ > 1;
    return $self->{PSPredictiveFailSupport};
}
#===============================================================================


#===============================================================================
#            PSPeakWattageHoldUpTime accessor method.
#===============================================================================

sub PSPeakWattageHoldUpTime{
    my ($self, $newval) = @_;
    $self->{PSPeakWattageHoldUpTime} = $newval if @_ > 1;
    return $self->{PSPeakWattageHoldUpTime};
}
#===============================================================================


#===============================================================================
#            PSPeakWattagePeakCapacity accessor method.
#===============================================================================

sub PSPeakWattagePeakCapacity{
    my ($self, $newval) = @_;
    $self->{PSPeakWattagePeakCapacity} = $newval if @_ > 1;
    return $self->{PSPeakWattagePeakCapacity};
}
#===============================================================================


#===============================================================================
#            PSVoltage1 accessor method.
#===============================================================================

sub PSVoltage1{
    my ($self, $newval) = @_;
    $self->{PSVoltage1} = $newval if @_ > 1;
    return $self->{PSVoltage1};
}
#===============================================================================


#===============================================================================
#            PSVoltage2 accessor method.
#===============================================================================

sub PSVoltage2{
    my ($self, $newval) = @_;
    $self->{PSVoltage2} = $newval if @_ > 1;
    return $self->{PSVoltage2};
}
#===============================================================================


#===============================================================================
#            PSCombinedWattage accessor method.
#===============================================================================

sub PSCombinedWattage{
    my ($self, $newval) = @_;
    $self->{PSCombinedWattage} = $newval if @_ > 1;
    return $self->{PSCombinedWattage};
}
#===============================================================================


#===============================================================================
#            PSPredictiveFailTachLowerThreshold accessor method.
#===============================================================================

sub PSPredictiveFailTachLowerThreshold{
    my ($self, $newval) = @_;
    $self->{PSPredictiveFailTachLowerThreshold} = $newval if @_ > 1;
    return $self->{PSPredictiveFailTachLowerThreshold};
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
#            LANAccess accessor method.
#===============================================================================

sub LANAccess{
    my ($self, $newval) = @_;
    $self->{LANAccess} = $newval if @_ > 1;
    return $self->{LANAccess};
}
#===============================================================================


#===============================================================================
#            IPv4Address accessor method.
#===============================================================================

sub IPv4Address{
    my ($self, $newval) = @_;
    $self->{IPv4Address} = $newval if @_ > 1;
    return $self->{IPv4Address};
}
#===============================================================================


#===============================================================================
#            IPv4DefaultGateway accessor method.
#===============================================================================

sub IPv4DefaultGateway{
    my ($self, $newval) = @_;
    $self->{IPv4DefaultGateway} = $newval if @_ > 1;
    return $self->{IPv4DefaultGateway};
}
#===============================================================================


#===============================================================================
#            IPv4Netmask accessor method.
#===============================================================================

sub IPv4Netmask{
    my ($self, $newval) = @_;
    $self->{IPv4Netmask} = $newval if @_ > 1;
    return $self->{IPv4Netmask};
}
#===============================================================================


#===============================================================================
#            MACAddress accessor method.
#===============================================================================

sub MACAddress{
    my ($self, $newval) = @_;
    $self->{MACAddress} = $newval if @_ > 1;
    return $self->{MACAddress};
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
