package OMC_ProcessorChip;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_Chip;
use strict;


@OMC_ProcessorChip::ISA = qw(_Initializable CIM_Chip);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_Chip::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{CanBeFRUed} = undef;
    $self->{Caption} = undef;
    $self->{CreationClassName} = undef;
    $self->{ElementName} = undef;
    $self->{Manufacturer} = undef;
    $self->{OperationalStatus} = undef;
    $self->{RemovalConditions} = undef;
    $self->{StatusDescriptions} = undef;
    $self->{Tag} = undef;
    $self->{Version} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            CanBeFRUed accessor method.
#===============================================================================

sub CanBeFRUed{
    my ($self, $newval) = @_;
    $self->{CanBeFRUed} = $newval if @_ > 1;
    return $self->{CanBeFRUed};
}
#===============================================================================


#===============================================================================
#            Caption accessor method.
#===============================================================================

sub Caption{
    my ($self, $newval) = @_;
    $self->{Caption} = $newval if @_ > 1;
    return $self->{Caption};
}
#===============================================================================


#===============================================================================
#            CreationClassName accessor method.
#===============================================================================

sub CreationClassName{
    my ($self, $newval) = @_;
    $self->{CreationClassName} = $newval if @_ > 1;
    return $self->{CreationClassName};
}
#===============================================================================


#===============================================================================
#            ElementName accessor method.
#===============================================================================

sub ElementName{
    my ($self, $newval) = @_;
    $self->{ElementName} = $newval if @_ > 1;
    return $self->{ElementName};
}
#===============================================================================


#===============================================================================
#            Manufacturer accessor method.
#===============================================================================

sub Manufacturer{
    my ($self, $newval) = @_;
    $self->{Manufacturer} = $newval if @_ > 1;
    return $self->{Manufacturer};
}
#===============================================================================


#===============================================================================
#            OperationalStatus accessor method.
#===============================================================================

sub OperationalStatus{
    my ($self, $newval) = @_;
    $self->{OperationalStatus} = $newval if @_ > 1;
    return $self->{OperationalStatus};
}
#===============================================================================


#===============================================================================
#            RemovalConditions accessor method.
#===============================================================================

sub RemovalConditions{
    my ($self, $newval) = @_;
    $self->{RemovalConditions} = $newval if @_ > 1;
    return $self->{RemovalConditions};
}
#===============================================================================


#===============================================================================
#            StatusDescriptions accessor method.
#===============================================================================

sub StatusDescriptions{
    my ($self, $newval) = @_;
    $self->{StatusDescriptions} = $newval if @_ > 1;
    return $self->{StatusDescriptions};
}
#===============================================================================


#===============================================================================
#            Tag accessor method.
#===============================================================================

sub Tag{
    my ($self, $newval) = @_;
    $self->{Tag} = $newval if @_ > 1;
    return $self->{Tag};
}
#===============================================================================


#===============================================================================
#            Version accessor method.
#===============================================================================

sub Version{
    my ($self, $newval) = @_;
    $self->{Version} = $newval if @_ > 1;
    return $self->{Version};
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
