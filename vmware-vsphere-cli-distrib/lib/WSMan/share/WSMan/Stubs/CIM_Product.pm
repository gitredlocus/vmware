package CIM_Product;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_ManagedElement;
use strict;


@CIM_Product::ISA = qw(_Initializable CIM_ManagedElement);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_ManagedElement::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{Name} = undef;
    $self->{IdentifyingNumber} = undef;
    $self->{Vendor} = undef;
    $self->{Version} = undef;
    $self->{SKUNumber} = undef;
    $self->{WarrantyStartDate} = undef;
    $self->{WarrantyDuration} = undef;
    $self->{Family} = undef;
    $self->{epr_name} = undef;  
    push @{$self->{id_keys}}, 'Name';
    push @{$self->{id_keys}}, 'IdentifyingNumber';
    push @{$self->{id_keys}}, 'Vendor';
    push @{$self->{id_keys}}, 'Version';
    @{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
    if(keys %args){
        $self->_subinit(%args);
    }
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
#            IdentifyingNumber accessor method.
#===============================================================================

sub IdentifyingNumber{
    my ($self, $newval) = @_;
    $self->{IdentifyingNumber} = $newval if @_ > 1;
    return $self->{IdentifyingNumber};
}
#===============================================================================


#===============================================================================
#            Vendor accessor method.
#===============================================================================

sub Vendor{
    my ($self, $newval) = @_;
    $self->{Vendor} = $newval if @_ > 1;
    return $self->{Vendor};
}
#===============================================================================


#===============================================================================
#            Version accessor method.
#===============================================================================

sub Version{
    my ($self, $newval) = @_;
    $self->{Version} = $newval if @_ > 1;
    return $self->{Version};
}
#===============================================================================


#===============================================================================
#            SKUNumber accessor method.
#===============================================================================

sub SKUNumber{
    my ($self, $newval) = @_;
    $self->{SKUNumber} = $newval if @_ > 1;
    return $self->{SKUNumber};
}
#===============================================================================


#===============================================================================
#            WarrantyStartDate accessor method.
#===============================================================================

sub WarrantyStartDate{
    my ($self, $newval) = @_;
    $self->{WarrantyStartDate} = $newval if @_ > 1;
    return $self->{WarrantyStartDate};
}
#===============================================================================


#===============================================================================
#            WarrantyDuration accessor method.
#===============================================================================

sub WarrantyDuration{
    my ($self, $newval) = @_;
    $self->{WarrantyDuration} = $newval if @_ > 1;
    return $self->{WarrantyDuration};
}
#===============================================================================


#===============================================================================
#            Family accessor method.
#===============================================================================

sub Family{
    my ($self, $newval) = @_;
    $self->{Family} = $newval if @_ > 1;
    return $self->{Family};
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
