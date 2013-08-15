package CIM_DHCPCapabilities;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_EnabledLogicalElementCapabilities;
use strict;


@CIM_DHCPCapabilities::ISA = qw(_Initializable CIM_EnabledLogicalElementCapabilities);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_EnabledLogicalElementCapabilities::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{OptionsSupported} = undef;
    $self->{IPv6OptionsSupported} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            OptionsSupported accessor method.
#===============================================================================

sub OptionsSupported{
    my ($self, $newval) = @_;
    $self->{OptionsSupported} = $newval if @_ > 1;
    return $self->{OptionsSupported};
}
#===============================================================================


#===============================================================================
#            IPv6OptionsSupported accessor method.
#===============================================================================

sub IPv6OptionsSupported{
    my ($self, $newval) = @_;
    $self->{IPv6OptionsSupported} = $newval if @_ > 1;
    return $self->{IPv6OptionsSupported};
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
