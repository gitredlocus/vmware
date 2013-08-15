package ELXHBA_CEEDriverParameter;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_SettingData;
use strict;


@ELXHBA_CEEDriverParameter::ISA = qw(_Initializable CIM_SettingData);


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
    $self->{Paramname} = undef;
    $self->{Configured} = undef;
    $self->{Current} = undef;
    $self->{lowRange} = undef;
    $self->{highRange} = undef;
    $self->{ParamConfigOptions} = undef;
    $self->{ParamConfigOptionValues} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            Paramname accessor method.
#===============================================================================

sub Paramname{
    my ($self, $newval) = @_;
    $self->{Paramname} = $newval if @_ > 1;
    return $self->{Paramname};
}
#===============================================================================


#===============================================================================
#            Configured accessor method.
#===============================================================================

sub Configured{
    my ($self, $newval) = @_;
    $self->{Configured} = $newval if @_ > 1;
    return $self->{Configured};
}
#===============================================================================


#===============================================================================
#            Current accessor method.
#===============================================================================

sub Current{
    my ($self, $newval) = @_;
    $self->{Current} = $newval if @_ > 1;
    return $self->{Current};
}
#===============================================================================


#===============================================================================
#            lowRange accessor method.
#===============================================================================

sub lowRange{
    my ($self, $newval) = @_;
    $self->{lowRange} = $newval if @_ > 1;
    return $self->{lowRange};
}
#===============================================================================


#===============================================================================
#            highRange accessor method.
#===============================================================================

sub highRange{
    my ($self, $newval) = @_;
    $self->{highRange} = $newval if @_ > 1;
    return $self->{highRange};
}
#===============================================================================


#===============================================================================
#            ParamConfigOptions accessor method.
#===============================================================================

sub ParamConfigOptions{
    my ($self, $newval) = @_;
    $self->{ParamConfigOptions} = $newval if @_ > 1;
    return $self->{ParamConfigOptions};
}
#===============================================================================


#===============================================================================
#            ParamConfigOptionValues accessor method.
#===============================================================================

sub ParamConfigOptionValues{
    my ($self, $newval) = @_;
    $self->{ParamConfigOptionValues} = $newval if @_ > 1;
    return $self->{ParamConfigOptionValues};
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
