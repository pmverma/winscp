// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'IEComboBox.pas' rev: 27.00 (Windows)

#ifndef IecomboboxHPP
#define IecomboboxHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Vcl.StdCtrls.hpp>	// Pascal unit
#include <Vcl.Controls.hpp>	// Pascal unit
#include <Winapi.Messages.hpp>	// Pascal unit
#include <System.Types.hpp>	// Pascal unit
#include <System.Classes.hpp>	// Pascal unit
#include <Vcl.Graphics.hpp>	// Pascal unit
#include <System.UITypes.hpp>	// Pascal unit
#include <Vcl.Menus.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Iecombobox
{
//-- type declarations -------------------------------------------------------
typedef void __fastcall (__closure *TIECloseUpEvent)(System::TObject* Sender, bool Canceled);

class DELPHICLASS TIECustomComboBox;
class PASCALIMPLEMENTATION TIECustomComboBox : public Vcl::Stdctrls::TCustomComboBox
{
	typedef Vcl::Stdctrls::TCustomComboBox inherited;
	
private:
	int FDropDownFixedWidth;
	TIECloseUpEvent FOnCloseUp;
	bool FCanceled;
	bool FUseSystemImageList;
	Vcl::Controls::TImageList* FSystemImageList;
	int __fastcall GetTopIndex(void);
	void __fastcall SetTopIndex(int Value);
	void __fastcall SetUseSystemImageList(bool Value);
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Winapi::Messages::TMessage &Message);
	
protected:
	virtual void __fastcall DrawItem(int Index, const System::Types::TRect &Rect, Winapi::Windows::TOwnerDrawState State);
	virtual int __fastcall GetItemImage(int Index);
	virtual int __fastcall GetItemIndent(int Index);
	System::UnicodeString __fastcall GetItemText(int Index);
	virtual System::UnicodeString __fastcall GetItemTextEx(int Index, bool ForList);
	virtual Vcl::Controls::TImageList* __fastcall ImageList(void);
	HIDESBASE MESSAGE void __fastcall CNCommand(Winapi::Messages::TWMCommand &Message);
	virtual void __fastcall DoCloseUp(bool Canceled);
	DYNAMIC void __fastcall DropDown(void);
	int __fastcall GetMaxItemWidth(void);
	void __fastcall ResetItemHeight(void);
	
public:
	__fastcall virtual TIECustomComboBox(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TIECustomComboBox(void);
	int __fastcall GetTextWidth(System::UnicodeString Str);
	void __fastcall DoPreloadImages(void);
	__property int ItemImage[int Index] = {read=GetItemImage};
	__property int ItemIndent[int Index] = {read=GetItemIndent};
	__property System::UnicodeString ItemText[int Index] = {read=GetItemText};
	__property int TopIndex = {read=GetTopIndex, write=SetTopIndex, nodefault};
	__property bool UseSystemImageList = {read=FUseSystemImageList, write=SetUseSystemImageList, nodefault};
	__property int DropDownFixedWidth = {read=FDropDownFixedWidth, write=FDropDownFixedWidth, default=0};
	__property TIECloseUpEvent OnCloseUp = {read=FOnCloseUp, write=FOnCloseUp};
public:
	/* TWinControl.CreateParented */ inline __fastcall TIECustomComboBox(HWND ParentWindow) : Vcl::Stdctrls::TCustomComboBox(ParentWindow) { }
	
};


class DELPHICLASS TIEComboBox;
class PASCALIMPLEMENTATION TIEComboBox : public TIECustomComboBox
{
	typedef TIECustomComboBox inherited;
	
__published:
	__property DropDownFixedWidth = {default=0};
	__property OnCloseUp;
	__property Style = {default=0};
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property BiDiMode;
	__property Color = {default=-16777211};
	__property Constraints;
	__property Ctl3D;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property DropDownCount = {default=8};
	__property Enabled = {default=1};
	__property Font;
	__property ImeMode = {default=3};
	__property ImeName = {default=0};
	__property ItemHeight;
	__property Items;
	__property MaxLength = {default=0};
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=0};
	__property ParentCtl3D = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ShowHint;
	__property Sorted = {default=0};
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Text = {default=0};
	__property Visible = {default=1};
	__property OnChange;
	__property OnClick;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnDrawItem;
	__property OnDropDown;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnMeasureItem;
	__property OnStartDock;
	__property OnStartDrag;
public:
	/* TIECustomComboBox.Create */ inline __fastcall virtual TIEComboBox(System::Classes::TComponent* AOwner) : TIECustomComboBox(AOwner) { }
	/* TIECustomComboBox.Destroy */ inline __fastcall virtual ~TIEComboBox(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TIEComboBox(HWND ParentWindow) : TIECustomComboBox(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
static const System::Int8 IconWidth = System::Int8(0x10);
extern DELPHI_PACKAGE void __fastcall Register(void);
extern DELPHI_PACKAGE int __fastcall GetItemHeight(Vcl::Graphics::TFont* Font);
}	/* namespace Iecombobox */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_IECOMBOBOX)
using namespace Iecombobox;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// IecomboboxHPP
