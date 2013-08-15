package ELXHBA_PhysicalPackage;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_PhysicalPackage;
use strict;


@ELXHBA_PhysicalPackage::ISA = qw(_Initializable CIM_PhysicalPackage);


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
    $self->{BoardTemperature} = undef;
    $self->{TemperatureUnit} = undef;
    $self->{VendorSpecID} = undef;
    $self->{DeviceID} = undef;
    $self->{ModelID} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            BoardTemperature accessor method.
#===============================================================================

sub BoardTemperature{
    my ($self, $newval) = @_;
    $self->{BoardTemperature} = $newval if @_ > 1;
    return $self->{BoardTemperature};
}
#===============================================================================


#===============================================================================
#            TemperatureUnit accessor method.
#===============================================================================

sub TemperatureUnit{
    my ($self, $newval) = @_;
    $self->{TemperatureUnit} = $newval if @_ > 1;
    return $self->{TemperatureUnit};
}
#===============================================================================


#===============================================================================
#            VendorSpecID accessor method.
#===============================================================================

sub VendorSpecID{
    my ($self, $newval) = @_;
    $self->{VendorSpecID} = $newval if @_ > 1;
    return $self->{VendorSpecID};
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
#            ModelID accessor method.
#===============================================================================

sub ModelID{
    my ($self, $newval) = @_;
    $self->{ModelID} = $newval if @_ > 1;
    return $self->{ModelID};
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
