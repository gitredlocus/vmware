package CIM_Account;
use WSMan::Stubs::Initializable;
use WSMan::Stubs::CIM_EnabledLogicalElement;
use strict;


@CIM_Account::ISA = qw(_Initializable CIM_EnabledLogicalElement);


#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
    my ($self, %args) = @_;
    $self->CIM_EnabledLogicalElement::_init();
    unless(exists $self->{invokableMethods}){
        $self->{invokableMethods} = {};
    }
    unless(exists $self->{id_keys}){
        $self->{id_keys} = ();
    }
    $self->{SystemCreationClassName} = undef;
    $self->{SystemName} = undef;
    $self->{CreationClassName} = undef;
    $self->{Name} = undef;
    $self->{UserID} = undef;
    $self->{ObjectClass} = undef;
    $self->{Descriptions} = undef;
    $self->{Host} = undef;
    $self->{LocalityName} = undef;
    $self->{OrganizationName} = undef;
    $self->{OU} = undef;
    $self->{SeeAlso} = undef;
    $self->{UserCertificate} = undef;
    $self->{UserPassword} = undef;
    $self->{PasswordHistoryDepth} = undef;
    $self->{PasswordExpiration} = undef;
    $self->{ComplexPasswordRulesEnforced} = undef;
    $self->{InactivityTimeout} = undef;
    $self->{MaximumSuccessiveLoginFailures} = undef;
    $self->{LastLogin} = undef;
    $self->{UserPasswordEncryptionAlgorithm} = undef;
    $self->{OtherUserPasswordEncryptionAlgorithm} = undef;
    $self->{epr_name} = undef;  
    push @{$self->{id_keys}}, 'SystemCreationClassName';
    push @{$self->{id_keys}}, 'SystemName';
    push @{$self->{id_keys}}, 'CreationClassName';
    push @{$self->{id_keys}}, 'Name';
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
#            Name accessor method.
#===============================================================================

sub Name{
    my ($self, $newval) = @_;
    $self->{Name} = $newval if @_ > 1;
    return $self->{Name};
}
#===============================================================================


#===============================================================================
#            UserID accessor method.
#===============================================================================

sub UserID{
    my ($self, $newval) = @_;
    $self->{UserID} = $newval if @_ > 1;
    return $self->{UserID};
}
#===============================================================================


#===============================================================================
#            ObjectClass accessor method.
#===============================================================================

sub ObjectClass{
    my ($self, $newval) = @_;
    $self->{ObjectClass} = $newval if @_ > 1;
    return $self->{ObjectClass};
}
#===============================================================================


#===============================================================================
#            Descriptions accessor method.
#===============================================================================

sub Descriptions{
    my ($self, $newval) = @_;
    $self->{Descriptions} = $newval if @_ > 1;
    return $self->{Descriptions};
}
#===============================================================================


#===============================================================================
#            Host accessor method.
#===============================================================================

sub Host{
    my ($self, $newval) = @_;
    $self->{Host} = $newval if @_ > 1;
    return $self->{Host};
}
#===============================================================================


#===============================================================================
#            LocalityName accessor method.
#===============================================================================

sub LocalityName{
    my ($self, $newval) = @_;
    $self->{LocalityName} = $newval if @_ > 1;
    return $self->{LocalityName};
}
#===============================================================================


#===============================================================================
#            OrganizationName accessor method.
#===============================================================================

sub OrganizationName{
    my ($self, $newval) = @_;
    $self->{OrganizationName} = $newval if @_ > 1;
    return $self->{OrganizationName};
}
#===============================================================================


#===============================================================================
#            OU accessor method.
#===============================================================================

sub OU{
    my ($self, $newval) = @_;
    $self->{OU} = $newval if @_ > 1;
    return $self->{OU};
}
#===============================================================================


#===============================================================================
#            SeeAlso accessor method.
#===============================================================================

sub SeeAlso{
    my ($self, $newval) = @_;
    $self->{SeeAlso} = $newval if @_ > 1;
    return $self->{SeeAlso};
}
#===============================================================================


#===============================================================================
#            UserCertificate accessor method.
#===============================================================================

sub UserCertificate{
    my ($self, $newval) = @_;
    $self->{UserCertificate} = $newval if @_ > 1;
    return $self->{UserCertificate};
}
#===============================================================================


#===============================================================================
#            UserPassword accessor method.
#===============================================================================

sub UserPassword{
    my ($self, $newval) = @_;
    $self->{UserPassword} = $newval if @_ > 1;
    return $self->{UserPassword};
}
#===============================================================================


#===============================================================================
#            PasswordHistoryDepth accessor method.
#===============================================================================

sub PasswordHistoryDepth{
    my ($self, $newval) = @_;
    $self->{PasswordHistoryDepth} = $newval if @_ > 1;
    return $self->{PasswordHistoryDepth};
}
#===============================================================================


#===============================================================================
#            PasswordExpiration accessor method.
#===============================================================================

sub PasswordExpiration{
    my ($self, $newval) = @_;
    $self->{PasswordExpiration} = $newval if @_ > 1;
    return $self->{PasswordExpiration};
}
#===============================================================================


#===============================================================================
#            ComplexPasswordRulesEnforced accessor method.
#===============================================================================

sub ComplexPasswordRulesEnforced{
    my ($self, $newval) = @_;
    $self->{ComplexPasswordRulesEnforced} = $newval if @_ > 1;
    return $self->{ComplexPasswordRulesEnforced};
}
#===============================================================================


#===============================================================================
#            InactivityTimeout accessor method.
#===============================================================================

sub InactivityTimeout{
    my ($self, $newval) = @_;
    $self->{InactivityTimeout} = $newval if @_ > 1;
    return $self->{InactivityTimeout};
}
#===============================================================================


#===============================================================================
#            MaximumSuccessiveLoginFailures accessor method.
#===============================================================================

sub MaximumSuccessiveLoginFailures{
    my ($self, $newval) = @_;
    $self->{MaximumSuccessiveLoginFailures} = $newval if @_ > 1;
    return $self->{MaximumSuccessiveLoginFailures};
}
#===============================================================================


#===============================================================================
#            LastLogin accessor method.
#===============================================================================

sub LastLogin{
    my ($self, $newval) = @_;
    $self->{LastLogin} = $newval if @_ > 1;
    return $self->{LastLogin};
}
#===============================================================================


#===============================================================================
#            UserPasswordEncryptionAlgorithm accessor method.
#===============================================================================

sub UserPasswordEncryptionAlgorithm{
    my ($self, $newval) = @_;
    $self->{UserPasswordEncryptionAlgorithm} = $newval if @_ > 1;
    return $self->{UserPasswordEncryptionAlgorithm};
}
#===============================================================================


#===============================================================================
#            OtherUserPasswordEncryptionAlgorithm accessor method.
#===============================================================================

sub OtherUserPasswordEncryptionAlgorithm{
    my ($self, $newval) = @_;
    $self->{OtherUserPasswordEncryptionAlgorithm} = $newval if @_ > 1;
    return $self->{OtherUserPasswordEncryptionAlgorithm};
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
