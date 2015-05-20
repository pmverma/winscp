// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'TBXToolPals.pas' rev: 27.00 (Windows)

#ifndef TbxtoolpalsHPP
#define TbxtoolpalsHPP

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
#include <Vcl.Forms.hpp>	// Pascal unit
#include <Vcl.Graphics.hpp>	// Pascal unit
#include <TB2Item.hpp>	// Pascal unit
#include <TBX.hpp>	// Pascal unit
#include <TBXThemes.hpp>	// Pascal unit
#include <System.Types.hpp>	// Pascal unit
#include <Vcl.ImgList.hpp>	// Pascal unit
#include <System.UITypes.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Tbxtoolpals
{
//-- type declarations -------------------------------------------------------
typedef System::Int8 TRowColCount;

class DELPHICLASS TTBXCustomToolPalette;
typedef void __fastcall (__closure *TTPCalcSize)(TTBXCustomToolPalette* Sender, Vcl::Graphics::TCanvas* Canvas, int &AWidth, int &AHeight);

typedef void __fastcall (__closure *TTPGetCellVisible)(TTBXCustomToolPalette* Sender, int ACol, int ARow, bool &Visible);

typedef void __fastcall (__closure *TTPGetCellHint)(TTBXCustomToolPalette* Sender, int ACol, int ARow, System::UnicodeString &HintText);

typedef void __fastcall (__closure *TTPDrawCellImage)(TTBXCustomToolPalette* Sender, Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &ARect, int ACol, int ARow, bool Selected, bool Hot, bool Enabled);

typedef void __fastcall (__closure *TTPCellClick)(TTBXCustomToolPalette* Sender, int &ACol, int &ARow, bool &AllowChange);

enum DECLSPEC_DENUM Tbxtoolpals__1 : unsigned char { tpoCustomImages, tpoNoAutoSelect };

typedef System::Set<Tbxtoolpals__1, Tbxtoolpals__1::tpoCustomImages, Tbxtoolpals__1::tpoNoAutoSelect> TTBXToolPaletteOptions;

class PASCALIMPLEMENTATION TTBXCustomToolPalette : public Tbx::TTBXCustomItem
{
	typedef Tbx::TTBXCustomItem inherited;
	
private:
	TRowColCount FColCount;
	TTBXToolPaletteOptions FPaletteOptions;
	TRowColCount FRowCount;
	System::Types::TPoint FSelectedCell;
	TTPCalcSize FOnCalcImageSize;
	System::Classes::TNotifyEvent FOnChange;
	TTPCellClick FOnCellClick;
	TTPDrawCellImage FOnDrawCellImage;
	TTPGetCellVisible FOnGetCellVisible;
	TTPGetCellHint FOnGetCellHint;
	void __fastcall SetColCount(TRowColCount Value);
	void __fastcall SetPaletteOptions(TTBXToolPaletteOptions Value);
	void __fastcall SetRowCount(TRowColCount Value);
	void __fastcall SetSelectedCell(const System::Types::TPoint &Value);
	
protected:
	virtual void __fastcall DoCalcCellSize(Vcl::Graphics::TCanvas* Canvas, int &AWidth, int &AHeight);
	virtual void __fastcall DoCalcImageSize(Vcl::Graphics::TCanvas* Canvas, int &AWidth, int &AHeight);
	virtual bool __fastcall DoCellClick(int &ACol, int &ARow);
	virtual void __fastcall DoChange(void);
	virtual void __fastcall DoDrawCellImage(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &ARect, int ACol, int ARow, const Tbxthemes::TTBXItemInfo &ItemInfo);
	virtual void __fastcall DoGetCellVisible(int ACol, int ARow, bool &Visible);
	virtual void __fastcall DoGetHint(const System::Types::TPoint &ACell, System::UnicodeString &HintText);
	virtual Tb2item::TTBItemViewerClass __fastcall GetItemViewerClass(Tb2item::TTBView* AView);
	virtual void __fastcall HandleClickCell(int ACol, int ARow);
	__property TRowColCount ColCount = {read=FColCount, write=SetColCount, default=1};
	__property TTBXToolPaletteOptions PaletteOptions = {read=FPaletteOptions, write=SetPaletteOptions, nodefault};
	__property TRowColCount RowCount = {read=FRowCount, write=SetRowCount, default=1};
	__property System::Types::TPoint SelectedCell = {read=FSelectedCell, write=SetSelectedCell};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property TTPCalcSize OnCalcImageSize = {read=FOnCalcImageSize, write=FOnCalcImageSize};
	__property TTPCellClick OnCellClick = {read=FOnCellClick, write=FOnCellClick};
	__property TTPDrawCellImage OnDrawCellImage = {read=FOnDrawCellImage, write=FOnDrawCellImage};
	__property TTPGetCellVisible OnGetCellVisible = {read=FOnGetCellVisible, write=FOnGetCellVisible};
	__property TTPGetCellHint OnGetCellHint = {read=FOnGetCellHint, write=FOnGetCellHint};
	
public:
	__fastcall virtual TTBXCustomToolPalette(System::Classes::TComponent* AOwner);
public:
	/* TTBXCustomItem.Destroy */ inline __fastcall virtual ~TTBXCustomToolPalette(void) { }
	
};


class DELPHICLASS TTBXToolPalette;
class PASCALIMPLEMENTATION TTBXToolPalette : public TTBXCustomToolPalette
{
	typedef TTBXCustomToolPalette inherited;
	
public:
	__property SelectedCell;
	
__published:
	__property ColCount = {default=1};
	__property HelpContext = {default=0};
	__property Images;
	__property Options = {default=0};
	__property PaletteOptions;
	__property RowCount = {default=1};
	__property Stretch = {default=0};
	__property Visible = {default=1};
	__property OnChange;
	__property OnCalcImageSize;
	__property OnCellClick;
	__property OnDrawCellImage;
	__property OnGetCellHint;
	__property OnGetCellVisible;
public:
	/* TTBXCustomToolPalette.Create */ inline __fastcall virtual TTBXToolPalette(System::Classes::TComponent* AOwner) : TTBXCustomToolPalette(AOwner) { }
	
public:
	/* TTBXCustomItem.Destroy */ inline __fastcall virtual ~TTBXToolPalette(void) { }
	
};


class DELPHICLASS TTBXToolViewer;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TTBXToolViewer : public Tbx::TTBXItemViewer
{
	typedef Tbx::TTBXItemViewer inherited;
	
private:
	int FCellHeight;
	int FCellWidth;
	int FColCount;
	int FRowCount;
	System::Types::TPoint FHotCell;
	
protected:
	int Indent;
	bool MouseIsDown;
	virtual void __fastcall CalcCellSize(Vcl::Graphics::TCanvas* Canvas, int &AWidth, int &AHeight);
	virtual void __fastcall CalcImageSize(Vcl::Graphics::TCanvas* Canvas, int &AWidth, int &AHeight);
	virtual void __fastcall CalcSize(Vcl::Graphics::TCanvas* const Canvas, int &AWidth, int &AHeight);
	int __fastcall GetImageIndex(int Col, int Row);
	bool __fastcall GetCellAt(int X, int Y, /* out */ int &Col, /* out */ int &Row);
	virtual System::Types::TRect __fastcall GetCellRect(const System::Types::TRect &ClientAreaRect, int Col, int Row);
	System::UnicodeString __fastcall GetHint(int Col, int Row);
	MESSAGE void __fastcall CMHintShow(Vcl::Controls::TCMHintShow &Message);
	void __fastcall DrawCell(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &CellRect, int Col, int Row, Tbxthemes::TTBXItemInfo &ItemInfo);
	virtual void __fastcall DrawCellImage(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &ARect, int Col, int Row, const Tbxthemes::TTBXItemInfo &ItemInfo);
	virtual void __fastcall Entering(Tb2item::TTBItemViewer* OldSelected);
	void __fastcall InvalidateCell(int ACol, int ARow);
	virtual bool __fastcall IsCellVisible(const System::Types::TPoint &Cell);
	virtual void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall MouseDown(System::Classes::TShiftState Shift, int X, int Y, bool &MouseDownOnMenu);
	virtual void __fastcall MouseMove(int X, int Y);
	virtual void __fastcall MouseUp(int X, int Y, bool MouseWasDownOnMenu);
	virtual void __fastcall Paint(Vcl::Graphics::TCanvas* const Canvas, const System::Types::TRect &ClientAreaRect, bool IsHoverItem, bool IsPushed, bool UseDisabledShadow);
	__property int CellHeight = {read=FCellHeight, nodefault};
	__property int CellWidth = {read=FCellWidth, nodefault};
	__property int ColCount = {read=FColCount, nodefault};
	__property System::Types::TPoint HotCell = {read=FHotCell};
	__property int RowCount = {read=FRowCount, nodefault};
	
public:
	__fastcall virtual TTBXToolViewer(Tb2item::TTBView* AView, Tb2item::TTBCustomItem* AItem, int AGroupLevel);
public:
	/* TTBItemViewer.Destroy */ inline __fastcall virtual ~TTBXToolViewer(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS TTBXCustomColorSet;
typedef void __fastcall (__closure *TCSGetColorInfo)(TTBXCustomColorSet* Sender, int Col, int Row, System::Uitypes::TColor &Color, System::UnicodeString &Name);

class PASCALIMPLEMENTATION TTBXCustomColorSet : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	System::Classes::TList* FPalettes;
	int FColCount;
	int FRowCount;
	TCSGetColorInfo FOnGetColorInfo;
	void __fastcall SetColCount(int Value);
	void __fastcall SetRowCount(int Value);
	
protected:
	virtual void __fastcall UpdateSize(int NewColCount, int NewRowCount);
	virtual System::UnicodeString __fastcall ColorToString(System::Uitypes::TColor Color);
	virtual void __fastcall GetColorInfo(int Col, int Row, /* out */ System::Uitypes::TColor &Color, /* out */ System::UnicodeString &ColorName);
	
public:
	__fastcall virtual TTBXCustomColorSet(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TTBXCustomColorSet(void);
	System::Uitypes::TColor __fastcall GetColor(int Col, int Row);
	System::UnicodeString __fastcall GetName(int Col, int Row);
	__property int ColCount = {read=FColCount, write=SetColCount, nodefault};
	__property int RowCount = {read=FRowCount, write=SetRowCount, nodefault};
	__property TCSGetColorInfo OnGetColorInfo = {read=FOnGetColorInfo, write=FOnGetColorInfo};
};


class DELPHICLASS TTBXColorSet;
class PASCALIMPLEMENTATION TTBXColorSet : public TTBXCustomColorSet
{
	typedef TTBXCustomColorSet inherited;
	
__published:
	__property ColCount;
	__property RowCount;
	__property OnGetColorInfo;
public:
	/* TTBXCustomColorSet.Create */ inline __fastcall virtual TTBXColorSet(System::Classes::TComponent* AOwner) : TTBXCustomColorSet(AOwner) { }
	/* TTBXCustomColorSet.Destroy */ inline __fastcall virtual ~TTBXColorSet(void) { }
	
};


class DELPHICLASS TTBXColorPalette;
class PASCALIMPLEMENTATION TTBXColorPalette : public TTBXCustomToolPalette
{
	typedef TTBXCustomToolPalette inherited;
	
private:
	System::Uitypes::TColor FColor;
	TTBXCustomColorSet* FColorSet;
	void __fastcall SetColorSet(TTBXCustomColorSet* Value);
	void __fastcall SetColor(System::Uitypes::TColor Value);
	
protected:
	virtual void __fastcall DoCalcImageSize(Vcl::Graphics::TCanvas* Canvas, int &AWidth, int &AHeight);
	virtual void __fastcall DoChange(void);
	virtual void __fastcall DoGetCellVisible(int ACol, int ARow, bool &Visible);
	virtual void __fastcall DoGetHint(const System::Types::TPoint &ACell, System::UnicodeString &HintText);
	virtual void __fastcall DoDrawCellImage(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &ARect, int ACol, int ARow, const Tbxthemes::TTBXItemInfo &ItemInfo);
	TTBXCustomColorSet* __fastcall GetColorSet(void);
	virtual System::Uitypes::TColor __fastcall GetCellColor(int ACol, int ARow);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	
public:
	__fastcall virtual TTBXColorPalette(System::Classes::TComponent* AOwner);
	System::Types::TPoint __fastcall FindCell(System::Uitypes::TColor AColor);
	System::UnicodeString __fastcall ColorToString(System::Uitypes::TColor AColor);
	
__published:
	__property System::Uitypes::TColor Color = {read=FColor, write=SetColor, default=536870911};
	__property TTBXCustomColorSet* ColorSet = {read=FColorSet, write=SetColorSet};
	__property HelpContext = {default=0};
	__property InheritOptions = {default=1};
	__property MaskOptions = {default=0};
	__property Options = {default=128};
	__property PaletteOptions;
	__property Stretch = {default=0};
	__property Visible = {default=1};
	__property OnChange;
	__property OnCellClick;
	__property OnGetCellHint;
public:
	/* TTBXCustomItem.Destroy */ inline __fastcall virtual ~TTBXColorPalette(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Tbxtoolpals */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_TBXTOOLPALS)
using namespace Tbxtoolpals;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// TbxtoolpalsHPP
