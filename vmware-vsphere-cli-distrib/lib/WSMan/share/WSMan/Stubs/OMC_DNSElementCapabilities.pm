package OMC_DNSElementCapabilities;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_ElementCapabilities;
use strict;


@OMC_DNSElementCapabilities::ISA = qw(_Initializable CIM_ElementCapabilities);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_ElementCapabilities::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{ManagedElement} = undef;
    $self->{Capabilities} = undef;
    $self->{epr_name} = undef;  
    push @{$self->{id_keys}}, 'ManagedElement';
    push @{$self->{id_keys}}, 'Capabilities';
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            ManagedElement accessor method.
#===============================================================================

sub ManagedElement{
    my ($self, $newval) = @_;
    $self->{ManagedElement} = $newval if @_ > 1;
    return $self->{ManagedElement};
}
#===============================================================================


#===============================================================================
#            Capabilities accessor method.
#===============================================================================

sub Capabilities{
    my ($self, $newval) = @_;
    $self->{Capabilities} = $newval if @_ > 1;
    return $self->{Capabilities};
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
