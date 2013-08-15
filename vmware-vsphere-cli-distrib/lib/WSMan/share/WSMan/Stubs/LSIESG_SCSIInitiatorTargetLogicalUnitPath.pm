package LSIESG_SCSIInitiatorTargetLogicalUnitPath;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_SCSIInitiatorTargetLogicalUnitPath;
use strict;


@LSIESG_SCSIInitiatorTargetLogicalUnitPath::ISA = qw(_Initializable CIM_SCSIInitiatorTargetLogicalUnitPath);


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
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
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
