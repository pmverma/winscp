// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'NortonLikeListView.pas' rev: 27.00 (Windows)

#ifndef NortonlikelistviewHPP
#define NortonlikelistviewHPP

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
#include <Vcl.Dialogs.hpp>	// Pascal unit
#include <Vcl.ComCtrls.hpp>	// Pascal unit
#include <ListViewColProperties.hpp>	// Pascal unit
#include <Winapi.CommCtrl.hpp>	// Pascal unit
#include <System.Types.hpp>	// Pascal unit
#include <System.UITypes.hpp>	// Pascal unit
#include <Vcl.ImgList.hpp>	// Pascal unit
#include <Vcl.Menus.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Nortonlikelistview
{
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TSelectMode : unsigned char { smAll, smNone, smInvert };

enum DECLSPEC_DENUM TNortonLikeMode : unsigned char { nlOn, nlOff, nlKeyboard };

enum DECLSPEC_DENUM TSelectMethod : unsigned char { smNoneYet, smMouse, smKeyboard };

class DELPHICLASS TCustomNortonLikeListView;
typedef void __fastcall (__closure *TSelectByMaskEvent)(TCustomNortonLikeListView* Control, bool Select);

class PASCALIMPLEMENTATION TCustomNortonLikeListView : public Vcl::Comctrls::TCustomListView
{
	typedef Vcl::Comctrls::TCustomListView inherited;
	
private:
	Listviewcolproperties::TCustomListViewColProperties* FColProperties;
	bool FDontSelectItem;
	bool FDontUnSelectItem;
	int FSelCount;
	TNortonLikeMode FNortonLike;
	TSelectByMaskEvent FOnSelectByMask;
	Vcl::Comctrls::TListItem* FLastDeletedItem;
	bool FFocusingItem;
	bool FManageSelection;
	bool FForceUpdateOnItemUnfocus;
	int FFirstSelected;
	int FLastSelected;
	System::TDateTime FFocused;
	NativeUInt FIgnoreSetFocusFrom;
	bool FSelectingImplicitly;
	bool FAnyAndAllSelectedImplicitly;
	System::Classes::TShiftState FLButtonDownShiftState;
	System::Types::TPoint FLButtonDownPos;
	TSelectMethod FLastSelectMethod;
	Vcl::Comctrls::TListItem* FPendingInternalFocus;
	HIDESBASE MESSAGE void __fastcall WMLButtonDown(Winapi::Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall WMRButtonDown(Winapi::Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall WMLButtonUp(Winapi::Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall WMKeyDown(Winapi::Messages::TWMKey &Message);
	HIDESBASE MESSAGE void __fastcall WMChar(Winapi::Messages::TWMKey &Message);
	HIDESBASE MESSAGE void __fastcall WMNotify(Winapi::Messages::TWMNotify &Message);
	HIDESBASE MESSAGE void __fastcall CNNotify(Winapi::Messages::TWMNotify &Message);
	MESSAGE void __fastcall LVMEditLabel(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMSetFocus(Winapi::Messages::TWMSetFocus &Message);
	MESSAGE void __fastcall CMWantSpecialKey(Winapi::Messages::TWMKey &Message);
	int __fastcall GetMarkedCount(void);
	Vcl::Comctrls::TListItem* __fastcall GetMarkedFile(void);
	void __fastcall ItemSelected(Vcl::Comctrls::TListItem* Item, int Index);
	void __fastcall ItemUnselected(Vcl::Comctrls::TListItem* Item, int Index);
	HIDESBASE void __fastcall SelectAll(TSelectMode Mode, Vcl::Comctrls::TListItem* Exclude)/* overload */;
	
protected:
	bool FClearingItems;
	int FUpdatingSelection;
	System::Word FNextCharToIgnore;
	HWND FHeaderHandle;
	virtual void __fastcall CreateWnd(void);
	virtual void __fastcall DestroyWnd(void);
	virtual void __fastcall BeginSelectionUpdate(void);
	virtual void __fastcall EndSelectionUpdate(void);
	virtual bool __fastcall CanChangeSelection(Vcl::Comctrls::TListItem* Item, bool Select);
	virtual void __fastcall ClearItems(void);
	void __fastcall ItemsReordered(void);
	DYNAMIC void __fastcall ColRightClick(Vcl::Comctrls::TListColumn* Column, const System::Types::TPoint &Point);
	DYNAMIC void __fastcall Delete(Vcl::Comctrls::TListItem* Item);
	virtual bool __fastcall DoSelectByMask(bool Select);
	DYNAMIC bool __fastcall ExCanChange(Vcl::Comctrls::TListItem* Item, int Change, System::Word NewState, System::Word OldState);
	DYNAMIC void __fastcall InsertItem(Vcl::Comctrls::TListItem* Item);
	virtual Listviewcolproperties::TCustomListViewColProperties* __fastcall NewColProperties(void);
	virtual void __fastcall FocusSomething(void);
	virtual bool __fastcall EnableDragOnClick(void);
	void __fastcall FocusItem(Vcl::Comctrls::TListItem* Item);
	Vcl::Comctrls::TListItem* __fastcall GetItemFromHItem(const tagLVITEMW &Item);
	virtual bool __fastcall GetValid(void);
	virtual int __fastcall GetSelCount(void);
	void __fastcall DDBeforeDrag(void);
	DYNAMIC bool __fastcall CanEdit(Vcl::Comctrls::TListItem* Item);
	DYNAMIC void __fastcall DoEnter(void);
	
public:
	__fastcall virtual TCustomNortonLikeListView(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomNortonLikeListView(void);
	Vcl::Comctrls::TListItem* __fastcall ClosestUnselected(Vcl::Comctrls::TListItem* Item);
	HIDESBASE void __fastcall SelectAll(TSelectMode Mode)/* overload */;
	void __fastcall SelectCurrentItem(bool FocusNext);
	HIDESBASE Vcl::Comctrls::TListItem* __fastcall GetNextItem(Vcl::Comctrls::TListItem* StartItem, Vcl::Comctrls::TSearchDirection Direction, Vcl::Comctrls::TItemStates States);
	__property Listviewcolproperties::TCustomListViewColProperties* ColProperties = {read=FColProperties, write=FColProperties, stored=false};
	__property MultiSelect = {default=1};
	__property TNortonLikeMode NortonLike = {read=FNortonLike, write=FNortonLike, default=0};
	__property TSelectByMaskEvent OnSelectByMask = {read=FOnSelectByMask, write=FOnSelectByMask};
	__property int MarkedCount = {read=GetMarkedCount, nodefault};
	__property Vcl::Comctrls::TListItem* MarkedFile = {read=GetMarkedFile};
	__property bool Valid = {read=GetValid, nodefault};
	__property TSelectMethod LastSelectMethod = {read=FLastSelectMethod, nodefault};
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomNortonLikeListView(HWND ParentWindow) : Vcl::Comctrls::TCustomListView(ParentWindow) { }
	
};


class DELPHICLASS TNortonLikeListView;
class PASCALIMPLEMENTATION TNortonLikeListView : public TCustomNortonLikeListView
{
	typedef TCustomNortonLikeListView inherited;
	
__published:
	__property Align = {default=0};
	__property AllocBy = {default=0};
	__property Anchors = {default=3};
	__property BiDiMode;
	__property BorderStyle = {default=1};
	__property BorderWidth = {default=0};
	__property Checkboxes = {default=0};
	__property Color = {default=-16777211};
	__property ColumnClick = {default=1};
	__property Constraints;
	__property Ctl3D;
	__property Enabled = {default=1};
	__property Font;
	__property FlatScrollBars = {default=0};
	__property FullDrag = {default=0};
	__property GridLines = {default=0};
	__property HideSelection = {default=1};
	__property HotTrack = {default=0};
	__property HotTrackStyles = {default=0};
	__property IconOptions;
	__property Items;
	__property LargeImages;
	__property ReadOnly;
	__property RowSelect = {default=0};
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ShowColumnHeaders = {default=1};
	__property ShowHint;
	__property SmallImages;
	__property StateImages;
	__property TabOrder = {default=-1};
	__property TabStop = {default=0};
	__property ViewStyle = {default=0};
	__property Visible = {default=1};
	__property OnChange;
	__property OnChanging;
	__property OnClick;
	__property OnColumnClick;
	__property OnCustomDraw;
	__property OwnerDraw = {default=0};
	__property OnCustomDrawItem;
	__property OnCustomDrawSubItem;
	__property OwnerData = {default=0};
	__property OnGetImageIndex;
	__property OnCompare;
	__property OnData;
	__property OnDataFind;
	__property OnDataHint;
	__property OnDataStateChange;
	__property OnDblClick;
	__property OnDeletion;
	__property OnDrawItem;
	__property OnEdited;
	__property OnEditing;
	__property OnEndDock;
	__property OnEnter;
	__property OnExit;
	__property OnInsert;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnResize;
	__property OnStartDock;
	__property OnSelectItem;
	__property NortonLike = {default=0};
	__property OnSelectByMask;
	__property ColProperties;
public:
	/* TCustomNortonLikeListView.Create */ inline __fastcall virtual TNortonLikeListView(System::Classes::TComponent* AOwner) : TCustomNortonLikeListView(AOwner) { }
	/* TCustomNortonLikeListView.Destroy */ inline __fastcall virtual ~TNortonLikeListView(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TNortonLikeListView(HWND ParentWindow) : TCustomNortonLikeListView(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE void __fastcall Register(void);
}	/* namespace Nortonlikelistview */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_NORTONLIKELISTVIEW)
using namespace Nortonlikelistview;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// NortonlikelistviewHPP
