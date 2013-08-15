package CIM_System;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_EnabledLogicalElement;
use strict;


@CIM_System::ISA = qw(_Initializable CIM_EnabledLogicalElement);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_EnabledLogicalElement::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{CreationClassName} = undef;
    $self->{Name} = undef;
    $self->{NameFormat} = undef;
    $self->{PrimaryOwnerName} = undef;
    $self->{PrimaryOwnerContact} = undef;
    $self->{Roles} = undef;
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
#            NameFormat accessor method.
#===============================================================================

sub NameFormat{
    my ($self, $newval) = @_;
    $self->{NameFormat} = $newval if @_ > 1;
    return $self->{NameFormat};
}
#===============================================================================


#===============================================================================
#            PrimaryOwnerName accessor method.
#===============================================================================

sub PrimaryOwnerName{
    my ($self, $newval) = @_;
    $self->{PrimaryOwnerName} = $newval if @_ > 1;
    return $self->{PrimaryOwnerName};
}
#===============================================================================


#===============================================================================
#            PrimaryOwnerContact accessor method.
#===============================================================================

sub PrimaryOwnerContact{
    my ($self, $newval) = @_;
    $self->{PrimaryOwnerContact} = $newval if @_ > 1;
    return $self->{PrimaryOwnerContact};
}
#===============================================================================


#===============================================================================
#            Roles accessor method.
#===============================================================================

sub Roles{
    my ($self, $newval) = @_;
    $self->{Roles} = $newval if @_ > 1;
    return $self->{Roles};
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
