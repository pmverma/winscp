// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'PIDL.pas' rev: 27.00 (Windows)

#ifndef PidlHPP
#define PidlHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Winapi.ShlObj.hpp>	// Pascal unit
#include <Winapi.Windows.hpp>	// Pascal unit
#include <Winapi.ActiveX.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Pidl
{
//-- type declarations -------------------------------------------------------
//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE _di_IMalloc ShellMalloc;
extern DELPHI_PACKAGE unsigned CF_FILECONTENTS;
extern DELPHI_PACKAGE unsigned CF_FILEDESCRIPTOR;
extern DELPHI_PACKAGE unsigned CF_FILENAME;
extern DELPHI_PACKAGE unsigned CF_FILENAMEMAP;
extern DELPHI_PACKAGE unsigned CF_FILENAMEMAPW;
extern DELPHI_PACKAGE unsigned CF_INDRAGLOOP;
extern DELPHI_PACKAGE unsigned CF_NETRESOURCES;
extern DELPHI_PACKAGE unsigned CF_PASTESUCCEEDED;
extern DELPHI_PACKAGE unsigned CF_PERFORMEDDROPEFFECT;
extern DELPHI_PACKAGE unsigned CF_PREFERREDDROPEFFECT;
extern DELPHI_PACKAGE unsigned CF_PRINTERGROUP;
extern DELPHI_PACKAGE unsigned CF_SHELLIDLIST;
extern DELPHI_PACKAGE unsigned CF_SHELLIDLISTOFFSET;
extern DELPHI_PACKAGE unsigned CF_SHELLURL;
extern DELPHI_PACKAGE Winapi::Shlobj::PItemIDList __fastcall PIDL_GetNextItem(Winapi::Shlobj::PItemIDList PIDL);
extern DELPHI_PACKAGE int __fastcall PIDL_GetSize(Winapi::Shlobj::PItemIDList pidl);
extern DELPHI_PACKAGE Winapi::Shlobj::PItemIDList __fastcall PIDL_Create(unsigned Size);
extern DELPHI_PACKAGE Winapi::Shlobj::PItemIDList __fastcall PIDL_Concatenate(Winapi::Shlobj::PItemIDList pidl1, Winapi::Shlobj::PItemIDList pidl2);
extern DELPHI_PACKAGE Winapi::Shlobj::PItemIDList __fastcall PIDL_Copy(Winapi::Shlobj::PItemIDList pidlSource);
extern DELPHI_PACKAGE bool __fastcall PIDL_GetDisplayName(_di_IShellFolder piFolder, Winapi::Shlobj::PItemIDList pidl, unsigned dwFlags, System::WideChar * pszName, unsigned cchMax);
extern DELPHI_PACKAGE Winapi::Shlobj::PItemIDList __fastcall Pidl_GetFullyQualified(const _di_IShellFolder PiParentFolder, Winapi::Shlobj::PItemIDList pidl);
extern DELPHI_PACKAGE void __fastcall PIDL_GetRelative(Winapi::Shlobj::PItemIDList &pidlFQ, Winapi::Shlobj::PItemIDList &ppidlRoot, Winapi::Shlobj::PItemIDList &ppidlItem);
extern DELPHI_PACKAGE Winapi::Shlobj::PItemIDList __fastcall PIDL_GetFromPath(System::WideChar * pszFile);
extern DELPHI_PACKAGE bool __fastcall PIDL_GetFileFolder(Winapi::Shlobj::PItemIDList pidl, _di_IShellFolder &piFolder);
extern DELPHI_PACKAGE Winapi::Shlobj::PItemIDList __fastcall PIDL_GetFromParentFolder(_di_IShellFolder pParentFolder, System::WideChar * pszFile);
extern DELPHI_PACKAGE void __fastcall PIDL_Free(Winapi::Shlobj::PItemIDList PIDL);
extern DELPHI_PACKAGE bool __fastcall PIDL_Equal(Winapi::Shlobj::PItemIDList PIDL1, Winapi::Shlobj::PItemIDList PIDL2);
}	/* namespace Pidl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_PIDL)
using namespace Pidl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// PidlHPP
