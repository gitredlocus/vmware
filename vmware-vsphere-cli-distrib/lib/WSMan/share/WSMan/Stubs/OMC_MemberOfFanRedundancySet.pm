package OMC_MemberOfFanRedundancySet;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::OMC_MemberOfCollection;
use strict;


@OMC_MemberOfFanRedundancySet::ISA = qw(_Initializable OMC_MemberOfCollection);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->OMC_MemberOfCollection::_init();
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
