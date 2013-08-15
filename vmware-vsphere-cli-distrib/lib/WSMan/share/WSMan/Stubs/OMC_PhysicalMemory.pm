package OMC_PhysicalMemory;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_PhysicalMemory;
use strict;


@OMC_PhysicalMemory::ISA = qw(_Initializable CIM_PhysicalMemory);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_PhysicalMemory::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{Capacity} = undef;
    $self->{Caption} = undef;
    $self->{CreationClassName} = undef;
    $self->{DataWidth} = undef;
    $self->{Description} = undef;
    $self->{ElementName} = undef;
    $self->{FormFactor} = undef;
    $self->{HealthState} = undef;
    $self->{Manufacturer} = undef;
    $self->{MemoryType} = undef;
    $self->{OperationalStatus} = undef;
    $self->{PartNumber} = undef;
    $self->{RemovalConditions} = undef;
    $self->{SerialNumber} = undef;
    $self->{Speed} = undef;
    $self->{Tag} = undef;
    $self->{TotalWidth} = undef;
    $self->{PositionInRow} = undef;
    $self->{InterleavePosition} = undef;
    $self->{IsSpeedInMhz} = undef;
    $self->{MaxMemorySpeed} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            Capacity accessor method.
#===============================================================================

sub Capacity{
    my ($self, $newval) = @_;
    $self->{Capacity} = $newval if @_ > 1;
    return $self->{Capacity};
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
#            CreationClassName accessor method.
#===============================================================================

sub CreationClassName{
    my ($self, $newval) = @_;
    $self->{CreationClassName} = $newval if @_ > 1;
    return $self->{CreationClassName};
}
#===============================================================================


#===============================================================================
#            DataWidth accessor method.
#===============================================================================

sub DataWidth{
    my ($self, $newval) = @_;
    $self->{DataWidth} = $newval if @_ > 1;
    return $self->{DataWidth};
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
#            FormFactor accessor method.
#===============================================================================

sub FormFactor{
    my ($self, $newval) = @_;
    $self->{FormFactor} = $newval if @_ > 1;
    return $self->{FormFactor};
}
#===============================================================================


#===============================================================================
#            HealthState accessor method.
#===============================================================================

sub HealthState{
    my ($self, $newval) = @_;
    $self->{HealthState} = $newval if @_ > 1;
    return $self->{HealthState};
}
#===============================================================================


#===============================================================================
#            Manufacturer accessor method.
#===============================================================================

sub Manufacturer{
    my ($self, $newval) = @_;
    $self->{Manufacturer} = $newval if @_ > 1;
    return $self->{Manufacturer};
}
#===============================================================================


#===============================================================================
#            MemoryType accessor method.
#===============================================================================

sub MemoryType{
    my ($self, $newval) = @_;
    $self->{MemoryType} = $newval if @_ > 1;
    return $self->{MemoryType};
}
#===============================================================================


#===============================================================================
#            OperationalStatus accessor method.
#===============================================================================

sub OperationalStatus{
    my ($self, $newval) = @_;
    $self->{OperationalStatus} = $newval if @_ > 1;
    return $self->{OperationalStatus};
}
#===============================================================================


#===============================================================================
#            PartNumber accessor method.
#===============================================================================

sub PartNumber{
    my ($self, $newval) = @_;
    $self->{PartNumber} = $newval if @_ > 1;
    return $self->{PartNumber};
}
#===============================================================================


#===============================================================================
#            RemovalConditions accessor method.
#===============================================================================

sub RemovalConditions{
    my ($self, $newval) = @_;
    $self->{RemovalConditions} = $newval if @_ > 1;
    return $self->{RemovalConditions};
}
#===============================================================================


#===============================================================================
#            SerialNumber accessor method.
#===============================================================================

sub SerialNumber{
    my ($self, $newval) = @_;
    $self->{SerialNumber} = $newval if @_ > 1;
    return $self->{SerialNumber};
}
#===============================================================================


#===============================================================================
#            Speed accessor method.
#===============================================================================

sub Speed{
    my ($self, $newval) = @_;
    $self->{Speed} = $newval if @_ > 1;
    return $self->{Speed};
}
#===============================================================================


#===============================================================================
#            Tag accessor method.
#===============================================================================

sub Tag{
    my ($self, $newval) = @_;
    $self->{Tag} = $newval if @_ > 1;
    return $self->{Tag};
}
#===============================================================================


#===============================================================================
#            TotalWidth accessor method.
#===============================================================================

sub TotalWidth{
    my ($self, $newval) = @_;
    $self->{TotalWidth} = $newval if @_ > 1;
    return $self->{TotalWidth};
}
#===============================================================================


#===============================================================================
#            PositionInRow accessor method.
#===============================================================================

sub PositionInRow{
    my ($self, $newval) = @_;
    $self->{PositionInRow} = $newval if @_ > 1;
    return $self->{PositionInRow};
}
#===============================================================================


#===============================================================================
#            InterleavePosition accessor method.
#===============================================================================

sub InterleavePosition{
    my ($self, $newval) = @_;
    $self->{InterleavePosition} = $newval if @_ > 1;
    return $self->{InterleavePosition};
}
#===============================================================================


#===============================================================================
#            IsSpeedInMhz accessor method.
#===============================================================================

sub IsSpeedInMhz{
    my ($self, $newval) = @_;
    $self->{IsSpeedInMhz} = $newval if @_ > 1;
    return $self->{IsSpeedInMhz};
}
#===============================================================================


#===============================================================================
#            MaxMemorySpeed accessor method.
#===============================================================================

sub MaxMemorySpeed{
    my ($self, $newval) = @_;
    $self->{MaxMemorySpeed} = $newval if @_ > 1;
    return $self->{MaxMemorySpeed};
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
