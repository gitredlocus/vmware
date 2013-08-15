cat << EOF > /etc/yum.repos.d/CentOS-base.repo
[base]
name=CentOS-5 - Base
mirrorlist=http://mirrorlist.centos.org/?release=5&arch=x86_64&repo=os
#baseurl=http://mirror.centos.org/centos/5/os/x86_64/
gpgcheck=1
gpgkey=file:///etc/pki/rpm-gpg/RPM-GPG-KEY-CentOS-5

#released updates
[updates]
name=CentOS-5 - Updates
mirrorlist=http://mirrorlist.centos.org/?release=5&arch=x86_64&repo=updates
#baseurl=http://mirror.centos.org/centos/5/updates/x86_64/
gpgcheck=1
gpgkey=file:///etc/pki/rpm-gpg/RPM-GPG-KEY-CentOS-5

#packages used/produced in the build but not released
[addons]
name=CentOS-5 - Addons
mirrorlist=http://mirrorlist.centos.org/?release=5&arch=x86_64&repo=addons
#baseurl=http://mirror.centos.org/centos/5/addons/x86_64/
gpgcheck=1
gpgkey=file:///etc/pki/rpm-gpg/RPM-GPG-KEY-CentOS-5

#additional packages that may be useful
[extras]
name=CentOS-5 - Extras
mirrorlist=http://mirrorlist.centos.org/?release=5&arch=x86_64&repo=extras
#baseurl=http://mirror.centos.org/centos/5/extras/x86_64/
gpgcheck=1
gpgkey=file:///etc/pki/rpm-gpg/RPM-GPG-KEY-CentOS-5

#additional packages that extend functionality of existing packages
[centosplus]
name=CentOS-5 - Plus
mirrorlist=http://mirrorlist.centos.org/?release=5&arch=x86_64&repo=centosplus
#baseurl=http://mirror.centos.org/centos/5/centosplus/x86_64/
gpgcheck=1
enabled=0
EOF
rpm --import http://mirror.centos.org/centos/RPM-GPG-KEY-CentOS-5
yum -y install subversion vnc-server xorg-x11-xdm xorg-x11-twm
cat << EOF > /etc/yum.repos.d/dag.repo
[dag]
name=Dag RPM Repository for Red Hat Enterprise Linux
baseurl=http://dag.linux.iastate.edu/dag/redhat/el5/en/x86_64/dag
gpgcheck=1
enabled=1
EOF
rpm --import  http://apt.sw.be/RPM-GPG-KEY.dag.txt
yum -y install libX11 libpng xorg-x11-xauth xterm
yum -y install perl-Tk perl-Time-modules
# if you want to limit the fonts you should at least install
#       urw-fonts fonts-ISO8859-2 xorg-x11-fonts-Type1
yum -y install xorg-x11-fonts-base xorg-x11-fonts-75-dpi xorg-x11-fonts-100dpi urw-fonts fonts-ISO8859-2 xorg-x11-fonts-Type1
svn co https://vghetto.svn.sourceforge.net/svnroot/vghetto vghetto 
# The above is enough to run the vGhetto Client via a SSH X11 Forwarding but to redisplay via VNC you need the following as well.
# yum -y install gnome-gdm gnome-terminal gnome-session
