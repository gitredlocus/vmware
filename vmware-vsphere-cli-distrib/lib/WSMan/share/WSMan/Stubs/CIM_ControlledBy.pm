package CIM_ControlledBy;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_DeviceConnection;
use strict;


@CIM_ControlledBy::ISA = qw(_Initializable CIM_DeviceConnection);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_DeviceConnection::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{Antecedent} = undef;
    $self->{Dependent} = undef;
    $self->{AccessState} = undef;
    $self->{TimeOfDeviceReset} = undef;
    $self->{NumberOfHardResets} = undef;
    $self->{NumberOfSoftResets} = undef;
    $self->{DeviceNumber} = undef;
    $self->{AccessMode} = undef;
    $self->{AccessPriority} = undef;
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
#            AccessState accessor method.
#===============================================================================

sub AccessState{
    my ($self, $newval) = @_;
    $self->{AccessState} = $newval if @_ > 1;
    return $self->{AccessState};
}
#===============================================================================


#===============================================================================
#            TimeOfDeviceReset accessor method.
#===============================================================================

sub TimeOfDeviceReset{
    my ($self, $newval) = @_;
    $self->{TimeOfDeviceReset} = $newval if @_ > 1;
    return $self->{TimeOfDeviceReset};
}
#===============================================================================


#===============================================================================
#            NumberOfHardResets accessor method.
#===============================================================================

sub NumberOfHardResets{
    my ($self, $newval) = @_;
    $self->{NumberOfHardResets} = $newval if @_ > 1;
    return $self->{NumberOfHardResets};
}
#===============================================================================


#===============================================================================
#            NumberOfSoftResets accessor method.
#===============================================================================

sub NumberOfSoftResets{
    my ($self, $newval) = @_;
    $self->{NumberOfSoftResets} = $newval if @_ > 1;
    return $self->{NumberOfSoftResets};
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
#            AccessMode accessor method.
#===============================================================================

sub AccessMode{
    my ($self, $newval) = @_;
    $self->{AccessMode} = $newval if @_ > 1;
    return $self->{AccessMode};
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
#           epr_name accessor method.
#===============================================================================

sub epr_name{
    my ($self, $newval) = @_;
    $self->{epr_name} = $newval if @_ > 1;
    return $self->{epr_name};
}
#===============================================================================


1;
