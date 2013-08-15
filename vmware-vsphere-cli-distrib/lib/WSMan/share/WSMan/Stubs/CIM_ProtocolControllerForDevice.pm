package CIM_ProtocolControllerForDevice;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_Dependency;
use strict;


@CIM_ProtocolControllerForDevice::ISA = qw(_Initializable CIM_Dependency);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_Dependency::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{Antecedent} = undef;
    $self->{Dependent} = undef;
    $self->{DeviceNumber} = undef;
    $self->{AccessPriority} = undef;
    $self->{AccessState} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            Antecedent accessor method.
#===============================================================================

sub Antecedent{
    my ($self, $newval) = @_;
    $self->{Antecedent} = $newval if @_ > 1;
    return $self->{Antecedent};
}
#===============================================================================


#===============================================================================
#            Dependent accessor method.
#===============================================================================

sub Dependent{
    my ($self, $newval) = @_;
    $self->{Dependent} = $newval if @_ > 1;
    return $self->{Dependent};
}
#===============================================================================


#===============================================================================
#            DeviceNumber accessor method.
#===============================================================================

sub DeviceNumber{
    my ($self, $newval) = @_;
    $self->{DeviceNumber} = $newval if @_ > 1;
    return $self->{DeviceNumber};
}
#===============================================================================


#===============================================================================
#            AccessPriority accessor method.
#===============================================================================

sub AccessPriority{
    my ($self, $newval) = @_;
    $self->{AccessPriority} = $newval if @_ > 1;
    return $self->{AccessPriority};
}
#===============================================================================


#===============================================================================
#            AccessState accessor method.
#===============================================================================

sub AccessState{
    my ($self, $newval) = @_;
    $self->{AccessState} = $newval if @_ > 1;
    return $self->{AccessState};
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
