package LSIESG_ImportableStorageService;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_Service;
use strict;


@LSIESG_ImportableStorageService::ISA = qw(_Initializable CIM_Service);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_Service::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{ImportSetting} = undef;
    $self->{epr_name} = undef;  
    $self->{invokableMethods}->{ImportConfiguration} = { input => ['Config'], output => ['Job'] };
    $self->{invokableMethods}->{ClearConfiguration} = { input => ['Config'], output => ['Job'] };
    $self->{invokableMethods}->{ExportConfiguration} = { input => ['Element'], output => ['Job'] };
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            ImportSetting accessor method.
#===============================================================================

sub ImportSetting{
    my ($self, $newval) = @_;
    $self->{ImportSetting} = $newval if @_ > 1;
    return $self->{ImportSetting};
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
