#!/bin/sh
# Tar installer object
#
# This file is saved on the disk when the .tar package is installed by
# vmware-install.pl. It can be invoked by any installer.

#
# Tools
#

# BEGINNING_OF_UTIL_DOT_SH
#!/bin/sh
#
# Copyright 2005-2011 VMware, Inc.  All rights reserved.
#
# A few utility functions used by our shell scripts.  Some expect the settings
# database to already be loaded and evaluated.

vmware_failed() {
  if [ "`type -t 'echo_failure' 2>/dev/null`" = 'function' ]; then
    echo_failure
  else
    echo -n "$rc_failed"
  fi
}

vmware_success() {
  if [ "`type -t 'echo_success' 2>/dev/null`" = 'function' ]; then
    echo_success
  else
    echo -n "$rc_done"
  fi
}

# This is a function in case a future product name contains language-specific
# escape characters.
vmware_product_name() {
  echo 'vSphere CLI'
  exit 0
}

# This is a function in case a future product contains language-specific
# escape characters.
vmware_product() {
  echo 'vicli'
  exit 0
}

# They are a lot of small utility programs to create temporary files in a
# secure way, but none of them is standard. So I wrote this
make_tmp_dir() {
  local dirname="$1" # OUT
  local prefix="$2"  # IN
  local tmp
  local serial
  local loop

  tmp="${TMPDIR:-/tmp}"

  # Don't overwrite existing user data
  # -> Create a directory with a name that didn't exist before
  #
  # This may never succeed (if we are racing with a malicious process), but at
  # least it is secure
  serial=0
  loop='yes'
  while [ "$loop" = 'yes' ]; do
    # Check the validity of the temporary directory. We do this in the loop
    # because it can change over time
    if [ ! -d "$tmp" ]; then
      echo 'Error: "'"$tmp"'" is not a directory.'
      echo
      exit 1
    fi
    if [ ! -w "$tmp" -o ! -x "$tmp" ]; then
      echo 'Error: "'"$tmp"'" should be writable and executable.'
      echo
      exit 1
    fi

    # Be secure
    # -> Don't give write access to other users (so that they can not use this
    # directory to launch a symlink attack)
    if mkdir -m 0755 "$tmp"'/'"$prefix$serial" >/dev/null 2>&1; then
      loop='no'
    else
      serial=`expr $serial + 1`
      serial_mod=`expr $serial % 200`
      if [ "$serial_mod" = '0' ]; then
        echo 'Warning: The "'"$tmp"'" directory may be under attack.'
        echo
      fi
    fi
  done

  eval "$dirname"'="$tmp"'"'"'/'"'"'"$prefix$serial"'
}

# Determine if SELinux is enabled
isSELinuxEnabled() {
   if [ "`cat /selinux/enforce 2> /dev/null`" = "1" ]; then
      echo "yes"
   else
      echo "no"
   fi
}

# Runs a command and retries under the provided SELinux context if it fails
vmware_exec_selinux() {
   local command="$1"
   # XXX We should probably ask the user at install time what context to use
   # when we retry commands.  unconfined_t is the correct choice for Red Hat.
   local context="unconfined_t"
   local retval

   $command
   retval=$?
   if [ $retval -ne 0 -a "`isSELinuxEnabled`" = 'yes' ]; then
      runcon -t $context -- $command
      retval=$?
   fi

   return $retval
}

wrap () {
  AMSG="$1"
  while [ `echo $AMSG | wc -c` -gt 75 ] ; do
    AMSG1=`echo $AMSG | sed -e 's/\(.\{1,75\} \).*/\1/' -e 's/  [ 	]*/  /'`
    AMSG=`echo $AMSG | sed -e 's/.\{1,75\} //' -e 's/  [ 	]*/  /'`
    echo "  $AMSG1"
  done
  echo "  $AMSG"
  echo " "
}

#---------------------------------------------------------------------------
#
# launch_binary
#
# Launch a binary with resolved dependencies.
#
# Returns:
#    None.
#
# Side Effects:
#    Process is replaced with the binary if successful,
#    otherwise returns 1.
#---------------------------------------------------------------------------

launch_binary() {
  local component="$1"		# IN: component name
  shift
  local binary="$2"		# IN: binary name
  shift
  local args="$@"		# IN: arguments
  shift

  # Convert -'s in component name to _ and lookup its libdir
  local component=`echo $component | tr '-' '_'`
  local libdir="vmdb_$component_libdir"

  exec "$libdir"'/bin/launcher.sh'		\
       "$libdir"'/lib'				\
       "$libdir"'/bin/'"$binary"		\
       "$libdir"'/libconf' "$args"
  return 1
}
# END_OF_UTIL_DOT_SH

# BEGINNING_OF_DB_DOT_SH
#!/bin/sh

#
# Manage an installer database
#

# Add an answer to a database in memory
db_answer_add() {
  local dbvar="$1" # IN/OUT
  local id="$2"    # IN
  local value="$3" # IN
  local answers
  local i

  eval "$dbvar"'_answer_'"$id"'="$value"'

  eval 'answers="$'"$dbvar"'_answers"'
  # There is no double quote around $answers on purpose
  for i in $answers; do
    if [ "$i" = "$id" ]; then
      return
    fi
  done
  answers="$answers"' '"$id"
  eval "$dbvar"'_answers="$answers"'
}

# Remove an answer from a database in memory
db_answer_remove() {
  local dbvar="$1" # IN/OUT
  local id="$2"    # IN
  local new_answers
  local answers
  local i

  eval 'unset '"$dbvar"'_answer_'"$id"

  new_answers=''
  eval 'answers="$'"$dbvar"'_answers"'
  # There is no double quote around $answers on purpose
  for i in $answers; do
    if [ "$i" != "$id" ]; then
      new_answers="$new_answers"' '"$i"
    fi
  done
  eval "$dbvar"'_answers="$new_answers"'
}

# Load all answers from a database on stdin to memory (<dbvar>_answer_*
# variables)
db_load_from_stdin() {
  local dbvar="$1" # OUT

  eval "$dbvar"'_answers=""'

  # read doesn't support -r on FreeBSD 3.x. For this reason, the following line
  # is patched to remove the -r in case of FreeBSD tools build. So don't make
  # changes to it.
  while read -r action p1 p2; do
    if [ "$action" = 'answer' ]; then
      db_answer_add "$dbvar" "$p1" "$p2"
    elif [ "$action" = 'remove_answer' ]; then
      db_answer_remove "$dbvar" "$p1"
    fi
  done
}

# Load all answers from a database on disk to memory (<dbvar>_answer_*
# variables)
db_load() {
  local dbvar="$1"  # OUT
  local dbfile="$2" # IN

  db_load_from_stdin "$dbvar" < "$dbfile"
}

# Iterate through all answers in a database in memory, calling <func> with
# id/value pairs and the remaining arguments to this function
db_iterate() {
  local dbvar="$1" # IN
  local func="$2"  # IN
  shift 2
  local answers
  local i
  local value

  eval 'answers="$'"$dbvar"'_answers"'
  # There is no double quote around $answers on purpose
  for i in $answers; do
    eval 'value="$'"$dbvar"'_answer_'"$i"'"'
    "$func" "$i" "$value" "$@"
  done
}

# If it exists in memory, remove an answer from a database (disk and memory)
db_remove_answer() {
  local dbvar="$1"  # IN/OUT
  local dbfile="$2" # IN
  local id="$3"     # IN
  local answers
  local i

  eval 'answers="$'"$dbvar"'_answers"'
  # There is no double quote around $answers on purpose
  for i in $answers; do
    if [ "$i" = "$id" ]; then
      echo 'remove_answer '"$id" >> "$dbfile"
      db_answer_remove "$dbvar" "$id"
      return
    fi
  done
}

# Add an answer to a database (disk and memory)
db_add_answer() {
  local dbvar="$1"  # IN/OUT
  local dbfile="$2" # IN
  local id="$3"     # IN
  local value="$4"  # IN

  db_remove_answer "$dbvar" "$dbfile" "$id"
  echo 'answer '"$id"' '"$value" >> "$dbfile"
  db_answer_add "$dbvar" "$id" "$value"
}

# Add a file to a database on disk
# 'file' is the file to put in the database (it may not exist on the disk)
# 'tsfile' is the file to get the timestamp from, '' if no timestamp
db_add_file() {
  local dbfile="$1" # IN
  local file="$2"   # IN
  local tsfile="$3" # IN
  local date

  if [ "$tsfile" = '' ]; then
    echo 'file '"$file" >> "$dbfile"
  else
    date=`date -r "$tsfile" '+%s' 2> /dev/null`
    if [ "$date" != '' ]; then
      date=' '"$date"
    fi
    echo 'file '"$file$date" >> "$dbfile"
  fi
}

# Remove file from database
db_remove_file() {
  local dbfile="$1" # IN
  local file="$2"   # IN

  echo "remove_file $file" >> "$dbfile"
}

# Add a directory to a database on disk
db_add_dir() {
  local dbfile="$1" # IN
  local dir="$2"    # IN

  echo 'directory '"$dir" >> "$dbfile"
}
# END_OF_DB_DOT_SH

#
# Implementation of the methods
#

# Return the human-readable type of the installer
installer_kind() {
  echo 'tar'

  exit 0
}

# Return the human-readable version of the installer
installer_version() {
  echo '4'

  exit 0
}

# Return the specific VMware product
vmware_product() {
  echo 'vicli'

  exit 0
}

# Set the name of the main /etc/vmware* directory
# Set up variables depending on the main RegistryDir
initialize_globals() {
  if [ "`vmware_product`" = 'viperl' ]; then
    gRegistryDir='/etc/vmware-viperl'
    gUninstaller='vmware-uninstall-viperl.pl'
  elif [ "`vmware_product`" = 'vicli' ]; then
    gRegistryDir='/etc/vmware-vcli'
    gUninstaller='vmware-uninstall-vSphere-CLI.pl'
  else
    gRegistryDir='/etc/vmware-vcli'
    gUninstaller='vmware-uninstall-vSphere-CLI.pl'
  fi
  gInstallerMainDB="$gRegistryDir"'/locations'
}

# Convert the installer database format to formats used by older installers
# The output should be a .tar.gz containing enough information to allow a
# clean "upgrade" (which will actually be a downgrade) by an older installer
installer_convertdb() {
  local format="$1"
  local output="$2"
  local tmpdir

  case "$format" in
    rpm4|tar4)
      if [ "$format" = 'tar4' ]; then
        echo 'Keeping the tar4 installer database format.'
      else
        echo 'Converting the tar4 installer database format'
        echo '        to the rpm4 installer database format.'
      fi
      echo
      # The next installer uses the same database format. Backup a full
      # database state that it can use as a fresh new database.
      #
      # Everything should go in:
      #  /etc/vmware*/
      #              state/
      #
      # But those directories do not have to be referenced,
      # the next installer will do it just after restoring the backup
      # because only it knows if those directories have been created.
      #
      # Also, do not include those directories in the backup, because some
      # versions of tar (1.13.17+ are ok) do not untar directory permissions
      # as described in their documentation.
      make_tmp_dir 'tmpdir' 'vmware-installer'
      mkdir -p "$tmpdir""$gRegistryDir"
      db_add_file "$tmpdir""$gInstallerMainDB" "$gInstallerMainDB" ''
      db_load 'db' "$gInstallerMainDB"
      write() {
        local id="$1"
        local value="$2"
        local dbfile="$3"

        # No database conversions are necessary

        echo 'answer '"$id"' '"$value" >> "$dbfile"
      }
      db_iterate 'db' 'write' "$tmpdir""$gInstallerMainDB"
      files='./'"$gInstallerMainDB"
      
      configExists='no'
      if [ -e "$gRegistryDir"/config ]; then
         configExists='yes'
      fi
      if [ "$configExists" = 'yes' ]; then
         mkdir -p "$tmpdir""$gRegistryDir"'/state'
         cp "$gRegistryDir"/config "$tmpdir""$gRegistryDir"'/state/config'
         db_add_file "$tmpdir""$gInstallerMainDB" "$gRegistryDir"'/state/config' "$tmpdir""$gRegistryDir"'/state/config'
         files="$files"' .'"$gRegistryDir"'/state/config'
      fi

      tar -C "$tmpdir" -czopf "$output" $files 2> /dev/null

      rm -rf "$tmpdir"

      exit 0;
      ;;
    rpm3|tar3)
      echo 'Converting the tar4 installer database format'
      echo '        to the '"$format"' installer database format.'
      echo
      # The next installer uses the same database format. Backup a full
      # database state that it can use as a fresh new database.
      #
      # Everything should go in:
      #  /etc/vmware*/
      #              state/
      #
      # But those directories do not have to be referenced,
      # the next installer will do it just after restoring the backup
      # because only it knows if those directories have been created.
      #
      # Also, do not include those directories in the backup, because some
      # versions of tar (1.13.17+ are ok) do not untar directory permissions
      # as described in their documentation.
      make_tmp_dir 'tmpdir' 'vmware-installer'
      mkdir -p "$tmpdir""$gRegistryDir"
      db_add_file "$tmpdir""$gInstallerMainDB" "$gInstallerMainDB" ''
      db_load 'db' "$gInstallerMainDB"
      write() {
        local id="$1"
        local value="$2"
        local dbfile="$3"

        # The tar4|rpm4 added two keywords that are not supported by earlier
        # installers.   These are removed here so that they don't propagate
        # back through on a subsequent upgrade (with perhaps no longer correct
        # values)
        #
        #    VNET_n_DHCP            -> <nothing>
        #    VNET_n_HOSTONLY_SUBNET -> <nothing>
        #
        if echo $id | grep 'VNET_[[:digit:]]\+_DHCP' &>/dev/null; then
           return;
        elif echo $id | grep 'VNET_[[:digit:]]\+_HOSTONLY_SUBNET' &>/dev/null; then
           return;
        fi

        echo 'answer '"$id"' '"$value" >> "$dbfile"
      }
      db_iterate 'db' 'write' "$tmpdir""$gInstallerMainDB"
      files='./'"$gInstallerMainDB"
      
      # The Bourne shell (Solaris' default) doesn't support -e so use -f
      # instead.  We only need to worry about this for tar4 and tar3 since the
      # Solaris Tools did not exist before the tar3 database version was
      # created.
      configExists='no'
      if [ -e "$gRegistryDir"/config ]; then
         configExists='yes'
      fi
      if [ "$configExists" = 'yes' ]; then
        mkdir -p "$tmpdir""$gRegistryDir"'/state'
        cp "$gRegistryDir"/config "$tmpdir""$gRegistryDir"'/state/config'
        db_add_file "$tmpdir""$gInstallerMainDB" "$gRegistryDir"'/state/config' "$tmpdir""$gRegistryDir"'/state/config'
        files="$files"' .'"$gRegistryDir"'/state/config'
      fi
      # There is no double quote around $files on purpose
      tar -C "$tmpdir" -czopf "$output" $files 2> /dev/null
      rm -rf "$tmpdir"

      exit 0
      ;;

    tar2|rpm2)
      echo 'Converting the tar4 installer database format'
      echo '        to the '"$format"' installer database format.'
      echo
      # The next installer uses the same database format. Backup a full
      # database state that it can use as a fresh new database.
      #
      # Everything should go in:
      #  /etc/vmware/
      #              state/
      #
      # But those directories do not have to be referenced,
      # the next installer will do it just after restoring the backup
      # because only it knows if those directories have been created.
      #
      # Also, do not include those directories in the backup, because some
      # versions of tar (1.13.17+ are ok) do not untar directory permissions
      # as described in their documentation.
      make_tmp_dir 'tmpdir' 'vmware-installer'
      mkdir -p "$tmpdir""$gRegistryDir"
      db_add_file "$tmpdir""$gInstallerMainDB" "$gInstallerMainDB" ''
      db_load 'db' "$gInstallerMainDB"
      write() {
        local id="$1"
        local value="$2"
        local dbfile="$3"

        # For the rpm3|tar3 format, a number of keywords were removed.  In their 
        # place a more flexible scheme was implemented for which each has a semantic
        # equivalent:
	#
        #   VNET_HOSTONLY          -> VNET_1_HOSTONLY
        #   VNET_HOSTONLY_HOSTADDR -> VNET_1_HOSTONLY_HOSTADDR
        #   VNET_HOSTONLY_NETMASK  -> VNET_1_HOSTONLY_NETMASK
        #   VNET_INTERFACE         -> VNET_0_INTERFACE
        #
        # Note that we no longer use the samba variables, so these entries are
        # not converted.  These were removed on the upgrade case, so it is not
        # necessary to remove them here.
        #   VNET_SAMBA             -> VNET_1_SAMBA
        #   VNET_SAMBA_MACHINESID  -> VNET_1_SAMBA_MACHINESID
        #   VNET_SAMBA_SMBPASSWD   -> VNET_1_SAMBA_SMBPASSWD
	# 
        # Also note that we perform the conversions needed above (rpm3|tar3
        # case) since we are downgrading two versions.
	# 
	# We undo the changes from rpm2|tar2 to rpm3|tar3 and rpm4|tar4.
        if [ "$id" = 'VNET_1_HOSTONLY' ]; then
          id='VNET_HOSTONLY'
        elif [ "$id" = 'VNET_1_HOSTONLY_HOSTADDR' ]; then
          id='VNET_HOSTONLY_HOSTADDR'
        elif [ "$id" = 'VNET_1_HOSTONLY_NETMASK' ]; then
          id='VNET_HOSTONLY_NETMASK'
        elif [ "$id" = 'VNET_0_INTERFACE' ]; then
          id='VNET_INTERFACE'
        elif echo $id | grep 'VNET_[[:digit:]]\+_DHCP' &>/dev/null; then
           return;
        elif echo $id | grep 'VNET_[[:digit:]]\+_HOSTONLY_SUBNET' &>/dev/null; then
           return;
        fi

        echo 'answer '"$id"' '"$value" >> "$dbfile"
      }
      db_iterate 'db' 'write' "$tmpdir""$gInstallerMainDB"
      files='.'"$gInstallerMainDB"
      if [ -e "$gRegistryDir"/config ]; then
        mkdir -p "$tmpdir""$gRegistryDir"'/state'
        cp "$gRegistryDir"/config "$tmpdir""$gRegistryDir"'/state/config'
        db_add_file "$tmpdir""$gInstallerMainDB" "$gRegistryDir"'/state/config' "$tmpdir""$gRegistryDir"'/state/config'
        files="$files"' .'"$gRegistryDir"'/state/config'
      fi
      # There is no double quote around $files on purpose
      tar -C "$tmpdir" -czopf "$output" $files 2> /dev/null
      rm -rf "$tmpdir"

      exit 0
      ;;

    tar|rpm)
      echo 'Converting the tar4 installer database format'
      echo '        to the '"$format"'  installer database format.'
      echo
      # Backup only the main database file. The next installer ignores
      # new keywords as well as file and directory statements, and deals
      # properly with remove_ statements
      tar -C '/' -czopf "$output" '.'"$gInstallerMainDB" 2> /dev/null

      exit 0
      ;;

    *)
      echo 'Unknown '"$format"' installer database format.'
      echo

      exit 1
      ;;
  esac
}

# Uninstall what has been installed by the installer.
# This should never prompt the user, because it can be annoying if invoked
# from the rpm installer for example.
installer_uninstall() {

  db_load 'db' "$gRegistryDir"'/locations'

  if [ "$db_answer_BINDIR" = '' ]; then
    echo 'Error: Unable to find the binary installation directory (answer BINDIR)'
    echo '       in the installer database file "'"$gRegistryDir"'/locations".'
    echo

    exit 1
  fi

  # Remove the package
  if [ ! -x "$db_answer_BINDIR"'/'"$gUninstaller" ]; then
    echo 'Error: Unable to execute "'"$db_answer_BINDIR"'/'"$gUninstaller"'.'
    echo

    exit 1
  fi
  "$db_answer_BINDIR"/"$gUninstaller" "$@" || exit 1

  exit 0
}

#
# Interface of the methods
#

initialize_globals

case "$1" in
  kind)
    installer_kind
    ;;

  version)
    installer_version
    ;;

  convertdb)
    installer_convertdb "$2" "$3"
    ;;

  uninstall)
    installer_uninstall "$@"
    ;;

  *)
    echo 'Usage: '"`basename "$0"`"' {kind|version|convertdb|uninstall}'
    echo

    exit 1
    ;;
esac

