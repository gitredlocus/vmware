package CIM_Chassis;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_PhysicalFrame;
use strict;


@CIM_Chassis::ISA = qw(_Initializable CIM_PhysicalFrame);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_PhysicalFrame::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{NumberOfPowerCords} = undef;
    $self->{CurrentRequiredOrProduced} = undef;
    $self->{HeatGeneration} = undef;
    $self->{ChassisTypes} = undef;
    $self->{TypeDescriptions} = undef;
    $self->{ChassisPackageType} = undef;
    $self->{ChassisTypeDescription} = undef;
    $self->{MultipleSystemSupport} = undef;
    $self->{RackMountable} = undef;
    $self->{InputCurrentType} = undef;
    $self->{OtherInputCurrentType} = undef;
    $self->{InputVoltage} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            NumberOfPowerCords accessor method.
#===============================================================================

sub NumberOfPowerCords{
    my ($self, $newval) = @_;
    $self->{NumberOfPowerCords} = $newval if @_ > 1;
    return $self->{NumberOfPowerCords};
}
#===============================================================================


#===============================================================================
#            CurrentRequiredOrProduced accessor method.
#===============================================================================

sub CurrentRequiredOrProduced{
    my ($self, $newval) = @_;
    $self->{CurrentRequiredOrProduced} = $newval if @_ > 1;
    return $self->{CurrentRequiredOrProduced};
}
#===============================================================================


#===============================================================================
#            HeatGeneration accessor method.
#===============================================================================

sub HeatGeneration{
    my ($self, $newval) = @_;
    $self->{HeatGeneration} = $newval if @_ > 1;
    return $self->{HeatGeneration};
}
#===============================================================================


#===============================================================================
#            ChassisTypes accessor method.
#===============================================================================

sub ChassisTypes{
    my ($self, $newval) = @_;
    $self->{ChassisTypes} = $newval if @_ > 1;
    return $self->{ChassisTypes};
}
#===============================================================================


#===============================================================================
#            TypeDescriptions accessor method.
#===============================================================================

sub TypeDescriptions{
    my ($self, $newval) = @_;
    $self->{TypeDescriptions} = $newval if @_ > 1;
    return $self->{TypeDescriptions};
}
#===============================================================================


#===============================================================================
#            ChassisPackageType accessor method.
#===============================================================================

sub ChassisPackageType{
    my ($self, $newval) = @_;
    $self->{ChassisPackageType} = $newval if @_ > 1;
    return $self->{ChassisPackageType};
}
#===============================================================================


#===============================================================================
#            ChassisTypeDescription accessor method.
#===============================================================================

sub ChassisTypeDescription{
    my ($self, $newval) = @_;
    $self->{ChassisTypeDescription} = $newval if @_ > 1;
    return $self->{ChassisTypeDescription};
}
#===============================================================================


#===============================================================================
#            MultipleSystemSupport accessor method.
#===============================================================================

sub MultipleSystemSupport{
    my ($self, $newval) = @_;
    $self->{MultipleSystemSupport} = $newval if @_ > 1;
    return $self->{MultipleSystemSupport};
}
#===============================================================================


#===============================================================================
#            RackMountable accessor method.
#===============================================================================

sub RackMountable{
    my ($self, $newval) = @_;
    $self->{RackMountable} = $newval if @_ > 1;
    return $self->{RackMountable};
}
#===============================================================================


#===============================================================================
#            InputCurrentType accessor method.
#===============================================================================

sub InputCurrentType{
    my ($self, $newval) = @_;
    $self->{InputCurrentType} = $newval if @_ > 1;
    return $self->{InputCurrentType};
}
#===============================================================================


#===============================================================================
#            OtherInputCurrentType accessor method.
#===============================================================================

sub OtherInputCurrentType{
    my ($self, $newval) = @_;
    $self->{OtherInputCurrentType} = $newval if @_ > 1;
    return $self->{OtherInputCurrentType};
}
#===============================================================================


#===============================================================================
#            InputVoltage accessor method.
#===============================================================================

sub InputVoltage{
    my ($self, $newval) = @_;
    $self->{InputVoltage} = $newval if @_ > 1;
    return $self->{InputVoltage};
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
