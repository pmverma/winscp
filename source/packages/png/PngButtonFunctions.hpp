// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'PngButtonFunctions.pas' rev: 27.00 (Windows)

#ifndef PngbuttonfunctionsHPP
#define PngbuttonfunctionsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Winapi.Windows.hpp>	// Pascal unit
#include <Vcl.Buttons.hpp>	// Pascal unit
#include <Vcl.Graphics.hpp>	// Pascal unit
#include <Vcl.Imaging.pngimage.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Pngbuttonfunctions
{
//-- type declarations -------------------------------------------------------
//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE void __fastcall CalcButtonLayout(Vcl::Graphics::TCanvas* Canvas, Vcl::Imaging::Pngimage::TPngImage* PngImage, const System::Types::TRect &Client, bool Pressed, bool Down, const System::UnicodeString Caption, Vcl::Buttons::TButtonLayout Layout, int Margin, int Spacing, System::Types::TPoint &GlyphPos, System::Types::TPoint &TextPos, int BiDiFlags);
}	/* namespace Pngbuttonfunctions */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_PNGBUTTONFUNCTIONS)
using namespace Pngbuttonfunctions;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// PngbuttonfunctionsHPP
