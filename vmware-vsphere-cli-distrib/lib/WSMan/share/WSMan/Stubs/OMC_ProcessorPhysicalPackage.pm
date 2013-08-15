package OMC_ProcessorPhysicalPackage;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_PhysicalPackage;
use strict;


@OMC_ProcessorPhysicalPackage::ISA = qw(_Initializable CIM_PhysicalPackage);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_PhysicalPackage::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{Caption} = undef;
    $self->{CreationClassName} = undef;
    $self->{Description} = undef;
    $self->{ElementName} = undef;
    $self->{HealthState} = undef;
    $self->{HotSwappable} = undef;
    $self->{Manufacturer} = undef;
    $self->{Model} = undef;
    $self->{Name} = undef;
    $self->{OperationalStatus} = undef;
    $self->{OtherPackageType} = undef;
    $self->{PackageType} = undef;
    $self->{PartNumber} = undef;
    $self->{RemovalConditions} = undef;
    $self->{SerialNumber} = undef;
    $self->{Tag} = undef;
    $self->{Version} = undef;
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
#            CreationClassName accessor method.
#===============================================================================

sub CreationClassName{
    my ($self, $newval) = @_;
    $self->{CreationClassName} = $newval if @_ > 1;
    return $self->{CreationClassName};
}
#===============================================================================


#===============================================================================
#            Description accessor method.
#===============================================================================

sub Description{
    my ($self, $newval) = @_;
    $self->{Description} = $newval if @_ > 1;
    return $self->{Description};
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
#            HealthState accessor method.
#===============================================================================

sub HealthState{
    my ($self, $newval) = @_;
    $self->{HealthState} = $newval if @_ > 1;
    return $self->{HealthState};
}
#===============================================================================


#===============================================================================
#            HotSwappable accessor method.
#===============================================================================

sub HotSwappable{
    my ($self, $newval) = @_;
    $self->{HotSwappable} = $newval if @_ > 1;
    return $self->{HotSwappable};
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
#            Name accessor method.
#===============================================================================

sub Name{
    my ($self, $newval) = @_;
    $self->{Name} = $newval if @_ > 1;
    return $self->{Name};
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
#            OtherPackageType accessor method.
#===============================================================================

sub OtherPackageType{
    my ($self, $newval) = @_;
    $self->{OtherPackageType} = $newval if @_ > 1;
    return $self->{OtherPackageType};
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
#            PartNumber accessor method.
#===============================================================================

sub PartNumber{
    my ($self, $newval) = @_;
    $self->{PartNumber} = $newval if @_ > 1;
    return $self->{PartNumber};
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
#            Tag accessor method.
#===============================================================================

sub Tag{
    my ($self, $newval) = @_;
    $self->{Tag} = $newval if @_ > 1;
    return $self->{Tag};
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
#           epr_name accessor method.
#===============================================================================

sub epr_name{
    my ($self, $newval) = @_;
    $self->{epr_name} = $newval if @_ > 1;
    return $self->{epr_name};
}
#===============================================================================


1;
