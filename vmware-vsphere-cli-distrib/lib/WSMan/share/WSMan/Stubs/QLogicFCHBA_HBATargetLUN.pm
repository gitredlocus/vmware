package QLogicFCHBA_HBATargetLUN;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_SCSIInitiatorTargetLogicalUnitPath;
use strict;


@QLogicFCHBA_HBATargetLUN::ISA = qw(_Initializable CIM_SCSIInitiatorTargetLogicalUnitPath);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_SCSIInitiatorTargetLogicalUnitPath::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{Initiator} = undef;
    $self->{Target} = undef;
    $self->{LogicalUnit} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            Initiator accessor method.
#===============================================================================

sub Initiator{
    my ($self, $newval) = @_;
    $self->{Initiator} = $newval if @_ > 1;
    return $self->{Initiator};
}
#===============================================================================


#===============================================================================
#            Target accessor method.
#===============================================================================

sub Target{
    my ($self, $newval) = @_;
    $self->{Target} = $newval if @_ > 1;
    return $self->{Target};
}
#===============================================================================


#===============================================================================
#            LogicalUnit accessor method.
#===============================================================================

sub LogicalUnit{
    my ($self, $newval) = @_;
    $self->{LogicalUnit} = $newval if @_ > 1;
    return $self->{LogicalUnit};
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
