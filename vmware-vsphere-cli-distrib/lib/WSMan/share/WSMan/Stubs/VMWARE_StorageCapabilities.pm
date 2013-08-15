package VMWARE_StorageCapabilities;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_StorageCapabilities;
use strict;


@VMWARE_StorageCapabilities::ISA = qw(_Initializable CIM_StorageCapabilities);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_StorageCapabilities::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{InstanceID} = undef;
    $self->{ElementName} = undef;
    $self->{ElementType} = undef;
    $self->{NoSinglePointOfFailure} = undef;
    $self->{NoSinglePointOfFailureDefault} = undef;
    $self->{DataRedundancyMax} = undef;
    $self->{DataRedundancyMin} = undef;
    $self->{DataRedundancyDefault} = undef;
    $self->{PackageRedundancyMax} = undef;
    $self->{PackageRedundancyMin} = undef;
    $self->{PackageRedundancyDefault} = undef;
    $self->{DeltaReservationMax} = undef;
    $self->{DeltaReservationMin} = undef;
    $self->{DeltaReservationDefault} = undef;
    $self->{epr_name} = undef;  
    push @{$self->{id_keys}}, 'InstanceID';
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
#            ElementName accessor method.
#===============================================================================

sub ElementName{
    my ($self, $newval) = @_;
    $self->{ElementName} = $newval if @_ > 1;
    return $self->{ElementName};
}
#===============================================================================


#===============================================================================
#            ElementType accessor method.
#===============================================================================

sub ElementType{
    my ($self, $newval) = @_;
    $self->{ElementType} = $newval if @_ > 1;
    return $self->{ElementType};
}
#===============================================================================


#===============================================================================
#            NoSinglePointOfFailure accessor method.
#===============================================================================

sub NoSinglePointOfFailure{
    my ($self, $newval) = @_;
    $self->{NoSinglePointOfFailure} = $newval if @_ > 1;
    return $self->{NoSinglePointOfFailure};
}
#===============================================================================


#===============================================================================
#            NoSinglePointOfFailureDefault accessor method.
#===============================================================================

sub NoSinglePointOfFailureDefault{
    my ($self, $newval) = @_;
    $self->{NoSinglePointOfFailureDefault} = $newval if @_ > 1;
    return $self->{NoSinglePointOfFailureDefault};
}
#===============================================================================


#===============================================================================
#            DataRedundancyMax accessor method.
#===============================================================================

sub DataRedundancyMax{
    my ($self, $newval) = @_;
    $self->{DataRedundancyMax} = $newval if @_ > 1;
    return $self->{DataRedundancyMax};
}
#===============================================================================


#===============================================================================
#            DataRedundancyMin accessor method.
#===============================================================================

sub DataRedundancyMin{
    my ($self, $newval) = @_;
    $self->{DataRedundancyMin} = $newval if @_ > 1;
    return $self->{DataRedundancyMin};
}
#===============================================================================


#===============================================================================
#            DataRedundancyDefault accessor method.
#===============================================================================

sub DataRedundancyDefault{
    my ($self, $newval) = @_;
    $self->{DataRedundancyDefault} = $newval if @_ > 1;
    return $self->{DataRedundancyDefault};
}
#===============================================================================


#===============================================================================
#            PackageRedundancyMax accessor method.
#===============================================================================

sub PackageRedundancyMax{
    my ($self, $newval) = @_;
    $self->{PackageRedundancyMax} = $newval if @_ > 1;
    return $self->{PackageRedundancyMax};
}
#===============================================================================


#===============================================================================
#            PackageRedundancyMin accessor method.
#===============================================================================

sub PackageRedundancyMin{
    my ($self, $newval) = @_;
    $self->{PackageRedundancyMin} = $newval if @_ > 1;
    return $self->{PackageRedundancyMin};
}
#===============================================================================


#===============================================================================
#            PackageRedundancyDefault accessor method.
#===============================================================================

sub PackageRedundancyDefault{
    my ($self, $newval) = @_;
    $self->{PackageRedundancyDefault} = $newval if @_ > 1;
    return $self->{PackageRedundancyDefault};
}
#===============================================================================


#===============================================================================
#            DeltaReservationMax accessor method.
#===============================================================================

sub DeltaReservationMax{
    my ($self, $newval) = @_;
    $self->{DeltaReservationMax} = $newval if @_ > 1;
    return $self->{DeltaReservationMax};
}
#===============================================================================


#===============================================================================
#            DeltaReservationMin accessor method.
#===============================================================================

sub DeltaReservationMin{
    my ($self, $newval) = @_;
    $self->{DeltaReservationMin} = $newval if @_ > 1;
    return $self->{DeltaReservationMin};
}
#===============================================================================


#===============================================================================
#            DeltaReservationDefault accessor method.
#===============================================================================

sub DeltaReservationDefault{
    my ($self, $newval) = @_;
    $self->{DeltaReservationDefault} = $newval if @_ > 1;
    return $self->{DeltaReservationDefault};
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
