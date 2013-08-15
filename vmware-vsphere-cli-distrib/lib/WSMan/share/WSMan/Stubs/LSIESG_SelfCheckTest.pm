package LSIESG_SelfCheckTest;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_DiagnosticTest;
use strict;


@LSIESG_SelfCheckTest::ISA = qw(_Initializable CIM_DiagnosticTest);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_DiagnosticTest::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{epr_name} = undef;  
    $self->{invokableMethods}->{RunDiagnostic} = { input => ['ManagedElement', 'DiagSetting', 'JobSetting'], output => ['Job'] };
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
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
