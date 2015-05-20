// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'TBXDefaultTheme.pas' rev: 27.00 (Windows)

#ifndef TbxdefaultthemeHPP
#define TbxdefaultthemeHPP

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
#include <Vcl.ImgList.hpp>	// Pascal unit
#include <System.UITypes.hpp>	// Pascal unit
#include <System.Types.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Tbxdefaulttheme
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TTBXDefaultTheme;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TTBXDefaultTheme : public Tbxthemes::TTBXTheme
{
	typedef Tbxthemes::TTBXTheme inherited;
	
private:
	MESSAGE void __fastcall TBXSysCommand(Winapi::Messages::TMessage &Message);
	
protected:
	System::Uitypes::TColor ToolbarColor;
	System::Uitypes::TColor ToolbarText;
	System::Uitypes::TColor DockPanelColor;
	System::Uitypes::TColor StatusBarColor;
	virtual void __fastcall SetupColorCache(void);
	
public:
	__fastcall virtual TTBXDefaultTheme(const System::UnicodeString AName);
	__fastcall virtual ~TTBXDefaultTheme(void);
	virtual bool __fastcall GetBooleanMetrics(int Index);
	virtual System::Types::TPoint __fastcall GetImageOffset(Vcl::Graphics::TCanvas* Canvas, const Tbxthemes::TTBXItemInfo &ItemInfo, Vcl::Imglist::TCustomImageList* ImageList);
	virtual int __fastcall GetIntegerMetrics(int Index);
	virtual void __fastcall GetMargins(int MarginID, /* out */ Tbxthemes::TTBXMargins &Margins);
	virtual System::Uitypes::TColor __fastcall GetItemColor(const Tbxthemes::TTBXItemInfo &ItemInfo);
	virtual System::Uitypes::TColor __fastcall GetItemTextColor(const Tbxthemes::TTBXItemInfo &ItemInfo);
	virtual System::Uitypes::TColor __fastcall GetItemImageBackground(const Tbxthemes::TTBXItemInfo &ItemInfo);
	virtual int __fastcall GetPopupShadowType(void);
	virtual void __fastcall GetViewBorder(int ViewType, /* out */ System::Types::TPoint &Border);
	virtual System::Uitypes::TColor __fastcall GetViewColor(int ViewType);
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
}	/* namespace Tbxdefaulttheme */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_TBXDEFAULTTHEME)
using namespace Tbxdefaulttheme;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// TbxdefaultthemeHPP
