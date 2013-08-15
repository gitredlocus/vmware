package Visor_LsiPhysicalDevice;
use WSMan::Stubs::Initializable;
use strict;

@Visor_LsiPhysicalDevice::ISA = qw(_Initializable);

#===============================================================================
#			INITIALIZER
#===============================================================================

sub _init{
	my ($self, %args) = @_;
	unless(exists $self->{invokableMethods}){
		$self->{invokableMethods} = {};
	}
	unless(exists $self->{id_keys}){
		$self->{id_keys} = ();
	}
	$self->{status} = undef;
	$self->{mediaErrCount} = undef;
	$self->{ctrlId} = undef;
	$self->{rawSize} = undef;
	$self->{predFailCount} = undef;
	$self->{devId} = undef;
	$self->{lastPredFailEventSeqNum} = undef;
	$self->{otherErrCount} = undef;
	$self->{nonCoercedSize} = undef;
	$self->{coercedSize} = undef;
	$self->{devType} = undef;
	$self->{epr_name} = undef;
	push @{$self->{id_keys}}, 'ctrlId';
	push @{$self->{id_keys}}, 'devId';
	@{$self->{id_keys}} = keys %{{ map { $_ => 1 } @{$self->{id_keys}} }};
	if(keys %args){
		$self->_subinit(%args);
	}
}

#===============================================================================


#===============================================================================
#			 status accessor method.
#===============================================================================

sub status{
	my ($self, $newval) = @_;
	$self->{status} = $newval if @_ > 1;
	return $self->{status};
}
#===============================================================================


#===============================================================================
#			 mediaErrCount accessor method.
#===============================================================================

sub mediaErrCount{
	my ($self, $newval) = @_;
	$self->{mediaErrCount} = $newval if @_ > 1;
	return $self->{mediaErrCount};
}
#===============================================================================


#===============================================================================
#			 ctrlId accessor method.
#===============================================================================

sub ctrlId{
	my ($self, $newval) = @_;
	$self->{ctrlId} = $newval if @_ > 1;
	return $self->{ctrlId};
}
#===============================================================================


#===============================================================================
#			 rawSize accessor method.
#===============================================================================

sub rawSize{
	my ($self, $newval) = @_;
	$self->{rawSize} = $newval if @_ > 1;
	return $self->{rawSize};
}
#===============================================================================


#===============================================================================
#			 predFailCount accessor method.
#===============================================================================

sub predFailCount{
	my ($self, $newval) = @_;
	$self->{predFailCount} = $newval if @_ > 1;
	return $self->{predFailCount};
}
#===============================================================================


#===============================================================================
#			 devId accessor method.
#===============================================================================

sub devId{
	my ($self, $newval) = @_;
	$self->{devId} = $newval if @_ > 1;
	return $self->{devId};
}
#===============================================================================


#===============================================================================
#			 lastPredFailEventSeqNum accessor method.
#===============================================================================

sub lastPredFailEventSeqNum{
	my ($self, $newval) = @_;
	$self->{lastPredFailEventSeqNum} = $newval if @_ > 1;
	return $self->{lastPredFailEventSeqNum};
}
#===============================================================================


#===============================================================================
#			 otherErrCount accessor method.
#===============================================================================

sub otherErrCount{
	my ($self, $newval) = @_;
	$self->{otherErrCount} = $newval if @_ > 1;
	return $self->{otherErrCount};
}
#===============================================================================


#===============================================================================
#			 nonCoercedSize accessor method.
#===============================================================================

sub nonCoercedSize{
	my ($self, $newval) = @_;
	$self->{nonCoercedSize} = $newval if @_ > 1;
	return $self->{nonCoercedSize};
}
#===============================================================================


#===============================================================================
#			 coercedSize accessor method.
#===============================================================================

sub coercedSize{
	my ($self, $newval) = @_;
	$self->{coercedSize} = $newval if @_ > 1;
	return $self->{coercedSize};
}
#===============================================================================


#===============================================================================
#			 devType accessor method.
#===============================================================================

sub devType{
	my ($self, $newval) = @_;
	$self->{devType} = $newval if @_ > 1;
	return $self->{devType};
}
#===============================================================================


#===============================================================================
#			 epr_name accessor method.
#===============================================================================

sub epr_name{
	my ($self, $newval) = @_;
	$self->{epr_name} = $newval if @_ > 1;
	return $self->{epr_name};
}
#===============================================================================


1;
