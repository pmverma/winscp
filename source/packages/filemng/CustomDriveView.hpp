// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'CustomDriveView.pas' rev: 27.00 (Windows)

#ifndef CustomdriveviewHPP
#define CustomdriveviewHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.Classes.hpp>	// Pascal unit
#include <Vcl.ComCtrls.hpp>	// Pascal unit
#include <Winapi.CommCtrl.hpp>	// Pascal unit
#include <Winapi.Windows.hpp>	// Pascal unit
#include <Vcl.Controls.hpp>	// Pascal unit
#include <Vcl.Forms.hpp>	// Pascal unit
#include <Winapi.ShlObj.hpp>	// Pascal unit
#include <Winapi.Messages.hpp>	// Pascal unit
#include <Vcl.Graphics.hpp>	// Pascal unit
#include <DragDrop.hpp>	// Pascal unit
#include <CustomDirView.hpp>	// Pascal unit
#include <IEDriveInfo.hpp>	// Pascal unit
#include <DragDropFilesEx.hpp>	// Pascal unit
#include <PasTools.hpp>	// Pascal unit
#include <System.Types.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Customdriveview
{
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TRecursiveScan : unsigned char { rsNoRecursive, rsRecursiveExisting };

enum DECLSPEC_DENUM TScanStartNode : unsigned char { coNoScanStartNode, coScanStartNode };

typedef bool __fastcall (__closure *TCallBackFunc)(Vcl::Comctrls::TTreeNode* &Node, void * Data);

class DELPHICLASS TCustomDriveView;
class PASCALIMPLEMENTATION TCustomDriveView : public Vcl::Comctrls::TCustomTreeView
{
	typedef Vcl::Comctrls::TCustomTreeView inherited;
	
protected:
	Vcl::Forms::TCustomForm* FParentForm;
	System::Classes::TStringList* FDragFileList;
	Customdirview::TCustomizableDragDropFilesEx* FDragDropFilesEx;
	Vcl::Controls::TDragImageList* FDragImageList;
	System::WideChar FDragDrive;
	bool FExeDrag;
	bool FDDLinkOnExeDrag;
	Vcl::Comctrls::TTreeNode* FDragNode;
	_FILETIME FDragStartTime;
	System::Types::TPoint FDragPos;
	System::Types::TPoint FStartPos;
	bool FContextMenu;
	bool FCanChange;
	bool FUseSystemContextMenu;
	bool FDimmHiddenDirs;
	bool FShowHiddenDirs;
	bool FContinue;
	Vcl::Controls::TImageList* FImageList;
	Pastools::TTreeViewScrollOnDragOver* FScrollOnDragOver;
	Customdirview::TDDOnDragEnter FOnDDDragEnter;
	Customdirview::TDDOnDragLeave FOnDDDragLeave;
	Customdirview::TDDOnDragOver FOnDDDragOver;
	Customdirview::TDDOnDrop FOnDDDrop;
	Customdirview::TDDOnQueryContinueDrag FOnDDQueryContinueDrag;
	Customdirview::TDDOnChooseEffect FOnDDChooseEffect;
	Customdirview::TDDOnGiveFeedback FOnDDGiveFeedback;
	Customdirview::TDDOnDragDetect FOnDDDragDetect;
	Dragdrop::TOnMenuPopup FOnDDMenuPopup;
	Customdirview::TOnProcessDropped FOnDDProcessDropped;
	Customdirview::TDDErrorEvent FOnDDError;
	Customdirview::TDDExecutedEvent FOnDDExecuted;
	Customdirview::TDDFileOperationEvent FOnDDFileOperation;
	Customdirview::TDDFileOperationExecutedEvent FOnDDFileOperationExecuted;
	Customdirview::TDDOnCreateDragFileList FOnDDCreateDragFileList;
	System::Classes::TNotifyEvent FOnDDEnd;
	Customdirview::TDDOnCreateDataObject FOnDDCreateDataObject;
	Dragdrop::TDragResult FLastDDResult;
	bool __fastcall GetTargetPopupMenu(void);
	void __fastcall SetTargetPopUpMenu(bool Value);
	void __fastcall SetDimmHiddenDirs(bool Value);
	void __fastcall SetShowHiddenDirs(bool Value);
	virtual System::UnicodeString __fastcall GetDirectory(void);
	virtual void __fastcall SetDirectory(System::UnicodeString Value);
	virtual Customdirview::TCustomDirView* __fastcall GetCustomDirView(void) = 0 ;
	virtual void __fastcall SetCustomDirView(Customdirview::TCustomDirView* Value) = 0 ;
	virtual void __fastcall CreateWnd(void);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	Vcl::Comctrls::TTreeNode* __fastcall GetNodeFromHItem(const tagTVITEMW &Item);
	virtual bool __fastcall IsCustomDrawn(Vcl::Comctrls::TCustomDrawTarget Target, Vcl::Comctrls::TCustomDrawStage Stage);
	virtual bool __fastcall CustomDrawItem(Vcl::Comctrls::TTreeNode* Node, Vcl::Comctrls::TCustomDrawState State, Vcl::Comctrls::TCustomDrawStage Stage, bool &PaintImages);
	HIDESBASE MESSAGE void __fastcall CNNotify(Winapi::Messages::TWMNotify &Msg);
	HIDESBASE MESSAGE void __fastcall CMColorChanged(Winapi::Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall WMLButtonDown(Winapi::Messages::TWMMouse &Msg);
	HIDESBASE MESSAGE void __fastcall WMLButtonUp(Winapi::Messages::TWMMouse &Msg);
	HIDESBASE MESSAGE void __fastcall WMRButtonDown(Winapi::Messages::TWMMouse &Msg);
	HIDESBASE MESSAGE void __fastcall WMContextMenu(Winapi::Messages::TWMContextMenu &Msg);
	DYNAMIC void __fastcall Delete(Vcl::Comctrls::TTreeNode* Node);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	DYNAMIC void __fastcall KeyUp(System::Word &Key, System::Classes::TShiftState Shift);
	void __fastcall InternalOnDrawItem(Vcl::Comctrls::TCustomTreeView* Sender, Vcl::Comctrls::TTreeNode* Node, Vcl::Comctrls::TCustomDrawState State, bool &DefaultDraw);
	void __fastcall DDDragEnter(_di_IDataObject DataObj, int KeyState, const System::Types::TPoint &Point, int &Effect, bool &Accept);
	void __fastcall DDDragLeave(void);
	void __fastcall DDDragOver(int KeyState, const System::Types::TPoint &Point, int &Effect);
	void __fastcall DDDrop(_di_IDataObject DataObj, int KeyState, const System::Types::TPoint &Point, int &Effect);
	void __fastcall DDQueryContinueDrag(BOOL EscapePressed, int KeyState, HRESULT &Result);
	void __fastcall DDDropHandlerSucceeded(System::TObject* Sender, int KeyState, const System::Types::TPoint &Point, int Effect);
	void __fastcall DDGiveFeedback(int Effect, HRESULT &Result);
	void __fastcall DDMenuPopup(System::TObject* Sender, HMENU AMenu, _di_IDataObject DataObj, int AMinCustCmd, int grfKeyState, const System::Types::TPoint &Point);
	void __fastcall DDMenuDone(System::TObject* Sender, HMENU AMenu);
	void __fastcall DDProcessDropped(System::TObject* Sender, int KeyState, const System::Types::TPoint &Point, int Effect);
	virtual void __fastcall DDError(Customdirview::TDDError Error);
	void __fastcall DDSpecifyDropTarget(System::TObject* Sender, bool DragDropHandler, const System::Types::TPoint &Point, Winapi::Shlobj::PItemIDList &PIDL, System::UnicodeString &Filename);
	virtual void __fastcall DDDragDetect(int KeyState, const System::Types::TPoint &DetectStart, const System::Types::TPoint &Point, Dragdrop::TDragDetectStatus DragStatus);
	virtual void __fastcall PerformDragDropFileOperation(Vcl::Comctrls::TTreeNode* Node, int Effect) = 0 ;
	virtual void __fastcall DDChooseEffect(int KeyState, int &Effect);
	virtual bool __fastcall DragCompleteFileList(void) = 0 ;
	virtual Dragdrop::TDragResult __fastcall DDExecute(void);
	virtual Dragdrop::TDropEffectSet __fastcall DDSourceEffects(void) = 0 ;
	virtual System::UnicodeString __fastcall NodePath(Vcl::Comctrls::TTreeNode* Node) = 0 ;
	virtual bool __fastcall NodeIsRecycleBin(Vcl::Comctrls::TTreeNode* Node);
	virtual bool __fastcall NodePathExists(Vcl::Comctrls::TTreeNode* Node);
	virtual System::Uitypes::TColor __fastcall NodeColor(Vcl::Comctrls::TTreeNode* Node) = 0 ;
	virtual bool __fastcall NodeCanDrag(Vcl::Comctrls::TTreeNode* Node);
	virtual System::Word __fastcall NodeOverlayIndexes(Vcl::Comctrls::TTreeNode* Node);
	virtual Vcl::Comctrls::TTreeNode* __fastcall FindPathNode(System::UnicodeString Path) = 0 ;
	virtual void __fastcall ClearDragFileList(Dragdropfilesex::TFileList* FileList);
	virtual void __fastcall AddToDragFileList(Dragdropfilesex::TFileList* FileList, Vcl::Comctrls::TTreeNode* Node);
	virtual void __fastcall ValidateDirectoryEx(Vcl::Comctrls::TTreeNode* Node, TRecursiveScan Recurse, bool NewDirs) = 0 ;
	virtual void __fastcall RebuildTree(void) = 0 ;
	virtual void __fastcall DisplayContextMenu(Vcl::Comctrls::TTreeNode* Node, const System::Types::TPoint &ScreenPos) = 0 ;
	virtual void __fastcall DisplayPropertiesMenu(Vcl::Comctrls::TTreeNode* Node) = 0 ;
	void __fastcall ScrollOnDragOverBeforeUpdate(System::TObject* ObjectToValidate);
	void __fastcall ScrollOnDragOverAfterUpdate(void);
	__property Vcl::Controls::TImageList* ImageList = {read=FImageList};
	
public:
	__fastcall virtual TCustomDriveView(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomDriveView(void);
	void __fastcall ValidateDirectory(Vcl::Comctrls::TTreeNode* Node);
	virtual void __fastcall CenterNode(Vcl::Comctrls::TTreeNode* Node);
	bool __fastcall SortChildren(Vcl::Comctrls::TTreeNode* ParentNode, bool Recurse);
	bool __fastcall IterateSubTree(Vcl::Comctrls::TTreeNode* &StartNode, TCallBackFunc CallBackFunc, TRecursiveScan Recurse, TScanStartNode ScanStartNode, void * Data);
	virtual System::UnicodeString __fastcall NodePathName(Vcl::Comctrls::TTreeNode* Node) = 0 ;
	__property Customdirview::TCustomizableDragDropFilesEx* DragDropFilesEx = {read=FDragDropFilesEx};
	__property bool UseSystemContextMenu = {read=FUseSystemContextMenu, write=FUseSystemContextMenu, default=1};
	__property bool DimmHiddenDirs = {read=FDimmHiddenDirs, write=SetDimmHiddenDirs, default=0};
	__property bool ShowHiddenDirs = {read=FShowHiddenDirs, write=SetShowHiddenDirs, default=0};
	__property bool DDLinkOnExeDrag = {read=FDDLinkOnExeDrag, write=FDDLinkOnExeDrag, default=1};
	__property Customdirview::TDDOnDragEnter OnDDDragEnter = {read=FOnDDDragEnter, write=FOnDDDragEnter};
	__property Customdirview::TDDOnDragLeave OnDDDragLeave = {read=FOnDDDragLeave, write=FOnDDDragLeave};
	__property Customdirview::TDDOnDragOver OnDDDragOver = {read=FOnDDDragOver, write=FOnDDDragOver};
	__property Customdirview::TDDOnDrop OnDDDrop = {read=FOnDDDrop, write=FOnDDDrop};
	__property Customdirview::TDDOnQueryContinueDrag OnDDQueryContinueDrag = {read=FOnDDQueryContinueDrag, write=FOnDDQueryContinueDrag};
	__property Customdirview::TDDOnChooseEffect OnDDChooseEffect = {read=FOnDDChooseEffect, write=FOnDDChooseEffect};
	__property Customdirview::TDDOnGiveFeedback OnDDGiveFeedback = {read=FOnDDGiveFeedback, write=FOnDDGiveFeedback};
	__property Customdirview::TDDOnDragDetect OnDDDragDetect = {read=FOnDDDragDetect, write=FOnDDDragDetect};
	__property Customdirview::TOnProcessDropped OnDDProcessDropped = {read=FOnDDProcessDropped, write=FOnDDProcessDropped};
	__property Customdirview::TDDErrorEvent OnDDError = {read=FOnDDError, write=FOnDDError};
	__property Customdirview::TDDExecutedEvent OnDDExecuted = {read=FOnDDExecuted, write=FOnDDExecuted};
	__property Customdirview::TDDFileOperationEvent OnDDFileOperation = {read=FOnDDFileOperation, write=FOnDDFileOperation};
	__property Customdirview::TDDFileOperationExecutedEvent OnDDFileOperationExecuted = {read=FOnDDFileOperationExecuted, write=FOnDDFileOperationExecuted};
	__property Customdirview::TDDOnCreateDragFileList OnDDCreateDragFileList = {read=FOnDDCreateDragFileList, write=FOnDDCreateDragFileList};
	__property System::Classes::TNotifyEvent OnDDEnd = {read=FOnDDEnd, write=FOnDDEnd};
	__property Customdirview::TDDOnCreateDataObject OnDDCreateDataObject = {read=FOnDDCreateDataObject, write=FOnDDCreateDataObject};
	__property Dragdrop::TOnMenuPopup OnDDMenuPopup = {read=FOnDDMenuPopup, write=FOnDDMenuPopup};
	__property bool TargetPopUpMenu = {read=GetTargetPopupMenu, write=SetTargetPopUpMenu, default=1};
	__property System::UnicodeString Directory = {read=GetDirectory, write=SetDirectory};
	__property Vcl::Comctrls::TTreeNode* DragNode = {read=FDragNode};
	__property bool Continue = {read=FContinue, write=FContinue, nodefault};
	__property Dragdrop::TDragResult LastDDResult = {read=FLastDDResult, nodefault};
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomDriveView(HWND ParentWindow) : Vcl::Comctrls::TCustomTreeView(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE System::ResourceString _SDragDropError;
#define Customdriveview_SDragDropError System::LoadResourceString(&Customdriveview::_SDragDropError)
}	/* namespace Customdriveview */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_CUSTOMDRIVEVIEW)
using namespace Customdriveview;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// CustomdriveviewHPP
