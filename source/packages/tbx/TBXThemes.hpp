// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'TBXThemes.pas' rev: 27.00 (Windows)

#ifndef TbxthemesHPP
#define TbxthemesHPP

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
#include <Vcl.Forms.hpp>	// Pascal unit
#include <Vcl.Graphics.hpp>	// Pascal unit
#include <Vcl.ImgList.hpp>	// Pascal unit
#include <System.Types.hpp>	// Pascal unit
#include <System.UITypes.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Tbxthemes
{
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TTBXItemLayout : unsigned char { tbxlAuto, tbxlGlyphLeft, tbxlGlyphTop };

struct DECLSPEC_DRECORD TTBXMargins
{
public:
	int LeftWidth;
	int RightWidth;
	int TopHeight;
	int BottomHeight;
};


enum DECLSPEC_DENUM TTBXHoverKind : unsigned char { hkNone, hkKeyboardHover, hkMouseHover };

enum DECLSPEC_DENUM TTBXComboPart : unsigned char { cpNone, cpCombo, cpSplitLeft, cpSplitRight };

struct DECLSPEC_DRECORD TTBXItemInfo
{
public:
	int ViewType;
	int ItemOptions;
	bool Enabled;
	bool Pushed;
	TTBXHoverKind HoverKind;
	bool Selected;
	bool ImageShown;
	int ImageWidth;
	int ImageHeight;
	bool IsVertical;
	TTBXComboPart ComboPart;
	bool IsPopupParent;
	int PopupMargin;
	int AppFlags;
	int AppData;
};


struct DECLSPEC_DRECORD TTBXWindowInfo
{
public:
	HWND ParentHandle;
	HWND WindowHandle;
	int ViewType;
	int ClientWidth;
	int ClientHeight;
	bool ShowCaption;
	System::Types::TPoint FloatingBorderSize;
	int CloseButtonState;
	int RedrawPart;
	System::WideChar *Caption;
	System::Uitypes::TColor EffectiveColor;
	bool Active;
	int AppFlags;
	int AppData;
};


struct DECLSPEC_DRECORD TTBXPopupInfo
{
public:
	HWND WindowHandle;
	int ViewType;
	System::Types::TRect ParentRect;
	System::Types::TPoint BorderSize;
	int AppFlags;
	int AppData;
};


struct DECLSPEC_DRECORD TTBXToolbarInfo
{
public:
	HWND WindowHandle;
	int ViewType;
	bool IsVertical;
	bool AllowDrag;
	Vcl::Forms::TFormBorderStyle BorderStyle;
	System::Types::TPoint BorderSize;
	int ClientWidth;
	int ClientHeight;
	int DragHandleStyle;
	int CloseButtonState;
	System::WideChar *Caption;
	System::Uitypes::TColor EffectiveColor;
	int AppFlags;
	int AppData;
};


struct DECLSPEC_DRECORD TTBXDockPanelInfo
{
public:
	HWND WindowHandle;
	int ViewType;
	bool IsVertical;
	bool AllowDrag;
	Vcl::Forms::TFormBorderStyle BorderStyle;
	System::Types::TPoint BorderSize;
	int ClientWidth;
	int ClientHeight;
	bool ShowCaption;
	int CloseButtonState;
	System::WideChar *Caption;
	System::Uitypes::TColor EffectiveColor;
	int AppFlags;
	int AppData;
};


struct DECLSPEC_DRECORD TTBXEditBtnInfo
{
public:
	int ButtonType;
	int ButtonState;
};


struct DECLSPEC_DRECORD TTBXEditInfo
{
public:
	int LeftBtnWidth;
	int RightBtnWidth;
	TTBXEditBtnInfo LeftBtnInfo;
	TTBXEditBtnInfo RightBtnInfo;
};


class DELPHICLASS TTBXTheme;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TTBXTheme : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::UnicodeString FName;
	int FTag;
	
public:
	__fastcall virtual TTBXTheme(const System::UnicodeString AName);
	virtual System::Types::TPoint __fastcall GetImageOffset(Vcl::Graphics::TCanvas* Canvas, const TTBXItemInfo &ItemInfo, Vcl::Imglist::TCustomImageList* ImageList) = 0 ;
	virtual System::Uitypes::TColor __fastcall GetItemColor(const TTBXItemInfo &ItemInfo) = 0 ;
	virtual System::Uitypes::TColor __fastcall GetItemTextColor(const TTBXItemInfo &ItemInfo) = 0 ;
	virtual System::Uitypes::TColor __fastcall GetItemImageBackground(const TTBXItemInfo &ItemInfo) = 0 ;
	virtual void __fastcall GetMargins(int MarginID, /* out */ TTBXMargins &Margins) = 0 ;
	virtual int __fastcall GetPopupShadowType(void) = 0 ;
	virtual void __fastcall GetViewBorder(int ViewType, /* out */ System::Types::TPoint &Border) = 0 ;
	virtual System::Uitypes::TColor __fastcall GetViewColor(int ViewType) = 0 ;
	virtual void __fastcall GetViewMargins(int ViewType, /* out */ TTBXMargins &Margins) = 0 ;
	virtual void __fastcall PaintBackgnd(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &ADockRect, const System::Types::TRect &ARect, const System::Types::TRect &AClipRect, System::Uitypes::TColor AColor, bool Transparent, int AViewType) = 0 ;
	virtual void __fastcall PaintButton(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &ARect, const TTBXItemInfo &ItemInfo) = 0 ;
	virtual void __fastcall PaintCaption(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &ARect, const TTBXItemInfo &ItemInfo, const System::UnicodeString ACaption, unsigned AFormat, bool Rotated) = 0 ;
	virtual void __fastcall PaintCheckMark(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &ARect, const TTBXItemInfo &ItemInfo) = 0 ;
	virtual void __fastcall PaintChevron(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &ARect, const TTBXItemInfo &ItemInfo) = 0 ;
	virtual void __fastcall PaintEditFrame(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &ARect, TTBXItemInfo &ItemInfo, const TTBXEditInfo &EditInfo) = 0 ;
	virtual void __fastcall PaintEditButton(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &ARect, TTBXItemInfo &ItemInfo, const TTBXEditBtnInfo &ButtonInfo) = 0 ;
	virtual void __fastcall PaintDock(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &ClientRect, const System::Types::TRect &DockRect, int DockPosition) = 0 ;
	virtual void __fastcall PaintDockPanelNCArea(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &R, const TTBXDockPanelInfo &DockPanelInfo) = 0 ;
	virtual void __fastcall PaintDropDownArrow(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &ARect, const TTBXItemInfo &ItemInfo) = 0 ;
	virtual void __fastcall PaintFloatingBorder(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &ARect, const TTBXWindowInfo &WindowInfo) = 0 ;
	virtual void __fastcall PaintFrame(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &ARect, const TTBXItemInfo &ItemInfo) = 0 ;
	virtual void __fastcall PaintImage(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &ARect, const TTBXItemInfo &ItemInfo, Vcl::Imglist::TCustomImageList* ImageList, int ImageIndex) = 0 ;
	virtual void __fastcall PaintMDIButton(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &ARect, const TTBXItemInfo &ItemInfo, unsigned ButtonKind) = 0 ;
	virtual void __fastcall PaintMenuItem(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &ARect, TTBXItemInfo &ItemInfo) = 0 ;
	virtual void __fastcall PaintMenuItemFrame(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &ARect, const TTBXItemInfo &ItemInfo) = 0 ;
	virtual void __fastcall PaintPageScrollButton(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &ARect, int ButtonType, bool Hot) = 0 ;
	virtual void __fastcall PaintPopupNCArea(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &R, const TTBXPopupInfo &PopupInfo) = 0 ;
	virtual void __fastcall PaintSeparator(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &ARect, const TTBXItemInfo &ItemInfo, bool Horizontal, bool LineSeparator) = 0 ;
	virtual void __fastcall PaintToolbarNCArea(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &R, const TTBXToolbarInfo &WindowInfo) = 0 ;
	virtual void __fastcall PaintFrameControl(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &R, int Kind, int State, void * Params) = 0 ;
	virtual void __fastcall PaintStatusBar(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &R, int Part) = 0 ;
	virtual int __fastcall GetIntegerMetrics(int Index) = 0 ;
	__property int SplitBtnArrowWidth = {read=GetIntegerMetrics, index=10, nodefault};
	__property int DropdownArrowWidth = {read=GetIntegerMetrics, index=20, nodefault};
	__property int DropdownArrowMargin = {read=GetIntegerMetrics, index=21, nodefault};
	__property int MenuImageTextSpace = {read=GetIntegerMetrics, index=32, nodefault};
	__property int MenuLeftCaptionMargin = {read=GetIntegerMetrics, index=33, nodefault};
	__property int MenuRightCaptionMargin = {read=GetIntegerMetrics, index=34, nodefault};
	__property int MenuSeparatorSize = {read=GetIntegerMetrics, index=35, nodefault};
	__property int MenuMDIDW = {read=GetIntegerMetrics, index=36, nodefault};
	__property int MenuMDIDH = {read=GetIntegerMetrics, index=37, nodefault};
	__property int TlbrSeparatorSize = {read=GetIntegerMetrics, index=50, nodefault};
	__property int EditFrameWidth = {read=GetIntegerMetrics, index=60, nodefault};
	__property int EditTextMarginHorz = {read=GetIntegerMetrics, index=61, nodefault};
	__property int EditTextMarginVert = {read=GetIntegerMetrics, index=62, nodefault};
	__property int EditBtnWidth = {read=GetIntegerMetrics, index=65, nodefault};
	__property int EditMenuRightIndent = {read=GetIntegerMetrics, index=66, nodefault};
	virtual bool __fastcall GetBooleanMetrics(int Index) = 0 ;
	__property bool OfficeXPPopupAlignment = {read=GetBooleanMetrics, index=1, nodefault};
	__property bool EditMenuFullSelect = {read=GetBooleanMetrics, index=3, nodefault};
	__property bool EditHeightEven = {read=GetBooleanMetrics, index=4, nodefault};
	__property bool PaintDockBackground = {read=GetBooleanMetrics, index=5, nodefault};
	__property bool SolidToolbarNCArea = {read=GetBooleanMetrics, index=6, nodefault};
	__property bool SolidToolbarClientArea = {read=GetBooleanMetrics, index=7, nodefault};
	__property System::UnicodeString Name = {read=FName};
	__property int Tag = {read=FTag, write=FTag, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TTBXTheme(void) { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TTBXThemeClass;

//-- var, const, procedure ---------------------------------------------------
static const System::Word TBX_SYSCOMMAND = System::Word(0x538);
static const System::Int8 TSC_BEFOREVIEWCHANGE = System::Int8(0x1);
static const System::Int8 TSC_VIEWCHANGE = System::Int8(0x2);
static const System::Int8 TSC_AFTERVIEWCHANGE = System::Int8(0x3);
static const System::Int8 TSC_APPACTIVATE = System::Int8(0x4);
static const System::Int8 TSC_APPDEACTIVATE = System::Int8(0x5);
static const System::Int8 TMI_SPLITBTN_ARROWWIDTH = System::Int8(0xa);
static const System::Int8 TMI_DROPDOWN_ARROWWIDTH = System::Int8(0x14);
static const System::Int8 TMI_DROPDOWN_ARROWMARGIN = System::Int8(0x15);
static const System::Int8 TMI_MENU_IMGTEXTSPACE = System::Int8(0x20);
static const System::Int8 TMI_MENU_LCAPTIONMARGIN = System::Int8(0x21);
static const System::Int8 TMI_MENU_RCAPTIONMARGIN = System::Int8(0x22);
static const System::Int8 TMI_MENU_SEPARATORSIZE = System::Int8(0x23);
static const System::Int8 TMI_MENU_MDI_DW = System::Int8(0x24);
static const System::Int8 TMI_MENU_MDI_DH = System::Int8(0x25);
static const System::Int8 TMI_TLBR_SEPARATORSIZE = System::Int8(0x32);
static const System::Int8 TMI_EDIT_FRAMEWIDTH = System::Int8(0x3c);
static const System::Int8 TMI_EDIT_TEXTMARGINHORZ = System::Int8(0x3d);
static const System::Int8 TMI_EDIT_TEXTMARGINVERT = System::Int8(0x3e);
static const System::Int8 TMI_EDIT_BTNWIDTH = System::Int8(0x41);
static const System::Int8 TMI_EDIT_MENURIGHTINDENT = System::Int8(0x42);
static const System::Int8 TMB_OFFICEXPPOPUPALIGNMENT = System::Int8(0x1);
static const System::Int8 TMB_EDITMENUFULLSELECT = System::Int8(0x3);
static const System::Int8 TMB_EDITHEIGHTEVEN = System::Int8(0x4);
static const System::Int8 TMB_PAINTDOCKBACKGROUND = System::Int8(0x5);
static const System::Int8 TMB_SOLIDTOOLBARNCAREA = System::Int8(0x6);
static const System::Int8 TMB_SOLIDTOOLBARCLIENTAREA = System::Int8(0x7);
static const System::Int8 TMB_SOLIDTOOLBARS = System::Int8(0x6);
static const System::Int8 MID_TOOLBARITEM = System::Int8(0x1);
static const System::Int8 MID_MENUITEM = System::Int8(0x2);
static const System::Int8 MID_STATUSPANE = System::Int8(0x3);
static const System::Int8 VT_UNKNOWN = System::Int8(0x0);
static const System::Word VT_TOOLBAR = System::Word(0x1000);
static const System::Word VT_POPUP = System::Word(0x2000);
static const System::Word VT_DOCKPANEL = System::Word(0x4000);
static const System::Word VT_DOCKWINDOW = System::Word(0x8000);
static const int VT_STATUSBAR = int(0x10000);
static const int VT_SECTIONHEADER = int(0x20000);
static const System::Word TVT_FLOATING = System::Word(0x800);
static const System::Word TVT_RESIZABLE = System::Word(0x400);
static const System::Word TVT_EMBEDDED = System::Word(0x200);
static const System::Word TVT_NORMALTOOLBAR = System::Word(0x1001);
static const System::Word TVT_MENUBAR = System::Word(0x1002);
static const System::Word TVT_TOOLWINDOW = System::Word(0x1004);
static const System::Word PVT_POPUPMENU = System::Word(0x2001);
static const System::Word PVT_LISTBOX = System::Word(0x2002);
static const System::Word PVT_TOOLBOX = System::Word(0x2004);
static const System::Word PVT_CHEVRONMENU = System::Word(0x2008);
static const System::Word DPVT_FLOATING = System::Word(0x800);
static const System::Word DPVT_RESIZABLE = System::Word(0x400);
static const System::Word DPVT_NORMAL = System::Word(0x4001);
static const System::Word DWVT_FLOATING = System::Word(0x800);
static const System::Word DWVT_RESIZABLE = System::Word(0x400);
static const System::Word DWVT_NORMAL = System::Word(0x8001);
static const System::Int8 IT_TOOLBARBUTTON = System::Int8(0x1);
static const System::Int8 IT_MENUITEM = System::Int8(0x2);
static const System::Int8 IO_TOOLBARSTYLE = System::Int8(0x1);
static const System::Int8 IO_SUBMENUITEM = System::Int8(0x4);
static const System::Int8 IO_COMBO = System::Int8(0x8);
static const System::Int8 IO_DESIGNING = System::Int8(0x10);
static const System::Int8 IO_APPACTIVE = System::Int8(0x20);
static const System::Int8 IO_RADIO = System::Int8(0x40);
static const System::Int8 DHS_DOUBLE = System::Int8(0x0);
static const System::Int8 DHS_NONE = System::Int8(0x1);
static const System::Int8 DHS_SINGLE = System::Int8(0x2);
static const System::Int8 CDBS_VISIBLE = System::Int8(0x1);
static const System::Int8 CDBS_HOT = System::Int8(0x2);
static const System::Int8 CDBS_PRESSED = System::Int8(0x4);
static const System::Int8 WRP_BORDER = System::Int8(0x1);
static const System::Int8 WRP_CAPTION = System::Int8(0x2);
static const System::Int8 WRP_CLOSEBTN = System::Int8(0x4);
static const System::Int8 PST_NONE = System::Int8(0x0);
static const System::Int8 PST_WINDOWSXP = System::Int8(0x1);
static const System::Int8 PST_OFFICEXP = System::Int8(0x2);
static const System::Int8 PST_WINDOWS2K = System::Int8(0x3);
static const System::Int8 EBT_DROPDOWN = System::Int8(0x1);
static const System::Int8 EBT_SPIN = System::Int8(0x2);
static const System::Int8 EBDS_DISABLED = System::Int8(0x1);
static const System::Int8 EBDS_HOT = System::Int8(0x2);
static const System::Int8 EBDS_PRESSED = System::Int8(0x4);
static const System::Int8 EBSS_DISABLED = System::Int8(0x1);
static const System::Int8 EBSS_HOT = System::Int8(0x2);
static const System::Int8 EBSS_UP = System::Int8(0x4);
static const System::Int8 EBSS_DOWN = System::Int8(0x8);
static const System::Int8 PSBT_UP = System::Int8(0x1);
static const System::Int8 PSBT_DOWN = System::Int8(0x2);
static const System::Int8 PSBT_LEFT = System::Int8(0x3);
static const System::Int8 PSBT_RIGHT = System::Int8(0x4);
static const System::Int8 PFC_CHECKBOX = System::Int8(0x1);
static const System::Int8 PFC_RADIOBUTTON = System::Int8(0x2);
static const System::Int8 PFS_CHECKED = System::Int8(0x1);
static const System::Int8 PFS_MIXED = System::Int8(0x2);
static const System::Int8 PFS_DISABLED = System::Int8(0x4);
static const System::Int8 PFS_HOT = System::Int8(0x8);
static const System::Int8 PFS_PUSHED = System::Int8(0x10);
static const System::Int8 PFS_FOCUSED = System::Int8(0x20);
static const System::Int8 ISF_DISABLED = System::Int8(0x1);
static const System::Int8 ISF_HOT = System::Int8(0x2);
static const System::Int8 ISF_PUSHED = System::Int8(0x4);
static const System::Int8 ISF_SELECTED = System::Int8(0x8);
static const System::Word ISF_LOCATIONMASK = System::Word(0xf00);
static const System::Int8 ISF_TOOLBARCOLOR = System::Int8(0x0);
static const System::Word ISF_MENUCOLOR = System::Word(0x100);
static const System::Word ISF_STATUSCOLOR = System::Word(0x200);
static const System::Int8 SBP_BODY = System::Int8(0x0);
static const System::Int8 SBP_PANE = System::Int8(0x1);
static const System::Int8 SBP_LASTPANE = System::Int8(0x2);
static const System::Int8 SBP_GRIPPER = System::Int8(0x3);
static const System::Int8 DP_TOP = System::Int8(0x1);
static const System::Int8 DP_BOTTOM = System::Int8(0x2);
static const System::Int8 DP_LEFT = System::Int8(0x3);
static const System::Int8 DP_RIGHT = System::Int8(0x4);
static const System::Int8 TSP_FLATMENUSTYLE = System::Int8(0x1);
static const System::Int8 TSP_XPVISUALSTYLE = System::Int8(0x2);
static const System::Int8 FMS_AUTOMATIC = System::Int8(0x0);
static const System::Int8 FMS_DISABLED = System::Int8(0x1);
static const System::Int8 FMS_ENABLED = System::Int8(0x2);
static const System::Int8 XPVS_AUTOMATIC = System::Int8(0x0);
static const System::Int8 XPVS_DISABLED = System::Int8(0x2);
extern DELPHI_PACKAGE System::Uitypes::TColor clHotLight;
extern DELPHI_PACKAGE System::Uitypes::TColor clPopup;
extern DELPHI_PACKAGE System::Uitypes::TColor clPopupText;
extern DELPHI_PACKAGE System::Uitypes::TColor clToolbar;
extern DELPHI_PACKAGE System::Uitypes::TColor clToolbarText;
extern DELPHI_PACKAGE bool TBXLoColor;
extern DELPHI_PACKAGE bool TBXHiContrast;
extern DELPHI_PACKAGE bool TBXNoBlending;
extern DELPHI_PACKAGE NativeUInt SCROLLBAR_THEME;
extern DELPHI_PACKAGE NativeUInt REBAR_THEME;
extern DELPHI_PACKAGE NativeUInt BUTTON_THEME;
extern DELPHI_PACKAGE NativeUInt TOOLBAR_THEME;
extern DELPHI_PACKAGE NativeUInt WINDOW_THEME;
extern DELPHI_PACKAGE NativeUInt COMBO_THEME;
extern DELPHI_PACKAGE NativeUInt EXPLORERBAR_THEME;
extern DELPHI_PACKAGE NativeUInt STATUSBAR_THEME;
extern DELPHI_PACKAGE NativeUInt SPIN_THEME;
extern DELPHI_PACKAGE bool USE_FLATMENUS;
extern DELPHI_PACKAGE bool USE_THEMES;
extern DELPHI_PACKAGE void __fastcall SetTBXSysParam(int Param, int Value);
extern DELPHI_PACKAGE int __fastcall GetTBXSysParam(int Param);
extern DELPHI_PACKAGE void __fastcall AddTBXSysChangeNotification(System::TObject* AObject);
extern DELPHI_PACKAGE void __fastcall RemoveTBXSysChangeNotification(System::TObject* AObject);
extern DELPHI_PACKAGE void __fastcall RegisterTBXTheme(const System::UnicodeString AName, TTBXThemeClass AThemeClass);
extern DELPHI_PACKAGE void __fastcall UnregisterTBXTheme(const System::UnicodeString AName);
extern DELPHI_PACKAGE bool __fastcall IsTBXThemeAvailable(const System::UnicodeString AName);
extern DELPHI_PACKAGE void __fastcall GetAvailableTBXThemes(System::Classes::TStrings* Strings);
extern DELPHI_PACKAGE TTBXTheme* __fastcall GetTBXTheme(const System::UnicodeString AName);
extern DELPHI_PACKAGE void __fastcall ReleaseTBXTheme(TTBXTheme* &ATheme);
extern DELPHI_PACKAGE System::Types::TRect __fastcall GetTBXCaptionRect(const TTBXWindowInfo &WindowInfo, bool AdjustForBorder, bool MinusCloseButton);
extern DELPHI_PACKAGE System::Types::TRect __fastcall GetTBXCloseButtonRect(const TTBXWindowInfo &WindowInfo, bool AdjustForBorder);
extern DELPHI_PACKAGE System::Types::TRect __fastcall GetTBXDockedCloseButtonRect(const TTBXToolbarInfo &ToolbarInfo);
extern DELPHI_PACKAGE int __fastcall GetTBXDragHandleSize(const TTBXToolbarInfo &ToolbarInfo);
}	/* namespace Tbxthemes */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_TBXTHEMES)
using namespace Tbxthemes;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// TbxthemesHPP
