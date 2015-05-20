// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'UpDownEdit.pas' rev: 27.00 (Windows)

#ifndef UpdowneditHPP
#define UpdowneditHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Winapi.Windows.hpp>	// Pascal unit
#include <Vcl.ComCtrls.hpp>	// Pascal unit
#include <Vcl.Controls.hpp>	// Pascal unit
#include <Vcl.ExtCtrls.hpp>	// Pascal unit
#include <System.Classes.hpp>	// Pascal unit
#include <Vcl.Graphics.hpp>	// Pascal unit
#include <Winapi.Messages.hpp>	// Pascal unit
#include <Vcl.Forms.hpp>	// Pascal unit
#include <Vcl.StdCtrls.hpp>	// Pascal unit
#include <Vcl.Menus.hpp>	// Pascal unit
#include <System.SysUtils.hpp>	// Pascal unit
#include <System.UITypes.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Updownedit
{
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TValueType : unsigned char { vtInt, vtFloat, vtHex };

typedef void __fastcall (__closure *TUpDownEditGetValue)(System::TObject* Sender, System::UnicodeString Text, System::Extended &Value, bool &Handled);

typedef void __fastcall (__closure *TUpDownEditSetValue)(System::TObject* Sender, System::Extended Value, System::UnicodeString &Text, bool &Handled);

class DELPHICLASS TUpDownEdit;
class PASCALIMPLEMENTATION TUpDownEdit : public Vcl::Stdctrls::TCustomEdit
{
	typedef Vcl::Stdctrls::TCustomEdit inherited;
	
private:
	System::Classes::TAlignment FAlignment;
	System::Extended FMinValue;
	System::Extended FMaxValue;
	System::Extended FIncrement;
	System::Byte FDecimal;
	bool FChanging;
	bool FEditorEnabled;
	TValueType FValueType;
	bool FArrowKeys;
	bool FButtonsVisible;
	System::Classes::TNotifyEvent FOnTopClick;
	System::Classes::TNotifyEvent FOnBottomClick;
	Vcl::Comctrls::TCustomUpDown* FUpDown;
	TUpDownEditGetValue FOnGetValue;
	TUpDownEditSetValue FOnSetValue;
	void __fastcall UpDownClick(System::TObject* Sender, Vcl::Comctrls::TUDBtnType Button);
	int __fastcall GetMinHeight(void);
	void __fastcall GetTextHeight(int &SysHeight, int &Height);
	System::Extended __fastcall GetValue(void);
	System::Extended __fastcall CheckValue(System::Extended NewValue);
	int __fastcall GetAsInteger(void);
	bool __fastcall IsIncrementStored(void);
	bool __fastcall IsMaxStored(void);
	bool __fastcall IsMinStored(void);
	bool __fastcall IsValueStored(void);
	void __fastcall SetArrowKeys(bool Value);
	void __fastcall SetAsInteger(int NewValue);
	void __fastcall SetValue(System::Extended NewValue);
	void __fastcall SetValueType(TValueType NewType);
	void __fastcall SetDecimal(System::Byte NewValue);
	int __fastcall GetButtonWidth(void);
	void __fastcall RecreateButton(void);
	void __fastcall ResizeButton(void);
	void __fastcall SetEditRect(void);
	HIDESBASE void __fastcall SetAlignment(System::Classes::TAlignment Value);
	void __fastcall SetButtonsVisible(bool Value);
	HIDESBASE MESSAGE void __fastcall WMSize(Winapi::Messages::TWMSize &Message);
	HIDESBASE MESSAGE void __fastcall CMEnter(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMExit(Winapi::Messages::TWMNoParams &Message);
	MESSAGE void __fastcall WMPaste(Winapi::Messages::TWMNoParams &Message);
	MESSAGE void __fastcall WMCut(Winapi::Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall CMCtl3DChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMEnabledChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMBiDiModeChanged(Winapi::Messages::TMessage &Message);
	
protected:
	DYNAMIC void __fastcall Change(void);
	virtual bool __fastcall IsValidChar(System::WideChar Key);
	virtual void __fastcall UpClick(System::TObject* Sender);
	virtual void __fastcall DownClick(System::TObject* Sender);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall CreateWnd(void);
	
public:
	__fastcall virtual TUpDownEdit(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TUpDownEdit(void);
	__property int AsInteger = {read=GetAsInteger, write=SetAsInteger, default=0};
	__property Text = {default=0};
	
__published:
	__property System::Classes::TAlignment Alignment = {read=FAlignment, write=SetAlignment, default=0};
	__property bool ArrowKeys = {read=FArrowKeys, write=SetArrowKeys, default=1};
	__property System::Byte Decimal = {read=FDecimal, write=SetDecimal, default=2};
	__property bool EditorEnabled = {read=FEditorEnabled, write=FEditorEnabled, default=1};
	__property System::Extended Increment = {read=FIncrement, write=FIncrement, stored=IsIncrementStored};
	__property System::Extended MaxValue = {read=FMaxValue, write=FMaxValue, stored=IsMaxStored};
	__property System::Extended MinValue = {read=FMinValue, write=FMinValue, stored=IsMinStored};
	__property TValueType ValueType = {read=FValueType, write=SetValueType, default=0};
	__property System::Extended Value = {read=GetValue, write=SetValue, stored=IsValueStored};
	__property bool ButtonsVisible = {read=FButtonsVisible, write=SetButtonsVisible, default=1};
	__property AutoSelect = {default=1};
	__property AutoSize = {default=1};
	__property BorderStyle = {default=1};
	__property Color = {default=-16777211};
	__property Ctl3D;
	__property DragCursor = {default=-12};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property Font;
	__property Anchors = {default=3};
	__property BiDiMode;
	__property Constraints;
	__property DragKind = {default=0};
	__property ParentBiDiMode = {default=1};
	__property ImeMode = {default=3};
	__property ImeName = {default=0};
	__property MaxLength = {default=0};
	__property ParentColor = {default=0};
	__property ParentCtl3D = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ReadOnly = {default=0};
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Visible = {default=1};
	__property System::Classes::TNotifyEvent OnBottomClick = {read=FOnBottomClick, write=FOnBottomClick};
	__property System::Classes::TNotifyEvent OnTopClick = {read=FOnTopClick, write=FOnTopClick};
	__property TUpDownEditGetValue OnGetValue = {read=FOnGetValue, write=FOnGetValue};
	__property TUpDownEditSetValue OnSetValue = {read=FOnSetValue, write=FOnSetValue};
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
	__property OnMouseWheelDown;
	__property OnMouseWheelUp;
	__property OnEndDock;
	__property OnStartDock;
public:
	/* TWinControl.CreateParented */ inline __fastcall TUpDownEdit(HWND ParentWindow) : Vcl::Stdctrls::TCustomEdit(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE void __fastcall Register(void);
}	/* namespace Updownedit */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_UPDOWNEDIT)
using namespace Updownedit;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// UpdowneditHPP
