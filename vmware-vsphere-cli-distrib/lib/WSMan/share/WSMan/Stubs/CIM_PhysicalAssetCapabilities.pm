package CIM_PhysicalAssetCapabilities;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_Capabilities;
use strict;


@CIM_PhysicalAssetCapabilities::ISA = qw(_Initializable CIM_Capabilities);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_Capabilities::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{FRUInfoSupported} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            FRUInfoSupported accessor method.
#===============================================================================

sub FRUInfoSupported{
    my ($self, $newval) = @_;
    $self->{FRUInfoSupported} = $newval if @_ > 1;
    return $self->{FRUInfoSupported};
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
