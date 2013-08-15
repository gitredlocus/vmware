package OMC_SSHEndpointElementSettingData;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::OMC_SSHElementSettingData;
use strict;


@OMC_SSHEndpointElementSettingData::ISA = qw(_Initializable OMC_SSHElementSettingData);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->OMC_SSHElementSettingData::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{ManagedElement} = undef;
    $self->{SettingData} = undef;
    $self->{epr_name} = undef;  
    push @{$self->{id_keys}}, 'ManagedElement';
    push @{$self->{id_keys}}, 'SettingData';
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
