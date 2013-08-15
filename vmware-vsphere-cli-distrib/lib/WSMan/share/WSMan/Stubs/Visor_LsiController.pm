package Visor_LsiController;
use WSMan::Stubs::Initializable;
use strict;

@Visor_LsiController::ISA = qw(_Initializable);

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
	$self->{serialNo} = undef;
	$self->{pdPresentCount} = undef;
	$self->{pdDiskPredFailureCount} = undef;
	$self->{batteryType} = undef;
	$self->{imageComponentCount} = undef;
	$self->{ldPresentCount} = undef;
	$self->{ldOfflineCount} = undef;
	$self->{ldDegradedCount} = undef;
	$self->{ctrlId} = undef;
	$self->{pdDiskFailedCount} = undef;
	$self->{packageVersion} = undef;
	$self->{mrAPIVersion} = undef;
	$self->{batteryTemp} = undef;
	$self->{mrAPIFwdCompatibility} = undef;
	$self->{subDevId} = undef;
	$self->{devId} = undef;
	$self->{productName} = undef;
	$self->{imageBuildDate} = undef;
	$self->{batteryCurrent} = undef;
	$self->{batteryStatus} = undef;
	$self->{batteryVoltage} = undef;
	$self->{imageVersion} = undef;
	$self->{imageName} = undef;
	$self->{subVendorId} = undef;
	$self->{vendorId} = undef;
	$self->{mrAPIBkwdCompatibility} = undef;
	$self->{pdDiskPresentCount} = undef;
	$self->{imageBuildTime} = undef;
	$self->{epr_name} = undef;
	push @{$self->{id_keys}}, 'ctrlId';
	@{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
	if(keys %args){
		$self->_subinit(%args);
	}
}

#===============================================================================


#===============================================================================
#			 serialNo accessor method.
#===============================================================================

sub serialNo{
	my ($self, $newval) = @_;
	$self->{serialNo} = $newval if @_ > 1;
	return $self->{serialNo};
}
#===============================================================================


#===============================================================================
#			 pdPresentCount accessor method.
#===============================================================================

sub pdPresentCount{
	my ($self, $newval) = @_;
	$self->{pdPresentCount} = $newval if @_ > 1;
	return $self->{pdPresentCount};
}
#===============================================================================


#===============================================================================
#			 pdDiskPredFailureCount accessor method.
#===============================================================================

sub pdDiskPredFailureCount{
	my ($self, $newval) = @_;
	$self->{pdDiskPredFailureCount} = $newval if @_ > 1;
	return $self->{pdDiskPredFailureCount};
}
#===============================================================================


#===============================================================================
#			 batteryType accessor method.
#===============================================================================

sub batteryType{
	my ($self, $newval) = @_;
	$self->{batteryType} = $newval if @_ > 1;
	return $self->{batteryType};
}
#===============================================================================


#===============================================================================
#			 imageComponentCount accessor method.
#===============================================================================

sub imageComponentCount{
	my ($self, $newval) = @_;
	$self->{imageComponentCount} = $newval if @_ > 1;
	return $self->{imageComponentCount};
}
#===============================================================================


#===============================================================================
#			 ldPresentCount accessor method.
#===============================================================================

sub ldPresentCount{
	my ($self, $newval) = @_;
	$self->{ldPresentCount} = $newval if @_ > 1;
	return $self->{ldPresentCount};
}
#===============================================================================


#===============================================================================
#			 ldOfflineCount accessor method.
#===============================================================================

sub ldOfflineCount{
	my ($self, $newval) = @_;
	$self->{ldOfflineCount} = $newval if @_ > 1;
	return $self->{ldOfflineCount};
}
#===============================================================================


#===============================================================================
#			 ldDegradedCount accessor method.
#===============================================================================

sub ldDegradedCount{
	my ($self, $newval) = @_;
	$self->{ldDegradedCount} = $newval if @_ > 1;
	return $self->{ldDegradedCount};
}
#===============================================================================


#===============================================================================
#			 ctrlId accessor method.
#===============================================================================

sub ctrlId{
	my ($self, $newval) = @_;
	$self->{ctrlId} = $newval if @_ > 1;
	return $self->{ctrlId};
}
#===============================================================================


#===============================================================================
#			 pdDiskFailedCount accessor method.
#===============================================================================

sub pdDiskFailedCount{
	my ($self, $newval) = @_;
	$self->{pdDiskFailedCount} = $newval if @_ > 1;
	return $self->{pdDiskFailedCount};
}
#===============================================================================


#===============================================================================
#			 packageVersion accessor method.
#===============================================================================

sub packageVersion{
	my ($self, $newval) = @_;
	$self->{packageVersion} = $newval if @_ > 1;
	return $self->{packageVersion};
}
#===============================================================================


#===============================================================================
#			 mrAPIVersion accessor method.
#===============================================================================

sub mrAPIVersion{
	my ($self, $newval) = @_;
	$self->{mrAPIVersion} = $newval if @_ > 1;
	return $self->{mrAPIVersion};
}
#===============================================================================


#===============================================================================
#			 batteryTemp accessor method.
#===============================================================================

sub batteryTemp{
	my ($self, $newval) = @_;
	$self->{batteryTemp} = $newval if @_ > 1;
	return $self->{batteryTemp};
}
#===============================================================================


#===============================================================================
#			 mrAPIFwdCompatibility accessor method.
#===============================================================================

sub mrAPIFwdCompatibility{
	my ($self, $newval) = @_;
	$self->{mrAPIFwdCompatibility} = $newval if @_ > 1;
	return $self->{mrAPIFwdCompatibility};
}
#===============================================================================


#===============================================================================
#			 subDevId accessor method.
#===============================================================================

sub subDevId{
	my ($self, $newval) = @_;
	$self->{subDevId} = $newval if @_ > 1;
	return $self->{subDevId};
}
#===============================================================================


#===============================================================================
#			 devId accessor method.
#===============================================================================

sub devId{
	my ($self, $newval) = @_;
	$self->{devId} = $newval if @_ > 1;
	return $self->{devId};
}
#===============================================================================


#===============================================================================
#			 productName accessor method.
#===============================================================================

sub productName{
	my ($self, $newval) = @_;
	$self->{productName} = $newval if @_ > 1;
	return $self->{productName};
}
#===============================================================================


#===============================================================================
#			 imageBuildDate accessor method.
#===============================================================================

sub imageBuildDate{
	my ($self, $newval) = @_;
	$self->{imageBuildDate} = $newval if @_ > 1;
	return $self->{imageBuildDate};
}
#===============================================================================


#===============================================================================
#			 batteryCurrent accessor method.
#===============================================================================

sub batteryCurrent{
	my ($self, $newval) = @_;
	$self->{batteryCurrent} = $newval if @_ > 1;
	return $self->{batteryCurrent};
}
#===============================================================================


#===============================================================================
#			 batteryStatus accessor method.
#===============================================================================

sub batteryStatus{
	my ($self, $newval) = @_;
	$self->{batteryStatus} = $newval if @_ > 1;
	return $self->{batteryStatus};
}
#===============================================================================


#===============================================================================
#			 batteryVoltage accessor method.
#===============================================================================

sub batteryVoltage{
	my ($self, $newval) = @_;
	$self->{batteryVoltage} = $newval if @_ > 1;
	return $self->{batteryVoltage};
}
#===============================================================================


#===============================================================================
#			 imageVersion accessor method.
#===============================================================================

sub imageVersion{
	my ($self, $newval) = @_;
	$self->{imageVersion} = $newval if @_ > 1;
	return $self->{imageVersion};
}
#===============================================================================


#===============================================================================
#			 imageName accessor method.
#===============================================================================

sub imageName{
	my ($self, $newval) = @_;
	$self->{imageName} = $newval if @_ > 1;
	return $self->{imageName};
}
#===============================================================================


#===============================================================================
#			 subVendorId accessor method.
#===============================================================================

sub subVendorId{
	my ($self, $newval) = @_;
	$self->{subVendorId} = $newval if @_ > 1;
	return $self->{subVendorId};
}
#===============================================================================


#===============================================================================
#			 vendorId accessor method.
#===============================================================================

sub vendorId{
	my ($self, $newval) = @_;
	$self->{vendorId} = $newval if @_ > 1;
	return $self->{vendorId};
}
#===============================================================================


#===============================================================================
#			 mrAPIBkwdCompatibility accessor method.
#===============================================================================

sub mrAPIBkwdCompatibility{
	my ($self, $newval) = @_;
	$self->{mrAPIBkwdCompatibility} = $newval if @_ > 1;
	return $self->{mrAPIBkwdCompatibility};
}
#===============================================================================


#===============================================================================
#			 pdDiskPresentCount accessor method.
#===============================================================================

sub pdDiskPresentCount{
	my ($self, $newval) = @_;
	$self->{pdDiskPresentCount} = $newval if @_ > 1;
	return $self->{pdDiskPresentCount};
}
#===============================================================================


#===============================================================================
#			 imageBuildTime accessor method.
#===============================================================================

sub imageBuildTime{
	my ($self, $newval) = @_;
	$self->{imageBuildTime} = $newval if @_ > 1;
	return $self->{imageBuildTime};
}
#===============================================================================


#===============================================================================
#			 epr_name accessor method.
#===============================================================================

sub epr_name{
	my ($self, $newval) = @_;
	$self->{epr_name} = $newval if @_ > 1;
	return $self->{epr_name};
}
#===============================================================================


1;
