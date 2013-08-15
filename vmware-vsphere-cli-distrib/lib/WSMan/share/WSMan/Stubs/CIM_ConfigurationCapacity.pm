package CIM_ConfigurationCapacity;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_PhysicalCapacity;
use strict;


@CIM_ConfigurationCapacity::ISA = qw(_Initializable CIM_PhysicalCapacity);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_PhysicalCapacity::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{Name} = undef;
    $self->{ObjectType} = undef;
    $self->{OtherTypeDescription} = undef;
    $self->{MinimumCapacity} = undef;
    $self->{MaximumCapacity} = undef;
    $self->{Increment} = undef;
    $self->{VendorCompatibilityStrings} = undef;
    $self->{epr_name} = undef;  
    push @{$self->{id_keys}}, 'Name';
    push @{$self->{id_keys}}, 'ObjectType';
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
#            ObjectType accessor method.
#===============================================================================

sub ObjectType{
    my ($self, $newval) = @_;
    $self->{ObjectType} = $newval if @_ > 1;
    return $self->{ObjectType};
}
#===============================================================================


#===============================================================================
#            OtherTypeDescription accessor method.
#===============================================================================

sub OtherTypeDescription{
    my ($self, $newval) = @_;
    $self->{OtherTypeDescription} = $newval if @_ > 1;
    return $self->{OtherTypeDescription};
}
#===============================================================================


#===============================================================================
#            MinimumCapacity accessor method.
#===============================================================================

sub MinimumCapacity{
    my ($self, $newval) = @_;
    $self->{MinimumCapacity} = $newval if @_ > 1;
    return $self->{MinimumCapacity};
}
#===============================================================================


#===============================================================================
#            MaximumCapacity accessor method.
#===============================================================================

sub MaximumCapacity{
    my ($self, $newval) = @_;
    $self->{MaximumCapacity} = $newval if @_ > 1;
    return $self->{MaximumCapacity};
}
#===============================================================================


#===============================================================================
#            Increment accessor method.
#===============================================================================

sub Increment{
    my ($self, $newval) = @_;
    $self->{Increment} = $newval if @_ > 1;
    return $self->{Increment};
}
#===============================================================================


#===============================================================================
#            VendorCompatibilityStrings accessor method.
#===============================================================================

sub VendorCompatibilityStrings{
    my ($self, $newval) = @_;
    $self->{VendorCompatibilityStrings} = $newval if @_ > 1;
    return $self->{VendorCompatibilityStrings};
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
