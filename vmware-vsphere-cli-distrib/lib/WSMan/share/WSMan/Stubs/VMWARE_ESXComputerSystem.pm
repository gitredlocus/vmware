package VMWARE_ESXComputerSystem;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_ComputerSystem;
use strict;


@VMWARE_ESXComputerSystem::ISA = qw(_Initializable CIM_ComputerSystem);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_ComputerSystem::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{CreationClassName} = undef;
    $self->{Name} = undef;
    $self->{ElementName} = undef;
    $self->{OperationalStatus} = undef;
    $self->{NameFormat} = undef;
    $self->{Dedicated} = undef;
    $self->{OtherIdentifyingInfo} = undef;
    $self->{IdentifyingDescriptions} = undef;
    $self->{epr_name} = undef;  
    push @{$self->{id_keys}}, 'CreationClassName';
    push @{$self->{id_keys}}, 'Name';
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
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
#            Name accessor method.
#===============================================================================

sub Name{
    my ($self, $newval) = @_;
    $self->{Name} = $newval if @_ > 1;
    return $self->{Name};
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
#            OperationalStatus accessor method.
#===============================================================================

sub OperationalStatus{
    my ($self, $newval) = @_;
    $self->{OperationalStatus} = $newval if @_ > 1;
    return $self->{OperationalStatus};
}
#===============================================================================


#===============================================================================
#            NameFormat accessor method.
#===============================================================================

sub NameFormat{
    my ($self, $newval) = @_;
    $self->{NameFormat} = $newval if @_ > 1;
    return $self->{NameFormat};
}
#===============================================================================


#===============================================================================
#            Dedicated accessor method.
#===============================================================================

sub Dedicated{
    my ($self, $newval) = @_;
    $self->{Dedicated} = $newval if @_ > 1;
    return $self->{Dedicated};
}
#===============================================================================


#===============================================================================
#            OtherIdentifyingInfo accessor method.
#===============================================================================

sub OtherIdentifyingInfo{
    my ($self, $newval) = @_;
    $self->{OtherIdentifyingInfo} = $newval if @_ > 1;
    return $self->{OtherIdentifyingInfo};
}
#===============================================================================


#===============================================================================
#            IdentifyingDescriptions accessor method.
#===============================================================================

sub IdentifyingDescriptions{
    my ($self, $newval) = @_;
    $self->{IdentifyingDescriptions} = $newval if @_ > 1;
    return $self->{IdentifyingDescriptions};
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
