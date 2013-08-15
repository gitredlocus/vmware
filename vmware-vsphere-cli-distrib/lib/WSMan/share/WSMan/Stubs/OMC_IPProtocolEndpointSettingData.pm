package OMC_IPProtocolEndpointSettingData;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_ElementSettingData;
use strict;


@OMC_IPProtocolEndpointSettingData::ISA = qw(_Initializable CIM_ElementSettingData);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_ElementSettingData::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{ManagedElement} = undef;
    $self->{SettingData} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            ManagedElement accessor method.
#===============================================================================

sub ManagedElement{
    my ($self, $newval) = @_;
    $self->{ManagedElement} = $newval if @_ > 1;
    return $self->{ManagedElement};
}
#===============================================================================


#===============================================================================
#            SettingData accessor method.
#===============================================================================

sub SettingData{
    my ($self, $newval) = @_;
    $self->{SettingData} = $newval if @_ > 1;
    return $self->{SettingData};
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
