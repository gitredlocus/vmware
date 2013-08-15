package CIM_Group;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_Collection;
use strict;


@CIM_Group::ISA = qw(_Initializable CIM_Collection);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_Collection::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{CreationClassName} = undef;
    $self->{Name} = undef;
    $self->{BusinessCategory} = undef;
    $self->{CommonName} = undef;
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
#            BusinessCategory accessor method.
#===============================================================================

sub BusinessCategory{
    my ($self, $newval) = @_;
    $self->{BusinessCategory} = $newval if @_ > 1;
    return $self->{BusinessCategory};
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
#           epr_name accessor method.
#===============================================================================

sub epr_name{
    my ($self, $newval) = @_;
    $self->{epr_name} = $newval if @_ > 1;
    return $self->{epr_name};
}
#===============================================================================


1;
