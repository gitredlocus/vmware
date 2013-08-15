package LSIESG_PhysicalAssetCapabilities;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_PhysicalAssetCapabilities;
use strict;


@LSIESG_PhysicalAssetCapabilities::ISA = qw(_Initializable CIM_PhysicalAssetCapabilities);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_PhysicalAssetCapabilities::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{Card_Tag} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            Card_Tag accessor method.
#===============================================================================

sub Card_Tag{
    my ($self, $newval) = @_;
    $self->{Card_Tag} = $newval if @_ > 1;
    return $self->{Card_Tag};
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
