package LSIESG_DiskDrive;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_DiskDrive;
use strict;


@LSIESG_DiskDrive::ISA = qw(_Initializable CIM_DiskDrive);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_DiskDrive::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{Type} = undef;
    $self->{PredictiveFailureCount} = undef;
    $self->{MediaErrorCount} = undef;
    $self->{NominalRotationRate} = undef;
    $self->{epr_name} = undef;  
    $self->{invokableMethods}->{SetLocationIndicator} = { input => ['IndicatorOn'], output => [] };
    $self->{invokableMethods}->{RequestStateChange} = { input => ['RequestedState', 'TimeoutPeriod'], output => ['Job'] };
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            Type accessor method.
#===============================================================================

sub Type{
    my ($self, $newval) = @_;
    $self->{Type} = $newval if @_ > 1;
    return $self->{Type};
}
#===============================================================================


#===============================================================================
#            PredictiveFailureCount accessor method.
#===============================================================================

sub PredictiveFailureCount{
    my ($self, $newval) = @_;
    $self->{PredictiveFailureCount} = $newval if @_ > 1;
    return $self->{PredictiveFailureCount};
}
#===============================================================================


#===============================================================================
#            MediaErrorCount accessor method.
#===============================================================================

sub MediaErrorCount{
    my ($self, $newval) = @_;
    $self->{MediaErrorCount} = $newval if @_ > 1;
    return $self->{MediaErrorCount};
}
#===============================================================================


#===============================================================================
#            NominalRotationRate accessor method.
#===============================================================================

sub NominalRotationRate{
    my ($self, $newval) = @_;
    $self->{NominalRotationRate} = $newval if @_ > 1;
    return $self->{NominalRotationRate};
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
