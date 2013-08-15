package CIM_ProductParentChild;
use WSMan::Stubs::Initializable;
use strict;


@CIM_ProductParentChild::ISA = qw(_Initializable);


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
    $self->{Parent} = undef;
    $self->{Child} = undef;
    $self->{epr_name} = undef;  
    push @{$self->{id_keys}}, 'Parent';
    push @{$self->{id_keys}}, 'Child';
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            Parent accessor method.
#===============================================================================

sub Parent{
    my ($self, $newval) = @_;
    $self->{Parent} = $newval if @_ > 1;
    return $self->{Parent};
}
#===============================================================================


#===============================================================================
#            Child accessor method.
#===============================================================================

sub Child{
    my ($self, $newval) = @_;
    $self->{Child} = $newval if @_ > 1;
    return $self->{Child};
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
