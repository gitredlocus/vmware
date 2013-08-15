package CIM_LogicalIdentity;
use WSMan::Stubs::Initializable;
use strict;


@CIM_LogicalIdentity::ISA = qw(_Initializable);


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
    $self->{SystemElement} = undef;
    $self->{SameElement} = undef;
    $self->{epr_name} = undef;  
    push @{$self->{id_keys}}, 'SystemElement';
    push @{$self->{id_keys}}, 'SameElement';
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            SystemElement accessor method.
#===============================================================================

sub SystemElement{
    my ($self, $newval) = @_;
    $self->{SystemElement} = $newval if @_ > 1;
    return $self->{SystemElement};
}
#===============================================================================


#===============================================================================
#            SameElement accessor method.
#===============================================================================

sub SameElement{
    my ($self, $newval) = @_;
    $self->{SameElement} = $newval if @_ > 1;
    return $self->{SameElement};
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
