package CIM_BootSourceSetting;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_SettingData;
use strict;


@CIM_BootSourceSetting::ISA = qw(_Initializable CIM_SettingData);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_SettingData::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{BootString} = undef;
    $self->{BIOSBootString} = undef;
    $self->{StructuredBootString} = undef;
    $self->{FailThroughSupported} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            BootString accessor method.
#===============================================================================

sub BootString{
    my ($self, $newval) = @_;
    $self->{BootString} = $newval if @_ > 1;
    return $self->{BootString};
}
#===============================================================================


#===============================================================================
#            BIOSBootString accessor method.
#===============================================================================

sub BIOSBootString{
    my ($self, $newval) = @_;
    $self->{BIOSBootString} = $newval if @_ > 1;
    return $self->{BIOSBootString};
}
#===============================================================================


#===============================================================================
#            StructuredBootString accessor method.
#===============================================================================

sub StructuredBootString{
    my ($self, $newval) = @_;
    $self->{StructuredBootString} = $newval if @_ > 1;
    return $self->{StructuredBootString};
}
#===============================================================================


#===============================================================================
#            FailThroughSupported accessor method.
#===============================================================================

sub FailThroughSupported{
    my ($self, $newval) = @_;
    $self->{FailThroughSupported} = $newval if @_ > 1;
    return $self->{FailThroughSupported};
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
