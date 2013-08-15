package LSIESG_StorageConfigurationCapabilities;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_StorageConfigurationCapabilities;
use strict;


@LSIESG_StorageConfigurationCapabilities::ISA = qw(_Initializable CIM_StorageConfigurationCapabilities);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_StorageConfigurationCapabilities::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{ComputerSystem_Name} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            ComputerSystem_Name accessor method.
#===============================================================================

sub ComputerSystem_Name{
    my ($self, $newval) = @_;
    $self->{ComputerSystem_Name} = $newval if @_ > 1;
    return $self->{ComputerSystem_Name};
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
