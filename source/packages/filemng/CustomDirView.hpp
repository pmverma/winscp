// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'CustomDirView.pas' rev: 27.00 (Windows)

#ifndef CustomdirviewHPP
#define CustomdirviewHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Winapi.Windows.hpp>	// Pascal unit
#include <Winapi.Messages.hpp>	// Pascal unit
#include <System.Classes.hpp>	// Pascal unit
#include <Vcl.Graphics.hpp>	// Pascal unit
#include <Vcl.Controls.hpp>	// Pascal unit
#include <Vcl.Forms.hpp>	// Pascal unit
#include <Vcl.ComCtrls.hpp>	// Pascal unit
#include <Winapi.ShellAPI.hpp>	// Pascal unit
#include <System.Win.ComObj.hpp>	// Pascal unit
#include <Winapi.ShlObj.hpp>	// Pascal unit
#include <Vcl.Dialogs.hpp>	// Pascal unit
#include <Winapi.ActiveX.hpp>	// Pascal unit
#include <Winapi.CommCtrl.hpp>	// Pascal unit
#include <Vcl.ExtCtrls.hpp>	// Pascal unit
#include <Vcl.ImgList.hpp>	// Pascal unit
#include <Vcl.Menus.hpp>	// Pascal unit
#include <Vcl.FileCtrl.hpp>	// Pascal unit
#include <PIDL.hpp>	// Pascal unit
#include <BaseUtils.hpp>	// Pascal unit
#include <DragDrop.hpp>	// Pascal unit
#include <DragDropFilesEx.hpp>	// Pascal unit
#include <IEDriveInfo.hpp>	// Pascal unit
#include <IEListView.hpp>	// Pascal unit
#include <PathLabel.hpp>	// Pascal unit
#include <System.SysUtils.hpp>	// Pascal unit
#include <PasTools.hpp>	// Pascal unit
#include <System.Types.hpp>	// Pascal unit
#include <NortonLikeListView.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Customdirview
{
//-- type declarations -------------------------------------------------------
struct DECLSPEC_DRECORD TStatusFileInfo
{
public:
	int FilesCount;
	int SelectedCount;
	__int64 FilesSize;
	__int64 SelectedSize;
	int HiddenCount;
	int FilteredCount;
};


enum DECLSPEC_DENUM TDDError : unsigned char { DDCreateShortCutError, DDPathNotFoundError };

typedef void __fastcall (__closure *TDDOnDragEnter)(System::TObject* Sender, _di_IDataObject DataObj, int grfKeyState, const System::Types::TPoint &Point, int &dwEffect, bool &Accept);

typedef void __fastcall (__closure *TDDOnDragLeave)(System::TObject* Sender);

typedef void __fastcall (__closure *TDDOnDragOver)(System::TObject* Sender, int grfKeyState, const System::Types::TPoint &Point, int &dwEffect);

typedef void __fastcall (__closure *TDDOnDrop)(System::TObject* Sender, _di_IDataObject DataObj, int grfKeyState, const System::Types::TPoint &Point, int &dwEffect);

typedef void __fastcall (__closure *TDDOnQueryContinueDrag)(System::TObject* Sender, BOOL FEscapePressed, int grfKeyState, HRESULT &Result);

typedef void __fastcall (__closure *TDDOnGiveFeedback)(System::TObject* Sender, int dwEffect, HRESULT &Result);

typedef void __fastcall (__closure *TDDOnChooseEffect)(System::TObject* Sender, int grfKeyState, int &dwEffect);

typedef void __fastcall (__closure *TDDOnDragDetect)(System::TObject* Sender, int grfKeyState, const System::Types::TPoint &DetectStart, const System::Types::TPoint &Point, Dragdrop::TDragDetectStatus DragStatus);

typedef void __fastcall (__closure *TDDOnCreateDragFileList)(System::TObject* Sender, Dragdropfilesex::TFileList* FileList, bool &Created);

typedef void __fastcall (__closure *TDDOnCreateDataObject)(System::TObject* Sender, Dragdrop::TDataObject* &DataObject);

typedef void __fastcall (__closure *TDDOnTargetHasDropHandler)(System::TObject* Sender, Vcl::Comctrls::TListItem* Item, int &Effect, bool &DropHandler);

typedef void __fastcall (__closure *TOnProcessDropped)(System::TObject* Sender, int grfKeyState, const System::Types::TPoint &Point, int &dwEffect);

typedef void __fastcall (__closure *TDDErrorEvent)(System::TObject* Sender, TDDError ErrorNo);

typedef void __fastcall (__closure *TDDExecutedEvent)(System::TObject* Sender, int dwEffect);

typedef void __fastcall (__closure *TDDFileOperationEvent)(System::TObject* Sender, int dwEffect, System::UnicodeString SourcePath, System::UnicodeString TargetPath, bool &DoOperation);

typedef void __fastcall (__closure *TDDFileOperationExecutedEvent)(System::TObject* Sender, int dwEffect, System::UnicodeString SourcePath, System::UnicodeString TargetPath);

typedef void __fastcall (__closure *TDirViewExecFileEvent)(System::TObject* Sender, Vcl::Comctrls::TListItem* Item, bool &AllowExec);

typedef void __fastcall (__closure *TMatchMaskEvent)(System::TObject* Sender, System::UnicodeString FileName, bool Directory, __int64 Size, System::TDateTime Modification, System::UnicodeString Masks, bool &Matches, bool AllowImplicitMatches);

typedef void __fastcall (__closure *TDirViewGetOverlayEvent)(System::TObject* Sender, Vcl::Comctrls::TListItem* Item, System::Word &Indexes);

typedef void __fastcall (__closure *TDirViewUpdateStatusBarEvent)(System::TObject* Sender, const TStatusFileInfo &FileInfo);

enum DECLSPEC_DENUM TSelAttr : unsigned char { selDontCare, selYes, selNo };

struct DECLSPEC_DRECORD TFileFilter
{
public:
	System::UnicodeString Masks;
	System::Word IncludeAttr;
	System::Word ExcludeAttr;
	bool Directories;
	__int64 FileSizeFrom;
	__int64 FileSizeTo;
	System::TDateTime ModificationFrom;
	System::TDateTime ModificationTo;
};


class DELPHICLASS TCustomDirView;
typedef void __fastcall (__closure *TDirViewNotifyEvent)(TCustomDirView* Sender);

typedef void __fastcall (__closure *TDVGetFilterEvent)(TCustomDirView* Sender, bool Select, TFileFilter &Filter);

typedef void __fastcall (__closure *TDVHistoryGoEvent)(TCustomDirView* Sender, int Index, bool &Cancel);

enum DECLSPEC_DENUM TCompareCriteria : unsigned char { ccTime, ccSize };

typedef System::Set<TCompareCriteria, TCompareCriteria::ccTime, TCompareCriteria::ccSize> TCompareCriterias;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TWMXMouse
{
public:
	unsigned Msg;
	System::Word Keys;
	System::Word Button;
	System::Types::TSmallPoint Pos;
	int Result;
};
#pragma pack(pop)


class DELPHICLASS TCustomizableDragDropFilesEx;
class PASCALIMPLEMENTATION TCustomizableDragDropFilesEx : public Dragdropfilesex::TDragDropFilesEx
{
	typedef Dragdropfilesex::TDragDropFilesEx inherited;
	
public:
	HIDESBASE Dragdrop::TDragResult __fastcall Execute(Dragdrop::TDataObject* DataObject);
public:
	/* TDragDropFilesEx.Create */ inline __fastcall virtual TCustomizableDragDropFilesEx(System::Classes::TComponent* AOwner) : Dragdropfilesex::TDragDropFilesEx(AOwner) { }
	/* TDragDropFilesEx.Destroy */ inline __fastcall virtual ~TCustomizableDragDropFilesEx(void) { }
	
};


class PASCALIMPLEMENTATION TCustomDirView : public Ielistview::TCustomIEListView
{
	typedef Ielistview::TCustomIEListView inherited;
	
private:
	bool FAddParentDir;
	bool FDimmHiddenFiles;
	Baseutils::TFormatBytesStyle FFormatSizeBytes;
	bool FWantUseDragImages;
	TCustomizableDragDropFilesEx* FDragDropFilesEx;
	bool FUseSystemContextMenu;
	TDVGetFilterEvent FOnGetSelectFilter;
	System::Classes::TNotifyEvent FOnStartLoading;
	System::Classes::TNotifyEvent FOnLoaded;
	System::WideChar FDragDrive;
	bool FExeDrag;
	bool FDDLinkOnExeDrag;
	TDDOnDragEnter FOnDDDragEnter;
	TDDOnDragLeave FOnDDDragLeave;
	TDDOnDragOver FOnDDDragOver;
	TDDOnDrop FOnDDDrop;
	TDDOnQueryContinueDrag FOnDDQueryContinueDrag;
	TDDOnGiveFeedback FOnDDGiveFeedback;
	TDDOnChooseEffect FOnDDChooseEffect;
	TDDOnDragDetect FOnDDDragDetect;
	TDDOnCreateDragFileList FOnDDCreateDragFileList;
	TOnProcessDropped FOnDDProcessDropped;
	TDDErrorEvent FOnDDError;
	TDDExecutedEvent FOnDDExecuted;
	TDDFileOperationEvent FOnDDFileOperation;
	TDDFileOperationExecutedEvent FOnDDFileOperationExecuted;
	System::Classes::TNotifyEvent FOnDDEnd;
	TDDOnCreateDataObject FOnDDCreateDataObject;
	TDDOnTargetHasDropHandler FOnDDTargetHasDropHandler;
	Dragdrop::TOnMenuPopup FOnDDMenuPopup;
	TDirViewExecFileEvent FOnExecFile;
	bool FForceRename;
	Dragdrop::TDragResult FLastDDResult;
	System::UnicodeString FLastRenameName;
	bool FContextMenu;
	bool FDragEnabled;
	System::Types::TPoint FDragPos;
	System::Types::TPoint FStartPos;
	bool FDDOwnerIsSource;
	bool FAbortLoading;
	Vcl::Comctrls::TAnimate* FAnimation;
	int FBackCount;
	bool FDontRecordPath;
	bool FDragOnDriveIsMove;
	bool FNotifyEnabled;
	_FILETIME FDragStartTime;
	System::Classes::TStrings* FHistoryPaths;
	Vcl::Controls::TImageList* FImageList16;
	Vcl::Controls::TImageList* FImageList32;
	bool FLoadAnimation;
	int FMaxHistoryCount;
	Pathlabel::TCustomPathLabel* FPathLabel;
	TDirViewUpdateStatusBarEvent FOnUpdateStatusBar;
	TDirViewNotifyEvent FOnHistoryChange;
	TDVHistoryGoEvent FOnHistoryGo;
	TDirViewNotifyEvent FOnPathChange;
	bool FShowHiddenFiles;
	bool FSavedSelection;
	System::UnicodeString FSavedSelectionFile;
	System::UnicodeString FSavedSelectionLastFile;
	System::Classes::TStringList* FSavedNames;
	bool FPendingFocusSomething;
	TMatchMaskEvent FOnMatchMask;
	TDirViewGetOverlayEvent FOnGetOverlay;
	System::UnicodeString FMask;
	Pastools::TListViewScrollOnDragOver* FScrollOnDragOver;
	TStatusFileInfo FStatusFileInfo;
	bool FDoubleBufferedScrollingWorkaround;
	HIDESBASE MESSAGE void __fastcall CNNotify(Winapi::Messages::TWMNotify &Message);
	HIDESBASE MESSAGE void __fastcall WMKeyDown(Winapi::Messages::TWMKey &Message);
	HIDESBASE MESSAGE void __fastcall WMLButtonDblClk(Winapi::Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall WMLButtonUp(Winapi::Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall WMContextMenu(Winapi::Messages::TWMContextMenu &Message);
	HIDESBASE MESSAGE void __fastcall WMLButtonDown(Winapi::Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall WMRButtonDown(Winapi::Messages::TWMMouse &Message);
	MESSAGE void __fastcall WMXButtonUp(TWMXMouse &Message);
	MESSAGE void __fastcall WMAppCommand(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMColorChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall LVMSetExtendedListViewStyle(Winapi::Messages::TMessage &Message);
	void __fastcall DumbCustomDrawItem(Vcl::Comctrls::TCustomListView* Sender, Vcl::Comctrls::TListItem* Item, Vcl::Comctrls::TCustomDrawState State, bool &DefaultDraw);
	void __fastcall DumbCustomDrawSubItem(Vcl::Comctrls::TCustomListView* Sender, Vcl::Comctrls::TListItem* Item, int SubItem, Vcl::Comctrls::TCustomDrawState State, bool &DefaultDraw);
	__int64 __fastcall GetFilesMarkedSize(void);
	int __fastcall GetForwardCount(void);
	System::UnicodeString __fastcall GetHistoryPath(int Index);
	bool __fastcall GetSelectedNamesSaved(void);
	bool __fastcall GetTargetPopupMenu(void);
	bool __fastcall GetUseDragImages(void);
	void __fastcall SetMaxHistoryCount(int Value);
	void __fastcall SetPathLabel(Pathlabel::TCustomPathLabel* Value);
	void __fastcall SetTargetPopupMenu(bool Value);
	MESSAGE void __fastcall WMUserRename(Winapi::Messages::TMessage &Message);
	
protected:
	bool FCaseSensitive;
	bool FDirty;
	__int64 FFilesSize;
	__int64 FFilesSelSize;
	bool FHasParentDir;
	bool FIsRecycleBin;
	System::UnicodeString FLastPath;
	System::UnicodeString FHistoryPath;
	bool FLoadEnabled;
	bool FLoading;
	System::UnicodeString FSelectFile;
	bool FWatchForChanges;
	System::UnicodeString FInvalidNameChars;
	virtual void __fastcall AddToDragFileList(Dragdropfilesex::TFileList* FileList, Vcl::Comctrls::TListItem* Item);
	DYNAMIC bool __fastcall CanEdit(Vcl::Comctrls::TListItem* Item);
	virtual bool __fastcall CanChangeSelection(Vcl::Comctrls::TListItem* Item, bool Select);
	void __fastcall CancelEdit(void);
	virtual void __fastcall ClearItems(void);
	virtual bool __fastcall GetDirOK(void) = 0 ;
	virtual void __fastcall DDDragDetect(int grfKeyState, const System::Types::TPoint &DetectStart, const System::Types::TPoint &Point, Dragdrop::TDragDetectStatus DragStatus);
	void __fastcall DDDragEnter(_di_IDataObject DataObj, int grfKeyState, const System::Types::TPoint &Point, int &dwEffect, bool &Accept);
	void __fastcall DDDragLeave(void);
	void __fastcall DDDragOver(int grfKeyState, const System::Types::TPoint &Point, int &dwEffect);
	virtual void __fastcall DDChooseEffect(int grfKeyState, int &dwEffect);
	void __fastcall DDDrop(_di_IDataObject DataObj, int grfKeyState, const System::Types::TPoint &Point, int &dwEffect);
	virtual void __fastcall DDDropHandlerSucceeded(System::TObject* Sender, int grfKeyState, const System::Types::TPoint &Point, int dwEffect);
	virtual void __fastcall DDGiveFeedback(int dwEffect, HRESULT &Result);
	virtual void __fastcall DDMenuPopup(System::TObject* Sender, HMENU AMenu, _di_IDataObject DataObj, int AMinCustCmd, int grfKeyState, const System::Types::TPoint &pt);
	virtual void __fastcall DDMenuDone(System::TObject* Sender, HMENU AMenu);
	void __fastcall DDProcessDropped(System::TObject* Sender, int grfKeyState, const System::Types::TPoint &Point, int dwEffect);
	virtual void __fastcall DDQueryContinueDrag(BOOL FEscapePressed, int grfKeyState, HRESULT &Result);
	virtual void __fastcall DDSpecifyDropTarget(System::TObject* Sender, bool DragDropHandler, const System::Types::TPoint &Point, Winapi::Shlobj::PItemIDList &pidlFQ, System::UnicodeString &Filename);
	virtual void __fastcall GetDisplayInfo(Vcl::Comctrls::TListItem* ListItem, tagLVITEMW &DispInfo);
	virtual Dragdrop::TDropEffectSet __fastcall GetDragSourceEffects(void);
	virtual System::UnicodeString __fastcall GetPathName(void) = 0 ;
	virtual int __fastcall GetFilesCount(void);
	DYNAMIC void __fastcall ColClick(Vcl::Comctrls::TListColumn* Column);
	virtual void __fastcall CreateWnd(void);
	virtual void __fastcall DestroyWnd(void);
	System::Classes::TStrings* __fastcall CustomCreateFileList(bool Focused, bool OnlyFocused, bool FullPath, System::Classes::TStrings* FileList = (System::Classes::TStrings*)(0x0), bool ItemObject = false);
	virtual bool __fastcall CustomDrawItem(Vcl::Comctrls::TListItem* Item, Vcl::Comctrls::TCustomDrawState State, Vcl::Comctrls::TCustomDrawStage Stage);
	virtual bool __fastcall CustomDrawSubItem(Vcl::Comctrls::TListItem* Item, int SubItem, Vcl::Comctrls::TCustomDrawState State, Vcl::Comctrls::TCustomDrawStage Stage);
	void __fastcall CustomSortItems(void * SortProc);
	DYNAMIC void __fastcall Delete(Vcl::Comctrls::TListItem* Item);
	void __fastcall DoAnimation(bool Start);
	DYNAMIC void __fastcall DoHistoryChange(void);
	virtual bool __fastcall DragCompleteFileList(void);
	DYNAMIC void __fastcall Edit(const tagLVITEMW &HItem);
	virtual void __fastcall EndSelectionUpdate(void);
	virtual void __fastcall Execute(Vcl::Comctrls::TListItem* Item);
	virtual void __fastcall ExecuteFile(Vcl::Comctrls::TListItem* Item) = 0 ;
	virtual void __fastcall FocusSomething(void);
	virtual bool __fastcall GetIsRoot(void) = 0 ;
	virtual void __fastcall IconsSetImageList(void);
	virtual bool __fastcall ItemCanDrag(Vcl::Comctrls::TListItem* Item);
	virtual System::Uitypes::TColor __fastcall ItemColor(Vcl::Comctrls::TListItem* Item);
	virtual int __fastcall ItemImageIndex(Vcl::Comctrls::TListItem* Item, bool Cache) = 0 ;
	virtual bool __fastcall ItemIsRecycleBin(Vcl::Comctrls::TListItem* Item);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	DYNAMIC void __fastcall KeyUp(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall LoadFiles(void) = 0 ;
	virtual void __fastcall PerformItemDragDropOperation(Vcl::Comctrls::TListItem* Item, int Effect) = 0 ;
	void __fastcall ProcessChangedFiles(TCustomDirView* DirView, System::Classes::TStrings* FileList, bool FullPath, bool ExistingOnly, TCompareCriterias Criterias);
	void __fastcall ReloadForce(bool CacheIcons);
	void __fastcall RetryRename(System::UnicodeString NewName);
	void __fastcall SelectFiles(const TFileFilter &Filter, bool Select);
	virtual void __fastcall SetAddParentDir(bool Value);
	virtual void __fastcall SetDimmHiddenFiles(bool Value);
	virtual void __fastcall SetItemImageIndex(Vcl::Comctrls::TListItem* Item, int Index) = 0 ;
	virtual void __fastcall SetLoadEnabled(bool Enabled);
	virtual void __fastcall SetMultiSelect(bool Value);
	virtual System::UnicodeString __fastcall GetPath(void) = 0 ;
	virtual bool __fastcall GetValid(void);
	virtual void __fastcall InternalEdit(const tagLVITEMW &HItem) = 0 ;
	virtual bool __fastcall ItemIsFile(Vcl::Comctrls::TListItem* Item) = 0 ;
	virtual bool __fastcall ItemMatchesFilter(Vcl::Comctrls::TListItem* Item, const TFileFilter &Filter) = 0 ;
	virtual System::Word __fastcall ItemOverlayIndexes(Vcl::Comctrls::TListItem* Item);
	void __fastcall LimitHistorySize(void);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual void __fastcall PathChanged(void);
	void __fastcall PathChanging(bool Relative);
	virtual void __fastcall SetPath(System::UnicodeString Value) = 0 ;
	virtual void __fastcall SetShowHiddenFiles(bool Value);
	void __fastcall SetFormatSizeBytes(Baseutils::TFormatBytesStyle Value);
	virtual void __fastcall SetViewStyle(Vcl::Comctrls::TViewStyle Value);
	virtual void __fastcall SetWatchForChanges(bool Value);
	virtual bool __fastcall TargetHasDropHandler(Vcl::Comctrls::TListItem* Item, int Effect);
	DYNAMIC void __fastcall UpdatePathLabel(void);
	DYNAMIC void __fastcall UpdateStatusBar(void);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	bool __fastcall FileNameMatchesMasks(System::UnicodeString FileName, bool Directory, __int64 Size, System::TDateTime Modification, System::UnicodeString Masks, bool AllowImplicitMatches);
	virtual bool __fastcall EnableDragOnClick(void);
	virtual void __fastcall SetMask(System::UnicodeString Value);
	void __fastcall ScrollOnDragOverBeforeUpdate(System::TObject* ObjectToValidate);
	void __fastcall ScrollOnDragOverAfterUpdate(void);
	void __fastcall DoHistoryGo(int Index);
	HIDESBASE MESSAGE void __fastcall WMSetFocus(Winapi::Messages::TWMSetFocus &Message);
	HIDESBASE MESSAGE void __fastcall WMKillFocus(Winapi::Messages::TWMKillFocus &Message);
	void __fastcall EnsureSelectionRedrawn(void);
	virtual int __fastcall HiddenCount(void) = 0 ;
	virtual int __fastcall FilteredCount(void) = 0 ;
	__property Vcl::Controls::TImageList* ImageList16 = {read=FImageList16};
	__property Vcl::Controls::TImageList* ImageList32 = {read=FImageList32};
	
public:
	__fastcall virtual TCustomDirView(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomDirView(void);
	virtual void __fastcall Load(void);
	virtual void __fastcall Reload(bool CacheIcons);
	System::Classes::TStrings* __fastcall CreateFocusedFileList(bool FullPath, System::Classes::TStrings* FileList = (System::Classes::TStrings*)(0x0));
	System::Classes::TStrings* __fastcall CreateFileList(bool Focused, bool FullPath, System::Classes::TStrings* FileList = (System::Classes::TStrings*)(0x0));
	bool __fastcall AnyFileSelected(bool OnlyFocused, bool FilesOnly, bool FocusedFileOnlyWhenFocused);
	virtual bool __fastcall DoSelectByMask(bool Select);
	virtual void __fastcall ExecuteHomeDirectory(void) = 0 ;
	virtual void __fastcall ExecuteParentDirectory(void) = 0 ;
	virtual void __fastcall ExecuteRootDirectory(void) = 0 ;
	void __fastcall ExecuteCurrentFile(void);
	virtual void __fastcall CreateDirectory(System::UnicodeString DirName) = 0 ;
	Vcl::Comctrls::TListItem* __fastcall FindFileItem(System::UnicodeString FileName);
	void __fastcall HistoryGo(int Index);
	virtual bool __fastcall ItemIsDirectory(Vcl::Comctrls::TListItem* Item) = 0 ;
	virtual bool __fastcall ItemIsParentDirectory(Vcl::Comctrls::TListItem* Item) = 0 ;
	virtual System::UnicodeString __fastcall ItemFullFileName(Vcl::Comctrls::TListItem* Item) = 0 ;
	virtual System::UnicodeString __fastcall ItemFileName(Vcl::Comctrls::TListItem* Item) = 0 ;
	virtual __int64 __fastcall ItemFileSize(Vcl::Comctrls::TListItem* Item) = 0 ;
	virtual System::TDateTime __fastcall ItemFileTime(Vcl::Comctrls::TListItem* Item, Baseutils::TDateTimePrecision &Precision) = 0 ;
	virtual void __fastcall ReloadDirectory(void) = 0 ;
	virtual void __fastcall DisplayPropertiesMenu(void) = 0 ;
	System::Classes::TStrings* __fastcall CreateChangedFileList(TCustomDirView* DirView, bool FullPath, bool ExistingOnly, TCompareCriterias Criterias);
	virtual void __fastcall CompareFiles(TCustomDirView* DirView, bool ExistingOnly, TCompareCriterias Criterias);
	void __fastcall SaveSelection(void);
	void __fastcall RestoreSelection(void);
	void __fastcall DiscardSavedSelection(void);
	void __fastcall SaveSelectedNames(void);
	void __fastcall RestoreSelectedNames(void);
	void __fastcall ContinueSession(bool Continue);
	DYNAMIC bool __fastcall CanPasteFromClipBoard(void);
	virtual bool __fastcall PasteFromClipBoard(System::UnicodeString TargetPath = System::UnicodeString()) = 0 ;
	System::TObject* __fastcall SaveState(void);
	void __fastcall RestoreState(System::TObject* AState);
	void __fastcall ClearState(void);
	virtual void __fastcall DisplayContextMenu(const System::Types::TPoint &Where) = 0 ;
	void __fastcall DisplayContextMenuInSitu(void);
	__property bool AddParentDir = {read=FAddParentDir, write=SetAddParentDir, default=0};
	__property bool DimmHiddenFiles = {read=FDimmHiddenFiles, write=SetDimmHiddenFiles, default=1};
	__property TCustomizableDragDropFilesEx* DragDropFilesEx = {read=FDragDropFilesEx};
	__property Baseutils::TFormatBytesStyle FormatSizeBytes = {read=FFormatSizeBytes, write=SetFormatSizeBytes, default=0};
	__property bool WantUseDragImages = {read=FWantUseDragImages, write=FWantUseDragImages, default=0};
	__property bool UseDragImages = {read=GetUseDragImages, stored=false, nodefault};
	__property FullDrag = {default=1};
	__property bool TargetPopupMenu = {read=GetTargetPopupMenu, write=SetTargetPopupMenu, default=1};
	__property bool DDOwnerIsSource = {read=FDDOwnerIsSource, nodefault};
	__property __int64 FilesSize = {read=FFilesSize};
	__property __int64 FilesSelSize = {read=FFilesSelSize};
	__property int FilesCount = {read=GetFilesCount, nodefault};
	__property __int64 FilesMarkedSize = {read=GetFilesMarkedSize};
	__property bool HasParentDir = {read=FHasParentDir, nodefault};
	__property System::UnicodeString Path = {read=GetPath, write=SetPath};
	__property System::UnicodeString PathName = {read=GetPathName};
	__property bool UseSystemContextMenu = {read=FUseSystemContextMenu, write=FUseSystemContextMenu, default=1};
	__property bool Loading = {read=FLoading, nodefault};
	__property bool AbortLoading = {read=FAbortLoading, write=FAbortLoading, stored=false, nodefault};
	__property int BackCount = {read=FBackCount, nodefault};
	__property bool LoadAnimation = {read=FLoadAnimation, write=FLoadAnimation, default=1};
	__property bool LoadEnabled = {read=FLoadEnabled, write=SetLoadEnabled, default=1};
	__property bool Dirty = {read=FDirty, nodefault};
	__property bool DirOK = {read=GetDirOK, nodefault};
	__property System::UnicodeString LastPath = {read=FLastPath};
	__property bool IsRecycleBin = {read=FIsRecycleBin, nodefault};
	__property bool DDLinkOnExeDrag = {read=FDDLinkOnExeDrag, write=FDDLinkOnExeDrag, default=0};
	__property System::WideChar DragDrive = {read=FDragDrive, nodefault};
	__property bool DragOnDriveIsMove = {read=FDragOnDriveIsMove, write=FDragOnDriveIsMove, nodefault};
	__property Dragdrop::TDropEffectSet DragSourceEffects = {read=GetDragSourceEffects, nodefault};
	__property bool ExeDrag = {read=FExeDrag, nodefault};
	__property int ForwardCount = {read=GetForwardCount, nodefault};
	__property System::UnicodeString HistoryPath[int Index] = {read=GetHistoryPath};
	__property bool IsRoot = {read=GetIsRoot, nodefault};
	__property Dragdrop::TDragResult LastDDResult = {read=FLastDDResult, nodefault};
	__property SmallImages;
	__property LargeImages;
	__property int MaxHistoryCount = {read=FMaxHistoryCount, write=SetMaxHistoryCount, default=200};
	__property bool SelectedNamesSaved = {read=GetSelectedNamesSaved, nodefault};
	__property System::UnicodeString Mask = {read=FMask, write=SetMask};
	__property OnContextPopup;
	__property TDVGetFilterEvent OnGetSelectFilter = {read=FOnGetSelectFilter, write=FOnGetSelectFilter};
	__property System::Classes::TNotifyEvent OnStartLoading = {read=FOnStartLoading, write=FOnStartLoading};
	__property System::Classes::TNotifyEvent OnLoaded = {read=FOnLoaded, write=FOnLoaded};
	__property TDDOnDragEnter OnDDDragEnter = {read=FOnDDDragEnter, write=FOnDDDragEnter};
	__property TDDOnDragLeave OnDDDragLeave = {read=FOnDDDragLeave, write=FOnDDDragLeave};
	__property TDDOnDragOver OnDDDragOver = {read=FOnDDDragOver, write=FOnDDDragOver};
	__property TDDOnDrop OnDDDrop = {read=FOnDDDrop, write=FOnDDDrop};
	__property TDDOnQueryContinueDrag OnDDQueryContinueDrag = {read=FOnDDQueryContinueDrag, write=FOnDDQueryContinueDrag};
	__property TDDOnGiveFeedback OnDDGiveFeedback = {read=FOnDDGiveFeedback, write=FOnDDGiveFeedback};
	__property TDDOnChooseEffect OnDDChooseEffect = {read=FOnDDChooseEffect, write=FOnDDChooseEffect};
	__property TDDOnDragDetect OnDDDragDetect = {read=FOnDDDragDetect, write=FOnDDDragDetect};
	__property TDDOnCreateDragFileList OnDDCreateDragFileList = {read=FOnDDCreateDragFileList, write=FOnDDCreateDragFileList};
	__property System::Classes::TNotifyEvent OnDDEnd = {read=FOnDDEnd, write=FOnDDEnd};
	__property TDDOnCreateDataObject OnDDCreateDataObject = {read=FOnDDCreateDataObject, write=FOnDDCreateDataObject};
	__property TDDOnTargetHasDropHandler OnDDTargetHasDropHandler = {read=FOnDDTargetHasDropHandler, write=FOnDDTargetHasDropHandler};
	__property TOnProcessDropped OnDDProcessDropped = {read=FOnDDProcessDropped, write=FOnDDProcessDropped};
	__property TDDErrorEvent OnDDError = {read=FOnDDError, write=FOnDDError};
	__property TDDExecutedEvent OnDDExecuted = {read=FOnDDExecuted, write=FOnDDExecuted};
	__property TDDFileOperationEvent OnDDFileOperation = {read=FOnDDFileOperation, write=FOnDDFileOperation};
	__property TDDFileOperationExecutedEvent OnDDFileOperationExecuted = {read=FOnDDFileOperationExecuted, write=FOnDDFileOperationExecuted};
	__property Dragdrop::TOnMenuPopup OnDDMenuPopup = {read=FOnDDMenuPopup, write=FOnDDMenuPopup};
	__property TDirViewExecFileEvent OnExecFile = {read=FOnExecFile, write=FOnExecFile};
	__property TDirViewNotifyEvent OnHistoryChange = {read=FOnHistoryChange, write=FOnHistoryChange};
	__property TDVHistoryGoEvent OnHistoryGo = {read=FOnHistoryGo, write=FOnHistoryGo};
	__property TDirViewNotifyEvent OnPathChange = {read=FOnPathChange, write=FOnPathChange};
	__property TMatchMaskEvent OnMatchMask = {read=FOnMatchMask, write=FOnMatchMask};
	__property TDirViewGetOverlayEvent OnGetOverlay = {read=FOnGetOverlay, write=FOnGetOverlay};
	__property Pathlabel::TCustomPathLabel* PathLabel = {read=FPathLabel, write=SetPathLabel};
	__property bool ShowHiddenFiles = {read=FShowHiddenFiles, write=SetShowHiddenFiles, default=1};
	__property TDirViewUpdateStatusBarEvent OnUpdateStatusBar = {read=FOnUpdateStatusBar, write=FOnUpdateStatusBar};
	__property bool WatchForChanges = {read=FWatchForChanges, write=SetWatchForChanges, default=0};
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomDirView(HWND ParentWindow) : Ielistview::TCustomIEListView(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
static const System::Int8 clDefaultItemColor = System::Int8(-31);
static const System::Word WM_USER_RENAME = System::Word(0x439);
static const System::Int8 oiNoOverlay = System::Int8(0x0);
static const System::Int8 oiDirUp = System::Int8(0x1);
static const System::Int8 oiLink = System::Int8(0x2);
static const System::Int8 oiBrokenLink = System::Int8(0x4);
static const System::Int8 oiPartial = System::Int8(0x8);
static const System::Int8 oiShared = System::Int8(0x10);
static const System::Byte DefaultHistoryCount = System::Byte(0xc8);
static const System::Int8 DDMaxSlowCount = System::Int8(0x3);
static const int DDVScrollDelay = int(0x1e8480);
static const int DDHScrollDelay = int(0x1e8480);
static const int DDDragStartDelay = int(0x7a120);
static const System::Int8 DirAttrMask = System::Int8(0x16);
static const System::Word _WM_XBUTTONUP = System::Word(0x20c);
static const System::Word _WM_APPCOMMAND = System::Word(0x319);
static const System::Int8 _XBUTTON1 = System::Int8(0x1);
static const System::Int8 _XBUTTON2 = System::Int8(0x2);
static const System::Int8 _APPCOMMAND_BROWSER_BACKWARD = System::Int8(0x1);
static const System::Int8 _APPCOMMAND_BROWSER_FORWARD = System::Int8(0x2);
static const System::Int8 _APPCOMMAND_BROWSER_REFRESH = System::Int8(0x3);
static const System::Int8 _APPCOMMAND_BROWSER_STOP = System::Int8(0x4);
static const System::Int8 _APPCOMMAND_BROWSER_SEARCH = System::Int8(0x5);
static const System::Int8 _APPCOMMAND_BROWSER_FAVORITES = System::Int8(0x6);
static const System::Int8 _APPCOMMAND_BROWSER_HOME = System::Int8(0x7);
static const System::Byte _VK_BROWSER_BACK = System::Byte(0xa6);
static const System::Byte _VK_BROWSER_FORWARD = System::Byte(0xa7);
static const System::Byte _VK_BROWSER_REFRESH = System::Byte(0xa8);
static const System::Byte _VK_BROWSER_STOP = System::Byte(0xa9);
static const System::Byte _VK_BROWSER_SEARCH = System::Byte(0xaa);
static const System::Byte _VK_BROWSER_FAVORITES = System::Byte(0xab);
static const System::Byte _VK_BROWSER_HOME = System::Byte(0xac);
static const System::Word _FAPPCOMMAND_MOUSE = System::Word(0x8000);
static const System::Int8 _FAPPCOMMAND_KEY = System::Int8(0x0);
static const System::Word _FAPPCOMMAND_OEM = System::Word(0x1000);
static const System::Word _FAPPCOMMAND_MASK = System::Word(0xf000);
extern DELPHI_PACKAGE System::ResourceString _SErrorOpenFile;
#define Customdirview_SErrorOpenFile System::LoadResourceString(&Customdirview::_SErrorOpenFile)
extern DELPHI_PACKAGE System::ResourceString _SErrorRenameFile;
#define Customdirview_SErrorRenameFile System::LoadResourceString(&Customdirview::_SErrorRenameFile)
extern DELPHI_PACKAGE System::ResourceString _SErrorRenameFileExists;
#define Customdirview_SErrorRenameFileExists System::LoadResourceString(&Customdirview::_SErrorRenameFileExists)
extern DELPHI_PACKAGE System::ResourceString _SErrorInvalidName;
#define Customdirview_SErrorInvalidName System::LoadResourceString(&Customdirview::_SErrorInvalidName)
extern DELPHI_PACKAGE System::ResourceString _STextFileExt;
#define Customdirview_STextFileExt System::LoadResourceString(&Customdirview::_STextFileExt)
extern DELPHI_PACKAGE System::ResourceString _STextFiles;
#define Customdirview_STextFiles System::LoadResourceString(&Customdirview::_STextFiles)
extern DELPHI_PACKAGE System::ResourceString _STextDirectories;
#define Customdirview_STextDirectories System::LoadResourceString(&Customdirview::_STextDirectories)
extern DELPHI_PACKAGE System::ResourceString _SParentDir;
#define Customdirview_SParentDir System::LoadResourceString(&Customdirview::_SParentDir)
extern DELPHI_PACKAGE System::ResourceString _SIconUpdateThreadTerminationError;
#define Customdirview_SIconUpdateThreadTerminationError System::LoadResourceString(&Customdirview::_SIconUpdateThreadTerminationError)
extern DELPHI_PACKAGE System::ResourceString _SDragDropError;
#define Customdirview_SDragDropError System::LoadResourceString(&Customdirview::_SDragDropError)
extern DELPHI_PACKAGE System::ResourceString _SDriveNotReady;
#define Customdirview_SDriveNotReady System::LoadResourceString(&Customdirview::_SDriveNotReady)
extern DELPHI_PACKAGE System::ResourceString _SDirNotExists;
#define Customdirview_SDirNotExists System::LoadResourceString(&Customdirview::_SDirNotExists)
extern DELPHI_PACKAGE int StdDirIcon;
extern DELPHI_PACKAGE int StdDirSelIcon;
extern DELPHI_PACKAGE System::TObject* DropSourceControl;
extern DELPHI_PACKAGE int UnknownFileIcon;
extern DELPHI_PACKAGE System::UnicodeString StdDirTypeName;
extern DELPHI_PACKAGE int DefaultExeIcon;
extern DELPHI_PACKAGE System::UnicodeString UserDocumentDirectory;
extern DELPHI_PACKAGE bool __fastcall IsExecutable(System::UnicodeString FileName);
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetNextMask(System::UnicodeString &Mask);
extern DELPHI_PACKAGE void __fastcall DefaultFileFilter(TFileFilter &Filter);
extern DELPHI_PACKAGE System::UnicodeString __fastcall ResolveFileShortCut(System::UnicodeString SourceFile, bool ShowDialog = false);
extern DELPHI_PACKAGE bool __fastcall CreateFileShortCut(System::UnicodeString SourceFile, System::UnicodeString Target, System::UnicodeString DisplayName, bool UpdateIfExists = false);
extern DELPHI_PACKAGE int __fastcall GetIconIndex(const System::UnicodeString AFile, unsigned Attrs, unsigned Flags);
extern DELPHI_PACKAGE _SHFILEINFOW __fastcall GetshFileInfo(const System::UnicodeString AFile, unsigned Attrs, unsigned Flags);
extern DELPHI_PACKAGE bool __fastcall GetShellDisplayName(const _di_IShellFolder ShellFolder, Winapi::Shlobj::PItemIDList IDList, unsigned Flags, System::UnicodeString &Name);
extern DELPHI_PACKAGE Vcl::Controls::TImageList* __fastcall OverlayImageList(int Size);
}	/* namespace Customdirview */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_CUSTOMDIRVIEW)
using namespace Customdirview;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// CustomdirviewHPP
