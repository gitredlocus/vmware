; NSIS script file for installing vGhetto
; This installation script is written by 
; Wil van Antwerpen, February 17, 2010
; NOTE: this .NSI script is designed for NSIS v2.46 or higher
; You can download the installer from the following location:
; http://nsis.sourceforge.net/Download
;
;  This software is provided 'as-is', without any express or implied
;  warranty.  In no event will the authors be held liable for any damages
;  arising from the use of this software.
;
;  Permission is granted to anyone to use this software for any purpose,
;  including commercial applications, and to alter it and redistribute it
;  freely, subject to the following restrictions:
;
;  1. The origin of this software must not be misrepresented; you must not
;     claim that you wrote the original software. If you use this software
;     in a product, an acknowledgment in the product documentation would be
;     appreciated but is not required.
;  2. Altered source versions must be plainly marked as such, and must not be
;     misrepresented as being the original software.
;  3. This notice may not be removed or altered from any source distribution.
;
; ==============================================================================
;
; We use the global variables for the following parameters:
; $0  = The SDK Perl root folder, used to detect if the vSphere SDK is already installed
; $2  = The location of the vGhetto source and binary files for our script


!define  PERLREGROOT "Software\Perl" ; HKLM\Software\Perl string BinDir has the path to the perl executable
!define  PRODUCTNAME "vGhetto"
!define  PRODUCTVERSION "     Version 1.0.4 March 16, 2010"

BGGradient 000000 008080 FFFFFF
InstallColors /windows ; 808080 000030
Caption "${PRODUCTNAME}"
;SubCaption 0 " License Agreement" ; Use the defaults
;SubCaption 1 " Installation Options"
; BrandingText "" ; By default it is 'Nullsoft Install System v1.96'
Icon "Install.ico"
Name "vGhetto"
CRCCheck on ; (can be off)
InstProgressFlags smooth colored
OutFile "..\..\installers\vGhettoSetup.exe"


; Some default compiler settings
SetOverwrite ifnewer ; 
SetCompress auto ; (can be off or force)
SetDatablockOptimize on ; (can be off)
; AutoCloseWindow false ; (can be true for the window go away automatically at end)
; ShowInstDetails hide ; (can be show to have them shown, or nevershow to disable)
; SetDateSave off ; (can be on to have files restored to their orginal date)

LicenseText "You must agree to this license before installing:$\nvGhetto, The Nr.1 collection of perl scripts to manage your virtual VMware infrastructure$\n${PRODUCTVERSION}"
LicenseData ".\gpl.txt"

InstallDir "$PROGRAMFILES\vGhetto"
InstallDirRegKey HKEY_LOCAL_MACHINE "SOFTWARE\lamw\vGhetto" ""
;DirShow show ; (make this hide to not let the user change it)
; dirshow is removed from nsis
DirText "Select the directory to install vGhetto in:"


InstType "Full"
InstType "Typical"
InstType "Minimal"

ComponentText "Select the items you want to install."

Section "Source and Program" ; (default, required section)
 SectionIn 1 

SetOutPath "$INSTDIR\scripts"
File ..\..\scripts\*.*
SetOutPath "$INSTDIR\other"
File ..\..\other\*.*
SetOutPath "$INSTDIR\wbin"
File ..\..\wbin\*.*
SetOutPath "$INSTDIR\bitmaps"
File *.ico
File ..\..\bitmaps\*.gif
SetOutPath "$INSTDIR\build\Windows" ; Copy our install files as well, but make sure
File *.nsi          ; not to include the generated executable into
File *.txt          ; the generated executable as it results in 
File *.ico          ; excessive growth of the size of our installscript
File splash.exe
SetOutPath "$INSTDIR"
File readme.txt
File ..\..\*.*

; The selection below could have worked if our install-script wasn't part of the install ;-)
;SetOutPath "$INSTDIR"
;File /r ..\*.*
SetOverwrite on ; 

; Check the BinDir registry attribute to see if Perl is already installed.
ReadRegStr $0 HKLM "${PERLREGROOT}" "BinDir"

SectionEnd ; end of default section


Section "Start Menu Shortcuts"
 SectionIn 1 ; (uncomment and change this to add it to install types)
; You cannot set the 'start in' option in the shortcut directly in
; here, instead it will write out the current SetOutpath setting.
  SetOutPath "$INSTDIR"
  CreateDirectory "$SMPROGRAMS\vGhetto"
  CreateShortCut "$SMPROGRAMS\vGhetto\vGhetto Client.lnk" "$0" "vGhetto.pl" ;"$INSTDIR\bitmaps\vGhetto.ico"
;  CreateShortCut "$SMPROGRAMS\vGhetto\Frequently Asked Questions.lnk" "$INSTDIR\Doc\FAQ.htm" ""
  CreateShortCut "$SMPROGRAMS\vGhetto\Readme.lnk" "$INSTDIR\readme.txt" ""
  CreateShortCut "$SMPROGRAMS\vGhetto\Documentation.lnk" "http://communities.vmware.com/docs/DOC-11965" "" "$INSTDIR\bitmaps\page_white_world.ico"
  CreateShortCut "$SMPROGRAMS\vGhetto\Sourceforge project.lnk" "http://sourceforge.net/projects/vghetto/develop" "" "$INSTDIR\bitmaps\page_white_world.ico"
  CreateShortCut "$SMPROGRAMS\vGhetto\Uninstall.lnk" "$INSTDIR\uninstall.exe" "" "$INSTDIR\bitmaps\Uninstall.ico" 
  SetOutPath "$INSTDIR\scripts"
  CreateShortCut "$SMPROGRAMS\vGhetto\vGhetto scripts console.lnk" "CMD" ""
SectionEnd

Section "-post" ; (post install section, happens last after any optional sections)
ClearErrors

DontAssociateSource:

WriteRegStr HKEY_LOCAL_MACHINE "SOFTWARE\lamw\vGhetto" "" "$INSTDIR"
WriteRegStr HKEY_LOCAL_MACHINE "Software\Microsoft\Windows\CurrentVersion\Uninstall\vGhetto" "DisplayName" "vGhetto - The perl infrastructure management script library (remove only)"
WriteRegStr HKEY_LOCAL_MACHINE "Software\Microsoft\Windows\CurrentVersion\Uninstall\vGhetto" "UninstallString" '"$INSTDIR\Uninstall.exe"'
; write out uninstaller
WriteUninstaller "$INSTDIR\Uninstall.exe"
SectionEnd ; end of -post section

; We've added a splash to the setup for fun
Function .onInit
  SetOutPath $TEMP
;  File /oname=spltmp.bmp "..\Bitmaps\Logo.bmp"
;  File /oname=spltmp.exe "..\Install\splash.exe"
;  ExecWait '"$TEMP\spltmp.exe" 1800 $HWNDPARENT $TEMP\spltmp'
;  Delete $TEMP\spltmp.exe
;  Delete $TEMP\spltmp.bmp
FunctionEnd




; begin uninstall settings/section
UninstallText "This will uninstall vGhetto from your system$\nBe aware that this routine will also remove all your changed files,$\n make a copy of what you want to save if you don't want this to happen."
UninstallIcon "Uninstall.ico"

Section Uninstall
; add delete commands to delete whatever files/registry keys/etc you installed here.
Delete "$INSTDIR\scripts\*.*"
RMDir "$INSTDIR\scripts"
Delete "$INSTDIR\other\*.*"
RMDir "$INSTDIR\other"
Delete "$INSTDIR\wbin\*.*"
RMDir "$INSTDIR\wbin"
Delete "$INSTDIR\bitmaps\*.*"
RMDir "$INSTDIR\bitmaps"
;Delete /REBOOTOK "$INSTDIR\Data\*.*"
;RMDir "$INSTDIR\Data"
Delete "$INSTDIR\build\Windows\*.*"
RMDir "$INSTDIR\build\Windows"
RMDir "$INSTDIR\build"
Delete "$INSTDIR\*.*" 
RMDir "$INSTDIR"

;; remove the runtime if we installed it 
;; Iow, if the user did not have the SDK on his machine
;IfFileExists "$INSTDIR\Bin\*.*" 0 NoRunTimeInstalled
;
;MessageBox MB_YESNO|MB_ICONQUESTION "Do you want to remove the SDK installed on this machine?$\n(Answer No if you are not sure)." IDNO NoRunTimeInstalled
;
; Delete /REBOOTOK "$INSTDIR\Bin\*.*"
; RMDir "$INSTDIR\Bin"
; Delete /REBOOTOK "$INSTDIR\Lib\*.*"
; RMDir "$INSTDIR\Lib"
; Delete /REBOOTOK "$INSTDIR\Usr\*.*"
; RMDir "$INSTDIR\Usr"

;NoRunTimeInstalled:

; remove the startmenu if installed
IfFileExists "$SMPROGRAMS\vGhetto\*.*" 0 NoStartmenuFound
Delete /REBOOTOK "$SMPROGRAMS\vGhetto\*.*"
RMDir "$SMPROGRAMS\vGhetto"

NoStartmenuFound:

Delete "$INSTDIR\Uninstall.exe"
DeleteRegKey HKEY_LOCAL_MACHINE "SOFTWARE\lamw\vGhetto"
DeleteRegKey HKEY_LOCAL_MACHINE "SOFTWARE\Microsoft\Windows\CurrentVersion\Uninstall\vGhetto"
RMDir "$INSTDIR"
SectionEnd ; end of uninstall section

; eof
