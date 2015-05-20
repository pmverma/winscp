// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'IEListView.pas' rev: 27.00 (Windows)

#ifndef IelistviewHPP
#define IelistviewHPP

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
#include <Winapi.ActiveX.hpp>	// Pascal unit
#include <Winapi.CommCtrl.hpp>	// Pascal unit
#include <Vcl.ExtCtrls.hpp>	// Pascal unit
#include <Vcl.ImgList.hpp>	// Pascal unit
#include <Vcl.ComCtrls.hpp>	// Pascal unit
#include <NortonLikeListView.hpp>	// Pascal unit
#include <ListViewColProperties.hpp>	// Pascal unit
#include <System.UITypes.hpp>	// Pascal unit
#include <Vcl.Menus.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Ielistview
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TIEListViewColProperties;
class PASCALIMPLEMENTATION TIEListViewColProperties : public Listviewcolproperties::TCustomListViewColProperties
{
	typedef Listviewcolproperties::TCustomListViewColProperties inherited;
	
protected:
	bool __fastcall GetSortAscending(void);
	void __fastcall SetSortColumn(int Value);
	int __fastcall GetSortColumn(void);
	virtual System::UnicodeString __fastcall GetSortStr(void);
	void __fastcall SetSortAscending(bool Value);
	virtual void __fastcall SetSortStr(System::UnicodeString Value);
	virtual System::UnicodeString __fastcall GetParamsStr(void);
	virtual void __fastcall SetParamsStr(System::UnicodeString Value);
	
public:
	__fastcall TIEListViewColProperties(Vcl::Comctrls::TCustomListView* ListView, int ColCount);
	__property bool SortAscending = {read=GetSortAscending, write=SetSortAscending, default=1};
	__property int SortColumn = {read=GetSortColumn, write=SetSortColumn, nodefault};
	__property System::UnicodeString SortStr = {read=GetSortStr, write=SetSortStr, stored=false};
public:
	/* TCustomListViewColProperties.Destroy */ inline __fastcall virtual ~TIEListViewColProperties(void) { }
	
};


enum DECLSPEC_DENUM TDateTimeDisplay : unsigned char { dtdDateTimeSec, dtdDateTime, dtdDate };

class DELPHICLASS TCustomIEListView;
typedef void __fastcall (__closure *TListViewSecondaryColumnHeaderEvent)(TCustomIEListView* Sender, int Index, int &SecondaryColumn);

class PASCALIMPLEMENTATION TCustomIEListView : public Nortonlikelistview::TCustomNortonLikeListView
{
	typedef Nortonlikelistview::TCustomNortonLikeListView inherited;
	
private:
	int FSortColumn;
	bool FSortAscending;
	bool FShowColumnIcon;
	Vcl::Forms::TCustomForm* FParentForm;
	System::Classes::TNotifyEvent FOnHeaderEndDrag;
	System::Classes::TNotifyEvent FOnHeaderEndTrack;
	TListViewSecondaryColumnHeaderEvent FOnSecondaryColumnHeader;
	System::UnicodeString FDateTimeFormatStr;
	System::UnicodeString FDateFormatStr;
	TDateTimeDisplay FDateTimeDisplay;
	Vcl::Controls::TDragImageList* FDragImageList;
	
protected:
	virtual void __fastcall ColPropertiesChange(System::TObject* Sender);
	virtual void __fastcall SetShowColumnIcon(bool Value);
	virtual void __fastcall SetSortColumn(int Value);
	virtual void __fastcall SetSortAscending(bool Value);
	virtual void __fastcall SortItems(void);
	virtual void __fastcall SetViewStyle(Vcl::Comctrls::TViewStyle Value);
	virtual void __fastcall SetDateTimeDisplay(TDateTimeDisplay Value);
	virtual void __fastcall SetDateTimeFormatString(void);
	virtual void __fastcall HeaderEndDrag(System::TObject* Sender);
	int __fastcall SecondaryColumnHeader(int Index);
	virtual Listviewcolproperties::TCustomListViewColProperties* __fastcall NewColProperties(void);
	virtual bool __fastcall SortAscendingByDefault(int Index);
	virtual void __fastcall CreateWnd(void);
	DYNAMIC void __fastcall ColClick(Vcl::Comctrls::TListColumn* Column);
	HIDESBASE MESSAGE void __fastcall WMNotify(Winapi::Messages::TWMNotify &Msg);
	
public:
	__fastcall virtual TCustomIEListView(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomIEListView(void);
	virtual void __fastcall SetColumnImages(void);
	__property Vcl::Controls::TDragImageList* DragImageList = {read=FDragImageList};
	__property Vcl::Forms::TCustomForm* ParentForm = {read=FParentForm};
	__property System::UnicodeString DateTimeFormatStr = {read=FDateTimeFormatStr, write=FDateTimeFormatStr, stored=false};
	__property System::UnicodeString DateFormatStr = {read=FDateFormatStr};
	__property int SortColumn = {read=FSortColumn, write=SetSortColumn, nodefault};
	__property bool ShowColumnIcon = {read=FShowColumnIcon, write=SetShowColumnIcon, default=1};
	__property bool SortAscending = {read=FSortAscending, write=SetSortAscending, default=1};
	__property TListViewSecondaryColumnHeaderEvent OnSecondaryColumnHeader = {read=FOnSecondaryColumnHeader, write=FOnSecondaryColumnHeader};
	
__published:
	__property TDateTimeDisplay DateTimeDisplay = {read=FDateTimeDisplay, write=SetDateTimeDisplay, default=0};
	__property System::Classes::TNotifyEvent OnHeaderEndDrag = {read=FOnHeaderEndDrag, write=FOnHeaderEndDrag};
	__property System::Classes::TNotifyEvent OnHeaderEndTrack = {read=FOnHeaderEndTrack, write=FOnHeaderEndTrack};
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
	__property DoubleBuffered;
	__property Enabled = {default=1};
	__property Font;
	__property FlatScrollBars = {default=0};
	__property FullDrag = {default=0};
	__property GridLines = {default=0};
	__property HideSelection = {default=1};
	__property HotTrack = {default=0};
	__property HotTrackStyles = {default=0};
	__property IconOptions;
	__property ReadOnly = {default=0};
	__property RowSelect = {default=0};
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=0};
	__property ParentDoubleBuffered = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ShowColumnHeaders = {default=1};
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property ViewStyle = {default=0};
	__property Visible = {default=1};
	__property OnChange;
	__property OnChanging;
	__property OnClick;
	__property OnColumnClick;
	__property OnColumnRightClick;
	__property OnCustomDraw;
	__property OwnerDraw = {default=0};
	__property OnCustomDrawItem;
	__property OnCustomDrawSubItem;
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
	__property NortonLike = {default=0};
	__property OnSelectByMask;
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomIEListView(HWND ParentWindow) : Nortonlikelistview::TCustomNortonLikeListView(ParentWindow) { }
	
};


class DELPHICLASS TIEListView;
class PASCALIMPLEMENTATION TIEListView : public TCustomIEListView
{
	typedef TCustomIEListView inherited;
	
__published:
	__property Action;
	__property Align = {default=0};
	__property AllocBy = {default=0};
	__property Anchors = {default=3};
	__property BevelEdges = {default=15};
	__property BevelInner = {index=0, default=2};
	__property BevelOuter = {index=1, default=1};
	__property BevelKind = {default=0};
	__property BevelWidth = {default=1};
	__property BiDiMode;
	__property BorderStyle = {default=1};
	__property BorderWidth = {default=0};
	__property Checkboxes = {default=0};
	__property Color = {default=-16777211};
	__property Columns;
	__property ColumnClick = {default=1};
	__property Constraints;
	__property Ctl3D;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property Font;
	__property FlatScrollBars = {default=0};
	__property FullDrag = {default=0};
	__property GridLines = {default=0};
	__property HideSelection = {default=1};
	__property HotTrack = {default=0};
	__property HotTrackStyles = {default=0};
	__property HoverTime = {default=-1};
	__property IconOptions;
	__property Items;
	__property LargeImages;
	__property MultiSelect = {default=1};
	__property OwnerData = {default=0};
	__property OwnerDraw = {default=0};
	__property ReadOnly = {default=0};
	__property RowSelect = {default=0};
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=0};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ShowColumnHeaders = {default=1};
	__property ShowWorkAreas = {default=0};
	__property ShowHint;
	__property SmallImages;
	__property SortType = {default=0};
	__property StateImages;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property ViewStyle = {default=0};
	__property Visible = {default=1};
	__property OnAdvancedCustomDraw;
	__property OnAdvancedCustomDrawItem;
	__property OnAdvancedCustomDrawSubItem;
	__property OnChange;
	__property OnChanging;
	__property OnClick;
	__property OnColumnClick;
	__property OnColumnDragged;
	__property OnColumnRightClick;
	__property OnCompare;
	__property OnContextPopup;
	__property OnCustomDraw;
	__property OnCustomDrawItem;
	__property OnCustomDrawSubItem;
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
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnGetImageIndex;
	__property OnGetSubItemImage;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnInfoTip;
	__property OnInsert;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnResize;
	__property OnSelectItem;
	__property OnStartDock;
	__property OnStartDrag;
	__property OnSecondaryColumnHeader;
public:
	/* TCustomIEListView.Create */ inline __fastcall virtual TIEListView(System::Classes::TComponent* AOwner) : TCustomIEListView(AOwner) { }
	/* TCustomIEListView.Destroy */ inline __fastcall virtual ~TIEListView(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TIEListView(HWND ParentWindow) : TCustomIEListView(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE Vcl::Controls::TDragImageList* GlobalDragImageList;
extern DELPHI_PACKAGE void __fastcall Register(void);
}	/* namespace Ielistview */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_IELISTVIEW)
using namespace Ielistview;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// IelistviewHPP
