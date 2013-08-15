package CIM_RecordForLog;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_ManagedElement;
use strict;


@CIM_RecordForLog::ISA = qw(_Initializable CIM_ManagedElement);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_ManagedElement::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{RecordFormat} = undef;
    $self->{RecordData} = undef;
    $self->{Locale} = undef;
    $self->{PerceivedSeverity} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            RecordFormat accessor method.
#===============================================================================

sub RecordFormat{
    my ($self, $newval) = @_;
    $self->{RecordFormat} = $newval if @_ > 1;
    return $self->{RecordFormat};
}
#===============================================================================


#===============================================================================
#            RecordData accessor method.
#===============================================================================

sub RecordData{
    my ($self, $newval) = @_;
    $self->{RecordData} = $newval if @_ > 1;
    return $self->{RecordData};
}
#===============================================================================


#===============================================================================
#            Locale accessor method.
#===============================================================================

sub Locale{
    my ($self, $newval) = @_;
    $self->{Locale} = $newval if @_ > 1;
    return $self->{Locale};
}
#===============================================================================


#===============================================================================
#            PerceivedSeverity accessor method.
#===============================================================================

sub PerceivedSeverity{
    my ($self, $newval) = @_;
    $self->{PerceivedSeverity} = $newval if @_ > 1;
    return $self->{PerceivedSeverity};
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
