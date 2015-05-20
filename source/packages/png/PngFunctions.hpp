// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'PngFunctions.pas' rev: 27.00 (Windows)

#ifndef PngfunctionsHPP
#define PngfunctionsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Winapi.Windows.hpp>	// Pascal unit
#include <Vcl.Graphics.hpp>	// Pascal unit
#include <Vcl.ImgList.hpp>	// Pascal unit
#include <System.Contnrs.hpp>	// Pascal unit
#include <Vcl.Imaging.pngimage.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Pngfunctions
{
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TPngOption : unsigned char { pngBlendOnDisabled, pngGrayscaleOnDisabled };

typedef System::Set<TPngOption, TPngOption::pngBlendOnDisabled, TPngOption::pngGrayscaleOnDisabled> TPngOptions;

typedef System::StaticArray<tagRGBTRIPLE, 65536> TRGBLine;

typedef TRGBLine *PRGBLine;

typedef System::StaticArray<tagRGBQUAD, 65536> TRGBALine;

typedef TRGBALine *PRGBALine;

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE void __fastcall MakeImageBlended(Vcl::Imaging::Pngimage::TPngImage* Image, System::Byte Amount = (System::Byte)(0x7f));
extern DELPHI_PACKAGE void __fastcall MakeImageGrayscale(Vcl::Imaging::Pngimage::TPngImage* Image, System::Byte Amount = (System::Byte)(0xff));
extern DELPHI_PACKAGE void __fastcall DrawPNG(Vcl::Imaging::Pngimage::TPngImage* Png, Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &ARect, const TPngOptions Options);
extern DELPHI_PACKAGE void __fastcall ConvertToPNG(Vcl::Graphics::TGraphic* Source, /* out */ Vcl::Imaging::Pngimage::TPngImage* &Dest);
extern DELPHI_PACKAGE void __fastcall CreatePNG(Vcl::Graphics::TBitmap* Color, Vcl::Graphics::TBitmap* Mask, /* out */ Vcl::Imaging::Pngimage::TPngImage* &Dest, bool InverseMask = false);
extern DELPHI_PACKAGE void __fastcall CreatePNGMasked(Vcl::Graphics::TBitmap* Bitmap, System::Uitypes::TColor Mask, /* out */ Vcl::Imaging::Pngimage::TPngImage* &Dest);
extern DELPHI_PACKAGE void __fastcall CopyImageFromImageList(Vcl::Imaging::Pngimage::TPngImage* Dest, Vcl::Imglist::TCustomImageList* ImageList, int Index);
extern DELPHI_PACKAGE void __fastcall SlicePNG(Vcl::Imaging::Pngimage::TPngImage* JoinedPNG, int Columns, int Rows, /* out */ System::Contnrs::TObjectList* &SlicedPNGs);
}	/* namespace Pngfunctions */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_PNGFUNCTIONS)
using namespace Pngfunctions;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// PngfunctionsHPP
