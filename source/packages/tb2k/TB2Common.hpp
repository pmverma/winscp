// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'TB2Common.pas' rev: 27.00 (Windows)

#ifndef Tb2commonHPP
#define Tb2commonHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Winapi.Windows.hpp>	// Pascal unit
#include <System.Classes.hpp>	// Pascal unit
#include <System.SysUtils.hpp>	// Pascal unit
#include <Winapi.Messages.hpp>	// Pascal unit
#include <Vcl.Controls.hpp>	// Pascal unit
#include <Vcl.Forms.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Tb2common
{
//-- type declarations -------------------------------------------------------
typedef int __fastcall (*TListSortExCompare)(const void * Item1, const void * Item2, const void * ExtraData);

typedef void __fastcall (*THandleWMPrintNCPaintProc)(HWND Wnd, HDC DC, int AppData);

//-- var, const, procedure ---------------------------------------------------
static const System::Int8 PopupMenuWindowNCSize = System::Int8(0x3);
extern DELPHI_PACKAGE BOOL __stdcall (*TrackMouseEventFunc)(tagTRACKMOUSEEVENT &EventTrack);
extern DELPHI_PACKAGE bool __fastcall ApplicationIsActive(void);
extern DELPHI_PACKAGE void __fastcall ListSortEx(System::Classes::TList* const List, const TListSortExCompare Compare, const void * ExtraData);
extern DELPHI_PACKAGE void __fastcall HandleWMPrint(const HWND Wnd, Winapi::Messages::TMessage &Message, const THandleWMPrintNCPaintProc NCPaintFunc, const int AppData);
extern DELPHI_PACKAGE void __fastcall HandleWMPrintClient(Vcl::Controls::TWinControl* const Control, Winapi::Messages::TMessage &Message);
extern DELPHI_PACKAGE int __fastcall DivRoundUp(const int Dividend, const int Divisor);
extern DELPHI_PACKAGE int __fastcall GetTextHeight(const HDC DC);
extern DELPHI_PACKAGE System::UnicodeString __fastcall StripAccelChars(const System::UnicodeString S, bool IncludingStandaloneKey = false);
extern DELPHI_PACKAGE System::UnicodeString __fastcall EscapeAmpersands(const System::UnicodeString S);
extern DELPHI_PACKAGE System::UnicodeString __fastcall StripTrailingPunctuation(const System::UnicodeString S);
extern DELPHI_PACKAGE int __fastcall GetTextWidth(const HDC DC, System::UnicodeString S, const bool Prefix);
extern DELPHI_PACKAGE void __fastcall ProcessPaintMessages(void);
extern DELPHI_PACKAGE void __fastcall RemoveMessages(const int AMin, const int AMax);
extern DELPHI_PACKAGE void __fastcall SelectNCUpdateRgn(HWND Wnd, HDC DC, HRGN Rgn);
extern DELPHI_PACKAGE bool __fastcall AddToList(System::Classes::TList* &List, void * Item);
extern DELPHI_PACKAGE bool __fastcall AddToFrontOfList(System::Classes::TList* &List, void * Item);
extern DELPHI_PACKAGE void __fastcall RemoveFromList(System::Classes::TList* &List, void * Item);
extern DELPHI_PACKAGE int __fastcall GetMenuShowDelay(void);
extern DELPHI_PACKAGE bool __fastcall AreFlatMenusEnabled(void);
extern DELPHI_PACKAGE bool __fastcall AreKeyboardCuesEnabled(void);
extern DELPHI_PACKAGE HRGN __fastcall CreateNullRegion(void);
extern DELPHI_PACKAGE void __fastcall DrawInvertRect(const HDC DC, const System::Types::PRect NewRect, const System::Types::PRect OldRect, const System::Types::TSize &NewSize, const System::Types::TSize &OldSize, const HBRUSH Brush, HBRUSH BrushLast);
extern DELPHI_PACKAGE HBRUSH __fastcall CreateHalftoneBrush(void);
extern DELPHI_PACKAGE void __fastcall DrawHalftoneInvertRect(const HDC DC, const System::Types::PRect NewRect, const System::Types::PRect OldRect, const System::Types::TSize &NewSize, const System::Types::TSize &OldSize);
extern DELPHI_PACKAGE bool __fastcall MethodsEqual(const System::TMethod &M1, const System::TMethod &M2);
extern DELPHI_PACKAGE System::Types::TRect __fastcall GetRectOfPrimaryMonitor(const bool WorkArea);
extern DELPHI_PACKAGE bool __fastcall UsingMultipleMonitors(void);
extern DELPHI_PACKAGE System::Types::TRect __fastcall GetRectOfMonitorContainingRect(const System::Types::TRect &R, const bool WorkArea);
extern DELPHI_PACKAGE System::Types::TRect __fastcall GetRectOfMonitorContainingPoint(const System::Types::TPoint &P, const bool WorkArea);
extern DELPHI_PACKAGE System::Types::TRect __fastcall GetRectOfMonitorContainingWindow(const HWND W, const bool WorkArea);
extern DELPHI_PACKAGE bool __fastcall CallTrackMouseEvent(const HWND Wnd, const unsigned Flags);
extern DELPHI_PACKAGE HFONT __fastcall CreateRotatedFont(HDC DC);
extern DELPHI_PACKAGE void __fastcall DrawRotatedText(const HDC DC, System::UnicodeString AText, const System::Types::TRect &ARect, const unsigned AFormat);
extern DELPHI_PACKAGE bool __fastcall NeedToPlaySound(const System::UnicodeString Alias);
extern DELPHI_PACKAGE int __fastcall Max(int A, int B);
extern DELPHI_PACKAGE int __fastcall Min(int A, int B);
extern DELPHI_PACKAGE System::WideChar __fastcall FindAccelChar(const System::UnicodeString S);
extern DELPHI_PACKAGE unsigned __fastcall GetInputLocaleCodePage(void);
}	/* namespace Tb2common */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_TB2COMMON)
using namespace Tb2common;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Tb2commonHPP
