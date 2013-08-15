package VMware_MethodResult;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_MethodResult;
use strict;


@VMware_MethodResult::ISA = qw(_Initializable CIM_MethodResult);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_MethodResult::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{InstanceID} = undef;
    $self->{Caption} = undef;
    $self->{Description} = undef;
    $self->{ElementName} = undef;
    $self->{PreCallIndication} = undef;
    $self->{PostCallIndication} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            InstanceID accessor method.
#===============================================================================

sub InstanceID{
    my ($self, $newval) = @_;
    $self->{InstanceID} = $newval if @_ > 1;
    return $self->{InstanceID};
}
#===============================================================================


#===============================================================================
#            Caption accessor method.
#===============================================================================

sub Caption{
    my ($self, $newval) = @_;
    $self->{Caption} = $newval if @_ > 1;
    return $self->{Caption};
}
#===============================================================================


#===============================================================================
#            Description accessor method.
#===============================================================================

sub Description{
    my ($self, $newval) = @_;
    $self->{Description} = $newval if @_ > 1;
    return $self->{Description};
}
#===============================================================================


#===============================================================================
#            ElementName accessor method.
#===============================================================================

sub ElementName{
    my ($self, $newval) = @_;
    $self->{ElementName} = $newval if @_ > 1;
    return $self->{ElementName};
}
#===============================================================================


#===============================================================================
#            PreCallIndication accessor method.
#===============================================================================

sub PreCallIndication{
    my ($self, $newval) = @_;
    $self->{PreCallIndication} = $newval if @_ > 1;
    return $self->{PreCallIndication};
}
#===============================================================================


#===============================================================================
#            PostCallIndication accessor method.
#===============================================================================

sub PostCallIndication{
    my ($self, $newval) = @_;
    $self->{PostCallIndication} = $newval if @_ > 1;
    return $self->{PostCallIndication};
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
