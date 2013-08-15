package CIM_DNSGeneralSettingData;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_IPAssignmentSettingData;
use strict;


@CIM_DNSGeneralSettingData::ISA = qw(_Initializable CIM_IPAssignmentSettingData);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_IPAssignmentSettingData::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{AddressOrigin} = undef;
    $self->{AppendPrimarySuffixes} = undef;
    $self->{AppendParentSuffixes} = undef;
    $self->{DNSSuffixesToAppend} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            AddressOrigin accessor method.
#===============================================================================

sub AddressOrigin{
    my ($self, $newval) = @_;
    $self->{AddressOrigin} = $newval if @_ > 1;
    return $self->{AddressOrigin};
}
#===============================================================================


#===============================================================================
#            AppendPrimarySuffixes accessor method.
#===============================================================================

sub AppendPrimarySuffixes{
    my ($self, $newval) = @_;
    $self->{AppendPrimarySuffixes} = $newval if @_ > 1;
    return $self->{AppendPrimarySuffixes};
}
#===============================================================================


#===============================================================================
#            AppendParentSuffixes accessor method.
#===============================================================================

sub AppendParentSuffixes{
    my ($self, $newval) = @_;
    $self->{AppendParentSuffixes} = $newval if @_ > 1;
    return $self->{AppendParentSuffixes};
}
#===============================================================================


#===============================================================================
#            DNSSuffixesToAppend accessor method.
#===============================================================================

sub DNSSuffixesToAppend{
    my ($self, $newval) = @_;
    $self->{DNSSuffixesToAppend} = $newval if @_ > 1;
    return $self->{DNSSuffixesToAppend};
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
