package CIM_ServiceProcess;
use WSMan::Stubs::Initializable;
use strict;


@CIM_ServiceProcess::ISA = qw(_Initializable);


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
    $self->{Service} = undef;
    $self->{Process} = undef;
    $self->{ExecutionType} = undef;
    $self->{epr_name} = undef;  
    push @{$self->{id_keys}}, 'Service';
    push @{$self->{id_keys}}, 'Process';
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            Service accessor method.
#===============================================================================

sub Service{
    my ($self, $newval) = @_;
    $self->{Service} = $newval if @_ > 1;
    return $self->{Service};
}
#===============================================================================


#===============================================================================
#            Process accessor method.
#===============================================================================

sub Process{
    my ($self, $newval) = @_;
    $self->{Process} = $newval if @_ > 1;
    return $self->{Process};
}
#===============================================================================


#===============================================================================
#            ExecutionType accessor method.
#===============================================================================

sub ExecutionType{
    my ($self, $newval) = @_;
    $self->{ExecutionType} = $newval if @_ > 1;
    return $self->{ExecutionType};
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
