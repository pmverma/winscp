// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'GrayedCheckBox.pas' rev: 27.00 (Windows)

#ifndef GrayedcheckboxHPP
#define GrayedcheckboxHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Vcl.StdCtrls.hpp>	// Pascal unit
#include <Vcl.Controls.hpp>	// Pascal unit
#include <System.Classes.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Grayedcheckbox
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TGrayedCheckBox;
class PASCALIMPLEMENTATION TGrayedCheckBox : public Vcl::Stdctrls::TCheckBox
{
	typedef Vcl::Stdctrls::TCheckBox inherited;
	
protected:
	virtual void __fastcall Toggle(void);
public:
	/* TCustomCheckBox.Create */ inline __fastcall virtual TGrayedCheckBox(System::Classes::TComponent* AOwner) : Vcl::Stdctrls::TCheckBox(AOwner) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TGrayedCheckBox(HWND ParentWindow) : Vcl::Stdctrls::TCheckBox(ParentWindow) { }
	/* TWinControl.Destroy */ inline __fastcall virtual ~TGrayedCheckBox(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE void __fastcall Register(void);
}	/* namespace Grayedcheckbox */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_GRAYEDCHECKBOX)
using namespace Grayedcheckbox;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// GrayedcheckboxHPP
