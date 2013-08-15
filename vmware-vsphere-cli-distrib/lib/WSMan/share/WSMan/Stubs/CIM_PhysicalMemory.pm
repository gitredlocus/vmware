package CIM_PhysicalMemory;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_Chip;
use strict;


@CIM_PhysicalMemory::ISA = qw(_Initializable CIM_Chip);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_Chip::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{FormFactor} = undef;
    $self->{MemoryType} = undef;
    $self->{TotalWidth} = undef;
    $self->{DataWidth} = undef;
    $self->{Speed} = undef;
    $self->{Capacity} = undef;
    $self->{BankLabel} = undef;
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
#            FormFactor accessor method.
#===============================================================================

sub FormFactor{
    my ($self, $newval) = @_;
    $self->{FormFactor} = $newval if @_ > 1;
    return $self->{FormFactor};
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
#            TotalWidth accessor method.
#===============================================================================

sub TotalWidth{
    my ($self, $newval) = @_;
    $self->{TotalWidth} = $newval if @_ > 1;
    return $self->{TotalWidth};
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
#            Speed accessor method.
#===============================================================================

sub Speed{
    my ($self, $newval) = @_;
    $self->{Speed} = $newval if @_ > 1;
    return $self->{Speed};
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
#            BankLabel accessor method.
#===============================================================================

sub BankLabel{
    my ($self, $newval) = @_;
    $self->{BankLabel} = $newval if @_ > 1;
    return $self->{BankLabel};
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
