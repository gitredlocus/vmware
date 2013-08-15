package VMware_InstalledSoftwareIdentity;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_InstalledSoftwareIdentity;
use strict;


@VMware_InstalledSoftwareIdentity::ISA = qw(_Initializable CIM_InstalledSoftwareIdentity);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_InstalledSoftwareIdentity::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{System} = undef;
    $self->{InstalledSoftware} = undef;
    $self->{epr_name} = undef;  
    push @{$self->{id_keys}}, 'System';
    push @{$self->{id_keys}}, 'InstalledSoftware';
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            System accessor method.
#===============================================================================

sub System{
    my ($self, $newval) = @_;
    $self->{System} = $newval if @_ > 1;
    return $self->{System};
}
#===============================================================================


#===============================================================================
#            InstalledSoftware accessor method.
#===============================================================================

sub InstalledSoftware{
    my ($self, $newval) = @_;
    $self->{InstalledSoftware} = $newval if @_ > 1;
    return $self->{InstalledSoftware};
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

#SMI-S

package VMWARE_InstalledSoftwareIdentity;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_InstalledSoftwareIdentity;
use strict;


@VMWARE_InstalledSoftwareIdentity::ISA = qw(_Initializable CIM_InstalledSoftwareIdentity);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_InstalledSoftwareIdentity::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{System} = undef;
    $self->{InstalledSoftware} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            System accessor method.
#===============================================================================

sub System{
    my ($self, $newval) = @_;
    $self->{System} = $newval if @_ > 1;
    return $self->{System};
}
#===============================================================================


#===============================================================================
#            InstalledSoftware accessor method.
#===============================================================================

sub InstalledSoftware{
    my ($self, $newval) = @_;
    $self->{InstalledSoftware} = $newval if @_ > 1;
    return $self->{InstalledSoftware};
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
