package CIM_Log;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_EnabledLogicalElement;
use strict;


@CIM_Log::ISA = qw(_Initializable CIM_EnabledLogicalElement);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_EnabledLogicalElement::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{MaxNumberOfRecords} = undef;
    $self->{CurrentNumberOfRecords} = undef;
    $self->{LogState} = undef;
    $self->{OverwritePolicy} = undef;
    $self->{epr_name} = undef;  
    $self->{invokableMethods}->{ClearLog} = { input => [], output => [] };
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            MaxNumberOfRecords accessor method.
#===============================================================================

sub MaxNumberOfRecords{
    my ($self, $newval) = @_;
    $self->{MaxNumberOfRecords} = $newval if @_ > 1;
    return $self->{MaxNumberOfRecords};
}
#===============================================================================


#===============================================================================
#            CurrentNumberOfRecords accessor method.
#===============================================================================

sub CurrentNumberOfRecords{
    my ($self, $newval) = @_;
    $self->{CurrentNumberOfRecords} = $newval if @_ > 1;
    return $self->{CurrentNumberOfRecords};
}
#===============================================================================


#===============================================================================
#            LogState accessor method.
#===============================================================================

sub LogState{
    my ($self, $newval) = @_;
    $self->{LogState} = $newval if @_ > 1;
    return $self->{LogState};
}
#===============================================================================


#===============================================================================
#            OverwritePolicy accessor method.
#===============================================================================

sub OverwritePolicy{
    my ($self, $newval) = @_;
    $self->{OverwritePolicy} = $newval if @_ > 1;
    return $self->{OverwritePolicy};
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
