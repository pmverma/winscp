// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DriveView.pas' rev: 27.00 (Windows)

#ifndef DriveviewHPP
#define DriveviewHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Winapi.Windows.hpp>	// Pascal unit
#include <Winapi.Messages.hpp>	// Pascal unit
#include <System.SysUtils.hpp>	// Pascal unit
#include <System.Classes.hpp>	// Pascal unit
#include <Vcl.Graphics.hpp>	// Pascal unit
#include <Vcl.Controls.hpp>	// Pascal unit
#include <Vcl.Forms.hpp>	// Pascal unit
#include <System.Win.ComObj.hpp>	// Pascal unit
#include <Vcl.Dialogs.hpp>	// Pascal unit
#include <Vcl.ComCtrls.hpp>	// Pascal unit
#include <Winapi.ShellAPI.hpp>	// Pascal unit
#include <Winapi.CommCtrl.hpp>	// Pascal unit
#include <Vcl.ExtCtrls.hpp>	// Pascal unit
#include <Winapi.ActiveX.hpp>	// Pascal unit
#include <Winapi.ShlObj.hpp>	// Pascal unit
#include <DirView.hpp>	// Pascal unit
#include <ShellDialogs.hpp>	// Pascal unit
#include <DragDrop.hpp>	// Pascal unit
#include <DragDropFilesEx.hpp>	// Pascal unit
#include <FileChanges.hpp>	// Pascal unit
#include <FileOperator.hpp>	// Pascal unit
#include <DiscMon.hpp>	// Pascal unit
#include <IEDriveInfo.hpp>	// Pascal unit
#include <IEListView.hpp>	// Pascal unit
#include <PIDL.hpp>	// Pascal unit
#include <BaseUtils.hpp>	// Pascal unit
#include <ListExt.hpp>	// Pascal unit
#include <CustomDirView.hpp>	// Pascal unit
#include <CustomDriveView.hpp>	// Pascal unit
#include <System.UITypes.hpp>	// Pascal unit
#include <System.Types.hpp>	// Pascal unit
#include <Vcl.Menus.hpp>	// Pascal unit
#include <Vcl.ImgList.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Driveview
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS EInvalidDirName;
#pragma pack(push,4)
class PASCALIMPLEMENTATION EInvalidDirName : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EInvalidDirName(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EInvalidDirName(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EInvalidDirName(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EInvalidDirName(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EInvalidDirName(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EInvalidDirName(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EInvalidDirName(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EInvalidDirName(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EInvalidDirName(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EInvalidDirName(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EInvalidDirName(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EInvalidDirName(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EInvalidDirName(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS ENodeNotAssigned;
#pragma pack(push,4)
class PASCALIMPLEMENTATION ENodeNotAssigned : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall ENodeNotAssigned(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ENodeNotAssigned(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ENodeNotAssigned(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ENodeNotAssigned(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ENodeNotAssigned(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ENodeNotAssigned(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ENodeNotAssigned(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ENodeNotAssigned(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ENodeNotAssigned(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ENodeNotAssigned(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ENodeNotAssigned(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ENodeNotAssigned(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ENodeNotAssigned(void) { }
	
};

#pragma pack(pop)

struct DECLSPEC_DRECORD TDriveStatus
{
public:
	bool Scanned;
	bool Verified;
	Vcl::Comctrls::TTreeNode* RootNode;
	int RootNodeIndex;
	Discmon::TDiscMonitor* DiscMonitor;
	Vcl::Extctrls::TTimer* ChangeTimer;
	System::UnicodeString DefaultDir;
};


struct DECLSPEC_DRECORD TScanDirInfo
{
public:
	bool SearchNewDirs;
	Vcl::Comctrls::TTreeNode* StartNode;
	int DriveType;
};


typedef TScanDirInfo *PScanDirInfo;

class DELPHICLASS TNodeData;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TNodeData : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::UnicodeString FDirName;
	System::UnicodeString FShortName;
	int FAttr;
	bool FScanned;
	void *FData;
	bool FIsRecycleBin;
	bool FIconEmpty;
	
public:
	unsigned shAttr;
	_ITEMIDLIST *PIDL;
	_di_IShellFolder ShellFolder;
	__fastcall TNodeData(void);
	__fastcall virtual ~TNodeData(void);
	__property System::UnicodeString DirName = {read=FDirName, write=FDirName};
	__property System::UnicodeString ShortName = {read=FShortName, write=FShortName};
	__property int Attr = {read=FAttr, write=FAttr, nodefault};
	__property bool Scanned = {read=FScanned, write=FScanned, nodefault};
	__property void * Data = {read=FData, write=FData};
	__property bool IsRecycleBin = {read=FIsRecycleBin, nodefault};
	__property bool IconEmpty = {read=FIconEmpty, write=FIconEmpty, nodefault};
};

#pragma pack(pop)

class DELPHICLASS TDriveTreeNode;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TDriveTreeNode : public Vcl::Comctrls::TTreeNode
{
	typedef Vcl::Comctrls::TTreeNode inherited;
	
__published:
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
public:
	/* TTreeNode.Create */ inline __fastcall virtual TDriveTreeNode(Vcl::Comctrls::TTreeNodes* AOwner) : Vcl::Comctrls::TTreeNode(AOwner) { }
	/* TTreeNode.Destroy */ inline __fastcall virtual ~TDriveTreeNode(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS TDriveView;
class PASCALIMPLEMENTATION TDriveView : public Customdriveview::TCustomDriveView
{
	typedef Customdriveview::TCustomDriveView inherited;
	
private:
	typedef System::StaticArray<TDriveStatus, 26> _TDriveView__1;
	
	
private:
	_TDriveView__1 DriveStatus;
	bool FConfirmDelete;
	bool FConfirmOverwrite;
	bool FWatchDirectory;
	System::UnicodeString FDirectory;
	bool FFullDriveScan;
	bool FShowVolLabel;
	Dirview::TVolumeDisplayStyle FVolDisplayStyle;
	bool FShowAnimation;
	bool FChangeFlag;
	System::UnicodeString FLastDir;
	bool FValidateFlag;
	bool FCreating;
	bool FForceRename;
	Vcl::Comctrls::TTreeNode* FRenameNode;
	System::UnicodeString FLastRenameName;
	HWND FInternalWindowHandle;
	Vcl::Comctrls::TTreeNode* FPrevSelected;
	int FPrevSelectedIndex;
	int FChangeTimerSuspended;
	_di_IShellFolder FDesktop;
	_di_IShellFolder FWorkPlace;
	System::Classes::TNotifyEvent FOnDisplayContextMenu;
	System::Classes::TNotifyEvent FOnRefreshDrives;
	Dirview::TDirView* FDirView;
	Fileoperator::TFileOperator* FFileOperator;
	unsigned FChangeInterval;
	System::Uitypes::TColor FCompressedColor;
	System::UnicodeString FLastPathCut;
	void __fastcall SignalDirDelete(System::TObject* Sender, System::Classes::TStringList* Files);
	bool __fastcall CheckForSubDirs(System::UnicodeString Path);
	bool __fastcall ReadSubDirs(Vcl::Comctrls::TTreeNode* Node, int DriveType);
	bool __fastcall CallBackValidateDir(Vcl::Comctrls::TTreeNode* &Node, void * Data);
	void __fastcall ChangeDetected(System::TObject* Sender, const System::UnicodeString Directory, bool &SubdirsChanged);
	void __fastcall ChangeInvalid(System::TObject* Sender, const System::UnicodeString Directory, const System::UnicodeString ErrorStr);
	void __fastcall ChangeTimerOnTimer(System::TObject* Sender);
	
protected:
	HIDESBASE void __fastcall SetSelected(Vcl::Comctrls::TTreeNode* Node);
	void __fastcall SetFullDriveScan(bool DoFullDriveScan);
	void __fastcall SetWatchDirectory(bool Value);
	void __fastcall SetShowVolLabel(bool ShowIt);
	void __fastcall SetVolDisplayStyle(Dirview::TVolumeDisplayStyle DoStyle);
	void __fastcall SetDirView(Dirview::TDirView* Value);
	void __fastcall SetChangeInterval(unsigned Value);
	void __fastcall SetCompressedColor(System::Uitypes::TColor Value);
	virtual void __fastcall SetDirectory(System::UnicodeString Value);
	void __fastcall SetDrive(System::WideChar Drive);
	System::WideChar __fastcall GetDrive(void);
	void __fastcall GetNodeShellAttr(_di_IShellFolder ParentFolder, TNodeData* NodeData, System::UnicodeString Path, bool ContentMask = true);
	virtual bool __fastcall DoScanDir(Vcl::Comctrls::TTreeNode* FromNode);
	virtual Vcl::Comctrls::TTreeNode* __fastcall AddChildNode(Vcl::Comctrls::TTreeNode* ParentNode, const System::Sysutils::TSearchRec &SRec);
	virtual void __fastcall CreateWatchThread(System::WideChar Drive);
	void __fastcall InternalWndProc(Winapi::Messages::TMessage &Msg);
	int __fastcall DirAttrMask(void);
	virtual void __fastcall ValidateDirectoryEx(Vcl::Comctrls::TTreeNode* Node, Customdriveview::TRecursiveScan Recurse, bool NewDirs);
	virtual void __fastcall RebuildTree(void);
	void __fastcall SetLastPathCut(System::UnicodeString Path);
	virtual bool __fastcall GetCanUndoCopyMove(void);
	virtual void __fastcall CreateWnd(void);
	virtual void __fastcall DestroyWnd(void);
	DYNAMIC void __fastcall Edit(const tagTVITEMW &Item);
	MESSAGE void __fastcall WMUserRename(Winapi::Messages::TMessage &Message);
	virtual Customdirview::TCustomDirView* __fastcall GetCustomDirView(void);
	virtual void __fastcall SetCustomDirView(Customdirview::TCustomDirView* Value);
	virtual System::UnicodeString __fastcall NodePath(Vcl::Comctrls::TTreeNode* Node);
	virtual bool __fastcall NodeIsRecycleBin(Vcl::Comctrls::TTreeNode* Node);
	virtual bool __fastcall NodePathExists(Vcl::Comctrls::TTreeNode* Node);
	virtual System::Uitypes::TColor __fastcall NodeColor(Vcl::Comctrls::TTreeNode* Node);
	virtual Vcl::Comctrls::TTreeNode* __fastcall FindPathNode(System::UnicodeString Path);
	virtual Vcl::Comctrls::TTreeNode* __fastcall CreateNode(void);
	virtual Dragdrop::TDropEffectSet __fastcall DDSourceEffects(void);
	virtual void __fastcall DDChooseEffect(int KeyState, int &Effect);
	virtual bool __fastcall DragCompleteFileList(void);
	virtual Dragdrop::TDragResult __fastcall DDExecute(void);
	
public:
	__property Images;
	__property StateImages;
	__property Items = {stored=false};
	__property Selected = {write=SetSelected, stored=false};
	__property _di_IShellFolder WorkPlace = {read=FWorkPlace};
	__property Vcl::Controls::TDragImageList* DragImageList = {read=FDragImageList};
	__property System::WideChar Drive = {read=GetDrive, write=SetDrive, stored=false, nodefault};
	__property System::WideChar DragDrive = {read=FDragDrive, nodefault};
	__property bool CanUndoCopyMove = {read=GetCanUndoCopyMove, nodefault};
	__property Fileoperator::TFileOperator* DDFileOperator = {read=FFileOperator};
	__property System::UnicodeString LastPathCut = {read=FLastPathCut, write=SetLastPathCut};
	DYNAMIC bool __fastcall UndoCopyMove(void);
	DYNAMIC void __fastcall EmptyClipboard(void);
	DYNAMIC bool __fastcall CopyToClipBoard(Vcl::Comctrls::TTreeNode* Node);
	DYNAMIC bool __fastcall CutToClipBoard(Vcl::Comctrls::TTreeNode* Node);
	DYNAMIC bool __fastcall CanPasteFromClipBoard(void);
	DYNAMIC bool __fastcall PasteFromClipBoard(System::UnicodeString TargetPath = System::UnicodeString());
	virtual void __fastcall PerformDragDropFileOperation(Vcl::Comctrls::TTreeNode* Node, int Effect);
	TDriveStatus __fastcall GetDriveStatus(System::WideChar Drive);
	int __fastcall GetDriveTypetoNode(Vcl::Comctrls::TTreeNode* Node);
	int __fastcall GetDriveType(System::WideChar Drive);
	System::WideChar __fastcall GetDriveToNode(Vcl::Comctrls::TTreeNode* Node);
	System::UnicodeString __fastcall GetDriveText(System::WideChar Drive);
	void __fastcall ScanDrive(System::WideChar Drive);
	void __fastcall RefreshRootNodes(int dsFlags);
	virtual void __fastcall SetImageIndex(Vcl::Comctrls::TTreeNode* Node);
	Vcl::Comctrls::TTreeNode* __fastcall FindNodeToPath(System::UnicodeString Path);
	Vcl::Comctrls::TTreeNode* __fastcall RootNode(Vcl::Comctrls::TTreeNode* Node);
	System::UnicodeString __fastcall GetDirName(Vcl::Comctrls::TTreeNode* Node);
	System::UnicodeString __fastcall GetDisplayName(Vcl::Comctrls::TTreeNode* Node);
	virtual System::UnicodeString __fastcall NodePathName(Vcl::Comctrls::TTreeNode* Node);
	Winapi::Shlobj::PItemIDList __fastcall GetFQPIDL(Vcl::Comctrls::TTreeNode* Node);
	DYNAMIC Vcl::Comctrls::TTreeNode* __fastcall CreateDirectory(Vcl::Comctrls::TTreeNode* ParentNode, System::UnicodeString NewName);
	DYNAMIC bool __fastcall DeleteDirectory(Vcl::Comctrls::TTreeNode* Node, bool AllowUndo);
	__fastcall virtual TDriveView(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TDriveView(void);
	virtual void __fastcall DisplayContextMenu(Vcl::Comctrls::TTreeNode* Node, const System::Types::TPoint &Point);
	virtual void __fastcall DisplayPropertiesMenu(Vcl::Comctrls::TTreeNode* Node);
	virtual void __fastcall StartWatchThread(void);
	virtual void __fastcall StopWatchThread(void);
	void __fastcall SuspendChangeTimer(void);
	void __fastcall ResumeChangeTimer(void);
	virtual void __fastcall TerminateWatchThread(System::WideChar Drive);
	virtual void __fastcall StartAllWatchThreads(void);
	virtual void __fastcall StopAllWatchThreads(void);
	bool __fastcall WatchThreadActive(void)/* overload */;
	bool __fastcall WatchThreadActive(System::WideChar Drive)/* overload */;
	virtual bool __fastcall NodeWatched(Vcl::Comctrls::TTreeNode* Node);
	void __fastcall ValidateCurrentDirectoryIfNotMonitoring(void);
	virtual void __fastcall GetImageIndex(Vcl::Comctrls::TTreeNode* Node);
	DYNAMIC bool __fastcall CanEdit(Vcl::Comctrls::TTreeNode* Node);
	DYNAMIC bool __fastcall CanChange(Vcl::Comctrls::TTreeNode* Node);
	DYNAMIC bool __fastcall CanExpand(Vcl::Comctrls::TTreeNode* Node);
	DYNAMIC void __fastcall Delete(Vcl::Comctrls::TTreeNode* Node);
	virtual void __fastcall Loaded(void);
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	DYNAMIC void __fastcall Change(Vcl::Comctrls::TTreeNode* Node);
	
__published:
	__property Directory = {default=0};
	__property bool ConfirmDelete = {read=FConfirmDelete, write=FConfirmDelete, default=1};
	__property bool ConfirmOverwrite = {read=FConfirmOverwrite, write=FConfirmOverwrite, default=1};
	__property bool FullDriveScan = {read=FFullDriveScan, write=SetFullDriveScan, default=0};
	__property bool WatchDirectory = {read=FWatchDirectory, write=SetWatchDirectory, default=0};
	__property unsigned ChangeInterval = {read=FChangeInterval, write=SetChangeInterval, default=1000};
	__property Dirview::TDirView* DirView = {read=FDirView, write=SetDirView};
	__property bool ShowVolLabel = {read=FShowVolLabel, write=SetShowVolLabel, default=1};
	__property Dirview::TVolumeDisplayStyle VolDisplayStyle = {read=FVolDisplayStyle, write=SetVolDisplayStyle, default=0};
	__property bool ShowAnimation = {read=FShowAnimation, write=FShowAnimation, default=0};
	__property System::Uitypes::TColor CompressedColor = {read=FCompressedColor, write=SetCompressedColor, default=16711680};
	__property System::Classes::TNotifyEvent OnDisplayContextMenu = {read=FOnDisplayContextMenu, write=FOnDisplayContextMenu};
	__property System::Classes::TNotifyEvent OnRefreshDrives = {read=FOnRefreshDrives, write=FOnRefreshDrives};
	__property DDLinkOnExeDrag = {default=1};
	__property TargetPopUpMenu = {default=1};
	__property OnDDDragEnter;
	__property OnDDDragLeave;
	__property OnDDDragOver;
	__property OnDDDrop;
	__property OnDDQueryContinueDrag;
	__property OnDDGiveFeedback;
	__property OnDDDragDetect;
	__property OnDDProcessDropped;
	__property OnDDError;
	__property OnDDExecuted;
	__property OnDDFileOperation;
	__property OnDDFileOperationExecuted;
	__property OnDDMenuPopup;
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property AutoExpand = {default=0};
	__property BiDiMode;
	__property BorderStyle = {default=1};
	__property BorderWidth = {default=0};
	__property ChangeDelay = {default=0};
	__property Color = {default=-16777211};
	__property Ctl3D;
	__property Constraints;
	__property DoubleBuffered;
	__property DragKind = {default=0};
	__property DragCursor = {default=-12};
	__property DragMode = {default=1};
	__property OnDragDrop;
	__property OnDragOver;
	__property Enabled = {default=1};
	__property Font;
	__property HideSelection = {default=1};
	__property HotTrack = {default=0};
	__property Indent;
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=1};
	__property ParentCtl3D = {default=1};
	__property ParentDoubleBuffered = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ReadOnly = {default=0};
	__property RightClickSelect = {default=0};
	__property RowSelect = {default=0};
	__property ShowButtons = {default=1};
	__property ShowHint;
	__property ShowLines = {default=1};
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property ToolTips = {default=1};
	__property Visible = {default=1};
	__property OnChange;
	__property OnChanging;
	__property OnClick;
	__property OnCollapsing;
	__property OnCollapsed;
	__property OnCompare;
	__property OnDblClick;
	__property OnDeletion;
	__property OnEdited;
	__property OnEditing;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnExpanding;
	__property OnExpanded;
	__property OnGetImageIndex;
	__property OnGetSelectedIndex;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnStartDock;
	__property OnStartDrag;
public:
	/* TWinControl.CreateParented */ inline __fastcall TDriveView(HWND ParentWindow) : Customdriveview::TCustomDriveView(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE System::ResourceString _coFileOperatorTitle;
#define Driveview_coFileOperatorTitle System::LoadResourceString(&Driveview::_coFileOperatorTitle)
extern DELPHI_PACKAGE System::ResourceString _coInvalidDosChars;
#define Driveview_coInvalidDosChars System::LoadResourceString(&Driveview::_coInvalidDosChars)
extern DELPHI_PACKAGE System::ResourceString _Space;
#define Driveview_Space System::LoadResourceString(&Driveview::_Space)
static const System::Int8 msThreadChangeDelay = System::Int8(0x32);
#define ErrorNodeNA L"%s: Node not assigned"
static const System::Int8 dvdsFloppy = System::Int8(0x8);
static const System::Int8 dvdsRereadAllways = System::Int8(0x10);
extern DELPHI_PACKAGE void __fastcall Register(void);
}	/* namespace Driveview */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DRIVEVIEW)
using namespace Driveview;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DriveviewHPP
