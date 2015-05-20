// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'TBXOfficeXPTheme.pas' rev: 27.00 (Windows)

#ifndef TbxofficexpthemeHPP
#define TbxofficexpthemeHPP

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
#include <TBXThemes.hpp>	// Pascal unit
#include <TBXDefaultTheme.hpp>	// Pascal unit
#include <Vcl.ImgList.hpp>	// Pascal unit
#include <System.UITypes.hpp>	// Pascal unit
#include <System.Types.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Tbxofficexptheme
{
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TItemPart : unsigned char { ipBody, ipText, ipFrame };

enum DECLSPEC_DENUM TBtnItemState : unsigned char { bisNormal, bisDisabled, bisSelected, bisPressed, bisHot, bisDisabledHot, bisSelectedHot, bisPopupParent };

enum DECLSPEC_DENUM TMenuItemState : unsigned char { misNormal, misDisabled, misHot, misDisabledHot };

enum DECLSPEC_DENUM TWinFramePart : unsigned char { wfpBorder, wfpCaption, wfpCaptionText };

enum DECLSPEC_DENUM TWinFrameState : unsigned char { wfsActive, wfsInactive };

class DELPHICLASS TTBXOfficeXPTheme;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TTBXOfficeXPTheme : public Tbxthemes::TTBXTheme
{
	typedef Tbxthemes::TTBXTheme inherited;
	
private:
	MESSAGE void __fastcall TBXSysCommand(Winapi::Messages::TMessage &Message);
	
protected:
	System::Uitypes::TColor MenubarColor;
	System::Uitypes::TColor ToolbarColor;
	System::Uitypes::TColor PopupColor;
	System::Uitypes::TColor DockPanelColor;
	System::Uitypes::TColor PopupFrameColor;
	System::StaticArray<System::StaticArray<System::Uitypes::TColor, 3>, 2> WinFrameColors;
	System::StaticArray<System::StaticArray<System::Uitypes::TColor, 3>, 2> PnlFrameColors;
	System::StaticArray<System::StaticArray<System::Uitypes::TColor, 3>, 4> MenuItemColors;
	System::StaticArray<System::StaticArray<System::Uitypes::TColor, 3>, 8> BtnItemColors;
	System::Uitypes::TColor DragHandleColor;
	System::Uitypes::TColor PopupSeparatorColor;
	System::Uitypes::TColor ToolbarSeparatorColor;
	System::Uitypes::TColor IconShadowColor;
	System::Uitypes::TColor StatusPanelFrameColor;
	virtual void __fastcall SetupColorCache(void);
	System::Uitypes::TColor __fastcall GetPartColor(const Tbxthemes::TTBXItemInfo &ItemInfo, TItemPart ItemPart);
	System::Uitypes::TColor __fastcall GetBtnColor(const Tbxthemes::TTBXItemInfo &ItemInfo, TItemPart ItemPart);
	
public:
	__fastcall virtual TTBXOfficeXPTheme(const System::UnicodeString AName);
	__fastcall virtual ~TTBXOfficeXPTheme(void);
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
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Tbxofficexptheme */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_TBXOFFICEXPTHEME)
using namespace Tbxofficexptheme;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// TbxofficexpthemeHPP
