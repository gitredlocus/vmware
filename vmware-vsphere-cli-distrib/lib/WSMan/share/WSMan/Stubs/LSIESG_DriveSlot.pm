package LSIESG_DriveSlot;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_Slot;
use strict;


@LSIESG_DriveSlot::ISA = qw(_Initializable CIM_Slot);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_Slot::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{Chassis_Tag} = undef;
    $self->{Drive_Tag} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            Chassis_Tag accessor method.
#===============================================================================

sub Chassis_Tag{
    my ($self, $newval) = @_;
    $self->{Chassis_Tag} = $newval if @_ > 1;
    return $self->{Chassis_Tag};
}
#===============================================================================


#===============================================================================
#            Drive_Tag accessor method.
#===============================================================================

sub Drive_Tag{
    my ($self, $newval) = @_;
    $self->{Drive_Tag} = $newval if @_ > 1;
    return $self->{Drive_Tag};
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
