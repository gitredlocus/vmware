package LSIESG_PortController;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_PortController;
use strict;


@LSIESG_PortController::ISA = qw(_Initializable CIM_PortController);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_PortController::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{BackgroundInitializationRate} = undef;
    $self->{CheckConsistencyRate} = undef;
    $self->{PatrolReadRate} = undef;
    $self->{RebuildRate} = undef;
    $self->{CoercionSize} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            BackgroundInitializationRate accessor method.
#===============================================================================

sub BackgroundInitializationRate{
    my ($self, $newval) = @_;
    $self->{BackgroundInitializationRate} = $newval if @_ > 1;
    return $self->{BackgroundInitializationRate};
}
#===============================================================================


#===============================================================================
#            CheckConsistencyRate accessor method.
#===============================================================================

sub CheckConsistencyRate{
    my ($self, $newval) = @_;
    $self->{CheckConsistencyRate} = $newval if @_ > 1;
    return $self->{CheckConsistencyRate};
}
#===============================================================================


#===============================================================================
#            PatrolReadRate accessor method.
#===============================================================================

sub PatrolReadRate{
    my ($self, $newval) = @_;
    $self->{PatrolReadRate} = $newval if @_ > 1;
    return $self->{PatrolReadRate};
}
#===============================================================================


#===============================================================================
#            RebuildRate accessor method.
#===============================================================================

sub RebuildRate{
    my ($self, $newval) = @_;
    $self->{RebuildRate} = $newval if @_ > 1;
    return $self->{RebuildRate};
}
#===============================================================================


#===============================================================================
#            CoercionSize accessor method.
#===============================================================================

sub CoercionSize{
    my ($self, $newval) = @_;
    $self->{CoercionSize} = $newval if @_ > 1;
    return $self->{CoercionSize};
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
