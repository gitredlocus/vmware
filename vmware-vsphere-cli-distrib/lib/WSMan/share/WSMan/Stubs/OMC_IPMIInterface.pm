package OMC_IPMIInterface;
use WSMan::Stubs::Initializable;
use strict;


@OMC_IPMIInterface::ISA = qw(_Initializable);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{Name} = undef;
    $self->{PollingInterval} = undef;
    $self->{Enabled} = undef;
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
#            PollingInterval accessor method.
#===============================================================================

sub PollingInterval{
    my ($self, $newval) = @_;
    $self->{PollingInterval} = $newval if @_ > 1;
    return $self->{PollingInterval};
}
#===============================================================================


#===============================================================================
#            Enabled accessor method.
#===============================================================================

sub Enabled{
    my ($self, $newval) = @_;
    $self->{Enabled} = $newval if @_ > 1;
    return $self->{Enabled};
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
