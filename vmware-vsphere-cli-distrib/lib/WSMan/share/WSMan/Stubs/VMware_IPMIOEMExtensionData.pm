package VMware_IPMIOEMExtensionData;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_ManagedSystemElement;
use strict;


@VMware_IPMIOEMExtensionData::ISA = qw(_Initializable CIM_ManagedSystemElement);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_ManagedSystemElement::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{Name} = undef;
    $self->{NodeNumber} = undef;
    $self->{CompletionCode} = undef;
    $self->{Payload} = undef;
    $self->{epr_name} = undef;  
    push @{$self->{id_keys}}, 'Name';
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
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
#            NodeNumber accessor method.
#===============================================================================

sub NodeNumber{
    my ($self, $newval) = @_;
    $self->{NodeNumber} = $newval if @_ > 1;
    return $self->{NodeNumber};
}
#===============================================================================


#===============================================================================
#            CompletionCode accessor method.
#===============================================================================

sub CompletionCode{
    my ($self, $newval) = @_;
    $self->{CompletionCode} = $newval if @_ > 1;
    return $self->{CompletionCode};
}
#===============================================================================


#===============================================================================
#            Payload accessor method.
#===============================================================================

sub Payload{
    my ($self, $newval) = @_;
    $self->{Payload} = $newval if @_ > 1;
    return $self->{Payload};
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
