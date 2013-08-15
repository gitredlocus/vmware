#!/bin/bash

BUILD_HOME=$(pwd)
TARBALL_NAME=vGhetto.tar.gz
SVN_SCRIPT_URL="https://vghetto.svn.sourceforge.net/svnroot/vghetto/scripts"
LOCAL_SCRIPT_PATH=vGhetto/vGhetto
RPM_BUILD_FOLDER=rpm

usage() {
        echo -e "\nBuild Script for vGhetto:"
        echo -e "\nUsage: $0 [clean|build|checkout]\n"
}

build() {
	mkdir -p rpm/{BUILD,RPMS,SOURCES,SPECS,SRPMS}
        echo "Building package"
	tar -cvzf ${TARBALL_NAME} vGhetto	
	rpmbuild -ta ${TARBALL_NAME}
	rm -f ${TARBALL_NAME}
	mv rpm/RPMS/noarch/*.rpm ${BUILD_HOME}
}

clean() {
        echo "Removing any previous .gz and .rpm files:"
	find . -name "*.gz" -type f -exec rm -rf {} \;
        find . -name "*.rpm" -type f -exec rm -rf {} \;
}

cleanup() {
        echo "Cleaning up"
	cd vGhetto
	rm -rf vGhetto
	cd ${BUILD_HOME}
        rm -rf ${RPM_BUILD_FOLDER}
}

checkout() {
        if [ -d ${RPM_BUILD_FOLDER} ]; then
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
