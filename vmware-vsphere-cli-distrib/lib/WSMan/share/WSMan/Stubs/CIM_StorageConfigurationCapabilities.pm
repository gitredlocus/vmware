package CIM_StorageConfigurationCapabilities;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_Capabilities;
use strict;


@CIM_StorageConfigurationCapabilities::ISA = qw(_Initializable CIM_Capabilities);


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
    $self->{SupportedStorageElementTypes} = undef;
    $self->{SupportedStoragePoolFeatures} = undef;
    $self->{SupportedStorageElementFeatures} = undef;
    $self->{SupportedCopyTypes} = undef;
    $self->{InitialReplicationState} = undef;
    $self->{SupportedStorageElementUsage} = undef;
    $self->{ClientSettableElementUsage} = undef;
    $self->{SupportedStoragePoolUsage} = undef;
    $self->{ClientSettablePoolUsage} = undef;
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
#            SupportedStorageElementTypes accessor method.
#===============================================================================

sub SupportedStorageElementTypes{
    my ($self, $newval) = @_;
    $self->{SupportedStorageElementTypes} = $newval if @_ > 1;
    return $self->{SupportedStorageElementTypes};
}
#===============================================================================


#===============================================================================
#            SupportedStoragePoolFeatures accessor method.
#===============================================================================

sub SupportedStoragePoolFeatures{
    my ($self, $newval) = @_;
    $self->{SupportedStoragePoolFeatures} = $newval if @_ > 1;
    return $self->{SupportedStoragePoolFeatures};
}
#===============================================================================


#===============================================================================
#            SupportedStorageElementFeatures accessor method.
#===============================================================================

sub SupportedStorageElementFeatures{
    my ($self, $newval) = @_;
    $self->{SupportedStorageElementFeatures} = $newval if @_ > 1;
    return $self->{SupportedStorageElementFeatures};
}
#===============================================================================


#===============================================================================
#            SupportedCopyTypes accessor method.
#===============================================================================

sub SupportedCopyTypes{
    my ($self, $newval) = @_;
    $self->{SupportedCopyTypes} = $newval if @_ > 1;
    return $self->{SupportedCopyTypes};
}
#===============================================================================


#===============================================================================
#            InitialReplicationState accessor method.
#===============================================================================

sub InitialReplicationState{
    my ($self, $newval) = @_;
    $self->{InitialReplicationState} = $newval if @_ > 1;
    return $self->{InitialReplicationState};
}
#===============================================================================


#===============================================================================
#            SupportedStorageElementUsage accessor method.
#===============================================================================

sub SupportedStorageElementUsage{
    my ($self, $newval) = @_;
    $self->{SupportedStorageElementUsage} = $newval if @_ > 1;
    return $self->{SupportedStorageElementUsage};
}
#===============================================================================


#===============================================================================
#            ClientSettableElementUsage accessor method.
#===============================================================================

sub ClientSettableElementUsage{
    my ($self, $newval) = @_;
    $self->{ClientSettableElementUsage} = $newval if @_ > 1;
    return $self->{ClientSettableElementUsage};
}
#===============================================================================


#===============================================================================
#            SupportedStoragePoolUsage accessor method.
#===============================================================================

sub SupportedStoragePoolUsage{
    my ($self, $newval) = @_;
    $self->{SupportedStoragePoolUsage} = $newval if @_ > 1;
    return $self->{SupportedStoragePoolUsage};
}
#===============================================================================


#===============================================================================
#            ClientSettablePoolUsage accessor method.
#===============================================================================

sub ClientSettablePoolUsage{
    my ($self, $newval) = @_;
    $self->{ClientSettablePoolUsage} = $newval if @_ > 1;
    return $self->{ClientSettablePoolUsage};
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
