// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'TBXUtils.pas' rev: 27.00 (Windows)

#ifndef TbxutilsHPP
#define TbxutilsHPP

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
#include <Vcl.Graphics.hpp>	// Pascal unit
#include <Vcl.Controls.hpp>	// Pascal unit
#include <Vcl.Forms.hpp>	// Pascal unit
#include <Vcl.ImgList.hpp>	// Pascal unit
#include <System.UITypes.hpp>	// Pascal unit
#include <System.Types.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Tbxutils
{
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TGradientKind : unsigned char { gkHorz, gkVert };

typedef System::Uitypes::TColor *PColor;

enum DECLSPEC_DENUM Tbxutils__1 : unsigned char { seTopLeft, seBottomRight };

typedef System::Set<Tbxutils__1, Tbxutils__1::seTopLeft, Tbxutils__1::seBottomRight> TShadowEdges;

enum DECLSPEC_DENUM TShadowStyle : unsigned char { ssFlat, ssLayered };

class DELPHICLASS TShadow;
class PASCALIMPLEMENTATION TShadow : public Vcl::Controls::TCustomControl
{
	typedef Vcl::Controls::TCustomControl inherited;
	
protected:
	System::Byte FOpacity;
	Vcl::Graphics::TBitmap* FBuffer;
	System::Types::TRect FClearRect;
	TShadowEdges FEdges;
	TShadowStyle FStyle;
	bool FSaveBits;
	void __fastcall GradR(const System::Types::TRect &R);
	void __fastcall GradB(const System::Types::TRect &R);
	void __fastcall GradBR(const System::Types::TRect &R);
	void __fastcall GradTR(const System::Types::TRect &R);
	void __fastcall GradBL(const System::Types::TRect &R);
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall FillBuffer(void) = 0 ;
	HIDESBASE MESSAGE void __fastcall WMNCHitTest(Winapi::Messages::TMessage &Message);
	
public:
	__fastcall TShadow(const System::Types::TRect &Bounds, System::Byte Opacity, bool LoColor, TShadowEdges Edges);
	void __fastcall Clear(const System::Types::TRect &R);
	void __fastcall Render(void);
	HIDESBASE void __fastcall Show(HWND ParentHandle);
public:
	/* TCustomControl.Destroy */ inline __fastcall virtual ~TShadow(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TShadow(HWND ParentWindow) : Vcl::Controls::TCustomControl(ParentWindow) { }
	
};


class DELPHICLASS THorzShadow;
class PASCALIMPLEMENTATION THorzShadow : public TShadow
{
	typedef TShadow inherited;
	
protected:
	virtual void __fastcall FillBuffer(void);
public:
	/* TShadow.Create */ inline __fastcall THorzShadow(const System::Types::TRect &Bounds, System::Byte Opacity, bool LoColor, TShadowEdges Edges) : TShadow(Bounds, Opacity, LoColor, Edges) { }
	
public:
	/* TCustomControl.Destroy */ inline __fastcall virtual ~THorzShadow(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall THorzShadow(HWND ParentWindow) : TShadow(ParentWindow) { }
	
};


class DELPHICLASS TVertShadow;
class PASCALIMPLEMENTATION TVertShadow : public TShadow
{
	typedef TShadow inherited;
	
protected:
	virtual void __fastcall FillBuffer(void);
public:
	/* TShadow.Create */ inline __fastcall TVertShadow(const System::Types::TRect &Bounds, System::Byte Opacity, bool LoColor, TShadowEdges Edges) : TShadow(Bounds, Opacity, LoColor, Edges) { }
	
public:
	/* TCustomControl.Destroy */ inline __fastcall virtual ~TVertShadow(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TVertShadow(HWND ParentWindow) : TShadow(ParentWindow) { }
	
};


class DELPHICLASS TShadows;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TShadows : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	bool FSaveBits;
	void __fastcall SetSaveBits(bool Value);
	
protected:
	TShadow* V1;
	TShadow* H1;
	TShadow* V2;
	TShadow* H2;
	TShadow* V3;
	TShadow* H3;
	
public:
	__fastcall TShadows(const System::Types::TRect &R1, const System::Types::TRect &R2, int TheSize, System::Byte Opacity, bool LoColor);
	__fastcall virtual ~TShadows(void);
	void __fastcall Show(HWND ParentHandle);
	__property bool SaveBits = {read=FSaveBits, write=SetSaveBits, nodefault};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
static const System::Int8 SHD_DENSE = System::Int8(0x0);
static const System::Int8 SHD_LIGHT = System::Int8(0x1);
extern DELPHI_PACKAGE Vcl::Graphics::TBitmap* StockBitmap1;
extern DELPHI_PACKAGE Vcl::Graphics::TBitmap* StockBitmap2;
extern DELPHI_PACKAGE Vcl::Graphics::TBitmap* StockMonoBitmap;
extern DELPHI_PACKAGE Vcl::Graphics::TBitmap* StockCompatibleBitmap;
extern DELPHI_PACKAGE Vcl::Graphics::TFont* SmCaptionFont;
static const int ROP_DSPDxax = int(0xe20746);
extern DELPHI_PACKAGE int __fastcall GetTextHeightW(HDC DC);
extern DELPHI_PACKAGE int __fastcall GetTextWidthW(HDC DC, const System::WideString S, bool StripAccelChar);
extern DELPHI_PACKAGE void __fastcall DrawRotatedTextW(HDC DC, System::WideString AText, const System::Types::TRect &ARect, const unsigned AFormat);
extern DELPHI_PACKAGE System::WideString __fastcall EscapeAmpersandsW(const System::WideString S);
extern DELPHI_PACKAGE System::WideChar __fastcall FindAccelCharW(const System::WideString S);
extern DELPHI_PACKAGE System::WideString __fastcall StripAccelCharsW(const System::WideString S);
extern DELPHI_PACKAGE System::WideString __fastcall StripTrailingPunctuationW(const System::WideString S);
extern DELPHI_PACKAGE void __fastcall GetRGB(System::Uitypes::TColor C, /* out */ int &R, /* out */ int &G, /* out */ int &B);
extern DELPHI_PACKAGE System::Uitypes::TColor __fastcall MixColors(System::Uitypes::TColor C1, System::Uitypes::TColor C2, int W1);
extern DELPHI_PACKAGE bool __fastcall SameColors(System::Uitypes::TColor C1, System::Uitypes::TColor C2);
extern DELPHI_PACKAGE System::Uitypes::TColor __fastcall Lighten(System::Uitypes::TColor C, int Amount);
extern DELPHI_PACKAGE System::Uitypes::TColor __fastcall NearestLighten(System::Uitypes::TColor C, int Amount);
extern DELPHI_PACKAGE System::Uitypes::TColor __fastcall NearestMixedColor(System::Uitypes::TColor C1, System::Uitypes::TColor C2, int W1);
extern DELPHI_PACKAGE int __fastcall ColorIntensity(System::Uitypes::TColor C);
extern DELPHI_PACKAGE bool __fastcall IsDarkColor(System::Uitypes::TColor C, int Threshold = 0x64);
extern DELPHI_PACKAGE System::Uitypes::TColor __fastcall Blend(System::Uitypes::TColor C1, System::Uitypes::TColor C2, int W1);
extern DELPHI_PACKAGE void __fastcall SetContrast(System::Uitypes::TColor &Color, System::Uitypes::TColor BkgndColor, int Threshold);
extern DELPHI_PACKAGE void __fastcall RGBtoHSL(System::Uitypes::TColor RGB, /* out */ float &H, /* out */ float &S, /* out */ float &L);
extern DELPHI_PACKAGE System::Uitypes::TColor __fastcall HSLtoRGB(float H, float S, float L);
extern DELPHI_PACKAGE unsigned __fastcall GetBGR(unsigned C);
extern DELPHI_PACKAGE void __fastcall SetPixelEx(HDC DC, int X, int Y, unsigned C, unsigned Alpha = (unsigned)(0xff));
extern DELPHI_PACKAGE HPEN __fastcall CreatePenEx(System::Uitypes::TColor Color);
extern DELPHI_PACKAGE HBRUSH __fastcall CreateBrushEx(System::Uitypes::TColor Color);
extern DELPHI_PACKAGE bool __fastcall FillRectEx(HDC DC, const System::Types::TRect &Rect, System::Uitypes::TColor Color);
extern DELPHI_PACKAGE bool __fastcall FrameRectEx(HDC DC, System::Types::TRect &Rect, System::Uitypes::TColor Color, bool Adjust);
extern DELPHI_PACKAGE void __fastcall DrawLineEx(HDC DC, int X1, int Y1, int X2, int Y2, System::Uitypes::TColor Color);
extern DELPHI_PACKAGE bool __fastcall PolyLineEx(HDC DC, System::Types::TPoint const *Points, const int Points_High, System::Uitypes::TColor Color)/* overload */;
extern DELPHI_PACKAGE void __fastcall PolygonEx(HDC DC, System::Types::TPoint const *Points, const int Points_High, System::Uitypes::TColor OutlineColor, System::Uitypes::TColor FillColor);
extern DELPHI_PACKAGE void __fastcall RoundRectEx(HDC DC, int Left, int Top, int Right, int Bottom, System::Uitypes::TColor EllipseWidth, System::Uitypes::TColor EllipseHeight, System::Uitypes::TColor OutlineColor, System::Uitypes::TColor FillColor)/* overload */;
extern DELPHI_PACKAGE void __fastcall RoundRectEx(HDC DC, const System::Types::TRect &R, System::Uitypes::TColor EllipseWidth, System::Uitypes::TColor EllipseHeight, System::Uitypes::TColor OutlineColor, System::Uitypes::TColor FillColor)/* overload */;
extern DELPHI_PACKAGE HBRUSH __fastcall CreateDitheredBrush(System::Uitypes::TColor C1, System::Uitypes::TColor C2);
extern DELPHI_PACKAGE void __fastcall DitherRect(HDC DC, const System::Types::TRect &R, System::Uitypes::TColor C1, System::Uitypes::TColor C2);
extern DELPHI_PACKAGE void __fastcall Frame3D(HDC DC, System::Types::TRect &Rect, System::Uitypes::TColor TopColor, System::Uitypes::TColor BottomColor, bool Adjust);
extern DELPHI_PACKAGE void __fastcall DrawDraggingOutline(HDC DC, const System::Types::TRect &NewRect, const System::Types::TRect &OldRect);
extern DELPHI_PACKAGE void __fastcall FillLongword(void *X, int Count, unsigned Value);
extern DELPHI_PACKAGE void __fastcall MoveLongword(const void *Source, void *Dest, int Count);
extern DELPHI_PACKAGE void __fastcall DrawTBXIcon(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &R, Vcl::Imglist::TCustomImageList* ImageList, int ImageIndex, bool HiContrast);
extern DELPHI_PACKAGE void __fastcall BlendTBXIcon(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &R, Vcl::Imglist::TCustomImageList* ImageList, int ImageIndex, System::Byte Opacity);
extern DELPHI_PACKAGE void __fastcall HighlightTBXIcon(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &R, Vcl::Imglist::TCustomImageList* ImageList, int ImageIndex, System::Uitypes::TColor HighlightColor, System::Byte Amount);
extern DELPHI_PACKAGE void __fastcall DrawTBXIconShadow(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &R, Vcl::Imglist::TCustomImageList* ImageList, int ImageIndex, int Density);
extern DELPHI_PACKAGE void __fastcall DrawTBXIconFlatShadow(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &R, Vcl::Imglist::TCustomImageList* ImageList, int ImageIndex, System::Uitypes::TColor ShadowColor);
extern DELPHI_PACKAGE void __fastcall DrawTBXIconFullShadow(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &R, Vcl::Imglist::TCustomImageList* ImageList, int ImageIndex, System::Uitypes::TColor ShadowColor);
extern DELPHI_PACKAGE void __fastcall DrawGlyph(HDC DC, int X, int Y, Vcl::Imglist::TCustomImageList* ImageList, int ImageIndex, System::Uitypes::TColor Color)/* overload */;
extern DELPHI_PACKAGE void __fastcall DrawGlyph(HDC DC, const System::Types::TRect &R, Vcl::Imglist::TCustomImageList* ImageList, int ImageIndex, System::Uitypes::TColor Color)/* overload */;
extern DELPHI_PACKAGE void __fastcall DrawGlyph(HDC DC, int X, int Y, const void *Bits, System::Uitypes::TColor Color)/* overload */;
extern DELPHI_PACKAGE void __fastcall DrawGlyph(HDC DC, const System::Types::TRect &R, int Width, int Height, const void *Bits, System::Uitypes::TColor Color)/* overload */;
extern DELPHI_PACKAGE System::Types::TPoint __fastcall GetClientSizeEx(Vcl::Controls::TWinControl* Control);
extern DELPHI_PACKAGE void __fastcall RecreateStock(void);
extern DELPHI_PACKAGE void __fastcall GradFill(HDC DC, const System::Types::TRect &ARect, System::Uitypes::TColor ClrTopLeft, System::Uitypes::TColor ClrBottomRight, TGradientKind Kind);
extern DELPHI_PACKAGE void __fastcall ResetBrushedFillCache(void);
extern DELPHI_PACKAGE void __fastcall BrushedFill(HDC DC, System::Types::PPoint Origin, const System::Types::TRect &ARect, System::Uitypes::TColor Color, int Roughness);
}	/* namespace Tbxutils */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_TBXUTILS)
using namespace Tbxutils;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// TbxutilsHPP
