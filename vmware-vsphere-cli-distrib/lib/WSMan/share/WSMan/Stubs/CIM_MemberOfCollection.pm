package CIM_MemberOfCollection;
use WSMan::Stubs::Initializable;
use strict;


@CIM_MemberOfCollection::ISA = qw(_Initializable);


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
    $self->{Collection} = undef;
    $self->{Member} = undef;
    $self->{epr_name} = undef;  
    push @{$self->{id_keys}}, 'Collection';
    push @{$self->{id_keys}}, 'Member';
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
#           epr_name accessor method.
#===============================================================================

sub epr_name{
    my ($self, $newval) = @_;
    $self->{epr_name} = $newval if @_ > 1;
    return $self->{epr_name};
}
#===============================================================================


1;
