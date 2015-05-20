// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'TBX.pas' rev: 27.00 (Windows)

#ifndef TbxHPP
#define TbxHPP

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
#include <System.SysUtils.hpp>	// Pascal unit
#include <Vcl.Controls.hpp>	// Pascal unit
#include <Vcl.Graphics.hpp>	// Pascal unit
#include <Vcl.ImgList.hpp>	// Pascal unit
#include <Vcl.Forms.hpp>	// Pascal unit
#include <TB2Item.hpp>	// Pascal unit
#include <TB2Dock.hpp>	// Pascal unit
#include <TB2Toolbar.hpp>	// Pascal unit
#include <TB2Anim.hpp>	// Pascal unit
#include <TBXUtils.hpp>	// Pascal unit
#include <TBXThemes.hpp>	// Pascal unit
#include <System.UITypes.hpp>	// Pascal unit
#include <System.Types.hpp>	// Pascal unit
#include <Vcl.Menus.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Tbx
{
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TTextWrapping : unsigned char { twNone, twEndEllipsis, twPathEllipsis, twWrap };

typedef TTextWrapping TTextTruncation;

enum DECLSPEC_DENUM TTriState : unsigned char { tsDefault, tsTrue, tsFalse };

typedef System::Word TFontSize;

class DELPHICLASS TFontSettings;
class PASCALIMPLEMENTATION TFontSettings : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	TTriState FBold;
	TTriState FItalic;
	TTriState FUnderline;
	TTriState FStrikeOut;
	TFontSize FSize;
	System::Uitypes::TColor FColor;
	System::Uitypes::TFontName FName;
	System::Classes::TNotifyEvent FOnChange;
	void __fastcall SetBold(TTriState Value);
	void __fastcall SetColor(System::Uitypes::TColor Value);
	void __fastcall SetItalic(TTriState Value);
	void __fastcall SetName(const System::Uitypes::TFontName Value);
	void __fastcall SetSize(TFontSize Value);
	void __fastcall SetStrikeOut(TTriState Value);
	void __fastcall SetUnderline(TTriState Value);
	
protected:
	void __fastcall Modified(void);
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	
public:
	__fastcall TFontSettings(void);
	void __fastcall Apply(Vcl::Graphics::TFont* Font)/* overload */;
	void __fastcall Apply(tagLOGFONTW &LF, System::Uitypes::TColor &FontColor)/* overload */;
	virtual void __fastcall Assign(System::Classes::TPersistent* Src);
	HFONT __fastcall CreateTransformedFont(HFONT Src, System::Uitypes::TColor &FontColor);
	
__published:
	__property TTriState Bold = {read=FBold, write=SetBold, default=0};
	__property TTriState Italic = {read=FItalic, write=SetItalic, default=0};
	__property TTriState Underline = {read=FUnderline, write=SetUnderline, default=0};
	__property TTriState StrikeOut = {read=FStrikeOut, write=SetStrikeOut, default=0};
	__property TFontSize Size = {read=FSize, write=SetSize, default=100};
	__property System::Uitypes::TColor Color = {read=FColor, write=SetColor, default=536870911};
	__property System::Uitypes::TFontName Name = {read=FName, write=SetName};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TFontSettings(void) { }
	
};


struct DECLSPEC_DRECORD TTBXPopupPositionInfo
{
public:
	Tb2item::TTBCustomItem* Item;
	Tb2item::TTBView* ParentView;
	Tb2item::TTBItemViewer* ParentViewer;
	bool PositionAsSubmenu;
	System::Types::TPoint APopupPoint;
	Tb2item::TTBPopupAlignment Alignment;
	Tb2item::TTBPopupWindow* PopupWindow;
	int X;
	int Y;
	System::Types::TRect ParentItemRect;
	int AppFlags;
	int AppData;
};


typedef System::TMetaClass* TTBXThemeClass;

typedef void __fastcall (__closure *TAdjustFontEvent)(Tb2item::TTBCustomItem* Item, Tb2item::TTBItemViewer* Viewer, Vcl::Graphics::TFont* Font, int StateFlags);

typedef void __fastcall (__closure *TDrawImageEvent)(Tb2item::TTBCustomItem* Item, Tb2item::TTBItemViewer* Viewer, Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &ImageRect, const System::Types::TPoint &ImageOffset, int StateFlags);

class DELPHICLASS TTBXCustomItem;
class PASCALIMPLEMENTATION TTBXCustomItem : public Tb2item::TTBCustomItem
{
	typedef Tb2item::TTBCustomItem inherited;
	
private:
	bool FAlwaysSelectFirst;
	TFontSettings* FFontSettings;
	Tbxthemes::TTBXItemLayout FLayout;
	int FMinHeight;
	int FMinWidth;
	bool FToolBoxPopup;
	TAdjustFontEvent FOnAdjustFont;
	TDrawImageEvent FOnDrawImage;
	void __fastcall FontSettingsChanged(System::TObject* Sender);
	bool __fastcall GetStretch(void);
	void __fastcall SetFontSettings(TFontSettings* Value);
	void __fastcall SetLayout(Tbxthemes::TTBXItemLayout Value);
	void __fastcall SetMinHeight(int Value);
	void __fastcall SetMinWidth(int Value);
	void __fastcall SetStretch(bool Value);
	
protected:
	virtual Tb2item::TTBPopupWindow* __fastcall CreatePopup(Tb2item::TTBView* const ParentView, Tb2item::TTBItemViewer* const ParentViewer, const bool PositionAsSubmenu, const bool SelectFirstItem, const bool Customizing, const System::Types::TPoint &APopupPoint, const Tb2item::TTBPopupAlignment Alignment);
	virtual Tb2item::TTBItemViewerClass __fastcall GetItemViewerClass(Tb2item::TTBView* AView);
	virtual void __fastcall GetPopupPosition(Tb2item::TTBView* ParentView, Tb2item::TTBPopupWindow* PopupWindow, Tb2item::TTBPopupPositionRec &PopupPositionRec);
	virtual Tb2item::TTBPopupWindowClass __fastcall GetPopupWindowClass(void);
	__property bool ToolBoxPopup = {read=FToolBoxPopup, write=FToolBoxPopup, default=0};
	__property TAdjustFontEvent OnAdjustFont = {read=FOnAdjustFont, write=FOnAdjustFont};
	__property TDrawImageEvent OnDrawImage = {read=FOnDrawImage, write=FOnDrawImage};
	
public:
	__fastcall virtual TTBXCustomItem(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TTBXCustomItem(void);
	void __fastcall Invalidate(void);
	__property bool AlwaysSelectFirst = {read=FAlwaysSelectFirst, write=FAlwaysSelectFirst, default=0};
	__property TFontSettings* FontSettings = {read=FFontSettings, write=SetFontSettings};
	__property Tbxthemes::TTBXItemLayout Layout = {read=FLayout, write=SetLayout, default=0};
	__property int MinHeight = {read=FMinHeight, write=SetMinHeight, default=0};
	__property int MinWidth = {read=FMinWidth, write=SetMinWidth, default=0};
	__property bool Stretch = {read=GetStretch, write=SetStretch, default=0};
};


class DELPHICLASS TTBXItem;
class PASCALIMPLEMENTATION TTBXItem : public TTBXCustomItem
{
	typedef TTBXCustomItem inherited;
	
__published:
	__property Action;
	__property AutoCheck = {default=0};
	__property Caption = {default=0};
	__property Checked = {default=0};
	__property DisplayMode = {default=0};
	__property Enabled = {default=1};
	__property FontSettings;
	__property GroupIndex = {default=0};
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property Hint = {default=0};
	__property ImageIndex = {default=-1};
	__property Images;
	__property InheritOptions = {default=1};
	__property Layout = {default=0};
	__property MaskOptions = {default=0};
	__property MinHeight = {default=0};
	__property MinWidth = {default=0};
	__property Options = {default=0};
	__property RadioItem = {default=0};
	__property ShortCut = {default=0};
	__property Stretch = {default=0};
	__property Visible = {default=1};
	__property OnAdjustFont;
	__property OnDrawImage;
	__property OnClick;
	__property OnSelect;
public:
	/* TTBXCustomItem.Create */ inline __fastcall virtual TTBXItem(System::Classes::TComponent* AOwner) : TTBXCustomItem(AOwner) { }
	/* TTBXCustomItem.Destroy */ inline __fastcall virtual ~TTBXItem(void) { }
	
};


class DELPHICLASS TTBXItemViewer;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TTBXItemViewer : public Tb2item::TTBItemViewer
{
	typedef Tb2item::TTBItemViewer inherited;
	
private:
	bool FWide;
	
protected:
	virtual void __fastcall DoPaintCaption(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &ClientAreaRect, System::Types::TRect &CaptionRect, bool IsTextRotated, bool &PaintDefault);
	virtual int __fastcall GetAccRole(void);
	DYNAMIC System::Types::TSize __fastcall GetImageSize(void);
	virtual int __fastcall GetItemType(void);
	DYNAMIC unsigned __fastcall GetTextFlags(void);
	DYNAMIC System::Types::TSize __fastcall GetTextSize(Vcl::Graphics::TCanvas* Canvas, const System::UnicodeString Text, unsigned TextFlags, bool Rotated, int StateFlags);
	virtual bool __fastcall IsToolbarSize(void);
	virtual void __fastcall CalcSize(Vcl::Graphics::TCanvas* const Canvas, int &AWidth, int &AHeight);
	virtual void __fastcall DrawItemImage(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &ARect, const Tbxthemes::TTBXItemInfo &ItemInfo);
	virtual void __fastcall DoAdjustFont(Vcl::Graphics::TFont* AFont, int StateFlags);
	virtual bool __fastcall GetImageShown(void);
	virtual bool __fastcall IsPtInButtonPart(int X, int Y);
	virtual void __fastcall MouseUp(int X, int Y, bool MouseWasDownOnMenu);
	virtual void __fastcall Paint(Vcl::Graphics::TCanvas* const Canvas, const System::Types::TRect &ClientAreaRect, bool IsHoverItem, bool IsPushed, bool UseDisabledShadow);
	__property bool Wide = {read=FWide, write=FWide, default=1};
	
public:
	__fastcall virtual TTBXItemViewer(Tb2item::TTBView* AView, Tb2item::TTBCustomItem* AItem, int AGroupLevel);
	virtual bool __fastcall IsToolbarStyle(void);
public:
	/* TTBItemViewer.Destroy */ inline __fastcall virtual ~TTBXItemViewer(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS TTBXSubmenuItem;
class PASCALIMPLEMENTATION TTBXSubmenuItem : public TTBXCustomItem
{
	typedef TTBXCustomItem inherited;
	
private:
	bool __fastcall GetDropdownCombo(void);
	void __fastcall SetDropdownCombo(bool Value);
	
public:
	__fastcall virtual TTBXSubmenuItem(System::Classes::TComponent* AOwner);
	
__published:
	__property Action;
	__property AlwaysSelectFirst = {default=0};
	__property AutoCheck = {default=0};
	__property Caption = {default=0};
	__property Checked = {default=0};
	__property DisplayMode = {default=0};
	__property bool DropdownCombo = {read=GetDropdownCombo, write=SetDropdownCombo, default=0};
	__property Enabled = {default=1};
	__property FontSettings;
	__property GroupIndex = {default=0};
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property Hint = {default=0};
	__property ImageIndex = {default=-1};
	__property Images;
	__property InheritOptions = {default=1};
	__property Layout = {default=0};
	__property LinkSubitems;
	__property MaskOptions = {default=0};
	__property MinHeight = {default=0};
	__property MinWidth = {default=0};
	__property Options = {default=0};
	__property RadioItem = {default=0};
	__property ShortCut = {default=0};
	__property Stretch = {default=0};
	__property SubMenuImages;
	__property ToolBoxPopup = {default=0};
	__property Visible = {default=1};
	__property OnAdjustFont;
	__property OnDrawImage;
	__property OnClick;
	__property OnPopup;
	__property OnSelect;
public:
	/* TTBXCustomItem.Destroy */ inline __fastcall virtual ~TTBXSubmenuItem(void) { }
	
};


class DELPHICLASS TTBXSeparatorItem;
class PASCALIMPLEMENTATION TTBXSeparatorItem : public Tb2item::TTBSeparatorItem
{
	typedef Tb2item::TTBSeparatorItem inherited;
	
private:
	int FSize;
	void __fastcall SetSize(int Value);
	
public:
	__fastcall virtual TTBXSeparatorItem(System::Classes::TComponent* AOwner);
	virtual Tb2item::TTBItemViewerClass __fastcall GetItemViewerClass(Tb2item::TTBView* AView);
	
__published:
	__property int Size = {read=FSize, write=SetSize, default=-1};
	__property MaskOptions = {default=0};
	__property Options = {default=0};
public:
	/* TTBCustomItem.Destroy */ inline __fastcall virtual ~TTBXSeparatorItem(void) { }
	
};


class DELPHICLASS TTBXSeparatorItemViewer;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TTBXSeparatorItemViewer : public Tb2item::TTBSeparatorItemViewer
{
	typedef Tb2item::TTBSeparatorItemViewer inherited;
	
protected:
	virtual void __fastcall CalcSize(Vcl::Graphics::TCanvas* const Canvas, int &AWidth, int &AHeight);
	virtual void __fastcall Paint(Vcl::Graphics::TCanvas* const Canvas, const System::Types::TRect &ClientAreaRect, bool IsHoverItem, bool IsPushed, bool UseDisabledShadow);
	virtual bool __fastcall IsToolbarSize(void);
	
public:
	virtual bool __fastcall IsToolbarStyle(void);
public:
	/* TTBItemViewer.Create */ inline __fastcall virtual TTBXSeparatorItemViewer(Tb2item::TTBView* AView, Tb2item::TTBCustomItem* AItem, int AGroupLevel) : Tb2item::TTBSeparatorItemViewer(AView, AItem, AGroupLevel) { }
	/* TTBItemViewer.Destroy */ inline __fastcall virtual ~TTBXSeparatorItemViewer(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS TTBXPopupWindow;
class PASCALIMPLEMENTATION TTBXPopupWindow : public Tb2item::TTBPopupWindow
{
	typedef Tb2item::TTBPopupWindow inherited;
	
private:
	System::Types::TRect FControlRect;
	Tbxutils::TShadows* FShadows;
	HIDESBASE MESSAGE void __fastcall CMHintShow(Vcl::Controls::TCMHintShow &Message);
	HIDESBASE MESSAGE void __fastcall CMShowingChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall TBMGetViewType(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMNCCalcSize(Winapi::Messages::TWMNCCalcSize &Message);
	HIDESBASE MESSAGE void __fastcall WMNCPaint(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMPrint(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Winapi::Messages::TWMEraseBkgnd &Message);
	HIDESBASE MESSAGE void __fastcall WMWindowPosChanged(Winapi::Messages::TWMWindowPosMsg &Message);
	MESSAGE void __fastcall WMTB2kPopupShowing(Winapi::Messages::TMessage &Message);
	
protected:
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall CreateShadow(void);
	virtual void __fastcall DestroyShadow(void);
	DYNAMIC System::Types::TPoint __fastcall GetNCSize(void);
	virtual bool __fastcall GetShowShadow(void);
	DYNAMIC Tb2item::TTBViewClass __fastcall GetViewClass(void);
	virtual void __fastcall PaintScrollArrows(void);
	
public:
	__fastcall virtual ~TTBXPopupWindow(void);
	System::Uitypes::TColor __fastcall GetFillColor(void);
public:
	/* TTBPopupWindow.CreatePopupWindow */ inline __fastcall virtual TTBXPopupWindow(System::Classes::TComponent* AOwner, Tb2item::TTBView* const AParentView, Tb2item::TTBCustomItem* const AItem, const bool ACustomizing) : Tb2item::TTBPopupWindow(AOwner, AParentView, AItem, ACustomizing) { }
	
public:
	/* TCustomControl.Create */ inline __fastcall virtual TTBXPopupWindow(System::Classes::TComponent* AOwner) : Tb2item::TTBPopupWindow(AOwner) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TTBXPopupWindow(HWND ParentWindow) : Tb2item::TTBPopupWindow(ParentWindow) { }
	
};


class DELPHICLASS TTBXPopupView;
class PASCALIMPLEMENTATION TTBXPopupView : public Tb2item::TTBPopupView
{
	typedef Tb2item::TTBPopupView inherited;
	
public:
	/* TTBView.CreateView */ inline __fastcall virtual TTBXPopupView(System::Classes::TComponent* AOwner, Tb2item::TTBView* AParentView, Tb2item::TTBCustomItem* AParentItem, Vcl::Controls::TWinControl* AWindow, bool AIsToolbar, bool ACustomizing, bool AUsePriorityList) : Tb2item::TTBPopupView(AOwner, AParentView, AParentItem, AWindow, AIsToolbar, ACustomizing, AUsePriorityList) { }
	/* TTBView.Destroy */ inline __fastcall virtual ~TTBXPopupView(void) { }
	
public:
	/* TComponent.Create */ inline __fastcall virtual TTBXPopupView(System::Classes::TComponent* AOwner) : Tb2item::TTBPopupView(AOwner) { }
	
};


class DELPHICLASS TTBXToolbarView;
class PASCALIMPLEMENTATION TTBXToolbarView : public Tb2toolbar::TTBToolbarView
{
	typedef Tb2toolbar::TTBToolbarView inherited;
	
protected:
	virtual void __fastcall GetMargins(Tb2item::TTBViewOrientation AOrientation, System::Types::TRect &Margins);
public:
	/* TTBToolbarView.Create */ inline __fastcall virtual TTBXToolbarView(System::Classes::TComponent* AOwner) : Tb2toolbar::TTBToolbarView(AOwner) { }
	
public:
	/* TTBView.CreateView */ inline __fastcall virtual TTBXToolbarView(System::Classes::TComponent* AOwner, Tb2item::TTBView* AParentView, Tb2item::TTBCustomItem* AParentItem, Vcl::Controls::TWinControl* AWindow, bool AIsToolbar, bool ACustomizing, bool AUsePriorityList) : Tb2toolbar::TTBToolbarView(AOwner, AParentView, AParentItem, AWindow, AIsToolbar, ACustomizing, AUsePriorityList) { }
	/* TTBView.Destroy */ inline __fastcall virtual ~TTBXToolbarView(void) { }
	
};


enum DECLSPEC_DENUM TTBXItemTransparency : unsigned char { itAuto, itEnable, itDisable };

class DELPHICLASS TTBXToolbar;
class PASCALIMPLEMENTATION TTBXToolbar : public Tb2toolbar::TTBCustomToolbar
{
	typedef Tb2toolbar::TTBCustomToolbar inherited;
	
private:
	System::Uitypes::TColor FEffectiveColor;
	TTBXItemTransparency FItemTransparency;
	int FSnapDistance;
	HIDESBASE MESSAGE void __fastcall CMColorChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMControlChange(Vcl::Controls::TCMControlChange &Message);
	HIDESBASE MESSAGE void __fastcall CMParentColorChanged(Winapi::Messages::TMessage &Message);
	void __fastcall SetItemTransparency(const TTBXItemTransparency Value);
	void __fastcall SetSnapDistance(int Value);
	MESSAGE void __fastcall TBMGetViewType(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall TBMGetEffectiveColor(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall TBMThemeChange(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Winapi::Messages::TWMEraseBkgnd &Message);
	HIDESBASE MESSAGE void __fastcall WMSize(Winapi::Messages::TWMSize &Message);
	
protected:
	virtual void __fastcall DrawNCArea(const bool DrawToDC, const HDC ADC, const HRGN Clip);
	DYNAMIC Tb2toolbar::TTBChevronItemClass __fastcall GetChevronItemClass(void);
	DYNAMIC Tb2dock::TTBFloatingWindowParentClass __fastcall GetFloatingWindowParentClass(void);
	virtual void __fastcall GetToolbarInfo(/* out */ Tbxthemes::TTBXToolbarInfo &ToolbarInfo);
	DYNAMIC Tb2toolbar::TTBToolbarViewClass __fastcall GetViewClass(void);
	virtual void __fastcall Loaded(void);
	virtual void __fastcall SetParent(Vcl::Controls::TWinControl* AParent);
	void __fastcall UpdateEffectiveColor(void);
	
public:
	__fastcall virtual TTBXToolbar(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TTBXToolbar(void);
	bool __fastcall Embedded(void);
	virtual System::Types::TPoint __fastcall GetFloatingBorderSize(void);
	void __fastcall UpdateChildColors(void);
	__property System::Uitypes::TColor EffectiveColor = {read=FEffectiveColor, nodefault};
	
__published:
	__property ActivateParent = {default=1};
	__property Align = {default=0};
	__property AutoResize = {default=1};
	__property BorderStyle = {default=1};
	__property Caption = {default=0};
	__property ChevronHint = {default=0};
	__property ChevronMoveItems = {default=1};
	__property ChevronPriorityForNewItems = {default=0};
	__property CloseButton = {default=1};
	__property CloseButtonWhenDocked = {default=0};
	__property CurrentDock;
	__property DblClickUndock = {default=0};
	__property DefaultDock;
	__property DockableTo = {default=15};
	__property DockMode = {default=0};
	__property DockPos = {default=-1};
	__property DockRow = {default=0};
	__property DragHandleStyle = {default=2};
	__property FloatingMode = {default=0};
	__property Font;
	__property FullSize = {default=0};
	__property HideWhenInactive = {default=1};
	__property Images;
	__property Items;
	__property TTBXItemTransparency ItemTransparency = {read=FItemTransparency, write=SetItemTransparency, default=0};
	__property LastDock;
	__property LinkSubitems;
	__property MenuBar = {default=0};
	__property Options = {default=0};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ProcessShortCuts = {default=0};
	__property Resizable = {default=1};
	__property ShowCaption = {default=1};
	__property ShowHint;
	__property ShrinkMode = {default=2};
	__property SmoothDrag = {default=1};
	__property int SnapDistance = {read=FSnapDistance, write=SetSnapDistance, default=0};
	__property Stretch = {default=0};
	__property SystemFont = {default=1};
	__property TabOrder = {default=-1};
	__property TabStop = {default=0};
	__property UpdateActions = {default=1};
	__property UseLastDock = {default=1};
	__property Visible = {default=1};
	__property Color = {default=536870911};
	__property OnClose;
	__property OnCloseQuery;
	__property OnContextPopup;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnMove;
	__property OnRecreated;
	__property OnRecreating;
	__property OnDockChanged;
	__property OnDockChanging;
	__property OnDockChangingHidden;
	__property OnResize;
	__property OnShortCut;
	__property OnVisibleChanged;
	__property OnGetBaseSize;
public:
	/* TWinControl.CreateParented */ inline __fastcall TTBXToolbar(HWND ParentWindow) : Tb2toolbar::TTBCustomToolbar(ParentWindow) { }
	
};


class DELPHICLASS TTBXChevronItem;
class PASCALIMPLEMENTATION TTBXChevronItem : public Tb2toolbar::TTBChevronItem
{
	typedef Tb2toolbar::TTBChevronItem inherited;
	
public:
	virtual void __fastcall GetPopupPosition(Tb2item::TTBView* ParentView, Tb2item::TTBPopupWindow* PopupWindow, Tb2item::TTBPopupPositionRec &PopupPositionRec);
	virtual Tb2item::TTBPopupWindowClass __fastcall GetPopupWindowClass(void);
	virtual Tb2item::TTBItemViewerClass __fastcall GetItemViewerClass(Tb2item::TTBView* AView);
public:
	/* TTBChevronItem.Create */ inline __fastcall virtual TTBXChevronItem(System::Classes::TComponent* AOwner) : Tb2toolbar::TTBChevronItem(AOwner) { }
	
public:
	/* TTBCustomItem.Destroy */ inline __fastcall virtual ~TTBXChevronItem(void) { }
	
};


class DELPHICLASS TTBXChevronItemViewer;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TTBXChevronItemViewer : public Tb2item::TTBItemViewer
{
	typedef Tb2item::TTBItemViewer inherited;
	
protected:
	virtual void __fastcall Paint(Vcl::Graphics::TCanvas* const Canvas, const System::Types::TRect &ClientAreaRect, bool IsHoverItem, bool IsPushed, bool UseDisabledShadow);
public:
	/* TTBItemViewer.Create */ inline __fastcall virtual TTBXChevronItemViewer(Tb2item::TTBView* AView, Tb2item::TTBCustomItem* AItem, int AGroupLevel) : Tb2item::TTBItemViewer(AView, AItem, AGroupLevel) { }
	/* TTBItemViewer.Destroy */ inline __fastcall virtual ~TTBXChevronItemViewer(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS TTBXChevronPopupWindow;
class PASCALIMPLEMENTATION TTBXChevronPopupWindow : public TTBXPopupWindow
{
	typedef TTBXPopupWindow inherited;
	
public:
	/* TTBXPopupWindow.Destroy */ inline __fastcall virtual ~TTBXChevronPopupWindow(void) { }
	
public:
	/* TTBPopupWindow.CreatePopupWindow */ inline __fastcall virtual TTBXChevronPopupWindow(System::Classes::TComponent* AOwner, Tb2item::TTBView* const AParentView, Tb2item::TTBCustomItem* const AItem, const bool ACustomizing) : TTBXPopupWindow(AOwner, AParentView, AItem, ACustomizing) { }
	
public:
	/* TCustomControl.Create */ inline __fastcall virtual TTBXChevronPopupWindow(System::Classes::TComponent* AOwner) : TTBXPopupWindow(AOwner) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TTBXChevronPopupWindow(HWND ParentWindow) : TTBXPopupWindow(ParentWindow) { }
	
};


class DELPHICLASS TTBXRootItem;
class PASCALIMPLEMENTATION TTBXRootItem : public Tb2item::TTBRootItem
{
	typedef Tb2item::TTBRootItem inherited;
	
private:
	System::Types::TRect FPopupControlRect;
	
protected:
	virtual Tb2item::TTBPopupWindow* __fastcall CreatePopupEx(bool SelectFirstItem, const System::Types::TRect &AControlRect, Tb2item::TTBPopupAlignment Alignment);
	virtual Tb2item::TTBPopupWindowClass __fastcall GetPopupWindowClass(void);
	virtual void __fastcall GetPopupPosition(Tb2item::TTBView* ParentView, Tb2item::TTBPopupWindow* PopupWindow, Tb2item::TTBPopupPositionRec &PopupPositionRec);
	Tb2item::TTBCustomItem* __fastcall OpenPopupEx(const bool SelectFirstItem, const bool TrackRightButton, const System::Types::TRect &ControlRect, const Tb2item::TTBPopupAlignment Alignment, const bool ReturnClickedItemOnly);
	Tb2item::TTBCustomItem* __fastcall PopupEx(const System::Types::TRect &ControlRect, bool TrackRightButton, Tb2item::TTBPopupAlignment Alignment = (Tb2item::TTBPopupAlignment)(0x0), bool ReturnClickedItemOnly = false);
public:
	/* TTBCustomItem.Create */ inline __fastcall virtual TTBXRootItem(System::Classes::TComponent* AOwner) : Tb2item::TTBRootItem(AOwner) { }
	/* TTBCustomItem.Destroy */ inline __fastcall virtual ~TTBXRootItem(void) { }
	
};


class DELPHICLASS TTBXPopupMenu;
class PASCALIMPLEMENTATION TTBXPopupMenu : public Tb2item::TTBPopupMenu
{
	typedef Tb2item::TTBPopupMenu inherited;
	
private:
	bool FToolBoxPopup;
	MESSAGE void __fastcall TBMGetViewType(Winapi::Messages::TMessage &Message);
	
protected:
	DYNAMIC Tb2item::TTBRootItemClass __fastcall GetRootItemClass(void);
	
public:
	HIDESBASE Tb2item::TTBCustomItem* __fastcall PopupEx(const System::Types::TRect &ControlRect, bool ReturnClickedItemOnly = false);
	__property bool ToolBoxPopup = {read=FToolBoxPopup, write=FToolBoxPopup, default=0};
public:
	/* TTBPopupMenu.Create */ inline __fastcall virtual TTBXPopupMenu(System::Classes::TComponent* AOwner) : Tb2item::TTBPopupMenu(AOwner) { }
	/* TTBPopupMenu.Destroy */ inline __fastcall virtual ~TTBXPopupMenu(void) { }
	
};


class DELPHICLASS TTBXFloatingWindowParent;
class PASCALIMPLEMENTATION TTBXFloatingWindowParent : public Tb2dock::TTBFloatingWindowParent
{
	typedef Tb2dock::TTBFloatingWindowParent inherited;
	
private:
	bool FCloseButtonHover;
	int FSnapDistance;
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMNCMouseLeave(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMNCMouseMove(Winapi::Messages::TWMNCHitMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMWindowPosChanging(Winapi::Messages::TWMWindowPosMsg &Message);
	
protected:
	void __fastcall CancelNCHover(void);
	DYNAMIC void __fastcall DrawNCArea(const bool DrawToDC, const HDC ADC, const HRGN Clip, Tb2dock::TTBToolWindowNCRedrawWhat RedrawWhat);
	__property bool CloseButtonHover = {read=FCloseButtonHover, nodefault};
	
public:
	__property int SnapDistance = {read=FSnapDistance, write=FSnapDistance, default=0};
public:
	/* TTBFloatingWindowParent.Create */ inline __fastcall virtual TTBXFloatingWindowParent(System::Classes::TComponent* AOwner) : Tb2dock::TTBFloatingWindowParent(AOwner) { }
	/* TTBFloatingWindowParent.Destroy */ inline __fastcall virtual ~TTBXFloatingWindowParent(void) { }
	
public:
	/* TCustomForm.CreateNew */ inline __fastcall virtual TTBXFloatingWindowParent(System::Classes::TComponent* AOwner, int Dummy) : Tb2dock::TTBFloatingWindowParent(AOwner, Dummy) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TTBXFloatingWindowParent(HWND ParentWindow) : Tb2dock::TTBFloatingWindowParent(ParentWindow) { }
	
};


class DELPHICLASS TTBXDock;
class PASCALIMPLEMENTATION TTBXDock : public Tb2dock::TTBDock
{
	typedef Tb2dock::TTBDock inherited;
	
private:
	bool FMoving;
	bool FResizing;
	bool FUseParentBackground;
	HIDESBASE MESSAGE void __fastcall CMColorChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall TBMGetEffectiveColor(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall TBMThemeChange(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Winapi::Messages::TWMEraseBkgnd &Message);
	HIDESBASE MESSAGE void __fastcall WMMove(Winapi::Messages::TWMMove &Message);
	HIDESBASE MESSAGE void __fastcall WMSize(Winapi::Messages::TWMSize &Message);
	
protected:
	virtual bool __fastcall ThemedBackground(void);
	virtual void __fastcall DrawBackground(HDC DC, const System::Types::TRect &DrawRect);
	DYNAMIC void __fastcall Resize(void);
	void __fastcall SetUseParentBackground(bool Value);
	virtual bool __fastcall UsingBackground(void);
	
public:
	__fastcall virtual TTBXDock(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TTBXDock(void);
	
__published:
	__property Color = {default=536870911};
	__property bool UseParentBackground = {read=FUseParentBackground, write=SetUseParentBackground, default=0};
public:
	/* TWinControl.CreateParented */ inline __fastcall TTBXDock(HWND ParentWindow) : Tb2dock::TTBDock(ParentWindow) { }
	
};


enum DECLSPEC_DENUM TMenuAnimation : unsigned char { maNone, maUnfold, maSlide, maFade };

enum DECLSPEC_DENUM TAnimationMode : unsigned char { amNone, amSysDefault, amRandom, amUnfold, amSlide, amFade };

typedef System::Set<TAnimationMode, TAnimationMode::amNone, TAnimationMode::amFade> TAnimationModes;

class DELPHICLASS TTBXMenuAnimation;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TTBXMenuAnimation : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TAnimationMode FAnimationMode;
	bool __fastcall SysParamEnabled(unsigned Param);
	TAnimationModes __fastcall GetAvailableModes(void);
	TMenuAnimation __fastcall GetMenuAnimation(void);
	void __fastcall SetAnimationMode(TAnimationMode Value);
	__property TMenuAnimation MenuAnimation = {read=GetMenuAnimation, nodefault};
	
public:
	__fastcall TTBXMenuAnimation(TAnimationMode AAnimationMode);
	__property TAnimationMode AnimationMode = {read=FAnimationMode, write=SetAnimationMode, nodefault};
	__property TAnimationModes AvailableModes = {read=GetAvailableModes, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TTBXMenuAnimation(void) { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
#define TBXVersion  (2.100000E+00)
#define TBXVersionString L"2.1"
#define TBXVersionText L"TBX version 2.1"
static const System::Word TBM_THEMECHANGE = System::Word(0x53a);
static const System::Word TBM_GETVIEWTYPE = System::Word(0x4ed);
static const System::Word TBM_GETEFFECTIVECOLOR = System::Word(0x4ee);
extern DELPHI_PACKAGE Tbxthemes::TTBXTheme* CurrentTheme;
extern DELPHI_PACKAGE TTBXMenuAnimation* TBXMenuAnimation;
extern DELPHI_PACKAGE void __fastcall AddThemeNotification(System::TObject* AObject);
extern DELPHI_PACKAGE void __fastcall RemoveThemeNotification(System::TObject* AObject);
extern DELPHI_PACKAGE System::Uitypes::TColor __fastcall GetEffectiveColor(Vcl::Controls::TControl* C);
extern DELPHI_PACKAGE void __fastcall DrawParentBackground(Vcl::Controls::TControl* Control, HDC DC, const System::Types::TRect &R);
extern DELPHI_PACKAGE int __fastcall GetViewType(Tb2item::TTBView* View);
extern DELPHI_PACKAGE int __fastcall GetWinViewType(Vcl::Controls::TControl* Window);
extern DELPHI_PACKAGE bool __fastcall IsFloating(int ViewType);
extern DELPHI_PACKAGE int __fastcall GetPopupMargin(Tb2item::TTBItemViewer* ItemViewer);
extern DELPHI_PACKAGE void __fastcall AddToList(System::Classes::TList* &List, void * Item);
extern DELPHI_PACKAGE void __fastcall RemoveFromList(System::Classes::TList* &List, void * Item);
extern DELPHI_PACKAGE int __fastcall GetStateFlags(const Tbxthemes::TTBXItemInfo &ItemInfo);
extern DELPHI_PACKAGE System::Uitypes::TColor __fastcall GetTBXTextColor(int StateFlags);
extern DELPHI_PACKAGE void __fastcall DrawTBXCaption(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &Rect, const System::UnicodeString Text, unsigned Format, int StateFlags);
extern DELPHI_PACKAGE void __fastcall DrawTBXImage(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &Rect, Vcl::Imglist::TCustomImageList* ImageList, int ImageIndex, int StateFlags);
extern DELPHI_PACKAGE void __fastcall AddTBXColor(System::Uitypes::TColor &AColor, const System::UnicodeString AName);
extern DELPHI_PACKAGE System::UnicodeString __fastcall TBXColorToString(System::Uitypes::TColor Color);
extern DELPHI_PACKAGE bool __fastcall TBXIdentToColor(const System::UnicodeString Ident, int &Color);
extern DELPHI_PACKAGE System::Uitypes::TColor __fastcall TBXStringToColor(System::UnicodeString S);
extern DELPHI_PACKAGE void __fastcall TBXGetColorValues(System::Classes::TGetStrProc Proc);
extern DELPHI_PACKAGE void __fastcall TBXSetTheme(const System::UnicodeString AThemeName);
extern DELPHI_PACKAGE System::UnicodeString __fastcall TBXCurrentTheme(void);
extern DELPHI_PACKAGE TTBXPopupMenu* __fastcall CreateTBXPopupMenu(System::Classes::TComponent* Owner);
}	/* namespace Tbx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_TBX)
using namespace Tbx;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// TbxHPP
