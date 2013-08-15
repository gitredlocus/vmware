package SNIA_ErasureSetting;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_SettingData;
use strict;


@SNIA_ErasureSetting::ISA = qw(_Initializable CIM_SettingData);


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
    $self->{ErasureMethod} = undef;
    $self->{EraseOnReturnToPool} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            ErasureMethod accessor method.
#===============================================================================

sub ErasureMethod{
    my ($self, $newval) = @_;
    $self->{ErasureMethod} = $newval if @_ > 1;
    return $self->{ErasureMethod};
}
#===============================================================================


#===============================================================================
#            EraseOnReturnToPool accessor method.
#===============================================================================

sub EraseOnReturnToPool{
    my ($self, $newval) = @_;
    $self->{EraseOnReturnToPool} = $newval if @_ > 1;
    return $self->{EraseOnReturnToPool};
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
