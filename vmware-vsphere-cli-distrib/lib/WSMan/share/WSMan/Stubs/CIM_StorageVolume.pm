package CIM_StorageVolume;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_StorageExtent;
use strict;


@CIM_StorageVolume::ISA = qw(_Initializable CIM_StorageExtent);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_StorageExtent::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{Name} = undef;
    $self->{NameFormat} = undef;
    $self->{NameNamespace} = undef;
    $self->{Usage} = undef;
    $self->{OtherUsageDescription} = undef;
    $self->{ClientSettableUsage} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            Name accessor method.
#===============================================================================

sub Name{
    my ($self, $newval) = @_;
    $self->{Name} = $newval if @_ > 1;
    return $self->{Name};
}
#===============================================================================


#===============================================================================
#            NameFormat accessor method.
#===============================================================================

sub NameFormat{
    my ($self, $newval) = @_;
    $self->{NameFormat} = $newval if @_ > 1;
    return $self->{NameFormat};
}
#===============================================================================


#===============================================================================
#            NameNamespace accessor method.
#===============================================================================

sub NameNamespace{
    my ($self, $newval) = @_;
    $self->{NameNamespace} = $newval if @_ > 1;
    return $self->{NameNamespace};
}
#===============================================================================


#===============================================================================
#            Usage accessor method.
#===============================================================================

sub Usage{
    my ($self, $newval) = @_;
    $self->{Usage} = $newval if @_ > 1;
    return $self->{Usage};
}
#===============================================================================


#===============================================================================
#            OtherUsageDescription accessor method.
#===============================================================================

sub OtherUsageDescription{
    my ($self, $newval) = @_;
    $self->{OtherUsageDescription} = $newval if @_ > 1;
    return $self->{OtherUsageDescription};
}
#===============================================================================


#===============================================================================
#            ClientSettableUsage accessor method.
#===============================================================================

sub ClientSettableUsage{
    my ($self, $newval) = @_;
    $self->{ClientSettableUsage} = $newval if @_ > 1;
    return $self->{ClientSettableUsage};
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
