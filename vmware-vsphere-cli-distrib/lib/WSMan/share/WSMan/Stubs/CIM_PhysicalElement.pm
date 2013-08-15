package CIM_PhysicalElement;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_ManagedSystemElement;
use strict;


@CIM_PhysicalElement::ISA = qw(_Initializable CIM_ManagedSystemElement);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_ManagedSystemElement::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{Tag} = undef;
    $self->{Description} = undef;
    $self->{CreationClassName} = undef;
    $self->{ElementName} = undef;
    $self->{Manufacturer} = undef;
    $self->{Model} = undef;
    $self->{SKU} = undef;
    $self->{SerialNumber} = undef;
    $self->{Version} = undef;
    $self->{PartNumber} = undef;
    $self->{OtherIdentifyingInfo} = undef;
    $self->{PoweredOn} = undef;
    $self->{ManufactureDate} = undef;
    $self->{VendorEquipmentType} = undef;
    $self->{UserTracking} = undef;
    $self->{CanBeFRUed} = undef;
    $self->{epr_name} = undef;  
    push @{$self->{id_keys}}, 'Tag';
    push @{$self->{id_keys}}, 'CreationClassName';
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
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
#            Description accessor method.
#===============================================================================

sub Description{
    my ($self, $newval) = @_;
    $self->{Description} = $newval if @_ > 1;
    return $self->{Description};
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
#            SKU accessor method.
#===============================================================================

sub SKU{
    my ($self, $newval) = @_;
    $self->{SKU} = $newval if @_ > 1;
    return $self->{SKU};
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
#            Version accessor method.
#===============================================================================

sub Version{
    my ($self, $newval) = @_;
    $self->{Version} = $newval if @_ > 1;
    return $self->{Version};
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
#            OtherIdentifyingInfo accessor method.
#===============================================================================

sub OtherIdentifyingInfo{
    my ($self, $newval) = @_;
    $self->{OtherIdentifyingInfo} = $newval if @_ > 1;
    return $self->{OtherIdentifyingInfo};
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
#            ManufactureDate accessor method.
#===============================================================================

sub ManufactureDate{
    my ($self, $newval) = @_;
    $self->{ManufactureDate} = $newval if @_ > 1;
    return $self->{ManufactureDate};
}
#===============================================================================


#===============================================================================
#            VendorEquipmentType accessor method.
#===============================================================================

sub VendorEquipmentType{
    my ($self, $newval) = @_;
    $self->{VendorEquipmentType} = $newval if @_ > 1;
    return $self->{VendorEquipmentType};
}
#===============================================================================


#===============================================================================
#            UserTracking accessor method.
#===============================================================================

sub UserTracking{
    my ($self, $newval) = @_;
    $self->{UserTracking} = $newval if @_ > 1;
    return $self->{UserTracking};
}
#===============================================================================


#===============================================================================
#            CanBeFRUed accessor method.
#===============================================================================

sub CanBeFRUed{
    my ($self, $newval) = @_;
    $self->{CanBeFRUed} = $newval if @_ > 1;
    return $self->{CanBeFRUed};
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
