#!/bin/sh

if [ -f VMware-vSphere-Perl-SDK-4.?.0-*.i386.tar.gz ]
then
	echo "Take the defaults for the next command:"
	cpan YAML
	echo "Take the defaults for the next command:"
	cpan Class::MethodMaker
	echo "Take the defaults for the next command:"
	cpan Crypt::SSleay
	echo "Take the defaults for the next command and let it include any necessary"
	echo "dependencies! This is important."
	cpan SOAP::Lite
	echo "Take the defaults for the next command:"
	cpan UUID
	echo "Take the defaults for the next command:"
	cpan Time::ParseDate

	
	tar -xzf VMware-vSphere-Perl-SDK*.i386.tar.gz
	cd vmware-vsphere-cli-distrib
	perl Makefile.PL
	make install

	svn co https://vghetto.svn.sourceforge.net/svnroot/vghetto vghetto

	echo "Take the defaults for the next command:"
	cpan Tk

	echo << EOF
If Errors occured in the last command you may need to build Perl/TK by hand as the libpng Makefile has an incorrect arch setting for the modern compiler. Change it to be -arch i386 before compiling.

cd .cpan/build
cd PNG/libpng
edit Makefile
search for -arch
ensure there is only one -arch and it is i386

EOF
	
else
	echo "The i386 version of the vSphere Perl Toolkit is not in this directory."
fi
