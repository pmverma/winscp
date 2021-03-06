﻿// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'TB2Anim.pas' rev: 27.00 (Windows)

#ifndef Tb2animHPP
#define Tb2animHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Winapi.Windows.hpp>	// Pascal unit
#include <Winapi.Messages.hpp>	// Pascal unit
#include <System.SysUtils.hpp>	// Pascal unit
#include <System.Classes.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Tb2anim
{
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM Tb2anim__1 : unsigned char { tbadLeft, tbadRight, tbadDown, tbadUp };

typedef System::Set<Tb2anim__1, Tb2anim__1::tbadLeft, Tb2anim__1::tbadUp> TTBAnimationDirection;

//-- var, const, procedure ---------------------------------------------------
static const System::Word WM_TB2K_STEPANIMATION = System::Word(0x955);
static const System::Word WM_TB2K_ANIMATIONENDED = System::Word(0x956);
extern DELPHI_PACKAGE void __fastcall TBEndAnimation(const HWND Wnd);
extern DELPHI_PACKAGE void __fastcall TBStartAnimation(const HWND AWnd, const bool ABlend, const TTBAnimationDirection ADirection);
extern DELPHI_PACKAGE void __fastcall TBStepAnimation(const Winapi::Messages::TMessage &Msg);
}	/* namespace Tb2anim */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_TB2ANIM)
using namespace Tb2anim;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Tb2animHPP
