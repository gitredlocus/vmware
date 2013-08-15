package ELXHBA_FCPort;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_FCPort;
use strict;


@ELXHBA_FCPort::ISA = qw(_Initializable CIM_FCPort);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_FCPort::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{FabricName} = undef;
    $self->{OperationalFirmware} = undef;
    $self->{FCID} = undef;
    $self->{NumberOfDiscoveredPorts} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            FabricName accessor method.
#===============================================================================

sub FabricName{
    my ($self, $newval) = @_;
    $self->{FabricName} = $newval if @_ > 1;
    return $self->{FabricName};
}
#===============================================================================


#===============================================================================
#            OperationalFirmware accessor method.
#===============================================================================

sub OperationalFirmware{
    my ($self, $newval) = @_;
    $self->{OperationalFirmware} = $newval if @_ > 1;
    return $self->{OperationalFirmware};
}
#===============================================================================


#===============================================================================
#            FCID accessor method.
#===============================================================================

sub FCID{
    my ($self, $newval) = @_;
    $self->{FCID} = $newval if @_ > 1;
    return $self->{FCID};
}
#===============================================================================


#===============================================================================
#            NumberOfDiscoveredPorts accessor method.
#===============================================================================

sub NumberOfDiscoveredPorts{
    my ($self, $newval) = @_;
    $self->{NumberOfDiscoveredPorts} = $newval if @_ > 1;
    return $self->{NumberOfDiscoveredPorts};
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
