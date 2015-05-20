// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'PngBitBtn.pas' rev: 27.00 (Windows)

#ifndef PngbitbtnHPP
#define PngbitbtnHPP

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
#include <Vcl.Graphics.hpp>	// Pascal unit
#include <Vcl.Controls.hpp>	// Pascal unit
#include <Vcl.Buttons.hpp>	// Pascal unit
#include <Vcl.Imaging.pngimage.hpp>	// Pascal unit
#include <PngFunctions.hpp>	// Pascal unit
#include <Vcl.StdCtrls.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Pngbitbtn
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TPngBitBtn;
class PASCALIMPLEMENTATION TPngBitBtn : public Vcl::Buttons::TBitBtn
{
	typedef Vcl::Buttons::TBitBtn inherited;
	
private:
	Vcl::Imaging::Pngimage::TPngImage* FPngImage;
	Pngfunctions::TPngOptions FPngOptions;
	Vcl::Graphics::TCanvas* FCanvas;
	Vcl::Buttons::TBitBtnKind FLastKind;
	bool FImageFromAction;
	bool FMouseInControl;
	bool IsFocused;
	bool __fastcall PngImageStored(void);
	void __fastcall SetPngImage(Vcl::Imaging::Pngimage::TPngImage* const Value);
	void __fastcall SetPngOptions(const Pngfunctions::TPngOptions Value);
	HIDESBASE MESSAGE void __fastcall CNDrawItem(Winapi::Messages::TWMDrawItem &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Winapi::Messages::TMessage &Message);
	
protected:
	DYNAMIC void __fastcall ActionChange(System::TObject* Sender, bool CheckDefaults);
	virtual void __fastcall SetButtonStyle(bool ADefault);
	
public:
	__fastcall virtual TPngBitBtn(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TPngBitBtn(void);
	
__published:
	__property Vcl::Imaging::Pngimage::TPngImage* PngImage = {read=FPngImage, write=SetPngImage, stored=PngImageStored};
	__property Pngfunctions::TPngOptions PngOptions = {read=FPngOptions, write=SetPngOptions, default=1};
	__property Glyph = {stored=false};
	__property NumGlyphs = {stored=false, default=1};
public:
	/* TWinControl.CreateParented */ inline __fastcall TPngBitBtn(HWND ParentWindow) : Vcl::Buttons::TBitBtn(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Pngbitbtn */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_PNGBITBTN)
using namespace Pngbitbtn;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// PngbitbtnHPP
