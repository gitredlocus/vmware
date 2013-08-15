use 5.008;

use strict;
use warnings;

use ExtUtils::MakeMaker;
use File::Find;
use File::Copy;
use File::Path;
use Config;

use ExtUtils::Manifest qw(manifind maniadd manicopy);
# See lib/ExtUtils/MakeMaker.pm for details of how to influence
# the contents of the Makefile that is written.

use Cwd;
my $root = getcwd();

#
# In order for MakeMaker to do anything with the current packaging,
# we have to copy the VMware and WSMan library trees into the
# distribution directory
#
rmtree 'VMware' or die "Couldn't clean 'VMware' dir: $!\n" if -d 'VMware';
rmtree 'WSMan' or die "Couldn't clean 'WSMan' dir: $!\n" if -d 'WSMan';
mkpath 'VMware';
mkpath 'WSMan';

#
# Copy VMware (Perl Toolkit) tree to ./VMware
#
find sub {
  if ($File::Find::name =~ m(^lib/VMware/share/VMware)) {
    (my $path = $File::Find::name) =~ s#^lib/VMware/share/VMware(/)?##;
    my $dest = "VMware/$path";
    if (!-d) {
      copy($_ => "$root/$dest") or die "couldn't copy: $!\n";
      chmod 0555, "$root/$dest" or die "couldn't chmod: $!\n";
    } else {
      unless (-d "$root/$dest") {
        mkpath "$root/$dest" or die "couldn't mkpath: $!\n";
      chmod 0755, "$root/$dest" or die "couldn't chmod: $!\n"
      }
    }
  }
}, 'lib';

#
# Copy WSMan tree to ./WSMan
#
find sub {
  if ($File::Find::name =~ m(^lib/WSMan/share/WSMan)) {
    (my $path = $File::Find::name) =~ s#^lib/WSMan/share/WSMan(/)?##;
    my $dest = "WSMan/$path";
    if (!-d) {
      copy($_ => "$root/$dest") or die "couldn't copy: $!\n";
      chmod 0555, "$root/$dest" or die "couldn't chmod: $!\n";
    } else {
      unless (-d "$root/$dest") {
        mkpath "$root/$dest" or die "couldn't mkpath: $!\n";
      chmod 0755, "$root/$dest" or die "couldn't chmod: $!\n"
      }
    }
  }
}, 'lib';

WriteMakefile(
   NAME               => 'VIPerlToolkit',
   VERSION_FROM       => 'lib/VMware/share/VMware/VIRuntime.pm',
   AUTHOR             => 'VMware',
   PMLIBDIRS          => [ 'VMware', 'WSMan' ],
   PREREQ_PM         =>  {'Crypt::SSLeay' => '0.51',
                          'Data::Dumper' => '2.102',
                          'Class::MethodMaker' => '2.08',
                          'XML::LibXML' => '1.58',
                          'LWP' => '5.8.05',
                          'UUID' => '0.03',
                          'SOAP::Lite' => '0.67'},
   #
   # These macros put things in the usual spot if you are running
   # /usr/bin/perl, and attempt to find a reasonable spot if you
   # are running some other perl.
   #
   macro              => {
     # vmware apps
     INST_VMWARE_APPS => 'apps',
     DEST_VMWARE_APPS => (
       $Config{perlpath} eq '/usr/bin/perl' ? 
         '/usr/lib/vmware-viperl/apps' :
         '$(INSTALLSITESCRIPT)/apps'
     ),
     # vmware docs
     INST_VMWARE_DOC => 'doc',
     DEST_VMWARE_DOC => (
       $Config{perlpath} eq '/usr/bin/perl' ? 
         '/usr/share/doc/vmware-viperl/doc' :
         '$(SITEPREFIX)/doc'
     ),
   },
);

#
# Additional targets for installing apps and doc.
#
sub MY::postamble {
  return <<'MAKE';
install :: install_vmware_apps install_vmware_doc
	$(NOECHO) $(NOOP)

install_vmware_apps :
	$(NOECHO) $(MOD_INSTALL) \
		$(INST_VMWARE_APPS) $(DEST_VMWARE_APPS)

install_vmware_doc :
	$(NOECHO) $(MOD_INSTALL) \
		$(INST_VMWARE_DOC) $(DEST_VMWARE_DOC)

clean ::
	$(RM_RF) VMware WSMan

MAKE
}

