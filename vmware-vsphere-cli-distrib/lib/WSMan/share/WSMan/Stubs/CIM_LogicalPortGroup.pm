package CIM_LogicalPortGroup;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_SystemSpecificCollection;
use strict;


@CIM_LogicalPortGroup::ISA = qw(_Initializable CIM_SystemSpecificCollection);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_SystemSpecificCollection::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{Name} = undef;
    $self->{NameFormat} = undef;
    $self->{OtherNameFormat} = undef;
    $self->{epr_name} = undef;  
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
#            NameFormat accessor method.
#===============================================================================

sub NameFormat{
    my ($self, $newval) = @_;
    $self->{NameFormat} = $newval if @_ > 1;
    return $self->{NameFormat};
}
#===============================================================================


#===============================================================================
#            OtherNameFormat accessor method.
#===============================================================================

sub OtherNameFormat{
    my ($self, $newval) = @_;
    $self->{OtherNameFormat} = $newval if @_ > 1;
    return $self->{OtherNameFormat};
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
