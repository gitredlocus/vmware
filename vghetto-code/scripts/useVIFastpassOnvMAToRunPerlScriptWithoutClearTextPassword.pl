#!/usr/bin/perl -w
# Copyright (c) 2009-2010 William Lam All rights reserved.

# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions
# are met:
# 1. Redistributions of source code must retain the above copyright
#    notice, this list of conditions and the following disclaimer.
# 2. Redistributions in binary form must reproduce the above copyright
#    notice, this list of conditions and the following disclaimer in the
#    documentation and/or other materials provided with the distribution.
# 3. The name of the author or contributors may not be used to endorse or
#    promote products derived from this software without specific prior
#    written permission.
# 4. Consent from original author prior to redistribution

# THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS "AS IS" AND
# ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
# IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
# ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
# FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
# DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
# OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
# HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
# LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
# OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
# SUCH DAMAGE.

##################################################################
# Author: William Lam
# 10/08/2009
# http://communities.vmware.com/docs/DOC-10883
# http://www.engineering.ucsb.edu/~duonglt/vmware/
##################################################################
use strict;
use warnings;
use VMware::VIFPLib;

# define custom options for vm and target host
my %opts = (
   'esxlist' => {
      type => "=s",
      help => "List of ESX(i) host to perform operations on",
      required => 1,
   },
);

# read and validate command-line parameters 
Opts::add_options(%opts);
Opts::parse();
Opts::set_option("passthroughauth", 1);
Opts::validate();

my @hosts = ();
my $command_to_execute;
my ($username,$password);
my $esxlist = Opts::get_option('esxlist');
&processConfigurationFile($esxlist);

### PLEASE DO NOT MODIFY PAST THIS LINE ###

my $viuser = vifplib_perl::CreateVIUserInfo();
my $vifplib = vifplib_perl::CreateVIFPLib();

foreach my $server (@hosts) {
        eval { $vifplib->QueryTarget($server, $viuser); };
        if(!$@) {
                $username = $viuser->GetUsername();
                $password = $viuser->GetPassword();
		print "Executing script on \"$server\" ...\n";
	        $command_to_execute = `esxcfg-nas -l --server $server --username $username --password $password`;
        	print $command_to_execute . "\n";
        } else {
		print "Error: " . $@ . "\n";
	}
}

# Subroutine to process the input file
sub processConfigurationFile {
        my ($local_conf) = @_;
        my $CONF_HANDLE;

        open(CONF_HANDLE, "$local_conf") || die "Couldn't open file \"$local_conf\"!\n";
        while (<CONF_HANDLE>) {
                chomp;
                s/#.*//; # Remove comments
                s/^\s+//; # Remove opening whitespace
                s/\s+$//;  # Remove closing whitespace
                next unless length;
                push @hosts,$_;
        }
        close(CONF_HANDLE);
}
