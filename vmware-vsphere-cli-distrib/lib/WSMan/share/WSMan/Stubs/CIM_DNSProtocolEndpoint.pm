package CIM_DNSProtocolEndpoint;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_ProtocolEndpoint;
use strict;


@CIM_DNSProtocolEndpoint::ISA = qw(_Initializable CIM_ProtocolEndpoint);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_ProtocolEndpoint::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{Hostname} = undef;
    $self->{AppendPrimarySuffixes} = undef;
    $self->{AppendParentSuffixes} = undef;
    $self->{DNSSuffixesToAppend} = undef;
    $self->{DomainName} = undef;
    $self->{UseSuffixWhenRegistering} = undef;
    $self->{RegisterThisConnectionsAddress} = undef;
    $self->{DHCPOptionsToUse} = undef;
    $self->{epr_name} = undef;  
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            Hostname accessor method.
#===============================================================================

sub Hostname{
    my ($self, $newval) = @_;
    $self->{Hostname} = $newval if @_ > 1;
    return $self->{Hostname};
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
#            DomainName accessor method.
#===============================================================================

sub DomainName{
    my ($self, $newval) = @_;
    $self->{DomainName} = $newval if @_ > 1;
    return $self->{DomainName};
}
#===============================================================================


#===============================================================================
#            UseSuffixWhenRegistering accessor method.
#===============================================================================

sub UseSuffixWhenRegistering{
    my ($self, $newval) = @_;
    $self->{UseSuffixWhenRegistering} = $newval if @_ > 1;
    return $self->{UseSuffixWhenRegistering};
}
#===============================================================================


#===============================================================================
#            RegisterThisConnectionsAddress accessor method.
#===============================================================================

sub RegisterThisConnectionsAddress{
    my ($self, $newval) = @_;
    $self->{RegisterThisConnectionsAddress} = $newval if @_ > 1;
    return $self->{RegisterThisConnectionsAddress};
}
#===============================================================================


#===============================================================================
#            DHCPOptionsToUse accessor method.
#===============================================================================

sub DHCPOptionsToUse{
    my ($self, $newval) = @_;
    $self->{DHCPOptionsToUse} = $newval if @_ > 1;
    return $self->{DHCPOptionsToUse};
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
