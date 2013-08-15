package CIM_ElementSettingData;
use WSMan::Stubs::Initializable;
use strict;


@CIM_ElementSettingData::ISA = qw(_Initializable);


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
    $self->{ManagedElement} = undef;
    $self->{SettingData} = undef;
    $self->{IsDefault} = undef;
    $self->{IsCurrent} = undef;
    $self->{IsNext} = undef;
    $self->{IsMinimum} = undef;
    $self->{IsMaximum} = undef;
    $self->{IsPending} = undef;
    $self->{epr_name} = undef;  
    push @{$self->{id_keys}}, 'ManagedElement';
    push @{$self->{id_keys}}, 'SettingData';
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            ManagedElement accessor method.
#===============================================================================

sub ManagedElement{
    my ($self, $newval) = @_;
    $self->{ManagedElement} = $newval if @_ > 1;
    return $self->{ManagedElement};
}
#===============================================================================


#===============================================================================
#            SettingData accessor method.
#===============================================================================

sub SettingData{
    my ($self, $newval) = @_;
    $self->{SettingData} = $newval if @_ > 1;
    return $self->{SettingData};
}
#===============================================================================


#===============================================================================
#            IsDefault accessor method.
#===============================================================================

sub IsDefault{
    my ($self, $newval) = @_;
    $self->{IsDefault} = $newval if @_ > 1;
    return $self->{IsDefault};
}
#===============================================================================


#===============================================================================
#            IsCurrent accessor method.
#===============================================================================

sub IsCurrent{
    my ($self, $newval) = @_;
    $self->{IsCurrent} = $newval if @_ > 1;
    return $self->{IsCurrent};
}
#===============================================================================


#===============================================================================
#            IsNext accessor method.
#===============================================================================

sub IsNext{
    my ($self, $newval) = @_;
    $self->{IsNext} = $newval if @_ > 1;
    return $self->{IsNext};
}
#===============================================================================


#===============================================================================
#            IsMinimum accessor method.
#===============================================================================

sub IsMinimum{
    my ($self, $newval) = @_;
    $self->{IsMinimum} = $newval if @_ > 1;
    return $self->{IsMinimum};
}
#===============================================================================


#===============================================================================
#            IsMaximum accessor method.
#===============================================================================

sub IsMaximum{
    my ($self, $newval) = @_;
    $self->{IsMaximum} = $newval if @_ > 1;
    return $self->{IsMaximum};
}
#===============================================================================


#===============================================================================
#            IsPending accessor method.
#===============================================================================

sub IsPending{
    my ($self, $newval) = @_;
    $self->{IsPending} = $newval if @_ > 1;
    return $self->{IsPending};
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
