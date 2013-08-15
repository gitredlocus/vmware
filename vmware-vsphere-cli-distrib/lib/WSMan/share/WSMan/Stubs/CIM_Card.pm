package CIM_Card;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_PhysicalPackage;
use strict;


@CIM_Card::ISA = qw(_Initializable CIM_PhysicalPackage);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_PhysicalPackage::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{HostingBoard} = undef;
    $self->{SlotLayout} = undef;
    $self->{RequiresDaughterBoard} = undef;
    $self->{SpecialRequirements} = undef;
    $self->{RequirementsDescription} = undef;
    $self->{OperatingVoltages} = undef;
    $self->{epr_name} = undef;  
    $self->{invokableMethods}->{ConnectorPower} = { input => ['Connector', 'PoweredOn'], output => [] };
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            HostingBoard accessor method.
#===============================================================================

sub HostingBoard{
    my ($self, $newval) = @_;
    $self->{HostingBoard} = $newval if @_ > 1;
    return $self->{HostingBoard};
}
#===============================================================================


#===============================================================================
#            SlotLayout accessor method.
#===============================================================================

sub SlotLayout{
    my ($self, $newval) = @_;
    $self->{SlotLayout} = $newval if @_ > 1;
    return $self->{SlotLayout};
}
#===============================================================================


#===============================================================================
#            RequiresDaughterBoard accessor method.
#===============================================================================

sub RequiresDaughterBoard{
    my ($self, $newval) = @_;
    $self->{RequiresDaughterBoard} = $newval if @_ > 1;
    return $self->{RequiresDaughterBoard};
}
#===============================================================================


#===============================================================================
#            SpecialRequirements accessor method.
#===============================================================================

sub SpecialRequirements{
    my ($self, $newval) = @_;
    $self->{SpecialRequirements} = $newval if @_ > 1;
    return $self->{SpecialRequirements};
}
#===============================================================================


#===============================================================================
#            RequirementsDescription accessor method.
#===============================================================================

sub RequirementsDescription{
    my ($self, $newval) = @_;
    $self->{RequirementsDescription} = $newval if @_ > 1;
    return $self->{RequirementsDescription};
}
#===============================================================================


#===============================================================================
#            OperatingVoltages accessor method.
#===============================================================================

sub OperatingVoltages{
    my ($self, $newval) = @_;
    $self->{OperatingVoltages} = $newval if @_ > 1;
    return $self->{OperatingVoltages};
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
