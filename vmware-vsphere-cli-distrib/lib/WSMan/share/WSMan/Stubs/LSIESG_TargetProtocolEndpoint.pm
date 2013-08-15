package LSIESG_TargetProtocolEndpoint;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_SCSIProtocolEndpoint;
use strict;


@LSIESG_TargetProtocolEndpoint::ISA = qw(_Initializable CIM_SCSIProtocolEndpoint);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_SCSIProtocolEndpoint::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{InitiatorProtocolEndpoint_Name} = undef;
    $self->{DiskDrive_DeviceID} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            InitiatorProtocolEndpoint_Name accessor method.
#===============================================================================

sub InitiatorProtocolEndpoint_Name{
    my ($self, $newval) = @_;
    $self->{InitiatorProtocolEndpoint_Name} = $newval if @_ > 1;
    return $self->{InitiatorProtocolEndpoint_Name};
}
#===============================================================================


#===============================================================================
#            DiskDrive_DeviceID accessor method.
#===============================================================================

sub DiskDrive_DeviceID{
    my ($self, $newval) = @_;
    $self->{DiskDrive_DeviceID} = $newval if @_ > 1;
    return $self->{DiskDrive_DeviceID};
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
