package WSMan::StubOps;
use WSMan::GenericOps;
use strict;
use WSMan::IdentifyResponse;
use Data::Dump qw(dump);

our $VERSION = '0.1';

sub new {
    my ($class, %arg) = @_;

    my $self = bless{
        client => WSMan::GenericOps->new(%arg),
        }, $class;
    return $self;
}

sub register_xml_ns(%){
    my ($self, %args) = @_;
    $self->{client}->register_xml_ns(%args);
}

sub register_class_ns(%){
    my ($self, %args) = @_;
    $self->{client}->register_class_ns(%args);
}

sub _create_objects{
    my(@hashes) = @_;
    #print scalar dump $hashes[0];
    if(!@hashes){
	return ();
    }
    my @objects;
    
    foreach my $ref (@hashes){
        my $string = (keys %{$ref})[0];
	my $lower_case = lc($string);
        eval "require WSMan::Stubs::$string";
	eval "require WSMan::Stubs::$lower_case" if $@;
        die $@ if $@;
        push @objects, (keys %{$ref})[0]->new(%{$ref->{(keys %{$ref})[0]}},
                                              epr_name => (keys %{$ref})[0]);
    }
    
    return @objects;
}

sub Identify{
    my($self) = @_;
    #my %hash =  %{$self->{client}->Identify};
    return WSMan::IdentifyResponse->new($self->{client}->Identify);
}

sub EnumerateInstances{
    my $self = shift;
    my %args = @_;
    my @results;
    
    @results = $self->{client}->EnumerateInstances(%args);
    return _create_objects(@results);
}

sub EnumerateInstanceNames{
    my $self = shift;
    my %args = @_;
    my @results;
    
    @results = $self->{client}->EnumerateInstanceNames(%args);
    return _create_objects(@results);
}

sub GetInstance{
    my $self = shift;
    my %args = @_;
    my @results;
    
    my $selectors = $args{objectpath}->get_selectorset;
    delete $args{objectpath};
    
    @results = $self->{client}
    ->GetInstance(%args,
                  class_name => (keys %{$selectors})[0],
                  options => $selectors->{(keys %{$selectors})[0]});
    return (_create_objects(@results))[0];
}

sub EnumerateAssociatedInstances{
    my $self = shift;
    my %args = @_;
    return $self->EnumerateAssociations(%args, asntype => 'ead');
}

sub EnumerateAssociatedInstanceNames{
    my $self = shift;
    my %args = @_;
    return $self->EnumerateAssociations(%args, asntype => 'eadn');
}

sub EnumerateAssociationInstances{
    my $self = shift;
    my %args = @_;
    return $self->EnumerateAssociations(%args, asntype => 'eas');
}

sub EnumerateAssociationInstanceNames{
    my $self = shift;
    my %args = @_;
    return $self->EnumerateAssociations(%args, asntype => 'easn');
}

sub EnumerateAssociations{
    my $self = shift;
    my %args = @_;
    my @results;
    my $asntype = $args{asntype};
    delete $args{asntype};
    
    if(exists $args{objectpath}){
        $args{class_name} = $args{objectpath}->epr_name;
        $args{selectors} = $args{objectpath}->get_selectorset->{$args{objectpath}
                                                            ->epr_name};
        delete $args{objectpath};
    }
    
    if($asntype eq 'ead'){
        @results = $self->{client}->EnumerateAssociatedInstances(%args);
    }
    elsif($asntype eq 'eadn'){
          @results = $self->{client}->EnumerateAssociatedInstanceNames(%args);
    }
    elsif($asntype eq 'eas'){
          @results = $self->{client}->EnumerateAssociationInstances(%args);
    }
    elsif($asntype eq 'easn'){
          @results = $self->{client}->EnumerateAssociationInstanceNames(%args);
    }
    
    #print scalar(dump @results);
    return _create_objects(@results);
}
    

1;
