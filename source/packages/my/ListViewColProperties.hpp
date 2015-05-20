// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'ListViewColProperties.pas' rev: 27.00 (Windows)

#ifndef ListviewcolpropertiesHPP
#define ListviewcolpropertiesHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.Classes.hpp>	// Pascal unit
#include <Vcl.ComCtrls.hpp>	// Pascal unit
#include <System.Contnrs.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Listviewcolproperties
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TCustomListViewColProperty;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TCustomListViewColProperty : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	System::Classes::TAlignment Alignment;
	System::UnicodeString Caption;
	int Width;
	bool Visible;
	int Order;
	__fastcall TCustomListViewColProperty(int AOrder);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TCustomListViewColProperty(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS TCustomListViewColProperties;
class PASCALIMPLEMENTATION TCustomListViewColProperties : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	bool FChanged;
	int FMaxWidth;
	int FMinWidth;
	System::Classes::TNotifyEvent FOnChange;
	int FUpdating;
	System::Contnrs::TObjectList* FProperties;
	bool FCreated;
	Vcl::Comctrls::TListColumns* __fastcall GetColumns(void);
	int __fastcall GetCount(void);
	System::UnicodeString __fastcall GetOrderStr(void);
	void __fastcall CheckBounds(int Index);
	void __fastcall SetMaxWidth(int Value);
	void __fastcall SetMinWidth(int Value);
	void __fastcall SetWidthsStr(System::UnicodeString Value, int PixelsPerInch);
	System::UnicodeString __fastcall GetWidthsStr(void);
	void __fastcall SetOrderStr(System::UnicodeString Value);
	
protected:
	Vcl::Comctrls::TCustomListView* FListView;
	bool FListViewManaged;
	System::Classes::TAlignment __fastcall GetAlignments(int Index);
	virtual System::UnicodeString __fastcall GetParamsStr(void);
	bool __fastcall GetVisible(int Index);
	int __fastcall GetWidths(int Index);
	void __fastcall SetAlignments(int Index, System::Classes::TAlignment Value);
	void __fastcall SetVisible(int Index, bool Value);
	void __fastcall SetWidths(int Index, int Value);
	System::UnicodeString __fastcall GetCaptions(int Index);
	virtual void __fastcall Changed(void);
	virtual void __fastcall SetCaptions(int Index, System::UnicodeString Value);
	virtual void __fastcall SetParamsStr(System::UnicodeString Value);
	void __fastcall UpdateListView(void);
	void __fastcall UpdateFromListView(void);
	void __fastcall UpdateOrderFromListView(void);
	void __fastcall UpdateListViewOrder(void);
	TCustomListViewColProperty* __fastcall GetProperties(int Index);
	int __fastcall GetIndexByOrder(int Order);
	bool __fastcall ColumnsExists(void);
	void __fastcall SetRuntimeVisible(int Index, bool Value, bool SaveWidth);
	Vcl::Comctrls::TListColumn* __fastcall GetColumn(int Index);
	void __fastcall CreateProperties(int ACount);
	__property Vcl::Comctrls::TListColumns* Columns = {read=GetColumns, stored=false};
	__property int Count = {read=GetCount, stored=false, nodefault};
	
public:
	__fastcall TCustomListViewColProperties(Vcl::Comctrls::TCustomListView* ListView, int ColCount);
	__fastcall virtual ~TCustomListViewColProperties(void);
	void __fastcall EndUpdate(void);
	void __fastcall BeginUpdate(void);
	void __fastcall ListViewWndCreated(void);
	void __fastcall ListViewWndDestroying(void);
	void __fastcall ListViewWndDestroyed(void);
	__property System::Classes::TAlignment Alignments[int Index] = {read=GetAlignments, write=SetAlignments};
	__property System::UnicodeString Captions[int Index] = {read=GetCaptions, write=SetCaptions};
	__property int MaxWidth = {read=FMaxWidth, write=SetMaxWidth, default=1000};
	__property int MinWidth = {read=FMinWidth, write=SetMinWidth, default=20};
	__property int Widths[int Index] = {read=GetWidths, write=SetWidths};
	__property bool Visible[int Index] = {read=GetVisible, write=SetVisible};
	void __fastcall RecreateColumns(void);
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property System::UnicodeString ParamsStr = {read=GetParamsStr, write=SetParamsStr, stored=false};
};


class DELPHICLASS TListViewColProperties;
class PASCALIMPLEMENTATION TListViewColProperties : public TCustomListViewColProperties
{
	typedef TCustomListViewColProperties inherited;
	
__published:
	__property MaxWidth = {default=1000};
	__property MinWidth = {default=20};
public:
	/* TCustomListViewColProperties.Create */ inline __fastcall TListViewColProperties(Vcl::Comctrls::TCustomListView* ListView, int ColCount) : TCustomListViewColProperties(ListView, ColCount) { }
	/* TCustomListViewColProperties.Destroy */ inline __fastcall virtual ~TListViewColProperties(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------
static const System::Word DefaultListViewMaxWidth = System::Word(0x3e8);
static const System::Int8 DefaultListViewMinWidth = System::Int8(0x14);
}	/* namespace Listviewcolproperties */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_LISTVIEWCOLPROPERTIES)
using namespace Listviewcolproperties;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// ListviewcolpropertiesHPP
