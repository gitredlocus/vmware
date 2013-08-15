#!/bin/bash

BUILD_HOME=$(pwd)
SVN_SCRIPT_URL="https://vghetto.svn.sourceforge.net/svnroot/vghetto/scripts"
LOCAL_SCRIPT_PATH=vGhetto/usr/bin/vGhetto
VER=$(grep "Version:" vGhetto/DEBIAN/control | awk '{print $2'})
VGHETTO_DEB_PACKAGE_NAME=vGhetto-${VER}.deb

usage() {
	echo -e "\nBuild Script for vGhetto:"
	echo -e "\nUsage: $0 [clean|build|checkout]\n"
}

build() {
	echo "Building package"
	dpkg --build vGhetto ${VGHETTO_DEB_PACKAGE_NAME}
}

clean() {
	echo "Removing any previous .deb files:"
	find . -name "*.deb" -type f -exec rm -rf {} \;
}

cleanup() {
	cd vGhetto/
        echo "Cleaning up"
        rm -rf usr
        cd ${BUILD_HOME}
}

checkout() {
	if [ -d ${LOCAL_SCRIPT_PATH} ]; then
		cleanup
	fi
	echo "Checking out latest scripts"
        svn export ${SVN_SCRIPT_URL} ${LOCAL_SCRIPT_PATH}
}

case "$1" in
	'clean')
		clean
		cleanup
		;;
	'build')
		clean
		checkout
		build
		cleanup
		;;
	'checkout')
		checkout
		;;
	*)
		usage
		exit 1
	;;
esac
