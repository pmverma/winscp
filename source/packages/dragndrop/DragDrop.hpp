// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DragDrop.pas' rev: 27.00 (Windows)

#ifndef DragdropHPP
#define DragdropHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.SysUtils.hpp>	// Pascal unit
#include <Winapi.Windows.hpp>	// Pascal unit
#include <System.Classes.hpp>	// Pascal unit
#include <Vcl.Controls.hpp>	// Pascal unit
#include <Vcl.Forms.hpp>	// Pascal unit
#include <Winapi.ShellAPI.hpp>	// Pascal unit
#include <Vcl.Menus.hpp>	// Pascal unit
#include <Winapi.Messages.hpp>	// Pascal unit
#include <Vcl.Graphics.hpp>	// Pascal unit
#include <Winapi.ActiveX.hpp>	// Pascal unit
#include <Vcl.ExtCtrls.hpp>	// Pascal unit
#include <Vcl.Grids.hpp>	// Pascal unit
#include <System.Types.hpp>	// Pascal unit
#include <System.UITypes.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------
#include <oleidl.h>

namespace Dragdrop
{
//-- type declarations -------------------------------------------------------
;

;

typedef tagFORMATETC TFormatEtc;

typedef tagSTGMEDIUM TStgMedium;

enum DECLSPEC_DENUM TDropEffect : unsigned char { deCopy, deMove, deLink };

enum DECLSPEC_DENUM TDragResult : unsigned char { drInvalid, drCancelled, drCopy, drMove, drLink };

typedef System::Set<TDropEffect, TDropEffect::deCopy, TDropEffect::deLink> TDropEffectSet;

enum DECLSPEC_DENUM TDragDetectStatus : unsigned char { ddsNone, ddsLeft, ddsRight, ddsCancelled, ddsDrag };

enum DECLSPEC_DENUM TRenderDataOn : unsigned char { rdoEnter, rdoEnterAndDropSync, rdoEnterAndDropAsync, rdoDropSync, rdoDropAsync, rdoNever };

enum DECLSPEC_DENUM TSrcCompatibilityCheck : unsigned char { CheckLindex, CheckdwAspect };

typedef System::Set<TSrcCompatibilityCheck, TSrcCompatibilityCheck::CheckLindex, TSrcCompatibilityCheck::CheckdwAspect> TSrcCompatibilityCheckSet;

typedef System::Word TScrollInterval;

enum DECLSPEC_DENUM TScrollDirection : unsigned char { sdUp, sdDown, sdLeft, sdRight };

typedef void __fastcall (__closure *TOnDragEnter)(_di_IDataObject DataObj, int grfKeyState, const System::Types::TPoint &pt, int &dwEffect, bool &Accept);

typedef void __fastcall (__closure *TOnDragLeave)(void);

typedef void __fastcall (__closure *TOnDragOver)(int grfKeyState, const System::Types::TPoint &pt, int &dwEffect);

typedef void __fastcall (__closure *TOnDrop)(_di_IDataObject DataObj, int grfKeyState, const System::Types::TPoint &pt, int &dwEffect);

typedef void __fastcall (__closure *TOnQueryContinueDrag)(BOOL fEscapePressed, int grfKeyState, HRESULT &Result);

typedef void __fastcall (__closure *TOnGiveFeedback)(int dwEffect, HRESULT &Result);

typedef void __fastcall (__closure *TOnDragDetect)(int grfKeyState, const System::Types::TPoint &DetectStart, const System::Types::TPoint &pt, TDragDetectStatus DragDetectStatus);

typedef void __fastcall (__closure *TOnProcessDropped)(System::TObject* Sender, int grfKeyState, const System::Types::TPoint &pt, int dwEffect);

typedef void __fastcall (__closure *TOnBeforeScrolling)(System::TObject* Sender, const System::Types::TPoint &pt, TScrollInterval &Interval, TScrollDirection ScrollDirection, bool &ScrollPage);

typedef void __fastcall (__closure *TOnMenuPopup)(System::TObject* Sender, HMENU AMenu, _di_IDataObject DataObj, int AMinCustCmd, int grfKeyState, const System::Types::TPoint &pt);

typedef void __fastcall (__closure *TOnMenuExecCmd)(System::TObject* Sender, HMENU AMenu, _di_IDataObject DataObj, int Command, int &dwEffect, bool &Succeeded);

typedef void __fastcall (__closure *TOnMenuDestroy)(System::TObject* Sender, HMENU AMenu);

typedef System::DynamicArray<tagFORMATETC> TFormatEtcArray;

struct DECLSPEC_DRECORD TDetectRec
{
};


class DELPHICLASS TFormatEtcList;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TFormatEtcList : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	int FCount;
	TFormatEtcArray FList;
	tagFORMATETC __fastcall Get(int Index);
	void __fastcall Put(int Index, const tagFORMATETC &Item);
	
public:
	__fastcall TFormatEtcList(void);
	__fastcall virtual ~TFormatEtcList(void);
	int __fastcall Add(const tagFORMATETC &Item);
	void __fastcall Clear(void);
	void __fastcall Delete(int Index);
	TFormatEtcList* __fastcall Clone(void);
	__property int Count = {read=FCount, nodefault};
	__property tagFORMATETC Items[int Index] = {read=Get, write=Put};
};

#pragma pack(pop)

class DELPHICLASS TDDInterfacedObject;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TDDInterfacedObject : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
public:
	HIDESBASE HRESULT __stdcall QueryInterface(const GUID &IID, /* out */ void *Obj);
	HIDESBASE int __stdcall _AddRef(void);
	HIDESBASE int __stdcall _Release(void);
public:
	/* TObject.Create */ inline __fastcall TDDInterfacedObject(void) : System::TInterfacedObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDDInterfacedObject(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS TEnumFormatEtc;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TEnumFormatEtc : public TDDInterfacedObject
{
	typedef TDDInterfacedObject inherited;
	
protected:
	TFormatEtcList* FFormatEtcList;
	int FIndex;
	
public:
	__fastcall TEnumFormatEtc(TFormatEtcList* FormatEtcList);
	__fastcall virtual ~TEnumFormatEtc(void);
	HRESULT __stdcall Next(int celt, /* out */ void *elt, System::PLongInt pceltFetched);
	HRESULT __stdcall Skip(int celt);
	HRESULT __stdcall Reset(void);
	HRESULT __stdcall Clone(/* out */ _di_IEnumFORMATETC &Enum);
private:
	void *__IEnumFORMATETC;	// IEnumFORMATETC 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {00000103-0000-0000-C000-000000000046}
	operator _di_IEnumFORMATETC()
	{
		_di_IEnumFORMATETC intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator IEnumFORMATETC*(void) { return (IEnumFORMATETC*)&__IEnumFORMATETC; }
	#endif
	
};

#pragma pack(pop)

class DELPHICLASS TDataObject;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TDataObject : public TDDInterfacedObject
{
	typedef TDDInterfacedObject inherited;
	
protected:
	TFormatEtcList* FFormatEtcList;
	bool FCheckLindex;
	bool FCheckdwAspect;
	
public:
	__fastcall TDataObject(void);
	__fastcall virtual ~TDataObject(void);
	HRESULT __stdcall GetData(const tagFORMATETC &formatetcIn, /* out */ tagSTGMEDIUM &medium);
	HRESULT __stdcall GetDataHere(const tagFORMATETC &formatetc, /* out */ tagSTGMEDIUM &medium);
	HRESULT __stdcall QueryGetData(const tagFORMATETC &formatetc);
	HRESULT __stdcall GetCanonicalFormatEtc(const tagFORMATETC &formatetc, /* out */ tagFORMATETC &formatetcOut);
	HRESULT __stdcall SetData(const tagFORMATETC &formatetc, tagSTGMEDIUM &medium, BOOL fRelease);
	HRESULT __stdcall EnumFormatEtc(int dwDirection, /* out */ _di_IEnumFORMATETC &enumFormatEtc);
	HRESULT __stdcall DAdvise(const tagFORMATETC &formatetc, int advf, const _di_IAdviseSink advSink, /* out */ int &dwConnection);
	HRESULT __stdcall DUnadvise(int dwConnection);
	HRESULT __stdcall EnumDAdvise(/* out */ _di_IEnumSTATDATA &enumAdvise);
	virtual HRESULT __fastcall RenderData(const tagFORMATETC &FormatEtc, tagSTGMEDIUM &StgMedium) = 0 ;
	
protected:
	virtual bool __fastcall AllowData(const tagFORMATETC &FormatEtc);
private:
	void *__IDataObject;	// IDataObject 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {0000010E-0000-0000-C000-000000000046}
	operator _di_IDataObject()
	{
		_di_IDataObject intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator IDataObject*(void) { return (IDataObject*)&__IDataObject; }
	#endif
	
};

#pragma pack(pop)

class DELPHICLASS TDropSource;
class DELPHICLASS TDragDrop;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TDropSource : public TDDInterfacedObject
{
	typedef TDDInterfacedObject inherited;
	
private:
	TDragDrop* FOwner;
	
public:
	__fastcall TDropSource(TDragDrop* AOwner);
	__fastcall virtual ~TDropSource(void);
	HRESULT __stdcall QueryContinueDrag(BOOL fEscapePressed, int grfKeyState);
	HRESULT __stdcall GiveFeedback(int dwEffect);
private:
	void *__IDropSource;	// IDropSource 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {00000121-0000-0000-C000-000000000046}
	operator _di_IDropSource()
	{
		_di_IDropSource intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator IDropSource*(void) { return (IDropSource*)&__IDropSource; }
	#endif
	
};

#pragma pack(pop)

class DELPHICLASS TDropTarget;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TDropTarget : public TDDInterfacedObject
{
	typedef TDDInterfacedObject inherited;
	
private:
	bool FAccept;
	Vcl::Extctrls::TTimer* HorzStartTimer;
	Vcl::Extctrls::TTimer* HorzScrollTimer;
	Vcl::Extctrls::TTimer* VertStartTimer;
	Vcl::Extctrls::TTimer* VertScrollTimer;
	int FVScrollCode;
	int FHScrollCode;
	void __fastcall InitScroll(bool VerticalScroll, int ScrollCode);
	void __fastcall TermScroll(bool VerticalScroll);
	void __fastcall DetermineScrollDir(bool VertScrolling, int &ScrollCode);
	void __fastcall OnStartTimer(System::TObject* Sender);
	void __fastcall OnScrollTimer(System::TObject* Sender);
	
protected:
	TDragDrop* FOwner;
	virtual void __fastcall SuggestDropEffect(int grfKeyState, int &dwEffect);
	virtual void __fastcall AcceptDataObject(_di_IDataObject DataObj, bool &Accept);
	virtual void __fastcall RenderDropped(_di_IDataObject DataObj, int grfKeyState, const System::Types::TPoint &pt, int &dwEffect);
	
public:
	__fastcall TDropTarget(TDragDrop* AOwner);
	__fastcall virtual ~TDropTarget(void);
	HRESULT __stdcall DragEnter(const _di_IDataObject dataObj, int grfKeyState, const System::Types::TPoint pt, int &dwEffect);
	HRESULT __stdcall DragOver(int grfKeyState, const System::Types::TPoint pt, int &dwEffect);
	HRESULT __stdcall DragLeave(void);
	HRESULT __stdcall Drop(const _di_IDataObject dataObj, int grfKeyState, const System::Types::TPoint pt, int &dwEffect);
private:
	void *__IDropTarget;	// IDropTarget 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {00000122-0000-0000-C000-000000000046}
	operator _di_IDropTarget()
	{
		_di_IDropTarget intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator IDropTarget*(void) { return (IDropTarget*)&__IDropTarget; }
	#endif
	
};

#pragma pack(pop)

class DELPHICLASS TScrollDetectArea;
class PASCALIMPLEMENTATION TScrollDetectArea : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	System::Classes::TPersistent* FControl;
	System::Word FMargin;
	System::Word FRange;
	System::Classes::TNotifyEvent FOnChange;
	void __fastcall SetValue(int Index, System::Word Value);
	
protected:
	DYNAMIC void __fastcall Change(void);
	virtual void __fastcall AssignTo(System::Classes::TPersistent* Dest);
	__property System::Classes::TPersistent* Control = {read=FControl};
	
public:
	__fastcall TScrollDetectArea(System::Classes::TPersistent* Control);
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	
__published:
	__property System::Word Margin = {read=FMargin, write=SetValue, index=0, default=0};
	__property System::Word Range = {read=FRange, write=SetValue, index=1, default=10};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TScrollDetectArea(void) { }
	
};


class DELPHICLASS TScrollDetectOptions;
class PASCALIMPLEMENTATION TScrollDetectOptions : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	TDragDrop* FControl;
	TScrollInterval FScrollDelay;
	TScrollInterval FStartDelay;
	TScrollDetectArea* FLeft;
	TScrollDetectArea* FTop;
	TScrollDetectArea* FRight;
	TScrollDetectArea* FBottom;
	System::Classes::TNotifyEvent FOnChange;
	bool FHorzScrolling;
	bool FVertScrolling;
	bool FHorzPageScroll;
	bool FVertPageScroll;
	void __fastcall SetValue(int index, TScrollInterval Value);
	
protected:
	DYNAMIC void __fastcall Change(void);
	virtual void __fastcall AssignTo(System::Classes::TPersistent* Dest);
	__property TDragDrop* Control = {read=FControl};
	
public:
	__fastcall TScrollDetectOptions(TDragDrop* Control);
	__fastcall virtual ~TScrollDetectOptions(void);
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	
__published:
	__property TScrollInterval ScrollDelay = {read=FScrollDelay, write=SetValue, index=0, default=100};
	__property TScrollInterval StartDelay = {read=FStartDelay, write=SetValue, index=1, default=750};
	__property TScrollDetectArea* AreaLeft = {read=FLeft, write=FLeft};
	__property TScrollDetectArea* AreaTop = {read=FTop, write=FTop};
	__property TScrollDetectArea* AreaRight = {read=FRight, write=FRight};
	__property TScrollDetectArea* AreaBottom = {read=FBottom, write=FBottom};
	__property bool HorzScrolling = {read=FHorzScrolling, write=FHorzScrolling, default=0};
	__property bool VertScrolling = {read=FVertScrolling, write=FVertScrolling, default=0};
	__property bool HorzPageScroll = {read=FHorzPageScroll, write=FHorzPageScroll, default=0};
	__property bool VertPageScroll = {read=FVertPageScroll, write=FVertPageScroll, default=0};
};


class PASCALIMPLEMENTATION TDragDrop : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	bool FAutoDetectDnD;
	System::Byte FDragDetectDelta;
	bool FAcceptOwnDnD;
	bool FBTF;
	bool FContextMenu;
	Vcl::Controls::TWinControl* FDragDropControl;
	bool FRegistered;
	bool FOwnerIsSource;
	bool FShowPopUpMenu;
	TDropEffectSet FTargetEffectsSet;
	int FTargetEffects;
	TOnQueryContinueDrag FOnQueryContinueDrag;
	TOnGiveFeedback FOnGiveFeedback;
	TOnDragEnter FOnDragEnter;
	TOnDragLeave FOnDragLeave;
	TOnDragOver FOnDragOver;
	TOnDrop FOnDrop;
	TDropEffectSet FSourceEffectsSet;
	int FSourceEffects;
	TOnProcessDropped FOnProcessDropped;
	void *OldWndProc;
	void *WndProcPtr;
	TOnDragDetect FOnDragDetect;
	TDragDetectStatus FDragDetectStatus;
	System::Types::TPoint FDragDetectStart;
	TRenderDataOn FRenderDataOn;
	_di_IDataObject FDataObj;
	int FgrfKeyState;
	System::Types::TPoint Fpt;
	int FdwEffect;
	HICON FCHCopy;
	HICON FCHMove;
	HICON FCHLink;
	HICON FCHScrollCopy;
	HICON FCHScrollMove;
	HICON FCHScrollLink;
	bool FMessageHooked;
	int FAvailableDropEffects;
	int FTargetScrolling;
	TSrcCompatibilityCheckSet FSrcCompatibilityCheck;
	TScrollDetectOptions* FScrollDetectOptions;
	TOnBeforeScrolling FOnBeforeScrolling;
	System::Classes::TNotifyEvent FOnAfterScrolling;
	int FPressedButton;
	TDragDrop* FInternalSource;
	TOnMenuPopup FOnMenuPopup;
	TOnMenuExecCmd FOnMenuExecCmd;
	TOnMenuDestroy FOnMenuDestroy;
	TOnProcessDropped FOnMenuSucceeded;
	TOnProcessDropped FOnDropHandlerSucceeded;
	void __fastcall WndMethod(Winapi::Messages::TMessage &Msg);
	void __fastcall SetDragDropControl(Vcl::Controls::TWinControl* WinControl);
	void __fastcall SetSourceEffects(TDropEffectSet Values);
	void __fastcall SetTargetEffects(TDropEffectSet Values);
	
protected:
	TDropTarget* FDropTarget;
	virtual void __fastcall Loaded(void);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual TDataObject* __fastcall CreateDataObject(void) = 0 ;
	virtual void __fastcall DoMenuPopup(System::TObject* Sender, HMENU AMenu, _di_IDataObject DataObj, int AMinCustCmd, int grfKeyState, const System::Types::TPoint &pt);
	virtual bool __fastcall DoMenuExecCmd(System::TObject* Sender, HMENU AMenu, _di_IDataObject DataObj, int Command, int &dwEffect);
	virtual void __fastcall DoMenuDestroy(System::TObject* Sender, HMENU AMenu);
	virtual bool __fastcall DropHandler(const _di_IDataObject dataObj, int grfKeyState, const System::Types::TPoint &pt, int &dwEffect);
	__property TOnProcessDropped OnDropHandlerSucceeded = {read=FOnDropHandlerSucceeded, write=FOnDropHandlerSucceeded};
	
public:
	__fastcall virtual TDragDrop(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TDragDrop(void);
	bool __fastcall RegisterTarget(void);
	bool __fastcall UnRegisterTarget(void);
	void __fastcall HookMessageHandler(void);
	void __fastcall UnhookMessageHandler(bool ForceUnhook);
	TDragResult __fastcall ExecuteOperation(TDataObject* DataObject);
	TDragResult __fastcall Execute(void);
	virtual bool __fastcall CopyToClipboard(void);
	virtual bool __fastcall GetFromClipboard(void);
	virtual void __fastcall StartDnDDetection(System::Uitypes::TMouseButton Button);
	__property bool OwnerIsSource = {read=FOwnerIsSource, nodefault};
	__property bool Registered = {read=FRegistered, default=0};
	__property HICON CHCopy = {read=FCHCopy, write=FCHCopy, default=0};
	__property HICON CHMove = {read=FCHMove, write=FCHMove, default=0};
	__property HICON CHLink = {read=FCHLink, write=FCHLink, default=0};
	__property HICON CHScrollCopy = {read=FCHScrollCopy, write=FCHScrollCopy, default=0};
	__property HICON CHScrollMove = {read=FCHScrollMove, write=FCHScrollMove, default=0};
	__property HICON CHScrollLink = {read=FCHScrollLink, write=FCHScrollLink, default=0};
	__property TDragDetectStatus DragDetectStatus = {read=FDragDetectStatus, nodefault};
	__property int AvailableDropEffects = {read=FAvailableDropEffects, nodefault};
	__property TDragDrop* InternalSource = {read=FInternalSource};
	
__published:
	__property bool AcceptOwnDnD = {read=FAcceptOwnDnD, write=FAcceptOwnDnD, nodefault};
	__property bool AutoDetectDnD = {read=FAutoDetectDnD, write=FAutoDetectDnD, nodefault};
	__property bool BringToFront = {read=FBTF, write=FBTF, nodefault};
	__property System::Byte DragDetectDelta = {read=FDragDetectDelta, write=FDragDetectDelta, default=10};
	__property Vcl::Controls::TWinControl* DragDropControl = {read=FDragDropControl, write=SetDragDropControl};
	__property TRenderDataOn RenderDataOn = {read=FRenderDataOn, write=FRenderDataOn, default=3};
	__property TScrollDetectOptions* ScrollDetectOptions = {read=FScrollDetectOptions, write=FScrollDetectOptions};
	__property TSrcCompatibilityCheckSet SourceCompatibility = {read=FSrcCompatibilityCheck, write=FSrcCompatibilityCheck, nodefault};
	__property TDropEffectSet SourceEffects = {read=FSourceEffectsSet, write=SetSourceEffects, nodefault};
	__property bool TargetPopupMenu = {read=FShowPopUpMenu, write=FShowPopUpMenu, nodefault};
	__property TDropEffectSet TargetEffects = {read=FTargetEffectsSet, write=SetTargetEffects, nodefault};
	__property System::Classes::TNotifyEvent OnAfterScrolling = {read=FOnAfterScrolling, write=FOnAfterScrolling};
	__property TOnBeforeScrolling OnBeforeScrolling = {read=FOnBeforeScrolling, write=FOnBeforeScrolling};
	__property TOnDragDetect OnDragDetect = {read=FOnDragDetect, write=FOnDragDetect};
	__property TOnDragEnter OnDragEnter = {read=FOnDragEnter, write=FOnDragEnter};
	__property TOnDragLeave OnDragLeave = {read=FOnDragLeave, write=FOnDragLeave};
	__property TOnDragOver OnDragOver = {read=FOnDragOver, write=FOnDragOver};
	__property TOnDrop OnDrop = {read=FOnDrop, write=FOnDrop};
	__property TOnQueryContinueDrag OnQueryContinueDrag = {read=FOnQueryContinueDrag, write=FOnQueryContinueDrag};
	__property TOnGiveFeedback OnGiveFeedback = {read=FOnGiveFeedback, write=FOnGiveFeedback};
	__property TOnProcessDropped OnProcessDropped = {read=FOnProcessDropped, write=FOnProcessDropped};
	__property TOnMenuPopup OnMenuPopup = {read=FOnMenuPopup, write=FOnMenuPopup};
	__property TOnMenuExecCmd OnMenuExecCmd = {read=FOnMenuExecCmd, write=FOnMenuExecCmd};
	__property TOnMenuDestroy OnMenuDestroy = {read=FOnMenuDestroy, write=FOnMenuDestroy};
	__property TOnProcessDropped OnMenuSucceeded = {read=FOnMenuSucceeded, write=FOnMenuSucceeded};
};


//-- var, const, procedure ---------------------------------------------------
static const System::Int8 DROPEFFECT_None = System::Int8(0x0);
static const System::Int8 DROPEFFECT_Copy = System::Int8(0x1);
static const System::Int8 DROPEFFECT_Move = System::Int8(0x2);
static const System::Int8 DROPEFFECT_Link = System::Int8(0x4);
static const unsigned DROPEFFECT_Scroll = unsigned(0x80000000);
static const System::Int8 TYMED_HGLOBAL = System::Int8(0x1);
static const System::Int8 TYMED_FILE = System::Int8(0x2);
static const System::Int8 TYMED_ISTREAM = System::Int8(0x4);
static const System::Int8 TYMED_ISTORAGE = System::Int8(0x8);
static const System::Int8 TYMED_GDI = System::Int8(0x10);
static const System::Int8 TYMED_MFPICT = System::Int8(0x20);
static const System::Int8 TYMED_ENHMF = System::Int8(0x40);
static const System::Int8 TYMED_NULL = System::Int8(0x0);
static const System::Int8 DefaultCursor = System::Int8(0x0);
extern DELPHI_PACKAGE System::ResourceString _MICopyStr;
#define Dragdrop_MICopyStr System::LoadResourceString(&Dragdrop::_MICopyStr)
extern DELPHI_PACKAGE System::ResourceString _MIMoveStr;
#define Dragdrop_MIMoveStr System::LoadResourceString(&Dragdrop::_MIMoveStr)
extern DELPHI_PACKAGE System::ResourceString _MILinkStr;
#define Dragdrop_MILinkStr System::LoadResourceString(&Dragdrop::_MILinkStr)
extern DELPHI_PACKAGE System::ResourceString _MIAbortStr;
#define Dragdrop_MIAbortStr System::LoadResourceString(&Dragdrop::_MIAbortStr)
extern DELPHI_PACKAGE void __fastcall Register(void);
}	/* namespace Dragdrop */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DRAGDROP)
using namespace Dragdrop;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DragdropHPP
