################################################################################
# Copyright (c) 2007 - 2008, VMWare, Inc.
# All rights reserved.

# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions are met:

#    * Redistributions of source code must retain the above copyright notice, 
#      this list of conditions and the following disclaimer.
#    * Redistributions in binary form must reproduce the above copyright notice,   
#      this list of conditions and the following disclaimer in the documentation 
#      and/or other materials provided with the distribution.
#    * Neither the name of VMWare, Inc. nor the names of its contributors may be 
#      used to endorse or promote products derived from this software without 
#      specific prior written permission.
#
# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" 
# AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE 
# IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE 
# DISCLAIMED. IN NO EVENT SHALL VMWare, Inc. OR CONTRIBUTORS BE LIABLE 
# FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL 
# DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR 
# SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER 
# CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, 
# OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE 
# OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
################################################################################

package _Initializable;
use strict;
use Data::Dump qw(dump);

sub new{
    my ($class, %args)  = @_;
    my $self = bless{}, ref($class)||$class;
    $self->_init(%args);
    return $self;
}


sub get_selectorset{
    my ($self) = @_;
    my $selectors;
    $selectors = {};
    foreach (@{$self->{id_keys}}){
        if(ref $self->{$_}){
            $selectors->{$_} = $self->{$_}->get_selectorset;
        }
        else{
            $selectors->{$_} = $self->{$_};
        }
    }
    return {$self->{epr_name} => $selectors};
}

sub _subinit{
    my ($self, %args) = @_;
    foreach my $key (keys %args){
        if(ref $args{$key}){
            my $string = (keys %{$args{$key}})[0];
	    my $lower_case = lc($string);
            eval "require WSMan::Stubs::$string";
	    eval "require WSMan::Stubs::$lower_case" if $@;
            die $@ if $@;
            $self->{$key} = (keys %{$args{$key}})[0]->
            new(%{$args{$key}->{(keys %{$args{$key}})[0]}},
                epr_name => (keys %{$args{$key}})[0]);
        }
        else{
            $self->{$key} = $args{$key};
        }
    }
    return $self;
}

sub clone{
    my $self = shift;
    return eval( scalar(dump $self) );
}

sub to_string{
    my $self = shift;
    return scalar(dump $self);
}

1;
