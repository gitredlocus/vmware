package CIM_Service;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_EnabledLogicalElement;
use strict;


@CIM_Service::ISA = qw(_Initializable CIM_EnabledLogicalElement);


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
    $self->{SystemCreationClassName} = undef;
    $self->{SystemName} = undef;
    $self->{CreationClassName} = undef;
    $self->{Name} = undef;
    $self->{PrimaryOwnerName} = undef;
    $self->{PrimaryOwnerContact} = undef;
    $self->{StartMode} = undef;
    $self->{Started} = undef;
    $self->{epr_name} = undef;  
    $self->{invokableMethods}->{StartService} = { input => [], output => [] };
    $self->{invokableMethods}->{StopService} = { input => [], output => [] };
    $self->{invokableMethods}->{ChangeAffectedElementsAssignedSequence} = { input => ['ManagedElements', 'AssignedSequence'], output => ['Job'] };
    push @{$self->{id_keys}}, 'SystemCreationClassName';
    push @{$self->{id_keys}}, 'SystemName';
    push @{$self->{id_keys}}, 'CreationClassName';
    push @{$self->{id_keys}}, 'Name';
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            SystemCreationClassName accessor method.
#===============================================================================

sub SystemCreationClassName{
    my ($self, $newval) = @_;
    $self->{SystemCreationClassName} = $newval if @_ > 1;
    return $self->{SystemCreationClassName};
}
#===============================================================================


#===============================================================================
#            SystemName accessor method.
#===============================================================================

sub SystemName{
    my ($self, $newval) = @_;
    $self->{SystemName} = $newval if @_ > 1;
    return $self->{SystemName};
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
#            StartMode accessor method.
#===============================================================================

sub StartMode{
    my ($self, $newval) = @_;
    $self->{StartMode} = $newval if @_ > 1;
    return $self->{StartMode};
}
#===============================================================================


#===============================================================================
#            Started accessor method.
#===============================================================================

sub Started{
    my ($self, $newval) = @_;
    $self->{Started} = $newval if @_ > 1;
    return $self->{Started};
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
