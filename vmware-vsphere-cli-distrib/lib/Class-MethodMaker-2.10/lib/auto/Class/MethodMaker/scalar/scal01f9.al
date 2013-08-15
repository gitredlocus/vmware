# NOTE: Derived from blib/lib/Class/MethodMaker/scalar.pm.
# Changes made here will be lost when autosplit is run again.
# See AutoSplit.pm.
package Class::MethodMaker::scalar;

#line 64456 "blib/lib/Class/MethodMaker/scalar.pm (autosplit into blib/lib/auto/Class/MethodMaker/scalar/scal01f9.al)"
#------------------
# scalar read_cb - default_ctor - store_cb - tie_class - static - typex - v1_compat

sub scal01f9 {
  my $class  = shift;
  my ($target_class, $name, $options, $global) = @_;
  
  # options check ---------------------
  
  Class::MethodMaker::Engine::check_opts([qw/ static type typex forward
                                              default default_ctor
                                              read_cb store_cb
                                              tie_class tie_args
                                              key_create
                                              v1_compat v1_object
                                              _value_list
                                              /], $options);
  # type option
  my $type = $options->{type};
  croak "argument to -type ($type) must be a simple value\n"
    unless ! ref $type;
  
  # forward option
  my $forward = $options->{forward};
  my @forward;
  if ( defined $forward ) {
    if ( ref $forward ) {
      croak("-forward option can only handle arrayrefs or simple values " .
            "($forward)\n")
        unless UNIVERSAL::isa($forward, 'ARRAY');
      @forward = @$forward;
      print "Value '$_' passed to -forward is not a simple value"
        for grep ref($_), @forward;
    } else {
      @forward = $forward;
    }
  }
  
  # default options
  my ($default, $dctor, $default_defined, $v1object);
  if ( exists $options->{default} ) {
    croak("Cannot specify both default & default_ctor options to scalar ",
          "(attribute $name\n")
      if exists $options->{default_ctor};
    $default = $options->{default};
    $default_defined = 1;
  } elsif ( exists $options->{default_ctor} ) {
    if ( ! ref $options->{default_ctor} ) {
      my $meth = $options->{default_ctor};
      croak("default_ctor can only be a simple value when -type is in effect",
            " (attribute $name)\n")
        unless defined $type;
      croak("default_ctor must be a valid identifier (or a code ref): $meth ",
            "(attribute $name)\n")
        unless $meth =~ /^[A-Za-z_][A-Za-z0-9_]*/;
      $dctor = sub { $type->$meth(@_) };
      $v1object = $options->{v1_object}
        if $options->{v1_compat};
    } else {
      $dctor = $options->{default_ctor};
      croak(sprintf( "Argument to default_ctor must be a simple value or a code ref " .
                     " (attribute $name) (got '%s')\n", ref $dctor ) )
        if ! UNIVERSAL::isa($dctor, 'CODE');
    }
    $default_defined = 1;
  }
  
  # tie options
  my ($tie_class, @tie_args);
  if ( exists $options->{tie_class} ) {
    $tie_class =  $options->{tie_class};
    if ( exists $options->{tie_args} ) {
      my $tie_args =  $options->{tie_args};
      @tie_args = ref $tie_args ? @$tie_args : $tie_args;
    }
  } elsif ( exists $options->{tie_args} ) {
    carp "tie_args option ignored in absence of tie_class(attribute $name)\n";
  }
  
  # callback options
  my @read_callbacks = ref $options->{read_cb} eq 'ARRAY' ?
                        @{$options->{read_cb}}            :
                        $options->{read_cb}
    if exists $options->{read_cb};
  my @store_callbacks = ref $options->{store_cb} eq 'ARRAY' ?
                        @{$options->{store_cb}}             :
                        $options->{store_cb}
    if exists $options->{store_cb};
  
  # V1 Compatibility
  my ($list, $key_create) = @{$options}{qw/ _value_list key_create/}
    if exists $options->{_value_list};
  
  # the method definitions ------------
  my @store;
  
  # Predefine keys for subs we always want to exist (because they're
  # referenced by other subs)
  my %names = map {; $_ => undef } qw( * );
  
  
  my %methods =
  
  
    ( '*'        => sub : method {
                      if ( @_ == 1 ) {
  
                        if ( $v1object and ! exists $_[0]->{$name} ) {
                          $store[0] = $dctor->();
                        }
  
                        tie $store[0], $tie_class, @tie_args
                          unless exists $store[0];
                        if ( ! exists $store[0] ) {
                          my $default = $dctor->($_[0]);
                          for ($default) {
                          #   $_ += 0;
                          #  croak(sprintf("Incorrect type for attribute $name: %s\n" .
                          #                "  : should be '%s' (or subclass thereof)\n",
                          #                (defined($_)                                     ?
                          #                 (ref($_) ? ref($_) : "plain value(-->$_<--)" )  :
                          #                 '*undef*'
                          #                ), $typex))
                          #    unless ! defined $_ or UNIVERSAL::isa($_, $typex);
                          }
                          tie $store[0], $tie_class, @tie_args
                            unless exists $store[0];
  
                          $store[0] = $default
                        }
  
                        { # Encapsulate scope to avoid redefined $v issues
                          my $v = $store[0];
                          $v = $_->($_[0], $v)
                            for @read_callbacks;
                          $v;
                        }
  
                      } else {
  
                        my $v = $_[1];
                        if ( exists $store[0] ) {
                          my $old = $store[0];
  
                          $v = $_->($_[0], $v, $name, $old, @_[1..$#_])
                            for @store_callbacks;
                        } else {
  
                          $v = $_->($_[0], $v, $name, undef, @_[1..$#_])
                            for @store_callbacks;
                        }
  
                        unless ( $v1object ) {
                          for ($v) {
                          #   $_ += 0;
                          #  croak(sprintf("Incorrect type for attribute $name: %s\n" .
                          #                "  : should be '%s' (or subclass thereof)\n",
                          #                (defined($_)                                     ?
                          #                 (ref($_) ? ref($_) : "plain value(-->$_<--)" )  :
                          #                 '*undef*'
                          #                ), $typex))
                          #    unless ! defined $_ or UNIVERSAL::isa($_, $typex);
                          }
                          tie $store[0], $tie_class, @tie_args
                            unless exists $store[0];
  
                        }
  
  
  
                        if ( $v1object ) {
                          if ( ref $_[1] and UNIVERSAL::isa($_[1], $type) ) {
                            $store[0] = $_[1];
                          } else {
                            $store[0] = $dctor->(@_[1..$#_]);
                          }
                        } else {
                          $store[0] = $v
                        }
  
                        { # Encapsulate scope to avoid redefined $v issues
                          my $v = $store[0];
                          $v = $_->($_[0], $v)
                            for @read_callbacks;
                          $v;
                        }
  
                      }
                    },
  
  
      '*_reset'  => sub : method {
                      delete $store[0];
                    },
  
  
      '*_isset'  => ( $default_defined      ?
                      sub : method { 1 }    :
                      sub : method {
                        exists $store[0];
                      }
                    ),
  
  
      '*_clear' => sub : method {
                      my $x = $names{'*'};
                      $_[0]->$x(undef);
                    },
  
  
      '!*_get'   => sub : method {
                      my $x = $names{'*'};
                      return $_[0]->$x();
                    },
  
  
      '!*_set'   => sub : method {
                      my $x = $names{'*'};
                      $_[0]->$x($_[1]);
                      return;
                    },
  
       # this is here for V1 compatiblity only
       '!*_find' => sub : method {
                      my ($self, @args) = @_;
                      if (scalar @args) {
                        if ( $key_create ) {
                          $self->new->$name($_)
                            for grep ! exists $list->{$_}, @args;
                        }
                        return @{$list}{@args};
                      } else {
                        return $list;
                      }
                    },
  
       'INTEGER:*_incr' => sub {
                             my $x = $names{'*'};
                             my $incr = @_ > 1 ? $_[1] : 1;
                             $_[0]->$x($_[0]->$x()+$incr);
                           },
  
       'INTEGER:*_decr' => sub {
                             my $x = $names{'*'};
                             my $decr = @_ > 1 ? $_[1] : 1;
                             $_[0]->$x($_[0]->$x()-$decr);
                           },
  
       'INTEGER:*_zero' => sub {
                             my $x = $names{'*'};
                             $_[0]->$x(0);
                           },
  
  
       # forward methods
       map({; my $f = $_;
            $_ =>
              sub : method {
                my $x = $names{'*'};
                $_[0]->$x()->$f(@_[1..$#_]);
              }
           } @forward),
    );
  
  return \%methods, \%names;
}

# end of Class::MethodMaker::scalar::scal01f9
1;
