package LSIESG_StorageSetting;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_StorageSetting;
use strict;


@LSIESG_StorageSetting::ISA = qw(_Initializable CIM_StorageSetting);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_StorageSetting::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{CacheUsage} = undef;
    $self->{ReadCacheUsage} = undef;
    $self->{WriteCacheUsage} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            CacheUsage accessor method.
#===============================================================================

sub CacheUsage{
    my ($self, $newval) = @_;
    $self->{CacheUsage} = $newval if @_ > 1;
    return $self->{CacheUsage};
}
#===============================================================================


#===============================================================================
#            ReadCacheUsage accessor method.
#===============================================================================

sub ReadCacheUsage{
    my ($self, $newval) = @_;
    $self->{ReadCacheUsage} = $newval if @_ > 1;
    return $self->{ReadCacheUsage};
}
#===============================================================================


#===============================================================================
#            WriteCacheUsage accessor method.
#===============================================================================

sub WriteCacheUsage{
    my ($self, $newval) = @_;
    $self->{WriteCacheUsage} = $newval if @_ > 1;
    return $self->{WriteCacheUsage};
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
