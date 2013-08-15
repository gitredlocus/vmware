package CIM_AssociatedJobMethodResult;
use WSMan::Stubs::Initializable;
use strict;


@CIM_AssociatedJobMethodResult::ISA = qw(_Initializable);


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
    $self->{Job} = undef;
    $self->{JobParameters} = undef;
    $self->{epr_name} = undef;  
    push @{$self->{id_keys}}, 'Job';
    push @{$self->{id_keys}}, 'JobParameters';
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            Job accessor method.
#===============================================================================

sub Job{
    my ($self, $newval) = @_;
    $self->{Job} = $newval if @_ > 1;
    return $self->{Job};
}
#===============================================================================


#===============================================================================
#            JobParameters accessor method.
#===============================================================================

sub JobParameters{
    my ($self, $newval) = @_;
    $self->{JobParameters} = $newval if @_ > 1;
    return $self->{JobParameters};
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
