package VMware_SoftwareIdentity;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_SoftwareIdentity;
use strict;


@VMware_SoftwareIdentity::ISA = qw(_Initializable CIM_SoftwareIdentity);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_SoftwareIdentity::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{LargeBuildNumber} = undef;
    $self->{LastStartTime} = undef;
    $self->{IsLargeBuildNumber} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            LargeBuildNumber accessor method.
#===============================================================================

sub LargeBuildNumber{
    my ($self, $newval) = @_;
    $self->{LargeBuildNumber} = $newval if @_ > 1;
    return $self->{LargeBuildNumber};
}
#===============================================================================


#===============================================================================
#            LastStartTime accessor method.
#===============================================================================

sub LastStartTime{
    my ($self, $newval) = @_;
    $self->{LastStartTime} = $newval if @_ > 1;
    return $self->{LastStartTime};
}
#===============================================================================


#===============================================================================
#            IsLargeBuildNumber accessor method.
#===============================================================================

sub IsLargeBuildNumber{
    my ($self, $newval) = @_;
    $self->{IsLargeBuildNumber} = $newval if @_ > 1;
    return $self->{IsLargeBuildNumber};
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

package VMWARE_SoftwareIdentity;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_SoftwareIdentity;
use strict;


@VMWARE_SoftwareIdentity::ISA = qw(_Initializable CIM_SoftwareIdentity);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_SoftwareIdentity::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{InstanceID} = undef;
    $self->{VersionString} = undef;
    $self->{Manufacturer} = undef;
    $self->{Name} = undef;
    $self->{LargeBuildNumber} = undef;
    $self->{IsLargeBuildNumber} = undef;
    $self->{epr_name} = undef;  
    push @{$self->{id_keys}}, 'InstanceID';
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            InstanceID accessor method.
#===============================================================================

sub InstanceID{
    my ($self, $newval) = @_;
    $self->{InstanceID} = $newval if @_ > 1;
    return $self->{InstanceID};
}
#===============================================================================


#===============================================================================
#            VersionString accessor method.
#===============================================================================

sub VersionString{
    my ($self, $newval) = @_;
    $self->{VersionString} = $newval if @_ > 1;
    return $self->{VersionString};
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
#            Name accessor method.
#===============================================================================

sub Name{
    my ($self, $newval) = @_;
    $self->{Name} = $newval if @_ > 1;
    return $self->{Name};
}
#===============================================================================


#===============================================================================
#            LargeBuildNumber accessor method.
#===============================================================================

sub LargeBuildNumber{
    my ($self, $newval) = @_;
    $self->{LargeBuildNumber} = $newval if @_ > 1;
    return $self->{LargeBuildNumber};
}
#===============================================================================


#===============================================================================
#            IsLargeBuildNumber accessor method.
#===============================================================================

sub IsLargeBuildNumber{
    my ($self, $newval) = @_;
    $self->{IsLargeBuildNumber} = $newval if @_ > 1;
    return $self->{IsLargeBuildNumber};
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
