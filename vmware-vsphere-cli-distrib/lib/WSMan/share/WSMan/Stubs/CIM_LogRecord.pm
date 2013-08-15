package CIM_LogRecord;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_RecordForLog;
use strict;


@CIM_LogRecord::ISA = qw(_Initializable CIM_RecordForLog);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_RecordForLog::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{LogCreationClassName} = undef;
    $self->{LogName} = undef;
    $self->{CreationClassName} = undef;
    $self->{RecordID} = undef;
    $self->{MessageTimestamp} = undef;
    $self->{DataFormat} = undef;
    $self->{epr_name} = undef;  
    push @{$self->{id_keys}}, 'LogCreationClassName';
    push @{$self->{id_keys}}, 'LogName';
    push @{$self->{id_keys}}, 'CreationClassName';
    push @{$self->{id_keys}}, 'RecordID';
    push @{$self->{id_keys}}, 'MessageTimestamp';
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
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
#            CreationClassName accessor method.
#===============================================================================

sub CreationClassName{
    my ($self, $newval) = @_;
    $self->{CreationClassName} = $newval if @_ > 1;
    return $self->{CreationClassName};
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
#            MessageTimestamp accessor method.
#===============================================================================

sub MessageTimestamp{
    my ($self, $newval) = @_;
    $self->{MessageTimestamp} = $newval if @_ > 1;
    return $self->{MessageTimestamp};
}
#===============================================================================


#===============================================================================
#            DataFormat accessor method.
#===============================================================================

sub DataFormat{
    my ($self, $newval) = @_;
    $self->{DataFormat} = $newval if @_ > 1;
    return $self->{DataFormat};
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
