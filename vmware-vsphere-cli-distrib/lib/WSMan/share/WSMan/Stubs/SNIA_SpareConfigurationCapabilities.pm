package SNIA_SpareConfigurationCapabilities;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_Capabilities;
use strict;


@SNIA_SpareConfigurationCapabilities::ISA = qw(_Initializable CIM_Capabilities);


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
    $self->{SupportedAsynchronousActions} = undef;
    $self->{SupportedSynchronousActions} = undef;
    $self->{SystemConfiguredSpares} = undef;
    $self->{AutomaticFailOver} = undef;
    $self->{MaximumSpareStorageExtents} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            SupportedAsynchronousActions accessor method.
#===============================================================================

sub SupportedAsynchronousActions{
    my ($self, $newval) = @_;
    $self->{SupportedAsynchronousActions} = $newval if @_ > 1;
    return $self->{SupportedAsynchronousActions};
}
#===============================================================================


#===============================================================================
#            SupportedSynchronousActions accessor method.
#===============================================================================

sub SupportedSynchronousActions{
    my ($self, $newval) = @_;
    $self->{SupportedSynchronousActions} = $newval if @_ > 1;
    return $self->{SupportedSynchronousActions};
}
#===============================================================================


#===============================================================================
#            SystemConfiguredSpares accessor method.
#===============================================================================

sub SystemConfiguredSpares{
    my ($self, $newval) = @_;
    $self->{SystemConfiguredSpares} = $newval if @_ > 1;
    return $self->{SystemConfiguredSpares};
}
#===============================================================================


#===============================================================================
#            AutomaticFailOver accessor method.
#===============================================================================

sub AutomaticFailOver{
    my ($self, $newval) = @_;
    $self->{AutomaticFailOver} = $newval if @_ > 1;
    return $self->{AutomaticFailOver};
}
#===============================================================================


#===============================================================================
#            MaximumSpareStorageExtents accessor method.
#===============================================================================

sub MaximumSpareStorageExtents{
    my ($self, $newval) = @_;
    $self->{MaximumSpareStorageExtents} = $newval if @_ > 1;
    return $self->{MaximumSpareStorageExtents};
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
