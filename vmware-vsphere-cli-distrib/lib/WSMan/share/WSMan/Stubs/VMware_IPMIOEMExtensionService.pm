package VMware_IPMIOEMExtensionService;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_Service;
use strict;


@VMware_IPMIOEMExtensionService::ISA = qw(_Initializable CIM_Service);


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
    $self->{SupportedCommands} = undef;
    $self->{Name} = undef;
    $self->{epr_name} = undef;  
    $self->{invokableMethods}->{IssueCommandOnNode} = { input => ['CommandName', 'NodeNumber', 'Arguments'], output => ['Payload'] };
    $self->{invokableMethods}->{IssueCommand} = { input => ['CommandName', 'Arguments'], output => ['Payload'] };
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            SupportedCommands accessor method.
#===============================================================================

sub SupportedCommands{
    my ($self, $newval) = @_;
    $self->{SupportedCommands} = $newval if @_ > 1;
    return $self->{SupportedCommands};
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
#           epr_name accessor method.
#===============================================================================

sub epr_name{
    my ($self, $newval) = @_;
    $self->{epr_name} = $newval if @_ > 1;
    return $self->{epr_name};
}
#===============================================================================


1;
