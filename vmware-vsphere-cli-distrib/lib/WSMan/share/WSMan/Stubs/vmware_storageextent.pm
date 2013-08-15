package VMware_StorageExtent;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_StorageExtent;
use strict;


@VMware_StorageExtent::ISA = qw(_Initializable CIM_StorageExtent);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_StorageExtent::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{epr_name} = undef;  
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

#SMI-S version

package VMWARE_StorageExtent;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_StorageExtent;
use strict;


@VMWARE_StorageExtent::ISA = qw(_Initializable CIM_StorageExtent);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_StorageExtent::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{SystemCreationClassName} = undef;
    $self->{SystemName} = undef;
    $self->{CreationClassName} = undef;
    $self->{DeviceID} = undef;
    $self->{Name} = undef;
    $self->{NameFormat} = undef;
    $self->{NameNamespace} = undef;
    $self->{BlockSize} = undef;
    $self->{NumberOfBlocks} = undef;
    $self->{ConsumableBlocks} = undef;
    $self->{OperationalStatus} = undef;
    $self->{ExtentStatus} = undef;
    $self->{epr_name} = undef;  
    push @{$self->{id_keys}}, 'SystemCreationClassName';
    push @{$self->{id_keys}}, 'SystemName';
    push @{$self->{id_keys}}, 'CreationClassName';
    push @{$self->{id_keys}}, 'DeviceID';
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
}


#===============================================================================


#===============================================================================
#            SystemCreationClassName accessor method.
#===============================================================================

sub SystemCreationClassName{
    my ($self, $newval) = @_;
    $self->{SystemCreationClassName} = $newval if @_ > 1;
    return $self->{SystemCreationClassName};
}
#===============================================================================


#===============================================================================
#            SystemName accessor method.
#===============================================================================

sub SystemName{
    my ($self, $newval) = @_;
    $self->{SystemName} = $newval if @_ > 1;
    return $self->{SystemName};
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
#            DeviceID accessor method.
#===============================================================================

sub DeviceID{
    my ($self, $newval) = @_;
    $self->{DeviceID} = $newval if @_ > 1;
    return $self->{DeviceID};
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
#            NameFormat accessor method.
#===============================================================================

sub NameFormat{
    my ($self, $newval) = @_;
    $self->{NameFormat} = $newval if @_ > 1;
    return $self->{NameFormat};
}
#===============================================================================


#===============================================================================
#            NameNamespace accessor method.
#===============================================================================

sub NameNamespace{
    my ($self, $newval) = @_;
    $self->{NameNamespace} = $newval if @_ > 1;
    return $self->{NameNamespace};
}
#===============================================================================


#===============================================================================
#            BlockSize accessor method.
#===============================================================================

sub BlockSize{
    my ($self, $newval) = @_;
    $self->{BlockSize} = $newval if @_ > 1;
    return $self->{BlockSize};
}
#===============================================================================


#===============================================================================
#            NumberOfBlocks accessor method.
#===============================================================================

sub NumberOfBlocks{
    my ($self, $newval) = @_;
    $self->{NumberOfBlocks} = $newval if @_ > 1;
    return $self->{NumberOfBlocks};
}
#===============================================================================


#===============================================================================
#            ConsumableBlocks accessor method.
#===============================================================================

sub ConsumableBlocks{
    my ($self, $newval) = @_;
    $self->{ConsumableBlocks} = $newval if @_ > 1;
    return $self->{ConsumableBlocks};
}
#===============================================================================


#===============================================================================
#            OperationalStatus accessor method.
#===============================================================================

sub OperationalStatus{
    my ($self, $newval) = @_;
    $self->{OperationalStatus} = $newval if @_ > 1;
    return $self->{OperationalStatus};
}
#===============================================================================


#===============================================================================
#            ExtentStatus accessor method.
#===============================================================================

sub ExtentStatus{
    my ($self, $newval) = @_;
    $self->{ExtentStatus} = $newval if @_ > 1;
    return $self->{ExtentStatus};
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
