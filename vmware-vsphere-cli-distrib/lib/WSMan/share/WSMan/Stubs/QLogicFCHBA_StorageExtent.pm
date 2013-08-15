package QLogicFCHBA_StorageExtent;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_StorageExtent;
use strict;


@QLogicFCHBA_StorageExtent::ISA = qw(_Initializable CIM_StorageExtent);


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
    $self->{LunID} = undef;
    $self->{VendorID} = undef;
    $self->{ProductID} = undef;
    $self->{Revision} = undef;
    $self->{RaidType} = undef;
    $self->{NumberOfPartitions} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            LunID accessor method.
#===============================================================================

sub LunID{
    my ($self, $newval) = @_;
    $self->{LunID} = $newval if @_ > 1;
    return $self->{LunID};
}
#===============================================================================


#===============================================================================
#            VendorID accessor method.
#===============================================================================

sub VendorID{
    my ($self, $newval) = @_;
    $self->{VendorID} = $newval if @_ > 1;
    return $self->{VendorID};
}
#===============================================================================


#===============================================================================
#            ProductID accessor method.
#===============================================================================

sub ProductID{
    my ($self, $newval) = @_;
    $self->{ProductID} = $newval if @_ > 1;
    return $self->{ProductID};
}
#===============================================================================


#===============================================================================
#            Revision accessor method.
#===============================================================================

sub Revision{
    my ($self, $newval) = @_;
    $self->{Revision} = $newval if @_ > 1;
    return $self->{Revision};
}
#===============================================================================


#===============================================================================
#            RaidType accessor method.
#===============================================================================

sub RaidType{
    my ($self, $newval) = @_;
    $self->{RaidType} = $newval if @_ > 1;
    return $self->{RaidType};
}
#===============================================================================


#===============================================================================
#            NumberOfPartitions accessor method.
#===============================================================================

sub NumberOfPartitions{
    my ($self, $newval) = @_;
    $self->{NumberOfPartitions} = $newval if @_ > 1;
    return $self->{NumberOfPartitions};
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
