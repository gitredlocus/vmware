package CIM_ResourcePool;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_LogicalElement;
use strict;


@CIM_ResourcePool::ISA = qw(_Initializable CIM_LogicalElement);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_LogicalElement::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{InstanceID} = undef;
    $self->{PoolID} = undef;
    $self->{Primordial} = undef;
    $self->{Capacity} = undef;
    $self->{Reserved} = undef;
    $self->{ResourceType} = undef;
    $self->{OtherResourceType} = undef;
    $self->{ResourceSubType} = undef;
    $self->{AllocationUnits} = undef;
    $self->{epr_name} = undef;  
    push @{$self->{id_keys}}, 'InstanceID';
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            InstanceID accessor method.
#===============================================================================

sub InstanceID{
    my ($self, $newval) = @_;
    $self->{InstanceID} = $newval if @_ > 1;
    return $self->{InstanceID};
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
#            Primordial accessor method.
#===============================================================================

sub Primordial{
    my ($self, $newval) = @_;
    $self->{Primordial} = $newval if @_ > 1;
    return $self->{Primordial};
}
#===============================================================================


#===============================================================================
#            Capacity accessor method.
#===============================================================================

sub Capacity{
    my ($self, $newval) = @_;
    $self->{Capacity} = $newval if @_ > 1;
    return $self->{Capacity};
}
#===============================================================================


#===============================================================================
#            Reserved accessor method.
#===============================================================================

sub Reserved{
    my ($self, $newval) = @_;
    $self->{Reserved} = $newval if @_ > 1;
    return $self->{Reserved};
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
#            AllocationUnits accessor method.
#===============================================================================

sub AllocationUnits{
    my ($self, $newval) = @_;
    $self->{AllocationUnits} = $newval if @_ > 1;
    return $self->{AllocationUnits};
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
