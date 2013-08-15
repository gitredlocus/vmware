package LSIESG_ImportableStorageCapabilities;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_Capabilities;
use strict;


@LSIESG_ImportableStorageCapabilities::ISA = qw(_Initializable CIM_Capabilities);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_Capabilities::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{ImportSettingsSupported} = undef;
    $self->{ConfigurationMethodsSupported} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            ImportSettingsSupported accessor method.
#===============================================================================

sub ImportSettingsSupported{
    my ($self, $newval) = @_;
    $self->{ImportSettingsSupported} = $newval if @_ > 1;
    return $self->{ImportSettingsSupported};
}
#===============================================================================


#===============================================================================
#            ConfigurationMethodsSupported accessor method.
#===============================================================================

sub ConfigurationMethodsSupported{
    my ($self, $newval) = @_;
    $self->{ConfigurationMethodsSupported} = $newval if @_ > 1;
    return $self->{ConfigurationMethodsSupported};
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
