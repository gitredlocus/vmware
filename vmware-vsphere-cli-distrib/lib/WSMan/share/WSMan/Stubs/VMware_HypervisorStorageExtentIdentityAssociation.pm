package VMware_HypervisorStorageExtentIdentityAssociation;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_LogicalIdentity;
use strict;


@VMware_HypervisorStorageExtentIdentityAssociation::ISA = qw(_Initializable CIM_LogicalIdentity);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_LogicalIdentity::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{SameElement} = undef;
    $self->{SystemElement} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            SameElement accessor method.
#===============================================================================

sub SameElement{
    my ($self, $newval) = @_;
    $self->{SameElement} = $newval if @_ > 1;
    return $self->{SameElement};
}
#===============================================================================


#===============================================================================
#            SystemElement accessor method.
#===============================================================================

sub SystemElement{
    my ($self, $newval) = @_;
    $self->{SystemElement} = $newval if @_ > 1;
    return $self->{SystemElement};
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
