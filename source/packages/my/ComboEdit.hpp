// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'ComboEdit.pas' rev: 27.00 (Windows)

#ifndef ComboeditHPP
#define ComboeditHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Winapi.Windows.hpp>	// Pascal unit
#include <System.Classes.hpp>	// Pascal unit
#include <Vcl.StdCtrls.hpp>	// Pascal unit
#include <Vcl.Controls.hpp>	// Pascal unit
#include <Winapi.Messages.hpp>	// Pascal unit
#include <Vcl.Forms.hpp>	// Pascal unit
#include <Vcl.Graphics.hpp>	// Pascal unit
#include <Vcl.Menus.hpp>	// Pascal unit
#include <Vcl.Buttons.hpp>	// Pascal unit
#include <Vcl.Dialogs.hpp>	// Pascal unit
#include <Vcl.Mask.hpp>	// Pascal unit
#include <Vcl.FileCtrl.hpp>	// Pascal unit
#include <System.SysUtils.hpp>	// Pascal unit
#include <System.UITypes.hpp>	// Pascal unit
#include <System.MaskUtils.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Comboedit
{
//-- type declarations -------------------------------------------------------
typedef System::UnicodeString TFileExt;

class DELPHICLASS TCustomComboEdit;
class PASCALIMPLEMENTATION TCustomComboEdit : public Vcl::Mask::TCustomMaskEdit
{
	typedef Vcl::Mask::TCustomMaskEdit inherited;
	
private:
	Vcl::Stdctrls::TButton* FButton;
	Vcl::Controls::TWinControl* FBtnControl;
	System::Classes::TNotifyEvent FOnButtonClick;
	System::Classes::TShortCut FClickKey;
	bool FReadOnly;
	bool FDirectInput;
	bool FAlwaysEnable;
	System::Classes::TAlignment FAlignment;
	void __fastcall SetEditRect(void);
	void __fastcall UpdateBtnBounds(void);
	void __fastcall EditButtonClick(System::TObject* Sender);
	int __fastcall GetMinHeight(void);
	int __fastcall GetTextHeight(void);
	void __fastcall SetShowCaret(void);
	int __fastcall GetButtonWidth(void);
	void __fastcall SetButtonWidth(int Value);
	System::UnicodeString __fastcall GetButtonHint(void);
	void __fastcall SetButtonHint(const System::UnicodeString Value);
	void __fastcall SetDirectInput(bool Value);
	HIDESBASE void __fastcall SetReadOnly(bool Value);
	HIDESBASE void __fastcall SetAlignment(System::Classes::TAlignment Value);
	bool __fastcall BtnWidthStored(void);
	HIDESBASE MESSAGE void __fastcall CMEnabledChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMEnter(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CNCtlColor(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMSize(Winapi::Messages::TWMSize &Message);
	HIDESBASE MESSAGE void __fastcall WMSetFocus(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMPaste(Winapi::Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall WMCut(Winapi::Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall CMCtl3DChanged(Winapi::Messages::TMessage &Message);
	
protected:
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall CreateWnd(void);
	virtual bool __fastcall EditCanModify(void);
	HIDESBASE virtual bool __fastcall GetReadOnly(void);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	DYNAMIC void __fastcall ButtonClick(void);
	__property System::Classes::TAlignment Alignment = {read=FAlignment, write=SetAlignment, default=0};
	__property bool AlwaysEnable = {read=FAlwaysEnable, write=FAlwaysEnable, default=0};
	__property Vcl::Stdctrls::TButton* Button = {read=FButton};
	__property System::Classes::TShortCut ClickKey = {read=FClickKey, write=FClickKey, default=32808};
	__property int ButtonWidth = {read=GetButtonWidth, write=SetButtonWidth, stored=BtnWidthStored, nodefault};
	__property System::UnicodeString ButtonHint = {read=GetButtonHint, write=SetButtonHint};
	__property bool DirectInput = {read=FDirectInput, write=SetDirectInput, default=1};
	__property bool ReadOnly = {read=GetReadOnly, write=SetReadOnly, default=0};
	__property System::Classes::TNotifyEvent OnButtonClick = {read=FOnButtonClick, write=FOnButtonClick};
	
public:
	__fastcall virtual TCustomComboEdit(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomComboEdit(void);
	void __fastcall DoClick(void);
	HIDESBASE void __fastcall SelectAll(void);
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomComboEdit(HWND ParentWindow) : Vcl::Mask::TCustomMaskEdit(ParentWindow) { }
	
};


class DELPHICLASS TComboEdit;
class PASCALIMPLEMENTATION TComboEdit : public TCustomComboEdit
{
	typedef TCustomComboEdit inherited;
	
__published:
	__property AutoSelect = {default=1};
	__property ButtonHint = {default=0};
	__property BorderStyle = {default=1};
	__property CharCase = {default=0};
	__property ClickKey = {default=32808};
	__property Color = {default=-16777211};
	__property Ctl3D;
	__property DirectInput = {default=1};
	__property DragCursor = {default=-12};
	__property DragMode = {default=0};
	__property EditMask = {default=0};
	__property Enabled = {default=1};
	__property Font;
	__property ButtonWidth;
	__property HideSelection = {default=1};
	__property Anchors = {default=3};
	__property BiDiMode;
	__property Constraints;
	__property DragKind = {default=0};
	__property ParentBiDiMode = {default=1};
	__property ImeMode = {default=3};
	__property ImeName = {default=0};
	__property ParentColor = {default=0};
	__property ParentCtl3D = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ReadOnly = {default=0};
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Text;
	__property Visible = {default=1};
	__property OnButtonClick;
	__property OnChange;
	__property OnClick;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnStartDrag;
	__property OnContextPopup;
	__property OnEndDock;
	__property OnStartDock;
public:
	/* TCustomComboEdit.Create */ inline __fastcall virtual TComboEdit(System::Classes::TComponent* AOwner) : TCustomComboEdit(AOwner) { }
	/* TCustomComboEdit.Destroy */ inline __fastcall virtual ~TComboEdit(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TComboEdit(HWND ParentWindow) : TCustomComboEdit(ParentWindow) { }
	
};


typedef void __fastcall (__closure *TExecOpenDialogEvent)(System::TObject* Sender, System::UnicodeString &Name, bool &Action);

class DELPHICLASS TFileDirEdit;
class PASCALIMPLEMENTATION TFileDirEdit : public TCustomComboEdit
{
	typedef TCustomComboEdit inherited;
	
private:
	unsigned FErrMode;
	bool FAcceptFiles;
	System::Classes::TNotifyEvent FOnDropFiles;
	TExecOpenDialogEvent FOnBeforeDialog;
	TExecOpenDialogEvent FOnAfterDialog;
	void __fastcall SetDragAccept(bool Value);
	void __fastcall SetAcceptFiles(bool Value);
	MESSAGE void __fastcall WMDropFiles(Winapi::Messages::TWMDropFiles &Msg);
	
protected:
	bool FMultipleDirs;
	virtual void __fastcall CreateHandle(void);
	virtual void __fastcall DestroyWindowHandle(void);
	virtual System::UnicodeString __fastcall GetLongName(void) = 0 ;
	virtual System::UnicodeString __fastcall GetShortName(void) = 0 ;
	DYNAMIC void __fastcall DoAfterDialog(System::UnicodeString &FileName, bool &Action);
	DYNAMIC void __fastcall DoBeforeDialog(System::UnicodeString &FileName, bool &Action);
	virtual void __fastcall ReceptFileDir(const System::UnicodeString AFileName) = 0 ;
	virtual void __fastcall ClearFileList(void);
	void __fastcall DisableSysErrors(void);
	void __fastcall EnableSysErrors(void);
	__property MaxLength = {default=0};
	
public:
	__property System::UnicodeString LongName = {read=GetLongName};
	__property System::UnicodeString ShortName = {read=GetShortName};
	
__published:
	__property bool AcceptFiles = {read=FAcceptFiles, write=SetAcceptFiles, default=0};
	__property TExecOpenDialogEvent OnBeforeDialog = {read=FOnBeforeDialog, write=FOnBeforeDialog};
	__property TExecOpenDialogEvent OnAfterDialog = {read=FOnAfterDialog, write=FOnAfterDialog};
	__property System::Classes::TNotifyEvent OnDropFiles = {read=FOnDropFiles, write=FOnDropFiles};
	__property OnButtonClick;
public:
	/* TCustomComboEdit.Create */ inline __fastcall virtual TFileDirEdit(System::Classes::TComponent* AOwner) : TCustomComboEdit(AOwner) { }
	/* TCustomComboEdit.Destroy */ inline __fastcall virtual ~TFileDirEdit(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TFileDirEdit(HWND ParentWindow) : TCustomComboEdit(ParentWindow) { }
	
};


enum DECLSPEC_DENUM TFileDialogKind : unsigned char { dkOpen, dkSave, dkOpenPicture, dkSavePicture };

typedef void __fastcall (__closure *TCreateEditDialogEvent)(System::TObject* Sender, TFileDialogKind DialogKind, Vcl::Dialogs::TOpenDialog* &Dialog);

class DELPHICLASS TFilenameEdit;
class PASCALIMPLEMENTATION TFilenameEdit : public TFileDirEdit
{
	typedef TFileDirEdit inherited;
	
private:
	Vcl::Dialogs::TOpenDialog* FDialog;
	TFileDialogKind FDialogKind;
	TCreateEditDialogEvent FOnCreateEditDialog;
	void __fastcall CreateEditDialog(void);
	System::UnicodeString __fastcall GetFileName(void);
	TFileExt __fastcall GetDefaultExt(void);
	Vcl::Dialogs::TFileEditStyle __fastcall GetFileEditStyle(void);
	System::UnicodeString __fastcall GetFilter(void);
	int __fastcall GetFilterIndex(void);
	System::UnicodeString __fastcall GetInitialDir(void);
	System::Classes::TStrings* __fastcall GetHistoryList(void);
	System::Uitypes::TOpenOptions __fastcall GetOptions(void);
	System::UnicodeString __fastcall GetDialogTitle(void);
	System::Classes::TStrings* __fastcall GetDialogFiles(void);
	void __fastcall SetDialogKind(TFileDialogKind Value);
	void __fastcall SetFileName(const System::UnicodeString Value);
	void __fastcall SetDefaultExt(TFileExt Value);
	void __fastcall SetFileEditStyle(Vcl::Dialogs::TFileEditStyle Value);
	void __fastcall SetFilter(const System::UnicodeString Value);
	void __fastcall SetFilterIndex(int Value);
	void __fastcall SetInitialDir(const System::UnicodeString Value);
	void __fastcall SetHistoryList(System::Classes::TStrings* Value);
	void __fastcall SetOptions(System::Uitypes::TOpenOptions Value);
	void __fastcall SetDialogTitle(const System::UnicodeString Value);
	void __fastcall SetOnCreateEditDialog(TCreateEditDialogEvent Value);
	bool __fastcall IsCustomTitle(void);
	bool __fastcall IsCustomFilter(void);
	
protected:
	DYNAMIC void __fastcall ButtonClick(void);
	virtual void __fastcall ReceptFileDir(const System::UnicodeString AFileName);
	virtual void __fastcall ClearFileList(void);
	virtual System::UnicodeString __fastcall GetLongName(void);
	virtual System::UnicodeString __fastcall GetShortName(void);
	
public:
	__fastcall virtual TFilenameEdit(System::Classes::TComponent* AOwner);
	__property Vcl::Dialogs::TOpenDialog* Dialog = {read=FDialog};
	__property System::Classes::TStrings* DialogFiles = {read=GetDialogFiles};
	
__published:
	__property TFileDialogKind DialogKind = {read=FDialogKind, write=SetDialogKind, default=0};
	__property TFileExt DefaultExt = {read=GetDefaultExt, write=SetDefaultExt};
	__property Vcl::Dialogs::TFileEditStyle FileEditStyle = {read=GetFileEditStyle, write=SetFileEditStyle, default=0};
	__property System::UnicodeString FileName = {read=GetFileName, write=SetFileName, stored=false};
	__property System::UnicodeString Filter = {read=GetFilter, write=SetFilter, stored=IsCustomFilter};
	__property int FilterIndex = {read=GetFilterIndex, write=SetFilterIndex, default=1};
	__property System::UnicodeString InitialDir = {read=GetInitialDir, write=SetInitialDir};
	__property System::Classes::TStrings* HistoryList = {read=GetHistoryList, write=SetHistoryList};
	__property System::Uitypes::TOpenOptions DialogOptions = {read=GetOptions, write=SetOptions, default=4};
	__property System::UnicodeString DialogTitle = {read=GetDialogTitle, write=SetDialogTitle, stored=IsCustomTitle};
	__property TCreateEditDialogEvent OnCreateEditDialog = {read=FOnCreateEditDialog, write=SetOnCreateEditDialog};
	__property AutoSelect = {default=1};
	__property ButtonHint = {default=0};
	__property BorderStyle = {default=1};
	__property CharCase = {default=0};
	__property ClickKey = {default=32808};
	__property Color = {default=-16777211};
	__property Ctl3D;
	__property DirectInput = {default=1};
	__property DragCursor = {default=-12};
	__property DragMode = {default=0};
	__property EditMask = {default=0};
	__property Enabled = {default=1};
	__property Font;
	__property ButtonWidth;
	__property HideSelection = {default=1};
	__property Anchors = {default=3};
	__property BiDiMode;
	__property Constraints;
	__property DragKind = {default=0};
	__property ParentBiDiMode = {default=1};
	__property ImeMode = {default=3};
	__property ImeName = {default=0};
	__property ParentColor = {default=0};
	__property ParentCtl3D = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ReadOnly = {default=0};
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Text;
	__property Visible = {default=1};
	__property OnChange;
	__property OnClick;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnStartDrag;
	__property OnContextPopup;
	__property OnEndDock;
	__property OnStartDock;
public:
	/* TCustomComboEdit.Destroy */ inline __fastcall virtual ~TFilenameEdit(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TFilenameEdit(HWND ParentWindow) : TFileDirEdit(ParentWindow) { }
	
};


class DELPHICLASS TDirectoryEdit;
class PASCALIMPLEMENTATION TDirectoryEdit : public TFileDirEdit
{
	typedef TFileDirEdit inherited;
	
private:
	System::UnicodeString FInitialDir;
	System::UnicodeString FDialogText;
	
protected:
	DYNAMIC void __fastcall ButtonClick(void);
	virtual void __fastcall ReceptFileDir(const System::UnicodeString AFileName);
	virtual System::UnicodeString __fastcall GetLongName(void);
	virtual System::UnicodeString __fastcall GetShortName(void);
	
public:
	__fastcall virtual TDirectoryEdit(System::Classes::TComponent* AOwner);
	
__published:
	__property System::UnicodeString DialogText = {read=FDialogText, write=FDialogText};
	__property System::UnicodeString InitialDir = {read=FInitialDir, write=FInitialDir};
	__property bool MultipleDirs = {read=FMultipleDirs, write=FMultipleDirs, default=0};
	__property AutoSelect = {default=1};
	__property ButtonHint = {default=0};
	__property BorderStyle = {default=1};
	__property CharCase = {default=0};
	__property ClickKey = {default=32808};
	__property Color = {default=-16777211};
	__property Ctl3D;
	__property DirectInput = {default=1};
	__property DragCursor = {default=-12};
	__property DragMode = {default=0};
	__property EditMask = {default=0};
	__property Enabled = {default=1};
	__property Font;
	__property ButtonWidth;
	__property HideSelection = {default=1};
	__property Anchors = {default=3};
	__property BiDiMode;
	__property Constraints;
	__property DragKind = {default=0};
	__property ParentBiDiMode = {default=1};
	__property ImeMode = {default=3};
	__property ImeName = {default=0};
	__property ParentColor = {default=0};
	__property ParentCtl3D = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ReadOnly = {default=0};
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Text;
	__property Visible = {default=1};
	__property OnChange;
	__property OnClick;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnStartDrag;
	__property OnContextPopup;
	__property OnEndDock;
	__property OnStartDock;
public:
	/* TCustomComboEdit.Destroy */ inline __fastcall virtual ~TDirectoryEdit(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TDirectoryEdit(HWND ParentWindow) : TFileDirEdit(ParentWindow) { }
	
};


class DELPHICLASS EComboEditError;
#pragma pack(push,4)
class PASCALIMPLEMENTATION EComboEditError : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EComboEditError(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EComboEditError(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EComboEditError(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EComboEditError(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EComboEditError(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EComboEditError(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EComboEditError(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EComboEditError(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EComboEditError(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EComboEditError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EComboEditError(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EComboEditError(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EComboEditError(void) { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
static const System::Word scAltDown = System::Word(0x8028);
static const System::Word scCtrlEnter = System::Word(0x400d);
static const System::Int8 DefEditBtnWidth = System::Int8(0x19);
extern DELPHI_PACKAGE System::ResourceString _SBrowse;
#define Comboedit_SBrowse System::LoadResourceString(&Comboedit::_SBrowse)
extern DELPHI_PACKAGE System::ResourceString _SDefaultFilter;
#define Comboedit_SDefaultFilter System::LoadResourceString(&Comboedit::_SDefaultFilter)
extern DELPHI_PACKAGE System::ResourceString _SInvalidFileName;
#define Comboedit_SInvalidFileName System::LoadResourceString(&Comboedit::_SInvalidFileName)
static const System::Int8 MaxFileLength = System::Int8(0x3);
extern DELPHI_PACKAGE void __fastcall Register(void);
}	/* namespace Comboedit */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_COMBOEDIT)
using namespace Comboedit;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// ComboeditHPP
