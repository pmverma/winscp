// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'ShellDialogs.pas' rev: 27.00 (Windows)

#ifndef ShelldialogsHPP
#define ShelldialogsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Winapi.Windows.hpp>	// Pascal unit
#include <Winapi.ShlObj.hpp>	// Pascal unit
#include <System.SysUtils.hpp>	// Pascal unit
#include <System.Classes.hpp>	// Pascal unit
#include <Winapi.Messages.hpp>	// Pascal unit
#include <Vcl.Menus.hpp>	// Pascal unit
#include <PIDL.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Shelldialogs
{
//-- type declarations -------------------------------------------------------
typedef System::StaticArray<Winapi::Shlobj::PItemIDList, 1> TPIDLArray;

typedef TPIDLArray *PPIDLArray;

//-- var, const, procedure ---------------------------------------------------
#define shcProperties L"properties"
#define shcCut L"cut"
#define shcCopy L"copy"
#define shcPaste L"paste"
#define shcDelete L"delete"
#define shcLink L"link"
#define shcrename L"rename"
#define shcDefault L""
extern DELPHI_PACKAGE Vcl::Menus::TPopupMenu* CustomContextMenu;
extern DELPHI_PACKAGE void __fastcall ShellDisplayContextMenu(NativeUInt Handle, const System::Types::TPoint &P, _di_IShellFolder ShellFolder, int PIDLCount, Winapi::Shlobj::PItemIDList &PIDL, bool AllowRename, System::UnicodeString &Verb, bool PerformPaste = true)/* overload */;
extern DELPHI_PACKAGE void __fastcall ShellDisplayContextMenu(NativeUInt Handle, const System::Types::TPoint &P, System::UnicodeString FileName, bool AllowRename, System::UnicodeString &Verb, bool PerformPaste = true)/* overload */;
extern DELPHI_PACKAGE void __fastcall ShellDisplayContextMenu(NativeUInt Handle, const System::Types::TPoint &P, System::UnicodeString Path, System::Classes::TStringList* Files, System::UnicodeString &Verb, bool PerformPaste = true)/* overload */;
extern DELPHI_PACKAGE bool __fastcall ShellExecuteContextCommand(NativeUInt Handle, System::UnicodeString Command, _di_IShellFolder ShellFolder, int PIDLCount, Winapi::Shlobj::PItemIDList &PIDL)/* overload */;
extern DELPHI_PACKAGE bool __fastcall ShellExecuteContextCommand(NativeUInt Handle, System::UnicodeString Command, System::UnicodeString FileName)/* overload */;
extern DELPHI_PACKAGE bool __fastcall ShellExecuteContextCommand(NativeUInt Handle, System::UnicodeString Command, System::UnicodeString Path, System::Classes::TStringList* Files)/* overload */;
}	/* namespace Shelldialogs */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SHELLDIALOGS)
using namespace Shelldialogs;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// ShelldialogsHPP
