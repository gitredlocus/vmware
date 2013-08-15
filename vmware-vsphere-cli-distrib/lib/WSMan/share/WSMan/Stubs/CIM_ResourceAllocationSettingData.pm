package CIM_ResourceAllocationSettingData;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_SettingData;
use strict;


@CIM_ResourceAllocationSettingData::ISA = qw(_Initializable CIM_SettingData);


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
    $self->{ResourceType} = undef;
    $self->{OtherResourceType} = undef;
    $self->{ResourceSubType} = undef;
    $self->{PoolID} = undef;
    $self->{ConsumerVisibility} = undef;
    $self->{HostResource} = undef;
    $self->{AllocationUnits} = undef;
    $self->{VirtualQuantity} = undef;
    $self->{Reservation} = undef;
    $self->{Limit} = undef;
    $self->{Weight} = undef;
    $self->{AutomaticAllocation} = undef;
    $self->{AutomaticDeallocation} = undef;
    $self->{Parent} = undef;
    $self->{Connection} = undef;
    $self->{Address} = undef;
    $self->{MappingBehavior} = undef;
    $self->{AddressOnParent} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            ResourceType accessor method.
#===============================================================================

sub ResourceType{
    my ($self, $newval) = @_;
    $self->{ResourceType} = $newval if @_ > 1;
    return $self->{ResourceType};
}
#===============================================================================


#===============================================================================
#            OtherResourceType accessor method.
#===============================================================================

sub OtherResourceType{
    my ($self, $newval) = @_;
    $self->{OtherResourceType} = $newval if @_ > 1;
    return $self->{OtherResourceType};
}
#===============================================================================


#===============================================================================
#            ResourceSubType accessor method.
#===============================================================================

sub ResourceSubType{
    my ($self, $newval) = @_;
    $self->{ResourceSubType} = $newval if @_ > 1;
    return $self->{ResourceSubType};
}
#===============================================================================


#===============================================================================
#            PoolID accessor method.
#===============================================================================

sub PoolID{
    my ($self, $newval) = @_;
    $self->{PoolID} = $newval if @_ > 1;
    return $self->{PoolID};
}
#===============================================================================


#===============================================================================
#            ConsumerVisibility accessor method.
#===============================================================================

sub ConsumerVisibility{
    my ($self, $newval) = @_;
    $self->{ConsumerVisibility} = $newval if @_ > 1;
    return $self->{ConsumerVisibility};
}
#===============================================================================


#===============================================================================
#            HostResource accessor method.
#===============================================================================

sub HostResource{
    my ($self, $newval) = @_;
    $self->{HostResource} = $newval if @_ > 1;
    return $self->{HostResource};
}
#===============================================================================


#===============================================================================
#            AllocationUnits accessor method.
#===============================================================================

sub AllocationUnits{
    my ($self, $newval) = @_;
    $self->{AllocationUnits} = $newval if @_ > 1;
    return $self->{AllocationUnits};
}
#===============================================================================


#===============================================================================
#            VirtualQuantity accessor method.
#===============================================================================

sub VirtualQuantity{
    my ($self, $newval) = @_;
    $self->{VirtualQuantity} = $newval if @_ > 1;
    return $self->{VirtualQuantity};
}
#===============================================================================


#===============================================================================
#            Reservation accessor method.
#===============================================================================

sub Reservation{
    my ($self, $newval) = @_;
    $self->{Reservation} = $newval if @_ > 1;
    return $self->{Reservation};
}
#===============================================================================


#===============================================================================
#            Limit accessor method.
#===============================================================================

sub Limit{
    my ($self, $newval) = @_;
    $self->{Limit} = $newval if @_ > 1;
    return $self->{Limit};
}
#===============================================================================


#===============================================================================
#            Weight accessor method.
#===============================================================================

sub Weight{
    my ($self, $newval) = @_;
    $self->{Weight} = $newval if @_ > 1;
    return $self->{Weight};
}
#===============================================================================


#===============================================================================
#            AutomaticAllocation accessor method.
#===============================================================================

sub AutomaticAllocation{
    my ($self, $newval) = @_;
    $self->{AutomaticAllocation} = $newval if @_ > 1;
    return $self->{AutomaticAllocation};
}
#===============================================================================


#===============================================================================
#            AutomaticDeallocation accessor method.
#===============================================================================

sub AutomaticDeallocation{
    my ($self, $newval) = @_;
    $self->{AutomaticDeallocation} = $newval if @_ > 1;
    return $self->{AutomaticDeallocation};
}
#===============================================================================


#===============================================================================
#            Parent accessor method.
#===============================================================================

sub Parent{
    my ($self, $newval) = @_;
    $self->{Parent} = $newval if @_ > 1;
    return $self->{Parent};
}
#===============================================================================


#===============================================================================
#            Connection accessor method.
#===============================================================================

sub Connection{
    my ($self, $newval) = @_;
    $self->{Connection} = $newval if @_ > 1;
    return $self->{Connection};
}
#===============================================================================


#===============================================================================
#            Address accessor method.
#===============================================================================

sub Address{
    my ($self, $newval) = @_;
    $self->{Address} = $newval if @_ > 1;
    return $self->{Address};
}
#===============================================================================


#===============================================================================
#            MappingBehavior accessor method.
#===============================================================================

sub MappingBehavior{
    my ($self, $newval) = @_;
    $self->{MappingBehavior} = $newval if @_ > 1;
    return $self->{MappingBehavior};
}
#===============================================================================


#===============================================================================
#            AddressOnParent accessor method.
#===============================================================================

sub AddressOnParent{
    my ($self, $newval) = @_;
    $self->{AddressOnParent} = $newval if @_ > 1;
    return $self->{AddressOnParent};
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
