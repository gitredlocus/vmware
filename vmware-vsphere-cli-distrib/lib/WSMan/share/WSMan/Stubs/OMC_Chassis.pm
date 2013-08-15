package OMC_Chassis;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_Chassis;
use strict;


@OMC_Chassis::ISA = qw(_Initializable CIM_Chassis);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_Chassis::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{Caption} = undef;
    $self->{ChassisPackageType} = undef;
    $self->{ChassisTypeDescription} = undef;
    $self->{CreationClassName} = undef;
    $self->{ElementName} = undef;
    $self->{LockPresent} = undef;
    $self->{Manufacturer} = undef;
    $self->{Model} = undef;
    $self->{Version} = undef;
    $self->{OperationalStatus} = undef;
    $self->{OtherIdentifyingInfo} = undef;
    $self->{PackageType} = undef;
    $self->{PoweredOn} = undef;
    $self->{RemovalConditions} = undef;
    $self->{SerialNumber} = undef;
    $self->{Status} = undef;
    $self->{StatusDescriptions} = undef;
    $self->{Tag} = undef;
    $self->{uuid} = undef;
    $self->{VendorCompatibilityStrings} = undef;
    $self->{IpmiNodeCount} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            Caption accessor method.
#===============================================================================

sub Caption{
    my ($self, $newval) = @_;
    $self->{Caption} = $newval if @_ > 1;
    return $self->{Caption};
}
#===============================================================================


#===============================================================================
#            ChassisPackageType accessor method.
#===============================================================================

sub ChassisPackageType{
    my ($self, $newval) = @_;
    $self->{ChassisPackageType} = $newval if @_ > 1;
    return $self->{ChassisPackageType};
}
#===============================================================================


#===============================================================================
#            ChassisTypeDescription accessor method.
#===============================================================================

sub ChassisTypeDescription{
    my ($self, $newval) = @_;
    $self->{ChassisTypeDescription} = $newval if @_ > 1;
    return $self->{ChassisTypeDescription};
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
#            ElementName accessor method.
#===============================================================================

sub ElementName{
    my ($self, $newval) = @_;
    $self->{ElementName} = $newval if @_ > 1;
    return $self->{ElementName};
}
#===============================================================================


#===============================================================================
#            LockPresent accessor method.
#===============================================================================

sub LockPresent{
    my ($self, $newval) = @_;
    $self->{LockPresent} = $newval if @_ > 1;
    return $self->{LockPresent};
}
#===============================================================================


#===============================================================================
#            Manufacturer accessor method.
#===============================================================================

sub Manufacturer{
    my ($self, $newval) = @_;
    $self->{Manufacturer} = $newval if @_ > 1;
    return $self->{Manufacturer};
}
#===============================================================================


#===============================================================================
#            Model accessor method.
#===============================================================================

sub Model{
    my ($self, $newval) = @_;
    $self->{Model} = $newval if @_ > 1;
    return $self->{Model};
}
#===============================================================================


#===============================================================================
#            Version accessor method.
#===============================================================================

sub Version{
    my ($self, $newval) = @_;
    $self->{Version} = $newval if @_ > 1;
    return $self->{Version};
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
#            OtherIdentifyingInfo accessor method.
#===============================================================================

sub OtherIdentifyingInfo{
    my ($self, $newval) = @_;
    $self->{OtherIdentifyingInfo} = $newval if @_ > 1;
    return $self->{OtherIdentifyingInfo};
}
#===============================================================================


#===============================================================================
#            PackageType accessor method.
#===============================================================================

sub PackageType{
    my ($self, $newval) = @_;
    $self->{PackageType} = $newval if @_ > 1;
    return $self->{PackageType};
}
#===============================================================================


#===============================================================================
#            PoweredOn accessor method.
#===============================================================================

sub PoweredOn{
    my ($self, $newval) = @_;
    $self->{PoweredOn} = $newval if @_ > 1;
    return $self->{PoweredOn};
}
#===============================================================================


#===============================================================================
#            RemovalConditions accessor method.
#===============================================================================

sub RemovalConditions{
    my ($self, $newval) = @_;
    $self->{RemovalConditions} = $newval if @_ > 1;
    return $self->{RemovalConditions};
}
#===============================================================================


#===============================================================================
#            SerialNumber accessor method.
#===============================================================================

sub SerialNumber{
    my ($self, $newval) = @_;
    $self->{SerialNumber} = $newval if @_ > 1;
    return $self->{SerialNumber};
}
#===============================================================================


#===============================================================================
#            Status accessor method.
#===============================================================================

sub Status{
    my ($self, $newval) = @_;
    $self->{Status} = $newval if @_ > 1;
    return $self->{Status};
}
#===============================================================================


#===============================================================================
#            StatusDescriptions accessor method.
#===============================================================================

sub StatusDescriptions{
    my ($self, $newval) = @_;
    $self->{StatusDescriptions} = $newval if @_ > 1;
    return $self->{StatusDescriptions};
}
#===============================================================================


#===============================================================================
#            Tag accessor method.
#===============================================================================

sub Tag{
    my ($self, $newval) = @_;
    $self->{Tag} = $newval if @_ > 1;
    return $self->{Tag};
}
#===============================================================================


#===============================================================================
#            uuid accessor method.
#===============================================================================

sub uuid{
    my ($self, $newval) = @_;
    $self->{uuid} = $newval if @_ > 1;
    return $self->{uuid};
}
#===============================================================================


#===============================================================================
#            VendorCompatibilityStrings accessor method.
#===============================================================================

sub VendorCompatibilityStrings{
    my ($self, $newval) = @_;
    $self->{VendorCompatibilityStrings} = $newval if @_ > 1;
    return $self->{VendorCompatibilityStrings};
}
#===============================================================================


#===============================================================================
#            IpmiNodeCount accessor method.
#===============================================================================

sub IpmiNodeCount{
    my ($self, $newval) = @_;
    $self->{IpmiNodeCount} = $newval if @_ > 1;
    return $self->{IpmiNodeCount};
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
