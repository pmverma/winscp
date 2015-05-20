// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DragDropFilesEx.pas' rev: 27.00 (Windows)

#ifndef DragdropfilesexHPP
#define DragdropfilesexHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <DragDrop.hpp>	// Pascal unit
#include <Winapi.Windows.hpp>	// Pascal unit
#include <System.Classes.hpp>	// Pascal unit
#include <System.SysUtils.hpp>	// Pascal unit
#include <Winapi.ActiveX.hpp>	// Pascal unit
#include <PIDL.hpp>	// Pascal unit
#include <Winapi.ShlObj.hpp>	// Pascal unit
#include <System.Win.ComObj.hpp>	// Pascal unit
#include <System.Win.Registry.hpp>	// Pascal unit
#include <System.Types.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dragdropfilesex
{
//-- type declarations -------------------------------------------------------
struct TDropFiles;
typedef TDropFiles *PDropFiles;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TDropFiles
{
public:
	unsigned pFiles;
	System::Types::TPoint pt;
	BOOL fNC;
	BOOL fWide;
};
#pragma pack(pop)


using Winapi::Shlobj::PItemIDList;

enum DECLSPEC_DENUM TFileExMustDnD : unsigned char { nvFilename, nvPIDL };

typedef System::Set<TFileExMustDnD, TFileExMustDnD::nvFilename, TFileExMustDnD::nvPIDL> TFileExMustDnDSet;

typedef void __fastcall (__closure *TOnSpecifyDropTarget)(System::TObject* Sender, bool DragDropHandler, const System::Types::TPoint &pt, Winapi::Shlobj::PItemIDList &pidlFQ, System::UnicodeString &Filename);

struct TFDDListItem;
typedef TFDDListItem *PFDDListItem;

struct DECLSPEC_DRECORD TFDDListItem
{
public:
	_ITEMIDLIST *pidlFQ;
	System::UnicodeString Name;
	System::UnicodeString MappedName;
};


struct TCMListItem;
typedef TCMListItem *PCMListItem;

struct DECLSPEC_DRECORD TCMListItem
{
public:
	int FirstCmd;
	int LastCmd;
	_di_IContextMenu CM;
};


class DELPHICLASS TFileList;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TFileList : public System::Classes::TList
{
	typedef System::Classes::TList inherited;
	
private:
	HIDESBASE PFDDListItem __fastcall Get(int Index);
	HIDESBASE void __fastcall Put(int Index, PFDDListItem Item);
	
public:
	__fastcall TFileList(void);
	__fastcall virtual ~TFileList(void);
	virtual void __fastcall Clear(void);
	HIDESBASE void __fastcall Delete(int Index);
	HIDESBASE int __fastcall Remove(PFDDListItem Item);
	HIDESBASE PFDDListItem __fastcall First(void);
	HIDESBASE PFDDListItem __fastcall Last(void);
	int __fastcall AddItem(Winapi::Shlobj::PItemIDList ApidlFQ, System::UnicodeString AName);
	int __fastcall AddItemEx(Winapi::Shlobj::PItemIDList ApidlFQ, System::UnicodeString AName, System::UnicodeString AMappedName);
	bool __fastcall RenderPIDLs(void);
	bool __fastcall RenderNames(void);
	__property PFDDListItem Items[int Index] = {read=Get, write=Put};
};

#pragma pack(pop)

class DELPHICLASS TDataObjectFilesEx;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TDataObjectFilesEx : public Dragdrop::TDataObject
{
	typedef Dragdrop::TDataObject inherited;
	
private:
	System::Classes::TMemoryStream* pidlStream;
	System::Classes::TMemoryStream* HDropStream;
	System::Classes::TStringList* FilenameMapList;
	bool FilenamesAreMapped;
	
public:
	__fastcall TDataObjectFilesEx(TFileList* AFileList, bool RenderPIDL, bool RenderFilename);
	__fastcall virtual ~TDataObjectFilesEx(void);
	virtual HRESULT __fastcall RenderData(const tagFORMATETC &FormatEtc, tagSTGMEDIUM &StgMedium);
	bool __fastcall IsValid(bool Formatpidl, bool FormatHDrop);
};

#pragma pack(pop)

class DELPHICLASS TDropTargetFilesEx;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TDropTargetFilesEx : public Dragdrop::TDropTarget
{
	typedef Dragdrop::TDropTarget inherited;
	
protected:
	virtual void __fastcall AcceptDataObject(_di_IDataObject DataObj, bool &Accept);
	
public:
	__fastcall TDropTargetFilesEx(Dragdrop::TDragDrop* AOwner);
	__fastcall virtual ~TDropTargetFilesEx(void);
	virtual void __fastcall RenderDropped(_di_IDataObject DataObj, int grfKeyState, const System::Types::TPoint &pt, int &dwEffect);
};

#pragma pack(pop)

class DELPHICLASS TShellExtension;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TShellExtension : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	bool FDropHandler;
	bool FDragDropHandler;
	
protected:
	virtual void __fastcall AssignTo(System::Classes::TPersistent* Dest);
	
__published:
	__property bool DropHandler = {read=FDropHandler, write=FDropHandler, default=0};
	__property bool DragDropHandler = {read=FDragDropHandler, write=FDragDropHandler, default=0};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TShellExtension(void) { }
	
public:
	/* TObject.Create */ inline __fastcall TShellExtension(void) : System::Classes::TPersistent() { }
	
};

#pragma pack(pop)

class DELPHICLASS TDragDropFilesEx;
class PASCALIMPLEMENTATION TDragDropFilesEx : public Dragdrop::TDragDrop
{
	typedef Dragdrop::TDragDrop inherited;
	
private:
	TFileList* FFileList;
	TFileExMustDnDSet FNeedValid;
	bool FCompleteFileList;
	bool FFileNamesAreMapped;
	TOnSpecifyDropTarget FOnSpecifyDropTarget;
	TShellExtension* FShellExtension;
	System::Classes::TList* FCMList;
	
protected:
	virtual Dragdrop::TDataObject* __fastcall CreateDataObject(void);
	virtual void __fastcall DoMenuPopup(System::TObject* Sender, HMENU AMenu, _di_IDataObject DataObj, int AMinCustCmd, int grfKeyState, const System::Types::TPoint &pt);
	virtual bool __fastcall DoMenuExecCmd(System::TObject* Sender, HMENU AMenu, _di_IDataObject DataObj, int Command, int &dwEffect);
	virtual void __fastcall DoMenuDestroy(System::TObject* Sender, HMENU AMenu);
	virtual bool __fastcall DropHandler(const _di_IDataObject dataObj, int grfKeyState, const System::Types::TPoint &pt, int &dwEffect);
	
public:
	__fastcall virtual TDragDropFilesEx(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TDragDropFilesEx(void);
	bool __fastcall TargetHasDropHandler(Winapi::Shlobj::PItemIDList pidlFQ, System::UnicodeString Filename, int &dwEffect);
	__property TFileList* FileList = {read=FFileList, write=FFileList};
	__property bool FileNamesAreMapped = {read=FFileNamesAreMapped, nodefault};
	
__published:
	__property TFileExMustDnDSet NeedValid = {read=FNeedValid, write=FNeedValid, nodefault};
	__property bool CompleteFileList = {read=FCompleteFileList, write=FCompleteFileList, default=1};
	__property TShellExtension* ShellExtensions = {read=FShellExtension, write=FShellExtension};
	__property TOnSpecifyDropTarget OnSpecifyDropTarget = {read=FOnSpecifyDropTarget, write=FOnSpecifyDropTarget};
	__property OnDropHandlerSucceeded;
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE void __fastcall Register(void);
}	/* namespace Dragdropfilesex */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DRAGDROPFILESEX)
using namespace Dragdropfilesex;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DragdropfilesexHPP
