WinSCP
WinSCP Free SFTP, SCP and FTP client for Windows

//////////////////////////////////////////////////////////////////////////

*This is a customized version of open source winscp 5.7.2.
*The revisions from origianl version are as following.
	1.Renaming files/folders is not allowed
	2.Duplicating files/folders is not allowed
	3.Moving files/folders is not allowed
	4.Deleting files/folders is not allowed
	5.Drag&Drop withing same panel or side to side panel is not allowed
		-However you can drop to external windows explorer

Download files/folders with Download menu or right click context menu or F5.
Upload same as above.

For more about on what/how: http://winscp.net/forum/viewtopic.php?t=15351
///////////////////////////////////////////////////////////////////////////////
This is the README file for source code package of WinSCP.

To build WinSCP you need:
- Embarcadero C++ Builder XE6 Professional.
  http://www.embarcadero.com/products/cbuilder
- Microsoft .NET Framework 3.5 (for MSBuild)
  http://www.microsoft.com/netframework
- nasm from http://www.nasm.us/
- Build MFC (see readme_mfc.txt).
- To build 64-bit version of drag&drop shell extension, you need
  Windows Platform SDK:
  http://msdn.microsoft.com/en-us/windows/bb980924
- To build WinSCP .NET assembly, you need Microsoft Visual Studio 2012
  http://www.microsoft.com/visualstudio
  and Microsoft .NET Framework 4.0

To build WinSCP from source by yourself, modify and use 'build.bat' in root
folder of source code package.

Directory structure:
/source             project files of all native libraries and executables
/source/components  native WinSCP visual components
/source/console     console interface
/source/core        core (non-visual) part of WinSCP
                    (SSH, SFTP, FTP and SCP code)
/source/dragext     drag&drop shell extension
/source/filezilla   source code of FileZilla FTP client
/source/forms       visual part of WinSCP (dialogs and windows)
/source/packages    general visual components (both mine and 3rd party)
/source/putty       source code of Putty SSH client
/source/resource    resources strings
/source/windows     other sources
/deployment         Inno Setup script to create setup package
                    (see /deployment/readme)
/dotnet             source code of WinSCP .NET assembly
/libs               3rd party libraries

WinSCP homepage is http://winscp.net/

See the file 'license.txt' for the license conditions.
