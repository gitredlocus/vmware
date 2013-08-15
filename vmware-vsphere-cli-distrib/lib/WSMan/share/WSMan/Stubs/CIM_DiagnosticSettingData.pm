package CIM_DiagnosticSettingData;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_SettingData;
use strict;


@CIM_DiagnosticSettingData::ISA = qw(_Initializable CIM_SettingData);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_SettingData::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{HaltOnError} = undef;
    $self->{QuickMode} = undef;
    $self->{PercentOfTestCoverage} = undef;
    $self->{LoopControlParameter} = undef;
    $self->{LoopControl} = undef;
    $self->{OtherLoopControlDescriptions} = undef;
    $self->{ResultPersistence} = undef;
    $self->{LogOptions} = undef;
    $self->{OtherLogOptionsDescriptions} = undef;
    $self->{LogStorage} = undef;
    $self->{OtherLogStorageDescriptions} = undef;
    $self->{VerbosityLevel} = undef;
    $self->{QueryTimeout} = undef;
    $self->{NonDestructive} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            HaltOnError accessor method.
#===============================================================================

sub HaltOnError{
    my ($self, $newval) = @_;
    $self->{HaltOnError} = $newval if @_ > 1;
    return $self->{HaltOnError};
}
#===============================================================================


#===============================================================================
#            QuickMode accessor method.
#===============================================================================

sub QuickMode{
    my ($self, $newval) = @_;
    $self->{QuickMode} = $newval if @_ > 1;
    return $self->{QuickMode};
}
#===============================================================================


#===============================================================================
#            PercentOfTestCoverage accessor method.
#===============================================================================

sub PercentOfTestCoverage{
    my ($self, $newval) = @_;
    $self->{PercentOfTestCoverage} = $newval if @_ > 1;
    return $self->{PercentOfTestCoverage};
}
#===============================================================================


#===============================================================================
#            LoopControlParameter accessor method.
#===============================================================================

sub LoopControlParameter{
    my ($self, $newval) = @_;
    $self->{LoopControlParameter} = $newval if @_ > 1;
    return $self->{LoopControlParameter};
}
#===============================================================================


#===============================================================================
#            LoopControl accessor method.
#===============================================================================

sub LoopControl{
    my ($self, $newval) = @_;
    $self->{LoopControl} = $newval if @_ > 1;
    return $self->{LoopControl};
}
#===============================================================================


#===============================================================================
#            OtherLoopControlDescriptions accessor method.
#===============================================================================

sub OtherLoopControlDescriptions{
    my ($self, $newval) = @_;
    $self->{OtherLoopControlDescriptions} = $newval if @_ > 1;
    return $self->{OtherLoopControlDescriptions};
}
#===============================================================================


#===============================================================================
#            ResultPersistence accessor method.
#===============================================================================

sub ResultPersistence{
    my ($self, $newval) = @_;
    $self->{ResultPersistence} = $newval if @_ > 1;
    return $self->{ResultPersistence};
}
#===============================================================================


#===============================================================================
#            LogOptions accessor method.
#===============================================================================

sub LogOptions{
    my ($self, $newval) = @_;
    $self->{LogOptions} = $newval if @_ > 1;
    return $self->{LogOptions};
}
#===============================================================================


#===============================================================================
#            OtherLogOptionsDescriptions accessor method.
#===============================================================================

sub OtherLogOptionsDescriptions{
    my ($self, $newval) = @_;
    $self->{OtherLogOptionsDescriptions} = $newval if @_ > 1;
    return $self->{OtherLogOptionsDescriptions};
}
#===============================================================================


#===============================================================================
#            LogStorage accessor method.
#===============================================================================

sub LogStorage{
    my ($self, $newval) = @_;
    $self->{LogStorage} = $newval if @_ > 1;
    return $self->{LogStorage};
}
#===============================================================================


#===============================================================================
#            OtherLogStorageDescriptions accessor method.
#===============================================================================

sub OtherLogStorageDescriptions{
    my ($self, $newval) = @_;
    $self->{OtherLogStorageDescriptions} = $newval if @_ > 1;
    return $self->{OtherLogStorageDescriptions};
}
#===============================================================================


#===============================================================================
#            VerbosityLevel accessor method.
#===============================================================================

sub VerbosityLevel{
    my ($self, $newval) = @_;
    $self->{VerbosityLevel} = $newval if @_ > 1;
    return $self->{VerbosityLevel};
}
#===============================================================================


#===============================================================================
#            QueryTimeout accessor method.
#===============================================================================

sub QueryTimeout{
    my ($self, $newval) = @_;
    $self->{QueryTimeout} = $newval if @_ > 1;
    return $self->{QueryTimeout};
}
#===============================================================================


#===============================================================================
#            NonDestructive accessor method.
#===============================================================================

sub NonDestructive{
    my ($self, $newval) = @_;
    $self->{NonDestructive} = $newval if @_ > 1;
    return $self->{NonDestructive};
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
