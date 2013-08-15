package OMC_IpmiLogRecord;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_LogRecord;
use strict;


@OMC_IpmiLogRecord::ISA = qw(_Initializable CIM_LogRecord);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_LogRecord::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{Caption} = undef;
    $self->{CreationClassName} = undef;
    $self->{Description} = undef;
    $self->{ElementName} = undef;
    $self->{LogCreationClassName} = undef;
    $self->{LogName} = undef;
    $self->{MessageTimestamp} = undef;
    $self->{RecordData} = undef;
    $self->{RecordFormat} = undef;
    $self->{RecordID} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
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
#            CreationClassName accessor method.
#===============================================================================

sub CreationClassName{
    my ($self, $newval) = @_;
    $self->{CreationClassName} = $newval if @_ > 1;
    return $self->{CreationClassName};
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
#            ElementName accessor method.
#===============================================================================

sub ElementName{
    my ($self, $newval) = @_;
    $self->{ElementName} = $newval if @_ > 1;
    return $self->{ElementName};
}
#===============================================================================


#===============================================================================
#            LogCreationClassName accessor method.
#===============================================================================

sub LogCreationClassName{
    my ($self, $newval) = @_;
    $self->{LogCreationClassName} = $newval if @_ > 1;
    return $self->{LogCreationClassName};
}
#===============================================================================


#===============================================================================
#            LogName accessor method.
#===============================================================================

sub LogName{
    my ($self, $newval) = @_;
    $self->{LogName} = $newval if @_ > 1;
    return $self->{LogName};
}
#===============================================================================


#===============================================================================
#            MessageTimestamp accessor method.
#===============================================================================

sub MessageTimestamp{
    my ($self, $newval) = @_;
    $self->{MessageTimestamp} = $newval if @_ > 1;
    return $self->{MessageTimestamp};
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
#            RecordFormat accessor method.
#===============================================================================

sub RecordFormat{
    my ($self, $newval) = @_;
    $self->{RecordFormat} = $newval if @_ > 1;
    return $self->{RecordFormat};
}
#===============================================================================


#===============================================================================
#            RecordID accessor method.
#===============================================================================

sub RecordID{
    my ($self, $newval) = @_;
    $self->{RecordID} = $newval if @_ > 1;
    return $self->{RecordID};
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
