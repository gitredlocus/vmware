This is the very first version of the vGhetto GUI setup on windows.
Because of that it is still a bit rough on the edges and doesn't yet do everything you might expect the installer to do.


=== Basic steps needed to be able to start vGhettoGUI ===
In order to be able to run the installer with success use the following steps:
1. install the windows vSphere SDK and remember where you installed it. (Default is Program Files\VMware\VMware vSphere CLI)
2. Now you'll need to add a module from the winnipeg repository. 
2.1. open a console (DOS box) and go to the folder where the SDK is installed.
2.2. cd into the perl folder (cd perl <enter>)
2.3. type: ppm rep add theoryx5.uwinnipeg.ca http://theoryx5.uwinnipeg.ca/ppms/ <enter>
2.4. type: ppm install time-modules <enter>
3. Run the vGhettoSetup.exe installer

=== Support for the Remote Console ===
You can open a console to your Virtual Machines if you copy the firefox remote console plugin to the vGhetto folder.

When you install the .xpi file, the plugin gets installed into your firefox profile.
On windows XP this can be found in a folder named like:

C:\Documents and Settings\<username>\Application Data\Mozilla\Firefox\Profiles\nnnnnnn.default\extensions\VMwareVMRC@vmware.com

Copy the whole VMwareVMRC@vmware.com folder with all files in there to the vGhetto folder. Then rename it from VMwareVMRC@vmware.com into "console".

----------------------------------------------------------------------------------------------------------------------


The windows installer uses the open source NSIS installer package which is available at:
http://nsis.sourceforge.net/Download

ToDo - Setup
- Add a check to see if perl is installed and nag if it isn't.
- See if it makes sense to add the time-modules lib from winnipeg automatically

ToDo - Remote Console
- Check if remote console is properly installed and give directions if not
- Umm.. the whole rename folder action from VMwareVMRC@vmware.com to console is probably confusing ;)
- Longer term, don't copy plugin, but use the plugin from Mozilla directly.
- See if you can use the view open client for OS X as a remote console.

Done
- Support for Linux remote console
- Make remote console non modal so that you can have multiple consoles open at the same time
- Add a start menu option that opens a command prompt in the scripts folder

