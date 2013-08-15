#!/bin/bash
# William Lam
# www.virtuallyhgetto.com
# Script to build VMware VA offline repo

REPO_URL=$1
REPO_NAME=$2

if [ $# -ne 2 ]; then
	echo -e "Usage: $0 [URL] [REPO_NAME]"
	echo -e "\t$0 http://vapp-updates.vmware.com/vai-catalog/valm/vmw/302ce45f-64cc-4b34-b470-e9408dbbc60d/1.2.0.290.latest vin"
	exit 1
fi

echo "Creating ${REPO_NAME}/{manifest,package-pool}"
mkdir -p ${REPO_NAME}/{manifest,package-pool}

MANIFEST_FILES=(manifest-latest.xml  manifest-latest.xml.sha256  manifest-latest.xml.sig  manifest-repo.xml)

for i in ${MANIFEST_FILES[@]};
do
	echo "Downloading $i ..."
	wget ${REPO_URL}/manifest/$i -O ${REPO_NAME}/manifest/$i > /dev/null 2>&1
done

for i in $(grep package-pool ${REPO_NAME}/manifest/manifest-latest.xml); 
do 
	echo "Downloading $i ..."
	wget ${REPO_URL}/${i} -O ${REPO_NAME}/$i > /dev/null 2>&1
done
