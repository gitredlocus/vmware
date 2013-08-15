package OMC_SoftwareIdentity;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_SoftwareIdentity;
use strict;


@OMC_SoftwareIdentity::ISA = qw(_Initializable CIM_SoftwareIdentity);


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
    $self->{Caption} = undef;
    $self->{ElementName} = undef;
    $self->{InstanceID} = undef;
    $self->{IsEntity} = undef;
    $self->{Manufacturer} = undef;
    $self->{Name} = undef;
    $self->{ReleaseDate} = undef;
    $self->{VersionString} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
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
#            ElementName accessor method.
#===============================================================================

sub ElementName{
    my ($self, $newval) = @_;
    $self->{ElementName} = $newval if @_ > 1;
    return $self->{ElementName};
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
#            IsEntity accessor method.
#===============================================================================

sub IsEntity{
    my ($self, $newval) = @_;
    $self->{IsEntity} = $newval if @_ > 1;
    return $self->{IsEntity};
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
#            ReleaseDate accessor method.
#===============================================================================

sub ReleaseDate{
    my ($self, $newval) = @_;
    $self->{ReleaseDate} = $newval if @_ > 1;
    return $self->{ReleaseDate};
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
#           epr_name accessor method.
#===============================================================================

sub epr_name{
    my ($self, $newval) = @_;
    $self->{epr_name} = $newval if @_ > 1;
    return $self->{epr_name};
}
#===============================================================================


1;
