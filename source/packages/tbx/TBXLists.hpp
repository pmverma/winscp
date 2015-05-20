// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'TBXLists.pas' rev: 27.00 (Windows)

#ifndef TbxlistsHPP
#define TbxlistsHPP

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
#include <Winapi.UxTheme.hpp>	// Pascal unit
#include <Vcl.ImgList.hpp>	// Pascal unit
#include <System.Types.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Tbxlists
{
//-- type declarations -------------------------------------------------------
typedef System::Word TSBIncrement;

enum DECLSPEC_DENUM TSBZone : unsigned char { sbzEmpty, sbzPrev, sbzPagePrev, sbzHandle, sbzPageNext, sbzNext };

typedef void __fastcall (__closure *TSBAutoScrollEvent)(System::TObject* Sender, int &Direction, int &Interval);

class DELPHICLASS TTBXScrollBar;
class PASCALIMPLEMENTATION TTBXScrollBar : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::Types::TRect FBounds;
	int FLeft;
	HWND FHandle;
	int FHeight;
	TSBIncrement FIncrement;
	Vcl::Forms::TScrollBarKind FKind;
	int FPosition;
	int FRange;
	int FRight;
	int FTop;
	int FWidth;
	int FWindow;
	System::Classes::TNotifyEvent FOnChange;
	TSBAutoScrollEvent FOnAutoScroll;
	System::Classes::TNotifyEvent FOnRedrawRequest;
	void __fastcall SetBounds(const System::Types::TRect &Value);
	void __fastcall SetKind(Vcl::Forms::TScrollBarKind Value);
	void __fastcall SetPosition(int Value);
	void __fastcall SetRange(int Value);
	HWND __fastcall GetHandle(void);
	
protected:
	int AutoScrollDirection;
	bool AutoScrolling;
	int AutoScrollInterval;
	System::StaticArray<System::Types::TRect, 6> Zones;
	TSBZone MouseDownZone;
	System::Types::TPoint MouseDownPoint;
	int MouseDownPosition;
	System::Types::TPoint LastMousePoint;
	HWND PrevCapture;
	bool UserChange;
	void __fastcall AdjustPosition(int &NewPosition);
	void __fastcall CreateWnd(void);
	void __fastcall DestroyWnd(void);
	TSBZone __fastcall GetZone(int X, int Y);
	int __fastcall GetEffectiveWindow(void);
	virtual bool __fastcall GetEnabled(void);
	void __fastcall HandleZoneClick(TSBZone AZone);
	virtual void __fastcall MouseDown(System::Uitypes::TMouseButton Button, int X, int Y);
	virtual void __fastcall MouseMove(int X, int Y);
	virtual void __fastcall MouseUp(System::Uitypes::TMouseButton Button, int X, int Y);
	void __fastcall PaintButton(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &Rect, int Direction, bool Pushed, bool Enabled);
	void __fastcall PaintHandle(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &Rect, bool Pushed, bool Enabled);
	void __fastcall PaintTrack(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &Rect, bool IsNextZone, bool Pushed, bool Enabled);
	void __fastcall PaintTo(Vcl::Graphics::TCanvas* Canvas);
	void __fastcall SBWndProc(Winapi::Messages::TMessage &Message);
	void __fastcall StartAutoScroll(int Direction, int Interval);
	void __fastcall StopAutoScroll(void);
	void __fastcall StartTimer(int ID, int Elapse);
	void __fastcall StopTimer(int ID);
	virtual void __fastcall TimerElapsed(int ID, int &NewElapse);
	void __fastcall UpdateZones(void);
	__property HWND Handle = {read=GetHandle, nodefault};
	
public:
	__fastcall TTBXScrollBar(void);
	__fastcall virtual ~TTBXScrollBar(void);
	virtual void __fastcall Redraw(void);
	void __fastcall UpdatePosition(int NewPosition);
	__property Vcl::Forms::TScrollBarKind Kind = {read=FKind, write=SetKind, nodefault};
	__property System::Types::TRect Bounds = {read=FBounds, write=SetBounds};
	__property int Left = {read=FLeft, nodefault};
	__property int Height = {read=FHeight, nodefault};
	__property TSBIncrement Increment = {read=FIncrement, write=FIncrement, nodefault};
	__property int Position = {read=FPosition, write=SetPosition, nodefault};
	__property int Range = {read=FRange, write=SetRange, nodefault};
	__property int Right = {read=FRight, nodefault};
	__property int Top = {read=FTop, nodefault};
	__property int Width = {read=FWidth, nodefault};
	__property int Window = {read=FWindow, write=FWindow, nodefault};
	__property TSBAutoScrollEvent OnAutoScroll = {read=FOnAutoScroll, write=FOnAutoScroll};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property System::Classes::TNotifyEvent OnRedrawRequest = {read=FOnRedrawRequest, write=FOnRedrawRequest};
};


class DELPHICLASS TTBXCustomList;
typedef void __fastcall (__closure *TTBXLMeasureHeight)(TTBXCustomList* Sender, Vcl::Graphics::TCanvas* ACanvas, int &AHeight);

typedef void __fastcall (__closure *TTBXLMeasureWidth)(TTBXCustomList* Sender, Vcl::Graphics::TCanvas* ACanvas, int AIndex, int &AWidth);

typedef void __fastcall (__closure *TTBXLPaintEvent)(TTBXCustomList* Sender, Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, int AIndex, int AHoverIndex, bool &DrawDefault);

typedef void __fastcall (__closure *TTBXLAdjustImageIndex)(TTBXCustomList* Sender, int AItemIndex, int &ImageIndex);

class DELPHICLASS TTBXCustomListViewer;
class PASCALIMPLEMENTATION TTBXCustomList : public Tbx::TTBXCustomItem
{
	typedef Tbx::TTBXCustomItem inherited;
	
private:
	System::Classes::TList* FViewers;
	int FItemIndex;
	int FMinWidth;
	int FMaxWidth;
	int FMaxVisibleItems;
	bool FShowImages;
	System::Classes::TNotifyEvent FOnChange;
	TTBXLPaintEvent FOnClearItem;
	TTBXLPaintEvent FOnDrawItem;
	TTBXLAdjustImageIndex FOnAdjustImageIndex;
	TTBXLMeasureHeight FOnMeasureHeight;
	TTBXLMeasureWidth FOnMeasureWidth;
	void __fastcall SetItemIndex(int Value);
	
protected:
	virtual bool __fastcall DoClearItem(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, int AIndex, int AHoverIndex);
	virtual bool __fastcall DoDrawItem(Vcl::Graphics::TCanvas* ACanvas, System::Types::TRect &ARect, int AIndex, int AHoverIndex);
	virtual void __fastcall DoMeasureHeight(Vcl::Graphics::TCanvas* ACanvas, int &AHeight);
	virtual void __fastcall DoMeasureWidth(Vcl::Graphics::TCanvas* ACanvas, int AIndex, int &AWidth);
	virtual void __fastcall DrawItem(Vcl::Graphics::TCanvas* ACanvas, TTBXCustomListViewer* AViewer, const System::Types::TRect &ARect, int AIndex, int AHoverIndex);
	virtual int __fastcall GetImageIndex(int ItemIndex);
	virtual Tb2item::TTBItemViewerClass __fastcall GetItemViewerClass(Tb2item::TTBView* AView);
	virtual System::UnicodeString __fastcall GetItemText(int Index) = 0 ;
	virtual int __fastcall GetCount(void) = 0 ;
	virtual void __fastcall HandleChange(void);
	virtual void __fastcall HandleHover(int AIndex);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	
public:
	__fastcall virtual TTBXCustomList(System::Classes::TComponent* AOwner);
	void __fastcall MakeVisible(int AIndex);
	__property int ItemIndex = {read=FItemIndex, write=SetItemIndex, default=-1};
	__property int MaxVisibleItems = {read=FMaxVisibleItems, write=FMaxVisibleItems, default=8};
	__property int MaxWidth = {read=FMaxWidth, write=FMaxWidth, default=0};
	__property int MinWidth = {read=FMinWidth, write=FMinWidth, default=32};
	__property bool ShowImages = {read=FShowImages, write=FShowImages, default=0};
	__property TTBXLAdjustImageIndex OnAdjustImageIndex = {read=FOnAdjustImageIndex, write=FOnAdjustImageIndex};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property TTBXLPaintEvent OnClearItem = {read=FOnClearItem, write=FOnClearItem};
	__property TTBXLPaintEvent OnDrawItem = {read=FOnDrawItem, write=FOnDrawItem};
	__property TTBXLMeasureHeight OnMeasureHeight = {read=FOnMeasureHeight, write=FOnMeasureHeight};
	__property TTBXLMeasureWidth OnMeasureWidth = {read=FOnMeasureWidth, write=FOnMeasureWidth};
public:
	/* TTBXCustomItem.Destroy */ inline __fastcall virtual ~TTBXCustomList(void) { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TTBXCustomListViewer : public Tbx::TTBXItemViewer
{
	typedef Tbx::TTBXItemViewer inherited;
	
private:
	int FItemCount;
	int FItemHeight;
	int FHoverIndex;
	int FHeight;
	System::Types::TRect FLastClientRect;
	int FWheelAccumulator;
	int FWidth;
	int FOffset;
	int FScrollBarWidth;
	TTBXScrollBar* FScrollBar;
	int FVisibleItems;
	void __fastcall ListChangeHandler(int NewIndex);
	void __fastcall SBAutoScrollHandler(System::TObject* Sender, int &Direction, int &Interval);
	void __fastcall SBChangeHandler(System::TObject* Sender);
	void __fastcall SBRedrawHandler(System::TObject* Sender);
	
protected:
	bool MouseIsDown;
	bool MouseInScrollBar;
	bool IgnoreMouseUp;
	bool IsChanging;
	virtual void __fastcall AdjustAutoScrollHover(int &AIndex, int Direction);
	virtual void __fastcall CalcSize(Vcl::Graphics::TCanvas* const Canvas, int &AWidth, int &AHeight);
	void __fastcall DrawItems(Vcl::Graphics::TCanvas* const Canvas, const System::Types::TRect &ClientAreaRect);
	int __fastcall GetItemIndexAt(int X, int Y);
	System::Types::TRect __fastcall GetItemRect(int Index);
	virtual int __fastcall GetItemHeight(Vcl::Graphics::TCanvas* ACanvas);
	virtual int __fastcall GetItemWidth(Vcl::Graphics::TCanvas* ACanvas, int Index);
	virtual void __fastcall HandleAutoScroll(int &Direction, int &Interval);
	virtual void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	void __fastcall MakeVisible(int Index);
	virtual void __fastcall MouseDown(System::Classes::TShiftState Shift, int X, int Y, bool &MouseDownOnMenu);
	virtual void __fastcall MouseMove(int X, int Y);
	virtual void __fastcall MouseUp(int X, int Y, bool MouseWasDownOnMenu);
	virtual void __fastcall MouseWheel(int WheelDelta, int X, int Y);
	virtual void __fastcall Paint(Vcl::Graphics::TCanvas* const Canvas, const System::Types::TRect &ClientAreaRect, bool IsHoverItem, bool IsPushed, bool UseDisabledShadow);
	void __fastcall UpdateItems(void);
	__property int HoverIndex = {read=FHoverIndex, write=FHoverIndex, nodefault};
	__property int Offset = {read=FOffset, nodefault};
	__property int VisibleItems = {read=FVisibleItems, nodefault};
	
public:
	__fastcall virtual TTBXCustomListViewer(Tb2item::TTBView* AView, Tb2item::TTBCustomItem* AItem, int AGroupLevel);
	__fastcall virtual ~TTBXCustomListViewer(void);
};

#pragma pack(pop)

class DELPHICLASS TTBXStringList;
class PASCALIMPLEMENTATION TTBXStringList : public TTBXCustomList
{
	typedef TTBXCustomList inherited;
	
private:
	System::Classes::TStrings* FStrings;
	void __fastcall SetStrings(System::Classes::TStrings* Value);
	
protected:
	virtual System::UnicodeString __fastcall GetItemText(int Index);
	virtual int __fastcall GetCount(void);
	
public:
	__fastcall virtual TTBXStringList(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TTBXStringList(void);
	
__published:
	__property ItemIndex = {default=-1};
	__property MaxVisibleItems = {default=8};
	__property MaxWidth = {default=0};
	__property MinWidth = {default=32};
	__property System::Classes::TStrings* Strings = {read=FStrings, write=SetStrings};
	__property OnAdjustImageIndex;
	__property OnChange;
	__property OnClearItem;
	__property OnClick;
	__property OnDrawItem;
	__property OnMeasureHeight;
	__property OnMeasureWidth;
};


typedef System::TMetaClass* TTBXStringListClass;

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Tbxlists */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_TBXLISTS)
using namespace Tbxlists;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// TbxlistsHPP
