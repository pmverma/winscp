// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'IEDriveInfo.pas' rev: 27.00 (Windows)

#ifndef IedriveinfoHPP
#define IedriveinfoHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Winapi.Windows.hpp>	// Pascal unit
#include <System.Win.Registry.hpp>	// Pascal unit
#include <System.SysUtils.hpp>	// Pascal unit
#include <System.Classes.hpp>	// Pascal unit
#include <Vcl.ComCtrls.hpp>	// Pascal unit
#include <Winapi.ShellAPI.hpp>	// Pascal unit
#include <Winapi.ShlObj.hpp>	// Pascal unit
#include <Winapi.CommCtrl.hpp>	// Pascal unit
#include <Vcl.Forms.hpp>	// Pascal unit
#include <BaseUtils.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Iedriveinfo
{
//-- type declarations -------------------------------------------------------
typedef System::WideChar TDrive;

struct TDriveInfoRec;
typedef TDriveInfoRec *PDriveInfoRec;

struct DECLSPEC_DRECORD TDriveInfoRec
{
public:
	_ITEMIDLIST *PIDL;
	bool Init;
	bool Valid;
	bool DriveReady;
	int DriveType;
	System::UnicodeString DisplayName;
	System::UnicodeString PrettyName;
	unsigned DriveSerial;
	__int64 Size;
	int ImageIndex;
};


typedef System::Int8 TSpecialFolder;

struct TSpecialFolderRec;
typedef TSpecialFolderRec *PSpecialFolderRec;

struct DECLSPEC_DRECORD TSpecialFolderRec
{
public:
	bool Valid;
	System::UnicodeString Location;
	System::UnicodeString DisplayName;
	int ImageIndex;
	_ITEMIDLIST *PIDL;
};


class DELPHICLASS TDriveInfo;
class PASCALIMPLEMENTATION TDriveInfo : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	typedef System::StaticArray<TDriveInfoRec, 26> _TDriveInfo__1;
	
	typedef System::StaticArray<TSpecialFolderRec, 28> _TDriveInfo__2;
	
	
public:
	PDriveInfoRec operator[](System::WideChar Drive) { return Data[Drive]; }
	
private:
	_TDriveInfo__1 FData;
	unsigned FNoDrives;
	_di_IShellFolder FDesktop;
	_TDriveInfo__2 FFolders;
	bool FHonorDrivePolicy;
	PDriveInfoRec __fastcall GetData(System::WideChar Drive);
	PSpecialFolderRec __fastcall GetFolder(TSpecialFolder Folder);
	void __fastcall ReadDriveBasicStatus(System::WideChar Drive);
	void __fastcall ResetDrive(System::WideChar Drive);
	void __fastcall SetHonorDrivePolicy(bool Value);
	
public:
	__property PDriveInfoRec Data[System::WideChar Drive] = {read=GetData/*, default*/};
	__property PSpecialFolderRec SpecialFolder[TSpecialFolder Folder] = {read=GetFolder};
	int __fastcall GetImageIndex(System::WideChar Drive);
	System::UnicodeString __fastcall GetDisplayName(System::WideChar Drive);
	System::UnicodeString __fastcall GetPrettyName(System::WideChar Drive);
	bool __fastcall ReadDriveStatus(System::WideChar Drive, int Flags);
	__property bool HonorDrivePolicy = {read=FHonorDrivePolicy, write=SetHonorDrivePolicy, nodefault};
	__fastcall TDriveInfo(void);
	__fastcall virtual ~TDriveInfo(void);
	void __fastcall Load(void);
};


//-- var, const, procedure ---------------------------------------------------
static const System::Int8 dsValid = System::Int8(0x0);
static const System::Int8 dsImageIndex = System::Int8(0x1);
static const System::Int8 dsSize = System::Int8(0x2);
static const System::Int8 dsDisplayName = System::Int8(0x4);
static const System::Int8 dsAll = System::Int8(0x7);
static const System::WideChar FirstDrive = (System::WideChar)(0x41);
static const System::WideChar FirstFixedDrive = (System::WideChar)(0x43);
static const System::WideChar LastDrive = (System::WideChar)(0x5a);
static const System::Int8 FirstSpecialFolder = System::Int8(0x0);
static const System::Int8 LastSpecialFolder = System::Int8(0x1b);
extern DELPHI_PACKAGE TDriveInfo* DriveInfo;
extern DELPHI_PACKAGE System::ResourceString _ErrorInvalidDrive;
#define Iedriveinfo_ErrorInvalidDrive System::LoadResourceString(&Iedriveinfo::_ErrorInvalidDrive)
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetShellFileName(const System::UnicodeString Name)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetShellFileName(Winapi::Shlobj::PItemIDList PIDL)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetNetWorkName(System::WideChar Drive);
extern DELPHI_PACKAGE bool __fastcall GetNetWorkConnected(System::WideChar Drive);
}	/* namespace Iedriveinfo */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_IEDRIVEINFO)
using namespace Iedriveinfo;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// IedriveinfoHPP
