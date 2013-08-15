Name: vGhetto 
Summary: vGhetto Perl scripts
Version: 1.0
Release: 1
License: GPL
Vendor: (N/A)
Group: Applications/System
Source: %{name}.tar.gz
BuildRoot: %{_tmppath}/build-root-%{name}
BuildArch: noarch
Packager: William Lam
Requires: perl >= 5.8.8
AutoReq: 0
Prefix: /usr/bin
Url: http://sourceforge.net/projects/vghetto/

%description

Collection of vGhetto vSphere SDK for Perl script

%prep

%setup -q -n %{name}

%build

%install
install -m 0755 -d $RPM_BUILD_ROOT/%{prefix}
mkdir -p $RPM_BUILD_ROOT/%{prefix}
cp -r %{name}/ $RPM_BUILD_ROOT/%{prefix}

%clean
rm -rf $RPM_BUILD_ROOT

%files
%defattr(-,root,root,0755)
%{prefix}/%{name}

%changelog
* Mon Jan 09 2010 William Lam 1.0
- First version of vGhetto Script Repository
