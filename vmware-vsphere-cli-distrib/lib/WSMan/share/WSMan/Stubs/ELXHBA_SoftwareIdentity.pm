package ELXHBA_SoftwareIdentity;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_SoftwareIdentity;
use strict;


@ELXHBA_SoftwareIdentity::ISA = qw(_Initializable CIM_SoftwareIdentity);


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
    $self->{ReleaseType} = undef;
    $self->{TestReleaseVersion} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            ReleaseType accessor method.
#===============================================================================

sub ReleaseType{
    my ($self, $newval) = @_;
    $self->{ReleaseType} = $newval if @_ > 1;
    return $self->{ReleaseType};
}
#===============================================================================


#===============================================================================
#            TestReleaseVersion accessor method.
#===============================================================================

sub TestReleaseVersion{
    my ($self, $newval) = @_;
    $self->{TestReleaseVersion} = $newval if @_ > 1;
    return $self->{TestReleaseVersion};
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
