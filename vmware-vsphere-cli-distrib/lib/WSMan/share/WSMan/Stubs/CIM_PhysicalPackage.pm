package CIM_PhysicalPackage;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_PhysicalElement;
use strict;


@CIM_PhysicalPackage::ISA = qw(_Initializable CIM_PhysicalElement);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_PhysicalElement::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{RemovalConditions} = undef;
    $self->{Removable} = undef;
    $self->{Replaceable} = undef;
    $self->{HotSwappable} = undef;
    $self->{Height} = undef;
    $self->{Depth} = undef;
    $self->{Width} = undef;
    $self->{Weight} = undef;
    $self->{PackageType} = undef;
    $self->{OtherPackageType} = undef;
    $self->{VendorCompatibilityStrings} = undef;
    $self->{epr_name} = undef;  
    $self->{invokableMethods}->{IsCompatible} = { input => ['ElementToCheck'], output => [] };
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
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
#            Removable accessor method.
#===============================================================================

sub Removable{
    my ($self, $newval) = @_;
    $self->{Removable} = $newval if @_ > 1;
    return $self->{Removable};
}
#===============================================================================


#===============================================================================
#            Replaceable accessor method.
#===============================================================================

sub Replaceable{
    my ($self, $newval) = @_;
    $self->{Replaceable} = $newval if @_ > 1;
    return $self->{Replaceable};
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
#            Height accessor method.
#===============================================================================

sub Height{
    my ($self, $newval) = @_;
    $self->{Height} = $newval if @_ > 1;
    return $self->{Height};
}
#===============================================================================


#===============================================================================
#            Depth accessor method.
#===============================================================================

sub Depth{
    my ($self, $newval) = @_;
    $self->{Depth} = $newval if @_ > 1;
    return $self->{Depth};
}
#===============================================================================


#===============================================================================
#            Width accessor method.
#===============================================================================

sub Width{
    my ($self, $newval) = @_;
    $self->{Width} = $newval if @_ > 1;
    return $self->{Width};
}
#===============================================================================


#===============================================================================
#            Weight accessor method.
#===============================================================================

sub Weight{
    my ($self, $newval) = @_;
    $self->{Weight} = $newval if @_ > 1;
    return $self->{Weight};
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
#            OtherPackageType accessor method.
#===============================================================================

sub OtherPackageType{
    my ($self, $newval) = @_;
    $self->{OtherPackageType} = $newval if @_ > 1;
    return $self->{OtherPackageType};
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
#           epr_name accessor method.
#===============================================================================

sub epr_name{
    my ($self, $newval) = @_;
    $self->{epr_name} = $newval if @_ > 1;
    return $self->{epr_name};
}
#===============================================================================


1;
