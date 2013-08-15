package ELXHBA_FlashImageSoftwareIdentity;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::ELXHBA_SoftwareIdentity;
use strict;


@ELXHBA_FlashImageSoftwareIdentity::ISA = qw(_Initializable ELXHBA_SoftwareIdentity);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->ELXHBA_SoftwareIdentity::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{ProgramType} = undef;
    $self->{ProgramID} = undef;
    $self->{Description} = undef;
    $self->{StartAddress} = undef;
    $self->{ProgramLength} = undef;
    $self->{Next} = undef;
    $self->{Previous} = undef;
    $self->{IsWakeupParameter} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            ProgramType accessor method.
#===============================================================================

sub ProgramType{
    my ($self, $newval) = @_;
    $self->{ProgramType} = $newval if @_ > 1;
    return $self->{ProgramType};
}
#===============================================================================


#===============================================================================
#            ProgramID accessor method.
#===============================================================================

sub ProgramID{
    my ($self, $newval) = @_;
    $self->{ProgramID} = $newval if @_ > 1;
    return $self->{ProgramID};
}
#===============================================================================


#===============================================================================
#            Description accessor method.
#===============================================================================

sub Description{
    my ($self, $newval) = @_;
    $self->{Description} = $newval if @_ > 1;
    return $self->{Description};
}
#===============================================================================


#===============================================================================
#            StartAddress accessor method.
#===============================================================================

sub StartAddress{
    my ($self, $newval) = @_;
    $self->{StartAddress} = $newval if @_ > 1;
    return $self->{StartAddress};
}
#===============================================================================


#===============================================================================
#            ProgramLength accessor method.
#===============================================================================

sub ProgramLength{
    my ($self, $newval) = @_;
    $self->{ProgramLength} = $newval if @_ > 1;
    return $self->{ProgramLength};
}
#===============================================================================


#===============================================================================
#            Next accessor method.
#===============================================================================

sub Next{
    my ($self, $newval) = @_;
    $self->{Next} = $newval if @_ > 1;
    return $self->{Next};
}
#===============================================================================


#===============================================================================
#            Previous accessor method.
#===============================================================================

sub Previous{
    my ($self, $newval) = @_;
    $self->{Previous} = $newval if @_ > 1;
    return $self->{Previous};
}
#===============================================================================


#===============================================================================
#            IsWakeupParameter accessor method.
#===============================================================================

sub IsWakeupParameter{
    my ($self, $newval) = @_;
    $self->{IsWakeupParameter} = $newval if @_ > 1;
    return $self->{IsWakeupParameter};
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
