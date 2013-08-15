package CIM_InstalledSoftwareIdentity;
use WSMan::Stubs::Initializable;
use strict;


@CIM_InstalledSoftwareIdentity::ISA = qw(_Initializable);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
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
