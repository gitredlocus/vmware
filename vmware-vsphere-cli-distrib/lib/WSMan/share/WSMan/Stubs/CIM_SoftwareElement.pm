package CIM_SoftwareElement;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_LogicalElement;
use strict;


@CIM_SoftwareElement::ISA = qw(_Initializable CIM_LogicalElement);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_LogicalElement::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{Name} = undef;
    $self->{Version} = undef;
    $self->{SoftwareElementState} = undef;
    $self->{SoftwareElementID} = undef;
    $self->{TargetOperatingSystem} = undef;
    $self->{OtherTargetOS} = undef;
    $self->{Manufacturer} = undef;
    $self->{BuildNumber} = undef;
    $self->{SerialNumber} = undef;
    $self->{CodeSet} = undef;
    $self->{IdentificationCode} = undef;
    $self->{LanguageEdition} = undef;
    $self->{epr_name} = undef;  
    push @{$self->{id_keys}}, 'Name';
    push @{$self->{id_keys}}, 'Version';
    push @{$self->{id_keys}}, 'SoftwareElementState';
    push @{$self->{id_keys}}, 'SoftwareElementID';
    push @{$self->{id_keys}}, 'TargetOperatingSystem';
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
#            Version accessor method.
#===============================================================================

sub Version{
    my ($self, $newval) = @_;
    $self->{Version} = $newval if @_ > 1;
    return $self->{Version};
}
#===============================================================================


#===============================================================================
#            SoftwareElementState accessor method.
#===============================================================================

sub SoftwareElementState{
    my ($self, $newval) = @_;
    $self->{SoftwareElementState} = $newval if @_ > 1;
    return $self->{SoftwareElementState};
}
#===============================================================================


#===============================================================================
#            SoftwareElementID accessor method.
#===============================================================================

sub SoftwareElementID{
    my ($self, $newval) = @_;
    $self->{SoftwareElementID} = $newval if @_ > 1;
    return $self->{SoftwareElementID};
}
#===============================================================================


#===============================================================================
#            TargetOperatingSystem accessor method.
#===============================================================================

sub TargetOperatingSystem{
    my ($self, $newval) = @_;
    $self->{TargetOperatingSystem} = $newval if @_ > 1;
    return $self->{TargetOperatingSystem};
}
#===============================================================================


#===============================================================================
#            OtherTargetOS accessor method.
#===============================================================================

sub OtherTargetOS{
    my ($self, $newval) = @_;
    $self->{OtherTargetOS} = $newval if @_ > 1;
    return $self->{OtherTargetOS};
}
#===============================================================================


#===============================================================================
#            Manufacturer accessor method.
#===============================================================================

sub Manufacturer{
    my ($self, $newval) = @_;
    $self->{Manufacturer} = $newval if @_ > 1;
    return $self->{Manufacturer};
}
#===============================================================================


#===============================================================================
#            BuildNumber accessor method.
#===============================================================================

sub BuildNumber{
    my ($self, $newval) = @_;
    $self->{BuildNumber} = $newval if @_ > 1;
    return $self->{BuildNumber};
}
#===============================================================================


#===============================================================================
#            SerialNumber accessor method.
#===============================================================================

sub SerialNumber{
    my ($self, $newval) = @_;
    $self->{SerialNumber} = $newval if @_ > 1;
    return $self->{SerialNumber};
}
#===============================================================================


#===============================================================================
#            CodeSet accessor method.
#===============================================================================

sub CodeSet{
    my ($self, $newval) = @_;
    $self->{CodeSet} = $newval if @_ > 1;
    return $self->{CodeSet};
}
#===============================================================================


#===============================================================================
#            IdentificationCode accessor method.
#===============================================================================

sub IdentificationCode{
    my ($self, $newval) = @_;
    $self->{IdentificationCode} = $newval if @_ > 1;
    return $self->{IdentificationCode};
}
#===============================================================================


#===============================================================================
#            LanguageEdition accessor method.
#===============================================================================

sub LanguageEdition{
    my ($self, $newval) = @_;
    $self->{LanguageEdition} = $newval if @_ > 1;
    return $self->{LanguageEdition};
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
