package CIM_ServiceAvailableToElement;
use WSMan::Stubs::Initializable;
use strict;


@CIM_ServiceAvailableToElement::ISA = qw(_Initializable);


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
    $self->{ServiceProvided} = undef;
    $self->{UserOfService} = undef;
    $self->{epr_name} = undef;  
    push @{$self->{id_keys}}, 'ServiceProvided';
    push @{$self->{id_keys}}, 'UserOfService';
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            ServiceProvided accessor method.
#===============================================================================

sub ServiceProvided{
    my ($self, $newval) = @_;
    $self->{ServiceProvided} = $newval if @_ > 1;
    return $self->{ServiceProvided};
}
#===============================================================================


#===============================================================================
#            UserOfService accessor method.
#===============================================================================

sub UserOfService{
    my ($self, $newval) = @_;
    $self->{UserOfService} = $newval if @_ > 1;
    return $self->{UserOfService};
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
