package ELXHBA_MemberOfCollection;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_MemberOfCollection;
use strict;


@ELXHBA_MemberOfCollection::ISA = qw(_Initializable CIM_MemberOfCollection);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_MemberOfCollection::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{Collection} = undef;
    $self->{Member} = undef;
    $self->{Caption} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            Collection accessor method.
#===============================================================================

sub Collection{
    my ($self, $newval) = @_;
    $self->{Collection} = $newval if @_ > 1;
    return $self->{Collection};
}
#===============================================================================


#===============================================================================
#            Member accessor method.
#===============================================================================

sub Member{
    my ($self, $newval) = @_;
    $self->{Member} = $newval if @_ > 1;
    return $self->{Member};
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
#           epr_name accessor method.
#===============================================================================

sub epr_name{
    my ($self, $newval) = @_;
    $self->{epr_name} = $newval if @_ > 1;
    return $self->{epr_name};
}
#===============================================================================


1;
