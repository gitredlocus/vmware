package CIM_TapeDrive;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_MediaAccessDevice;
use strict;


@CIM_TapeDrive::ISA = qw(_Initializable CIM_MediaAccessDevice);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_MediaAccessDevice::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{EOTWarningZoneSize} = undef;
    $self->{MaxPartitionCount} = undef;
    $self->{Padding} = undef;
    $self->{MaxRewindTime} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            EOTWarningZoneSize accessor method.
#===============================================================================

sub EOTWarningZoneSize{
    my ($self, $newval) = @_;
    $self->{EOTWarningZoneSize} = $newval if @_ > 1;
    return $self->{EOTWarningZoneSize};
}
#===============================================================================


#===============================================================================
#            MaxPartitionCount accessor method.
#===============================================================================

sub MaxPartitionCount{
    my ($self, $newval) = @_;
    $self->{MaxPartitionCount} = $newval if @_ > 1;
    return $self->{MaxPartitionCount};
}
#===============================================================================


#===============================================================================
#            Padding accessor method.
#===============================================================================

sub Padding{
    my ($self, $newval) = @_;
    $self->{Padding} = $newval if @_ > 1;
    return $self->{Padding};
}
#===============================================================================


#===============================================================================
#            MaxRewindTime accessor method.
#===============================================================================

sub MaxRewindTime{
    my ($self, $newval) = @_;
    $self->{MaxRewindTime} = $newval if @_ > 1;
    return $self->{MaxRewindTime};
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
