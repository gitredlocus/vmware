package CIM_Namespace;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_ManagedElement;
use strict;


@CIM_Namespace::ISA = qw(_Initializable CIM_ManagedElement);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_ManagedElement::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{SystemCreationClassName} = undef;
    $self->{SystemName} = undef;
    $self->{ObjectManagerCreationClassName} = undef;
    $self->{ObjectManagerName} = undef;
    $self->{CreationClassName} = undef;
    $self->{Name} = undef;
    $self->{ClassInfo} = undef;
    $self->{DescriptionOfClassInfo} = undef;
    $self->{ClassType} = undef;
    $self->{ClassTypeVersion} = undef;
    $self->{DescriptionOfClassType} = undef;
    $self->{epr_name} = undef;  
    push @{$self->{id_keys}}, 'SystemCreationClassName';
    push @{$self->{id_keys}}, 'SystemName';
    push @{$self->{id_keys}}, 'ObjectManagerCreationClassName';
    push @{$self->{id_keys}}, 'ObjectManagerName';
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
#            ObjectManagerCreationClassName accessor method.
#===============================================================================

sub ObjectManagerCreationClassName{
    my ($self, $newval) = @_;
    $self->{ObjectManagerCreationClassName} = $newval if @_ > 1;
    return $self->{ObjectManagerCreationClassName};
}
#===============================================================================


#===============================================================================
#            ObjectManagerName accessor method.
#===============================================================================

sub ObjectManagerName{
    my ($self, $newval) = @_;
    $self->{ObjectManagerName} = $newval if @_ > 1;
    return $self->{ObjectManagerName};
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
#            ClassInfo accessor method.
#===============================================================================

sub ClassInfo{
    my ($self, $newval) = @_;
    $self->{ClassInfo} = $newval if @_ > 1;
    return $self->{ClassInfo};
}
#===============================================================================


#===============================================================================
#            DescriptionOfClassInfo accessor method.
#===============================================================================

sub DescriptionOfClassInfo{
    my ($self, $newval) = @_;
    $self->{DescriptionOfClassInfo} = $newval if @_ > 1;
    return $self->{DescriptionOfClassInfo};
}
#===============================================================================


#===============================================================================
#            ClassType accessor method.
#===============================================================================

sub ClassType{
    my ($self, $newval) = @_;
    $self->{ClassType} = $newval if @_ > 1;
    return $self->{ClassType};
}
#===============================================================================


#===============================================================================
#            ClassTypeVersion accessor method.
#===============================================================================

sub ClassTypeVersion{
    my ($self, $newval) = @_;
    $self->{ClassTypeVersion} = $newval if @_ > 1;
    return $self->{ClassTypeVersion};
}
#===============================================================================


#===============================================================================
#            DescriptionOfClassType accessor method.
#===============================================================================

sub DescriptionOfClassType{
    my ($self, $newval) = @_;
    $self->{DescriptionOfClassType} = $newval if @_ > 1;
    return $self->{DescriptionOfClassType};
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
