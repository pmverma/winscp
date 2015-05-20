// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'TBXOffice2003Theme.pas' rev: 27.00 (Windows)

#ifndef Tbxoffice2003themeHPP
#define Tbxoffice2003themeHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Winapi.Windows.hpp>	// Pascal unit
#include <Winapi.Messages.hpp>	// Pascal unit
#include <Vcl.Graphics.hpp>	// Pascal unit
#include <System.Classes.hpp>	// Pascal unit
#include <TBXThemes.hpp>	// Pascal unit
#include <Vcl.ImgList.hpp>	// Pascal unit
#include <Winapi.UxTheme.hpp>	// Pascal unit
#include <System.UITypes.hpp>	// Pascal unit
#include <System.Types.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Tbxoffice2003theme
{
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TItemPart : unsigned char { ipBody, ipText, ipFrame };

enum DECLSPEC_DENUM TBtnItemState : unsigned char { bisNormal, bisDisabled, bisSelected, bisPressed, bisHot, bisDisabledHot, bisSelectedHot, bisPopupParent };

enum DECLSPEC_DENUM TMenuItemState : unsigned char { misNormal, misDisabled, misHot, misDisabledHot };

enum DECLSPEC_DENUM TWinFramePart : unsigned char { wfpBorder, wfpCaption, wfpCaptionText };

enum DECLSPEC_DENUM TOffice2003Scheme : unsigned char { osBlue, osMetallic, osGreen, osUnknown };

class DELPHICLASS TTBXOffice2003Theme;
class PASCALIMPLEMENTATION TTBXOffice2003Theme : public Tbxthemes::TTBXTheme
{
	typedef Tbxthemes::TTBXTheme inherited;
	
private:
	System::Classes::TNotifyEvent FOnSetupColorCache;
	MESSAGE void __fastcall TBXSysCommand(Winapi::Messages::TMessage &Message);
	
protected:
	System::Uitypes::TColor DockColor;
	System::Uitypes::TColor ToolbarColor1;
	System::Uitypes::TColor ToolbarColor2;
	System::Uitypes::TColor ToolbarFrameColor1;
	System::Uitypes::TColor ToolbarFrameColor2;
	System::Uitypes::TColor SeparatorColor1;
	System::Uitypes::TColor SeparatorColor2;
	System::Uitypes::TColor DragHandleColor1;
	System::Uitypes::TColor DragHandleColor2;
	System::Uitypes::TColor EmbeddedColor;
	System::Uitypes::TColor EmbeddedFrameColor;
	System::Uitypes::TColor EmbeddedDisabledColor;
	System::Uitypes::TColor PopupColor;
	System::Uitypes::TColor PopupFrameColor;
	System::Uitypes::TColor DockPanelColor;
	System::StaticArray<System::Uitypes::TColor, 3> WinFrameColors;
	System::StaticArray<System::StaticArray<System::Uitypes::TColor, 3>, 4> MenuItemColors;
	System::StaticArray<System::StaticArray<System::Uitypes::TColor, 2>, 8> BtnItemColors;
	System::StaticArray<System::StaticArray<System::Uitypes::TColor, 2>, 8> BtnBodyColors;
	System::Uitypes::TColor StatusPanelFrameColor;
	System::Uitypes::TColor FMDIAreaColor;
	virtual void __fastcall SetupColorCache(void);
	System::Uitypes::TColor __fastcall GetPartColor(const Tbxthemes::TTBXItemInfo &ItemInfo, TItemPart ItemPart);
	System::Uitypes::TColor __fastcall GetBtnColor(const Tbxthemes::TTBXItemInfo &ItemInfo, TItemPart ItemPart, bool GradColor2 = false);
	
public:
	__fastcall virtual TTBXOffice2003Theme(const System::UnicodeString AName);
	__fastcall virtual ~TTBXOffice2003Theme(void);
	virtual bool __fastcall GetBooleanMetrics(int Index);
	virtual int __fastcall GetIntegerMetrics(int Index);
	virtual void __fastcall GetMargins(int MarginID, /* out */ Tbxthemes::TTBXMargins &Margins);
	virtual System::Types::TPoint __fastcall GetImageOffset(Vcl::Graphics::TCanvas* Canvas, const Tbxthemes::TTBXItemInfo &ItemInfo, Vcl::Imglist::TCustomImageList* ImageList);
	virtual System::Uitypes::TColor __fastcall GetItemColor(const Tbxthemes::TTBXItemInfo &ItemInfo);
	virtual System::Uitypes::TColor __fastcall GetItemTextColor(const Tbxthemes::TTBXItemInfo &ItemInfo);
	virtual System::Uitypes::TColor __fastcall GetItemImageBackground(const Tbxthemes::TTBXItemInfo &ItemInfo);
	virtual int __fastcall GetPopupShadowType(void);
	virtual void __fastcall GetViewBorder(int ViewType, /* out */ System::Types::TPoint &Border);
	virtual System::Uitypes::TColor __fastcall GetViewColor(int AViewType);
	virtual void __fastcall GetViewMargins(int ViewType, /* out */ Tbxthemes::TTBXMargins &Margins);
	virtual void __fastcall PaintBackgnd(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &ADockRect, const System::Types::TRect &ARect, const System::Types::TRect &AClipRect, System::Uitypes::TColor AColor, bool Transparent, int AViewType);
	virtual void __fastcall PaintButton(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &ARect, const Tbxthemes::TTBXItemInfo &ItemInfo);
	virtual void __fastcall PaintCaption(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &ARect, const Tbxthemes::TTBXItemInfo &ItemInfo, const System::UnicodeString ACaption, unsigned AFormat, bool Rotated);
	virtual void __fastcall PaintCheckMark(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &ARect, const Tbxthemes::TTBXItemInfo &ItemInfo);
	virtual void __fastcall PaintChevron(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &ARect, const Tbxthemes::TTBXItemInfo &ItemInfo);
	virtual void __fastcall PaintDock(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &ClientRect, const System::Types::TRect &DockRect, int DockPosition);
	virtual void __fastcall PaintDockPanelNCArea(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &R, const Tbxthemes::TTBXDockPanelInfo &DockPanelInfo);
	virtual void __fastcall PaintDropDownArrow(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &ARect, const Tbxthemes::TTBXItemInfo &ItemInfo);
	virtual void __fastcall PaintEditButton(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &ARect, Tbxthemes::TTBXItemInfo &ItemInfo, const Tbxthemes::TTBXEditBtnInfo &ButtonInfo);
	virtual void __fastcall PaintEditFrame(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &ARect, Tbxthemes::TTBXItemInfo &ItemInfo, const Tbxthemes::TTBXEditInfo &EditInfo);
	virtual void __fastcall PaintFloatingBorder(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &ARect, const Tbxthemes::TTBXWindowInfo &WindowInfo);
	virtual void __fastcall PaintFrame(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &ARect, const Tbxthemes::TTBXItemInfo &ItemInfo);
	virtual void __fastcall PaintImage(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &ARect, const Tbxthemes::TTBXItemInfo &ItemInfo, Vcl::Imglist::TCustomImageList* ImageList, int ImageIndex);
	virtual void __fastcall PaintMDIButton(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &ARect, const Tbxthemes::TTBXItemInfo &ItemInfo, unsigned ButtonKind);
	virtual void __fastcall PaintMenuItem(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &ARect, Tbxthemes::TTBXItemInfo &ItemInfo);
	virtual void __fastcall PaintMenuItemFrame(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &ARect, const Tbxthemes::TTBXItemInfo &ItemInfo);
	virtual void __fastcall PaintPageScrollButton(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &ARect, int ButtonType, bool Hot);
	virtual void __fastcall PaintPopupNCArea(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &R, const Tbxthemes::TTBXPopupInfo &PopupInfo);
	virtual void __fastcall PaintSeparator(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &ARect, const Tbxthemes::TTBXItemInfo &ItemInfo, bool Horizontal, bool LineSeparator);
	virtual void __fastcall PaintToolbarNCArea(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &R, const Tbxthemes::TTBXToolbarInfo &ToolbarInfo);
	virtual void __fastcall PaintFrameControl(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &R, int Kind, int State, void * Params);
	virtual void __fastcall PaintStatusBar(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &R, int Part);
	__property System::Uitypes::TColor MDIAreaColor = {read=FMDIAreaColor, nodefault};
	__property System::Classes::TNotifyEvent OnSetupColorCache = {read=FOnSetupColorCache, write=FOnSetupColorCache};
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE TOffice2003Scheme __fastcall GetOffice2003Scheme(void);
extern DELPHI_PACKAGE void __fastcall PaintGradient(HDC DC, const System::Types::TRect &ARect, System::Uitypes::TColor Color1, System::Uitypes::TColor Color2);
extern DELPHI_PACKAGE void __fastcall PaintIrregularGradient(HDC DC, const System::Types::TRect &ARect, System::Uitypes::TColor Color1, System::Uitypes::TColor Color2, bool Horz);
extern DELPHI_PACKAGE System::Uitypes::TColor __fastcall GetMDIWorkspaceColor(void);
}	/* namespace Tbxoffice2003theme */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_TBXOFFICE2003THEME)
using namespace Tbxoffice2003theme;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Tbxoffice2003themeHPP
