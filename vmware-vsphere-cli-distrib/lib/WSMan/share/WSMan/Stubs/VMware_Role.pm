package VMware_Role;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_Role;
use strict;


@VMware_Role::ISA = qw(_Initializable CIM_Role);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_Role::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{BusinessCategory} = undef;
    $self->{Caption} = undef;
    $self->{CommonName} = undef;
    $self->{CreationClassName} = undef;
    $self->{Description} = undef;
    $self->{ElementName} = undef;
    $self->{Name} = undef;
    $self->{RoleCharacteristics} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            BusinessCategory accessor method.
#===============================================================================

sub BusinessCategory{
    my ($self, $newval) = @_;
    $self->{BusinessCategory} = $newval if @_ > 1;
    return $self->{BusinessCategory};
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
#            CommonName accessor method.
#===============================================================================

sub CommonName{
    my ($self, $newval) = @_;
    $self->{CommonName} = $newval if @_ > 1;
    return $self->{CommonName};
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
#            Name accessor method.
#===============================================================================

sub Name{
    my ($self, $newval) = @_;
    $self->{Name} = $newval if @_ > 1;
    return $self->{Name};
}
#===============================================================================


#===============================================================================
#            RoleCharacteristics accessor method.
#===============================================================================

sub RoleCharacteristics{
    my ($self, $newval) = @_;
    $self->{RoleCharacteristics} = $newval if @_ > 1;
    return $self->{RoleCharacteristics};
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
