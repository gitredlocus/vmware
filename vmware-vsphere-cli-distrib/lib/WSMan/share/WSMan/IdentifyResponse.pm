package WSMan::IdentifyResponse;
use strict;
use Data::Dump qw(dump);

sub new {
    my $class = shift;
    my $self = bless {}, $class;
    foreach (keys %{$_[0]}){
        $self->{$_} = $_[0]->{$_};
    }
    return $self;
}

sub get{
    my $self = shift;
    my $key = shift;
    return $self->{$key};
}

sub to_string{
    my $self = shift;
    return scalar(dump $self);
}

1;
