// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DirView.pas' rev: 27.00 (Windows)

#ifndef DirviewHPP
#define DirviewHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Winapi.Windows.hpp>	// Pascal unit
#include <Winapi.ShlObj.hpp>	// Pascal unit
#include <Vcl.ComCtrls.hpp>	// Pascal unit
#include <CompThread.hpp>	// Pascal unit
#include <CustomDirView.hpp>	// Pascal unit
#include <ListExt.hpp>	// Pascal unit
#include <Vcl.ExtCtrls.hpp>	// Pascal unit
#include <Vcl.Graphics.hpp>	// Pascal unit
#include <FileOperator.hpp>	// Pascal unit
#include <DiscMon.hpp>	// Pascal unit
#include <System.Classes.hpp>	// Pascal unit
#include <DirViewColProperties.hpp>	// Pascal unit
#include <DragDrop.hpp>	// Pascal unit
#include <Winapi.Messages.hpp>	// Pascal unit
#include <ListViewColProperties.hpp>	// Pascal unit
#include <Winapi.CommCtrl.hpp>	// Pascal unit
#include <DragDropFilesEx.hpp>	// Pascal unit
#include <Vcl.FileCtrl.hpp>	// Pascal unit
#include <System.SysUtils.hpp>	// Pascal unit
#include <BaseUtils.hpp>	// Pascal unit
#include <Vcl.Controls.hpp>	// Pascal unit
#include <CustomDriveView.hpp>	// Pascal unit
#include <IEListView.hpp>	// Pascal unit
#include <NortonLikeListView.hpp>	// Pascal unit
#include <System.UITypes.hpp>	// Pascal unit
#include <System.Types.hpp>	// Pascal unit
#include <PathLabel.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dirview
{
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TVolumeDisplayStyle : unsigned char { doPrettyName, doDisplayName };

class DELPHICLASS EIUThread;
#pragma pack(push,4)
class PASCALIMPLEMENTATION EIUThread : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EIUThread(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EIUThread(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EIUThread(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EIUThread(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EIUThread(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EIUThread(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EIUThread(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EIUThread(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EIUThread(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EIUThread(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EIUThread(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EIUThread(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EIUThread(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS EDragDrop;
#pragma pack(push,4)
class PASCALIMPLEMENTATION EDragDrop : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EDragDrop(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EDragDrop(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EDragDrop(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EDragDrop(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EDragDrop(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EDragDrop(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EDragDrop(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EDragDrop(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EDragDrop(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EDragDrop(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EDragDrop(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EDragDrop(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EDragDrop(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS EInvalidFileName;
#pragma pack(push,4)
class PASCALIMPLEMENTATION EInvalidFileName : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EInvalidFileName(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EInvalidFileName(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EInvalidFileName(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EInvalidFileName(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EInvalidFileName(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EInvalidFileName(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EInvalidFileName(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EInvalidFileName(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EInvalidFileName(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EInvalidFileName(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EInvalidFileName(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EInvalidFileName(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EInvalidFileName(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS ERenameFileFailed;
#pragma pack(push,4)
class PASCALIMPLEMENTATION ERenameFileFailed : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall ERenameFileFailed(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ERenameFileFailed(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ERenameFileFailed(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ERenameFileFailed(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ERenameFileFailed(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ERenameFileFailed(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ERenameFileFailed(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ERenameFileFailed(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ERenameFileFailed(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ERenameFileFailed(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ERenameFileFailed(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ERenameFileFailed(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ERenameFileFailed(void) { }
	
};

#pragma pack(pop)

typedef System::WideChar TDriveLetter;

enum DECLSPEC_DENUM TClipboardOperation : unsigned char { cboNone, cboCut, cboCopy };

struct TFileRec;
typedef TFileRec *PFileRec;

struct DECLSPEC_DRECORD TFileRec
{
public:
	bool Empty;
	bool IconEmpty;
	bool IsDirectory;
	bool IsRecycleBin;
	bool IsParentDir;
	System::UnicodeString FileName;
	System::UnicodeString Displayname;
	System::UnicodeString FileExt;
	System::UnicodeString TypeName;
	int ImageIndex;
	__int64 Size;
	unsigned Attr;
	_FILETIME FileTime;
	_ITEMIDLIST *PIDL;
};


struct TInfoCache;
typedef TInfoCache *PInfoCache;

struct DECLSPEC_DRECORD TInfoCache
{
public:
	System::UnicodeString FileExt;
	System::UnicodeString TypeName;
	int ImageIndex;
};


typedef void __fastcall (__closure *TDirViewFileSizeChanged)(System::TObject* Sender, Vcl::Comctrls::TListItem* Item);

typedef void __fastcall (__closure *TDirViewFileIconForName)(System::TObject* Sender, Vcl::Comctrls::TListItem* Item, System::UnicodeString &FileName);

class DELPHICLASS TIconUpdateThread;
class DELPHICLASS TDirView;
class PASCALIMPLEMENTATION TIconUpdateThread : public Compthread::TCompThread
{
	typedef Compthread::TCompThread inherited;
	
private:
	TDirView* FOwner;
	int FIndex;
	int FMaxIndex;
	bool FNewIcons;
	int FSyncIcon;
	int CurrentIndex;
	System::UnicodeString CurrentFilePath;
	TFileRec CurrentItemData;
	bool InvalidItem;
	void __fastcall SetIndex(int Value);
	void __fastcall SetMaxIndex(int Value);
	
protected:
	__fastcall TIconUpdateThread(TDirView* Owner);
	void __fastcall DoFetchData(void);
	void __fastcall DoUpdateIcon(void);
	virtual void __fastcall Execute(void);
	__property int Index = {read=FIndex, write=SetIndex, nodefault};
	__property int MaxIndex = {read=FMaxIndex, write=SetMaxIndex, nodefault};
	
public:
	virtual void __fastcall Terminate(void);
public:
	/* TCompThread.Destroy */ inline __fastcall virtual ~TIconUpdateThread(void) { }
	
};


class PASCALIMPLEMENTATION TDirView : public Customdirview::TCustomDirView
{
	typedef Customdirview::TCustomDirView inherited;
	
private:
	typedef System::StaticArray<System::UnicodeString, 26> _TDirView__1;
	
	
private:
	bool FConfirmDelete;
	bool FConfirmOverwrite;
	bool FUseIconCache;
	Listext::TListExt* FInfoCacheList;
	Customdriveview::TCustomDriveView* FDriveView;
	Vcl::Extctrls::TTimer* FChangeTimer;
	unsigned FChangeInterval;
	bool FUseIconUpdateThread;
	bool FIUThreadFinished;
	int FDriveType;
	System::Uitypes::TColor FCompressedColor;
	_di_IShellFolder FParentFolder;
	_di_IShellFolder FDesktopFolder;
	bool FDirOK;
	System::UnicodeString FPath;
	bool SelectNewFiles;
	int FHiddenCount;
	int FFilteredCount;
	Fileoperator::TFileOperator* FFileOperator;
	TIconUpdateThread* FIconUpdateThread;
	Discmon::TDiscMonitor* FDiscMonitor;
	System::UnicodeString FHomeDirectory;
	TDirViewFileIconForName FOnFileIconForName;
	_di_IShellFolder iRecycleFolder;
	_ITEMIDLIST *PIDLRecycle;
	_TDirView__1 FLastPath;
	Dirviewcolproperties::TDirViewColProperties* __fastcall GetDirColProperties(void);
	System::UnicodeString __fastcall GetHomeDirectory(void);
	void __fastcall SignalFileDelete(System::TObject* Sender, System::Classes::TStringList* Files);
	void __fastcall PerformDragDropFileOperation(System::UnicodeString TargetPath, int dwEffect, bool RenameOnCollision);
	void __fastcall SetDirColProperties(Dirviewcolproperties::TDirViewColProperties* Value);
	
protected:
	virtual Listviewcolproperties::TCustomListViewColProperties* __fastcall NewColProperties(void);
	virtual bool __fastcall SortAscendingByDefault(int Index);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	DYNAMIC void __fastcall Delete(Vcl::Comctrls::TListItem* Item);
	void __fastcall DDError(Customdirview::TDDError ErrorNo);
	virtual bool __fastcall GetCanUndoCopyMove(void);
	_di_IShellFolder __fastcall GetShellFolder(System::UnicodeString Dir);
	virtual bool __fastcall GetDirOK(void);
	virtual void __fastcall GetDisplayInfo(Vcl::Comctrls::TListItem* ListItem, tagLVITEMW &DispInfo);
	virtual void __fastcall DDDragDetect(int grfKeyState, const System::Types::TPoint &DetectStart, const System::Types::TPoint &Point, Dragdrop::TDragDetectStatus DragStatus);
	virtual void __fastcall DDMenuPopup(System::TObject* Sender, HMENU AMenu, _di_IDataObject DataObj, int AMinCustCmd, int grfKeyState, const System::Types::TPoint &pt);
	virtual void __fastcall DDMenuDone(System::TObject* Sender, HMENU AMenu);
	virtual void __fastcall DDDropHandlerSucceeded(System::TObject* Sender, int grfKeyState, const System::Types::TPoint &Point, int dwEffect);
	virtual void __fastcall DDChooseEffect(int grfKeyState, int &dwEffect);
	virtual System::UnicodeString __fastcall GetPathName(void);
	virtual void __fastcall SetChangeInterval(unsigned Value);
	virtual void __fastcall LoadFromRecycleBin(System::UnicodeString Dir);
	virtual void __fastcall SetLoadEnabled(bool Value);
	virtual System::UnicodeString __fastcall GetPath(void);
	virtual void __fastcall SetPath(System::UnicodeString Value);
	virtual void __fastcall PathChanged(void);
	virtual void __fastcall SetItemImageIndex(Vcl::Comctrls::TListItem* Item, int Index);
	void __fastcall SetCompressedColor(System::Uitypes::TColor Value);
	void __fastcall ChangeDetected(System::TObject* Sender, const System::UnicodeString Directory, bool &SubdirsChanged);
	void __fastcall ChangeInvalid(System::TObject* Sender, const System::UnicodeString Directory, const System::UnicodeString ErrorStr);
	void __fastcall TimerOnTimer(System::TObject* Sender);
	void __fastcall ResetItemImage(int Index);
	virtual void __fastcall SetWatchForChanges(bool Value);
	void __fastcall AddParentDirItem(void);
	virtual void __fastcall AddToDragFileList(Dragdropfilesex::TFileList* FileList, Vcl::Comctrls::TListItem* Item);
	virtual bool __fastcall DragCompleteFileList(void);
	virtual void __fastcall ExecuteFile(Vcl::Comctrls::TListItem* Item);
	virtual bool __fastcall GetIsRoot(void);
	virtual void __fastcall InternalEdit(const tagLVITEMW &HItem);
	virtual System::Uitypes::TColor __fastcall ItemColor(Vcl::Comctrls::TListItem* Item);
	System::UnicodeString __fastcall ItemFileExt(Vcl::Comctrls::TListItem* Item);
	System::UnicodeString __fastcall ItemFileNameOnly(Vcl::Comctrls::TListItem* Item);
	virtual int __fastcall ItemImageIndex(Vcl::Comctrls::TListItem* Item, bool Cache);
	virtual bool __fastcall ItemIsFile(Vcl::Comctrls::TListItem* Item);
	virtual bool __fastcall ItemIsRecycleBin(Vcl::Comctrls::TListItem* Item);
	virtual bool __fastcall ItemMatchesFilter(Vcl::Comctrls::TListItem* Item, const Customdirview::TFileFilter &Filter);
	bool __fastcall FileMatches(System::UnicodeString FileName, const System::Sysutils::TSearchRec &SearchRec);
	virtual System::Word __fastcall ItemOverlayIndexes(Vcl::Comctrls::TListItem* Item);
	virtual void __fastcall LoadFiles(void);
	virtual void __fastcall PerformItemDragDropOperation(Vcl::Comctrls::TListItem* Item, int Effect);
	virtual void __fastcall SortItems(void);
	void __fastcall StartFileDeleteThread(void);
	HIDESBASE MESSAGE void __fastcall WMDestroy(Winapi::Messages::TWMNoParams &Msg);
	HIDESBASE MESSAGE void __fastcall CMRecreateWnd(Winapi::Messages::TMessage &Message);
	virtual int __fastcall HiddenCount(void);
	virtual int __fastcall FilteredCount(void);
	
public:
	__property int DriveType = {read=FDriveType, nodefault};
	__property Customdriveview::TCustomDriveView* DriveView = {read=FDriveView, write=FDriveView};
	__property Columns = {stored=false};
	__property _di_IShellFolder ParentFolder = {read=FParentFolder};
	__property bool CanUndoCopyMove = {read=GetCanUndoCopyMove, nodefault};
	__property Fileoperator::TFileOperator* DDFileOperator = {read=FFileOperator};
	DYNAMIC bool __fastcall UndoCopyMove(void);
	DYNAMIC void __fastcall EmptyClipboard(void);
	DYNAMIC bool __fastcall CopyToClipBoard(void);
	DYNAMIC bool __fastcall CutToClipBoard(void);
	virtual bool __fastcall PasteFromClipBoard(System::UnicodeString TargetPath = System::UnicodeString());
	DYNAMIC bool __fastcall DuplicateSelectedFiles(void);
	virtual void __fastcall DisplayPropertiesMenu(void);
	virtual void __fastcall DisplayContextMenu(const System::Types::TPoint &Where);
	virtual void __fastcall ExecuteParentDirectory(void);
	virtual void __fastcall ExecuteRootDirectory(void);
	virtual bool __fastcall ItemIsDirectory(Vcl::Comctrls::TListItem* Item);
	virtual System::UnicodeString __fastcall ItemFullFileName(Vcl::Comctrls::TListItem* Item);
	virtual bool __fastcall ItemIsParentDirectory(Vcl::Comctrls::TListItem* Item);
	virtual System::UnicodeString __fastcall ItemFileName(Vcl::Comctrls::TListItem* Item);
	virtual __int64 __fastcall ItemFileSize(Vcl::Comctrls::TListItem* Item);
	virtual System::TDateTime __fastcall ItemFileTime(Vcl::Comctrls::TListItem* Item, Baseutils::TDateTimePrecision &Precision);
	void __fastcall StartWatchThread(void);
	void __fastcall StopWatchThread(void);
	bool __fastcall WatchThreadActive(void);
	void __fastcall StartIconUpdateThread(void);
	void __fastcall StopIconUpdateThread(void);
	void __fastcall TerminateThreads(void);
	void __fastcall ClearIconCache(void);
	DYNAMIC Vcl::Comctrls::TListItem* __fastcall CreateFile(System::UnicodeString NewName);
	virtual void __fastcall CreateDirectory(System::UnicodeString DirName);
	DYNAMIC bool __fastcall DeleteSelectedFiles(bool AllowUndo);
	void __fastcall ValidateFile(Vcl::Comctrls::TListItem* Item)/* overload */;
	void __fastcall ValidateFile(System::Sysutils::TFileName FileName)/* overload */;
	DYNAMIC void __fastcall ValidateSelectedFiles(void);
	HIDESBASE Vcl::Comctrls::TListItem* __fastcall AddItem(const System::Sysutils::TSearchRec &SRec);
	void __fastcall GetDisplayData(Vcl::Comctrls::TListItem* Item, bool FetchIcon);
	PFileRec __fastcall GetFileRec(int Index);
	virtual void __fastcall Load(void);
	virtual void __fastcall Reload(bool CacheIcons);
	void __fastcall Reload2(void);
	virtual System::UnicodeString __fastcall FormatFileTime(const _FILETIME &FileTime);
	virtual System::UnicodeString __fastcall GetAttrString(int Attr);
	void __fastcall FetchAllDisplayData(void);
	__fastcall virtual TDirView(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TDirView(void);
	virtual void __fastcall ExecuteHomeDirectory(void);
	virtual void __fastcall ReloadDirectory(void);
	void __fastcall ExecuteDrive(TDriveLetter Drive);
	__property System::UnicodeString HomeDirectory = {read=GetHomeDirectory, write=FHomeDirectory};
	
__published:
	__property Dirviewcolproperties::TDirViewColProperties* DirColProperties = {read=GetDirColProperties, write=SetDirColProperties};
	__property PathLabel;
	__property OnUpdateStatusBar;
	__property OnGetSelectFilter;
	__property LoadAnimation = {default=1};
	__property DimmHiddenFiles = {default=1};
	__property ShowHiddenFiles = {default=1};
	__property WantUseDragImages = {default=0};
	__property TargetPopupMenu = {default=1};
	__property AddParentDir = {default=0};
	__property OnSelectItem;
	__property OnStartLoading;
	__property OnLoaded;
	__property OnDDDragEnter;
	__property OnDDDragLeave;
	__property OnDDDragOver;
	__property OnDDDrop;
	__property OnDDQueryContinueDrag;
	__property OnDDGiveFeedback;
	__property OnDDDragDetect;
	__property OnDDCreateDragFileList;
	__property OnDDEnd;
	__property OnDDCreateDataObject;
	__property OnDDTargetHasDropHandler;
	__property DDLinkOnExeDrag = {default=1};
	__property OnDDProcessDropped;
	__property OnDDError;
	__property OnDDExecuted;
	__property OnDDFileOperation;
	__property OnDDFileOperationExecuted;
	__property OnDDMenuPopup;
	__property OnExecFile;
	__property OnMatchMask;
	__property OnGetOverlay;
	__property System::Uitypes::TColor CompressedColor = {read=FCompressedColor, write=SetCompressedColor, default=16711680};
	__property bool ConfirmDelete = {read=FConfirmDelete, write=FConfirmDelete, default=1};
	__property bool ConfirmOverwrite = {read=FConfirmOverwrite, write=FConfirmOverwrite, default=1};
	__property unsigned ChangeInterval = {read=FChangeInterval, write=SetChangeInterval, default=1000};
	__property bool UseIconUpdateThread = {read=FUseIconUpdateThread, write=FUseIconUpdateThread, default=0};
	__property bool UseIconCache = {read=FUseIconCache, write=FUseIconCache, default=0};
	__property WatchForChanges = {default=0};
	__property TDirViewFileIconForName OnFileIconForName = {read=FOnFileIconForName, write=FOnFileIconForName};
	__property UseSystemContextMenu = {default=1};
	__property OnContextPopup;
	__property OnHistoryChange;
	__property OnHistoryGo;
	__property OnPathChange;
	__property ColumnClick = {default=1};
	__property MultiSelect = {default=1};
	__property ReadOnly = {default=0};
	__property Items;
public:
	/* TWinControl.CreateParented */ inline __fastcall TDirView(HWND ParentWindow) : Customdirview::TCustomDirView(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE System::ResourceString _coFileOperatorTitle;
#define Dirview_coFileOperatorTitle System::LoadResourceString(&Dirview::_coFileOperatorTitle)
extern DELPHI_PACKAGE System::ResourceString _coInvalidDosChars;
#define Dirview_coInvalidDosChars System::LoadResourceString(&Dirview::_coInvalidDosChars)
extern DELPHI_PACKAGE System::ResourceString _Space;
#define Dirview_Space System::LoadResourceString(&Dirview::_Space)
static const System::Int8 msThreadChangeDelay = System::Int8(0xa);
static const System::Int8 MaxWaitTimeOut = System::Int8(0xa);
static const System::Word FileAttr = System::Word(0x1f7);
#define SpecialExtensions L"EXE,LNK,ICO,ANI,CUR,PIF,JOB,CPL"
#define ExeExtension L"EXE"
extern DELPHI_PACKAGE TClipboardOperation LastClipBoardOperation;
extern DELPHI_PACKAGE unsigned LastIOResult;
extern DELPHI_PACKAGE void __fastcall Register(void);
extern DELPHI_PACKAGE bool __fastcall MatchesFileExt(System::UnicodeString Ext, const System::UnicodeString FileExtList);
}	/* namespace Dirview */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DIRVIEW)
using namespace Dirview;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DirviewHPP
