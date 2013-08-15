package LSIESG_SpareConfigurationService;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::SNIA_SpareConfigurationService;
use strict;


@LSIESG_SpareConfigurationService::ISA = qw(_Initializable SNIA_SpareConfigurationService);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->SNIA_SpareConfigurationService::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{epr_name} = undef;  
    $self->{invokableMethods}->{CheckParityConsistency} = { input => ['Target'], output => ['Job'] };
    $self->{invokableMethods}->{UnassignSpares} = { input => ['InPool', 'InExtents'], output => ['Job'] };
    $self->{invokableMethods}->{RebuildStorageExtent} = { input => ['Target'], output => ['Job'] };
    $self->{invokableMethods}->{CheckStorageElement} = { input => ['CheckType', 'CheckMode'], output => [] };
    $self->{invokableMethods}->{RepairParity} = { input => ['Target'], output => ['Job'] };
    $self->{invokableMethods}->{AssignSpares} = { input => ['InPool', 'InExtents', 'RedundancySet'], output => ['Job'] };
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
