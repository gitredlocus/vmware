#!/bin/bash

VMWORLD_FOLDER=/home/vi-admin/vmworld2010-PPC07
VGHETTO_FOLDER=/home/vi-admin/vghetto
VGHETTO_SCRIPTS_PATH=${VGHETTO_FOLDER}/scripts

################################################################################

## vCenter creds ##
#VC_USERNAME=vMA410
#VC_PASSWORD=vMA410vSphere
VC_USERNAME=administrator
VC_PASSWORD=vmworld2010!

## ESX(i) creds ##
HOST_USERNAME=root
#HOST_PASSWORD=vMA410vSphere
HOST_PASSWORD=vmworld2010

## vCenter AUTH FILE ##
VC_AUTH_CONFIG=/home/vi-admin/.vc_auth

## host AUTH FILE ##
HOST_AUTH_CONFIG=/home/vi-admin/.host_auth

VCENTER=vcenter-dev2.primp-industries.com
#VCENTER=
HOSTS=(esxi4-4.primp-industries.com esxi4-5.primp-industries.com)
#HOSTS=(ESX410 ESXi410)
FIRSTHOST=${HOSTS[0]}
SECONDHOST=${HOSTS[1]}

#demo.com
#ESX410 -> vmnic1   ESXi410 -> vmnic0 <=== MA
#vmnic0 ESXi410 -> vmnic1 <== Host only
#192.168.0

VMK1_IP=172.30.0.96
VMK1_NETMASK=255.255.255.0
VMK2_IP=172.30.0.97
VMK2_NETMASK=255.255.255.0
GATEWAY=172.30.0.1

FT_VM=importantVM

#################################################################################

usage() {
        echo -e "\nDemo prep script for vGhetto:"
        echo -e "\nUsage: $0 [clean|prep]\n"
}

clean() {
	if [ -d "${VMWORLD_FOLDER}" ]; then
		echo "Clean up and removing ${VMWORLD_FOLDER} folder"
		rm -rf "${VMWORLD_FOLDER}"
	fi
	rm -rf "${HOST_AUTH_CONFIG}"
	rm -rf "${VC_AUTH_CONFIG}"
}

createAuth() {
	echo "Creating Host Auth Configuration file in ${HOST_AUTH_CONFIG}"
	cat > "${HOST_AUTH_CONFIG}" << __HOST_CONFIG__
VI_USERNAME=${HOST_USERNAME}
VI_PASSWORD=${HOST_PASSWORD}
__HOST_CONFIG__

	echo "Creating vCenter Auth Configuration file in ${VC_AUTH_CONFIG}"
	cat > "${VC_AUTH_CONFIG}" << __VC_CONFIG__
VI_USERNAME=${VC_USERNAME}
VI_PASSWORD=${VC_PASSWORD}
__VC_CONFIG__
}

prep() {
	echo "Creating ${VMWORLD_FOLDER} folder"
	mkdir -p "${VMWORLD_FOLDER}"
	for i in {1..8};
	do
		mkdir -p "${VMWORLD_FOLDER}/demo${i}"
	done

	if [ -d "${VGHETTO_FOLDER}" ]; then
		echo "Copying scripts from vGhetto to local demo folder for demo ease"
		### DEMO 1 ###
		echo -e "\tCreating Demo1"
		cp "${VGHETTO_SCRIPTS_PATH}/esxcfg-rename-datastore.pl" "${VMWORLD_FOLDER}/demo1"
		touch "${VMWORLD_FOLDER}/demo1/hostlist"
		for i in ${HOSTS[@]};
		do
			echo "$i" >> "${VMWORLD_FOLDER}/demo1/hostlist"
		done
		echo "./esxcfg-rename-datastore.pl --config ${VC_AUTH_CONFIG} --server ${VCENTER} --txtformat local- --txtplacement append --operation dryrun" > "${VMWORLD_FOLDER}/demo1/demo1_1.sh"
		echo "./esxcfg-rename-datastore.pl --config ${VC_AUTH_CONFIG} --server ${VCENTER} --txtformat local- --txtplacement prepend --operation dryrun" > "${VMWORLD_FOLDER}/demo1/demo1_2.sh"	
		echo "./esxcfg-rename-datastore.pl --config ${VC_AUTH_CONFIG} --server ${VCENTER} --txtformat local- --txtplacement append --operation rename" > "${VMWORLD_FOLDER}/demo1/demo1_3.sh" 	

		### DEMO 2 ###
		echo -e "\tCreating Demo2"
		cp "${VGHETTO_SCRIPTS_PATH}/siocManagement.pl" "${VMWORLD_FOLDER}/demo2"
		echo -e "\t\tMANUALLY CREATE \"datastore\" file for DEMO2!"	
		echo "./siocManagement.pl --config ${VC_AUTH_CONFIG} --server ${VCENTER} --vihost ${FIRSTHOST} --operation query" > "${VMWORLD_FOLDER}/demo2/demo2_1.sh"
		echo "./siocManagement.pl --config ${VC_AUTH_CONFIG} --server ${VCENTER} --vihost ${FIRSTHOST} --operation enable --datastore_inputfile datastore" > "${VMWORLD_FOLDER}/demo2/demo2_2.sh"
		echo "./siocManagement.pl --config ${VC_AUTH_CONFIG} --server ${VCENTER} --vihost ${FIRSTHOST} --operation update --datastore_inputfile datastore" > "${VMWORLD_FOLDER}/demo2/demo2_3.sh"		
		echo "./siocManagement.pl --config ${VC_AUTH_CONFIG} --server ${VCENTER} --vihost ${FIRSTHOST} --operation disable  --datastore_inputfile datastore" > "${VMWORLD_FOLDER}/demo2/demo2_4.sh"		

		### DEMO 3 ###
		echo -e "\tCreating Demo3"
		cp "${VGHETTO_SCRIPTS_PATH}/vaaiHWAccelerationMgmt.pl" "${VMWORLD_FOLDER}/demo3"
		touch "${VMWORLD_FOLDER}/demo3/hostlist"
                for i in ${HOSTS[@]};
                do
                        echo "$i" >> "${VMWORLD_FOLDER}/demo3/hostlist"
                done
		echo "./vaaiHWAccelerationMgmt.pl --config ${VC_AUTH_CONFIG} --server ${VCENTER} --hostlist hostlist --operation query" > "${VMWORLD_FOLDER}/demo3/demo3_1.sh"
		echo "./vaaiHWAccelerationMgmt.pl --config ${VC_AUTH_CONFIG} --server ${VCENTER} --hostlist hostlist --operation disable"  > "${VMWORLD_FOLDER}/demo3/demo3_2.sh"
		echo "./vaaiHWAccelerationMgmt.pl --config ${VC_AUTH_CONFIG} --server ${VCENTER} --hostlist hostlist --operation enable"  > "${VMWORLD_FOLDER}/demo3/demo3_3.sh"

		### DEMO 4 ###
		echo -e "\tCreating Demo4"
		cp "${VGHETTO_SCRIPTS_PATH}/esxcfg-vswitch-lamw-mod.pl" "${VMWORLD_FOLDER}/demo4"
		cat > "${VMWORLD_FOLDER}/demo4/demo4_1.sh" << __DEMO4_1__
echo "Creating secondary vSwitch: vSwitch1 on ${FIRSTHOST}"
./esxcfg-vswitch-lamw-mod.pl --config ${HOST_AUTH_CONFIG} --server ${FIRSTHOST} -a vSwitch1 --port 504
echo "Binding vmnic1 & vmnic3 to vSwitch1 on ${FIRSTHOST}"
./esxcfg-vswitch-lamw-mod.pl --config ${HOST_AUTH_CONFIG} --server ${FIRSTHOST} -L vmnic1 vSwitch1
./esxcfg-vswitch-lamw-mod.pl --config ${HOST_AUTH_CONFIG} --server ${FIRSTHOST} -L vmnic3 vSwitch1
./esxcfg-vswitch-lamw-mod.pl --config ${HOST_AUTH_CONFIG} --server ${FIRSTHOST} -l
__DEMO4_1__

		echo "./esxcfg-vswitch-lamw-mod.pl --config ${HOST_AUTH_CONFIG} --server ${FIRSTHOST} --promiscuous reject --mac accept --forged reject --trafficshape true --avgband 100 --peakband 300 --burstsize 390 --loadbalance MACHASH --faildetect BEACON --notifysw yes --failback no --nic-active vmnic1 --nic-standby vmnic3 vSwitch1" > "${VMWORLD_FOLDER}/demo4/demo4_2.sh"
		
		cat > "${VMWORLD_FOLDER}/demo4/demo4_3.sh" << __DEMO4_3__
./esxcfg-vswitch-lamw-mod.pl --config ${HOST_AUTH_CONFIG} --server ${FIRSTHOST} -A "vMotion_FT" vSwitch1 
./esxcfg-vswitch-lamw-mod.pl --config ${HOST_AUTH_CONFIG} --server ${FIRSTHOST} -l		
__DEMO4_3__
	
		cat > "${VMWORLD_FOLDER}/demo4/demo4_4.sh" << __DEMO4_4__
echo "Creating secondary vSwitch: vSwitch1 on ${SECONDHOST}"
./esxcfg-vswitch-lamw-mod.pl --config ${HOST_AUTH_CONFIG} --server ${SECONDHOST} -a vSwitch1 --port 504
echo "Binding vmnic1 & vmnic3 to vSwitch1 on ${SECONDHOST}"
./esxcfg-vswitch-lamw-mod.pl --config ${HOST_AUTH_CONFIG} --server ${SECONDHOST} -L vmnic1 vSwitch1
./esxcfg-vswitch-lamw-mod.pl --config ${HOST_AUTH_CONFIG} --server ${SECONDHOST} -L vmnic3 vSwitch1
echo "Updating vSwitch1 with advanced configurations on ${SECONDHOST}"
./esxcfg-vswitch-lamw-mod.pl --config ${HOST_AUTH_CONFIG} --server ${SECONDHOST} --promiscuous reject --mac accept --forged reject --trafficshape true --avgband 100 --peakband 300 --burstsize 390 --loadbalance MACHASH --faildetect BEACON --notifysw yes --failback no --nic-active vmnic1 --nic-standby vmnic3 vSwitch1
./esxcfg-vswitch-lamw-mod.pl --config ${HOST_AUTH_CONFIG} --server ${SECONDHOST} -A "vMotion_FT" vSwitch1
__DEMO4_4__

		### DEMO 5 ###
		echo -e "\tCreating Demo5"
		cp "${VGHETTO_SCRIPTS_PATH}/esxcfg-portgroup-mgmt.pl" "${VMWORLD_FOLDER}/demo5"
		cat > "${VMWORLD_FOLDER}/demo5/demo5_1.sh" << __DEMO5_1__
echo "Creating vmkernel interface for vMotion + FT for ${FIRSTHOST}"
esxcfg-vmknic --config ${HOST_AUTH_CONFIG} --config ${HOST_AUTH_CONFIG} --server ${FIRSTHOST} -a -i ${VMK1_IP} -n ${VMK1_NETMASK} -p "vMotion_FT"
echo "Creating vmkernel interface for vMotion + FT for ${SECONDHOST}"
esxcfg-vmknic --config ${HOST_AUTH_CONFIG} --config ${HOST_AUTH_CONFIG} --server ${SECONDHOST} -a -i ${VMK2_IP} -n ${VMK2_NETMASK} -p "vMotion_FT"
esxcfg-vmknic --config ${HOST_AUTH_CONFIG} --server ${FIRSTHOST} -l
__DEMO5_1__

		cat > "${VMWORLD_FOLDER}/demo5/demo5_2.sh" << __DEMO5_2__
./esxcfg-portgroup-mgmt.pl --config ${HOST_AUTH_CONFIG} --server ${FIRSTHOST} --portgroup "vMotion_FT" --portgroup_type vmotion --operation enable
./esxcfg-portgroup-mgmt.pl --config ${HOST_AUTH_CONFIG} --server ${FIRSTHOST} --portgroup "vMotion_FT" --portgroup_type ft --operation enable
__DEMO5_2__

		### DEMO 6 ###
		echo -e "\tCreating Demo6"
		cp "${VGHETTO_SCRIPTS_PATH}/ftCLI.pl" "${VMWORLD_FOLDER}/demo6"
		echo "./ftCLI.pl --config ${VC_AUTH_CONFIG} --server ${VCENTER} --vmname ${FT_VM} --operation create" > "${VMWORLD_FOLDER}/demo6/demo6_1.sh"
		echo "./ftCLI.pl --config ${VC_AUTH_CONFIG} --server ${VCENTER} --vmname ${FT_VM} --operation disable" > "${VMWORLD_FOLDER}/demo6/demo6_2.sh"
		echo "./ftCLI.pl --config ${VC_AUTH_CONFIG} --server ${VCENTER} --vmname ${FT_VM} --operation enable" > "${VMWORLD_FOLDER}/demo6/demo6_3.sh"

		### DEMO 7 ###
		echo -e "\tCreating Demo7"
		cp "${VGHETTO_SCRIPTS_PATH}/vmwarevSphereHealthCheck.pl" "${VMWORLD_FOLDER}/demo7"
		echo "./vmwarevSphereHealthCheck.pl --config ${VC_AUTH_CONFIG} --server ${VCENTER} --type vcenter" > "${VMWORLD_FOLDER}/demo7/demo7_1.sh"

		### DEMO 8 ###
		echo -e "\tCreating Demo8"
		cp "${VGHETTO_SCRIPTS_PATH}/vmwarevSphereSecurityHardeningReportCheck.pl" "${VMWORLD_FOLDER}/demo8"
		echo "./vmwarevSphereSecurityHardeningReportCheck.pl --config ${VC_AUTH_CONFIG} --server ${VCENTER} --recommend_check_level enterprise" > "${VMWORLD_FOLDER}/demo8/demo8_1.sh"
		for i in {1..8};
		do
			chmod +x ${VMWORLD_FOLDER}/demo${i}/demo${i}_*.sh
		done

	else
		echo "ERROR - Unable to locate \"vghetto\" folder!"
	fi
	createAuth
}

case "$1" in
        'clean')
                clean
                ;;
        'prep')
		clean
		prep
                ;;
        *)
                usage
                exit 1
        ;;
esac
