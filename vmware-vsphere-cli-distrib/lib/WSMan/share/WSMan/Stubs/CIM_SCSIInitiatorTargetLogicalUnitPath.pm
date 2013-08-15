package CIM_SCSIInitiatorTargetLogicalUnitPath;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_InitiatorTargetLogicalUnitPath;
use strict;


@CIM_SCSIInitiatorTargetLogicalUnitPath::ISA = qw(_Initializable CIM_InitiatorTargetLogicalUnitPath);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_InitiatorTargetLogicalUnitPath::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{OSDeviceName} = undef;
    $self->{AdministrativeWeight} = undef;
    $self->{AdministrativeOverride} = undef;
    $self->{LogicalUnitNumber} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            OSDeviceName accessor method.
#===============================================================================

sub OSDeviceName{
    my ($self, $newval) = @_;
    $self->{OSDeviceName} = $newval if @_ > 1;
    return $self->{OSDeviceName};
}
#===============================================================================


#===============================================================================
#            AdministrativeWeight accessor method.
#===============================================================================

sub AdministrativeWeight{
    my ($self, $newval) = @_;
    $self->{AdministrativeWeight} = $newval if @_ > 1;
    return $self->{AdministrativeWeight};
}
#===============================================================================


#===============================================================================
#            AdministrativeOverride accessor method.
#===============================================================================

sub AdministrativeOverride{
    my ($self, $newval) = @_;
    $self->{AdministrativeOverride} = $newval if @_ > 1;
    return $self->{AdministrativeOverride};
}
#===============================================================================


#===============================================================================
#            LogicalUnitNumber accessor method.
#===============================================================================

sub LogicalUnitNumber{
    my ($self, $newval) = @_;
    $self->{LogicalUnitNumber} = $newval if @_ > 1;
    return $self->{LogicalUnitNumber};
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
