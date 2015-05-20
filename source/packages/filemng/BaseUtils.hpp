// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'BaseUtils.pas' rev: 27.00 (Windows)

#ifndef BaseutilsHPP
#define BaseutilsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.SysUtils.hpp>	// Pascal unit
#include <Winapi.Windows.hpp>	// Pascal unit
#include <Vcl.Forms.hpp>	// Pascal unit
#include <Winapi.ShlObj.hpp>	// Pascal unit
#include <PIDL.hpp>	// Pascal unit
#include <System.Classes.hpp>	// Pascal unit
#include <Vcl.Controls.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Baseutils
{
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TDateTimePrecision : unsigned char { tpNone, tpDay, tpMinute, tpSecond, tpMillisecond };

enum DECLSPEC_DENUM TFormatBytesStyle : unsigned char { fbNone, fbKilobytes, fbShort };

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE System::ResourceString _SNoValidPath;
#define Baseutils_SNoValidPath System::LoadResourceString(&Baseutils::_SNoValidPath)
extern DELPHI_PACKAGE System::ResourceString _SUcpPathsNotSupported;
#define Baseutils_SUcpPathsNotSupported System::LoadResourceString(&Baseutils::_SUcpPathsNotSupported)
extern DELPHI_PACKAGE System::ResourceString _SByte;
#define Baseutils_SByte System::LoadResourceString(&Baseutils::_SByte)
extern DELPHI_PACKAGE System::ResourceString _SKiloByte;
#define Baseutils_SKiloByte System::LoadResourceString(&Baseutils::_SKiloByte)
extern DELPHI_PACKAGE System::ResourceString _SMegaByte;
#define Baseutils_SMegaByte System::LoadResourceString(&Baseutils::_SMegaByte)
extern DELPHI_PACKAGE System::ResourceString _SGigaByte;
#define Baseutils_SGigaByte System::LoadResourceString(&Baseutils::_SGigaByte)
extern DELPHI_PACKAGE System::UnicodeString __fastcall AnyValidPath(void);
extern DELPHI_PACKAGE bool __fastcall IsUncPath(System::UnicodeString Path);
extern DELPHI_PACKAGE void __fastcall StrTranslate(System::UnicodeString &Str, System::UnicodeString Code);
extern DELPHI_PACKAGE bool __fastcall StrContains(System::UnicodeString Str1, System::UnicodeString Str2);
extern DELPHI_PACKAGE bool __fastcall FileOrDirExists(System::UnicodeString FileName);
extern DELPHI_PACKAGE bool __fastcall CheckFileExists(System::UnicodeString FileName);
extern DELPHI_PACKAGE bool __fastcall DirExists(System::UnicodeString Dir, int &Attrs)/* overload */;
extern DELPHI_PACKAGE bool __fastcall DirExists(System::UnicodeString Dir)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall ExtractFileNameOnly(System::UnicodeString Name);
extern DELPHI_PACKAGE System::UnicodeString __fastcall FormatBytes(__int64 Bytes, TFormatBytesStyle Style = (TFormatBytesStyle)(0x2), bool UseUnitsForBytes = true);
extern DELPHI_PACKAGE System::UnicodeString __fastcall FormatPanelBytes(__int64 Bytes, TFormatBytesStyle Style);
extern DELPHI_PACKAGE void __fastcall FreePIDL(Winapi::Shlobj::PItemIDList &PIDL);
extern DELPHI_PACKAGE void __fastcall ReduceDateTimePrecision(System::TDateTime &DateTime, TDateTimePrecision Precision);
extern DELPHI_PACKAGE bool __fastcall SpecialFolderLocation(int Folder, System::UnicodeString &Path, Winapi::Shlobj::PItemIDList &PIDL)/* overload */;
extern DELPHI_PACKAGE bool __fastcall SpecialFolderLocation(int Folder, System::UnicodeString &Path)/* overload */;
extern DELPHI_PACKAGE Vcl::Controls::TImageList* __fastcall ShellImageList(System::Classes::TComponent* Owner, unsigned Flags);
extern DELPHI_PACKAGE System::UnicodeString __fastcall FormatLastOSError(System::UnicodeString Message);
}	/* namespace Baseutils */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_BASEUTILS)
using namespace Baseutils;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// BaseutilsHPP
