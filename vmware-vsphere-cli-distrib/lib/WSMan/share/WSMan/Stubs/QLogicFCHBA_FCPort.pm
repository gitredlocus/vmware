package QLogicFCHBA_FCPort;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_FCPort;
use strict;


@QLogicFCHBA_FCPort::ISA = qw(_Initializable CIM_FCPort);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_FCPort::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{DeviceNumber} = undef;
    $self->{DeviceStatus} = undef;
    $self->{Model} = undef;
    $self->{VPDData} = undef;
    $self->{OptionROMVersions} = undef;
    $self->{SpeedDescription} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            DeviceNumber accessor method.
#===============================================================================

sub DeviceNumber{
    my ($self, $newval) = @_;
    $self->{DeviceNumber} = $newval if @_ > 1;
    return $self->{DeviceNumber};
}
#===============================================================================


#===============================================================================
#            DeviceStatus accessor method.
#===============================================================================

sub DeviceStatus{
    my ($self, $newval) = @_;
    $self->{DeviceStatus} = $newval if @_ > 1;
    return $self->{DeviceStatus};
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
#            VPDData accessor method.
#===============================================================================

sub VPDData{
    my ($self, $newval) = @_;
    $self->{VPDData} = $newval if @_ > 1;
    return $self->{VPDData};
}
#===============================================================================


#===============================================================================
#            OptionROMVersions accessor method.
#===============================================================================

sub OptionROMVersions{
    my ($self, $newval) = @_;
    $self->{OptionROMVersions} = $newval if @_ > 1;
    return $self->{OptionROMVersions};
}
#===============================================================================


#===============================================================================
#            SpeedDescription accessor method.
#===============================================================================

sub SpeedDescription{
    my ($self, $newval) = @_;
    $self->{SpeedDescription} = $newval if @_ > 1;
    return $self->{SpeedDescription};
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
