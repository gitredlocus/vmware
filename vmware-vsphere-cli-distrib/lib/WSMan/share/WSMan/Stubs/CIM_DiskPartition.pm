package CIM_DiskPartition;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_GenericDiskPartition;
use strict;


@CIM_DiskPartition::ISA = qw(_Initializable CIM_GenericDiskPartition);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_GenericDiskPartition::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{PrimaryPartition} = undef;
    $self->{PartitionType} = undef;
    $self->{PartitionSubtype} = undef;
    $self->{NameFormat} = undef;
    $self->{NameNamespace} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            PrimaryPartition accessor method.
#===============================================================================

sub PrimaryPartition{
    my ($self, $newval) = @_;
    $self->{PrimaryPartition} = $newval if @_ > 1;
    return $self->{PrimaryPartition};
}
#===============================================================================


#===============================================================================
#            PartitionType accessor method.
#===============================================================================

sub PartitionType{
    my ($self, $newval) = @_;
    $self->{PartitionType} = $newval if @_ > 1;
    return $self->{PartitionType};
}
#===============================================================================


#===============================================================================
#            PartitionSubtype accessor method.
#===============================================================================

sub PartitionSubtype{
    my ($self, $newval) = @_;
    $self->{PartitionSubtype} = $newval if @_ > 1;
    return $self->{PartitionSubtype};
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
#           epr_name accessor method.
#===============================================================================

sub epr_name{
    my ($self, $newval) = @_;
    $self->{epr_name} = $newval if @_ > 1;
    return $self->{epr_name};
}
#===============================================================================


1;
