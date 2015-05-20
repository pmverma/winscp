// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DirViewColProperties.pas' rev: 27.00 (Windows)

#ifndef DirviewcolpropertiesHPP
#define DirviewcolpropertiesHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.Classes.hpp>	// Pascal unit
#include <Vcl.ComCtrls.hpp>	// Pascal unit
#include <IEListView.hpp>	// Pascal unit
#include <ListViewColProperties.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dirviewcolproperties
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TCustomDirViewColProperties;
class PASCALIMPLEMENTATION TCustomDirViewColProperties : public Ielistview::TIEListViewColProperties
{
	typedef Ielistview::TIEListViewColProperties inherited;
	
public:
	/* TIEListViewColProperties.Create */ inline __fastcall TCustomDirViewColProperties(Vcl::Comctrls::TCustomListView* ListView, int ColCount) : Ielistview::TIEListViewColProperties(ListView, ColCount) { }
	
public:
	/* TCustomListViewColProperties.Destroy */ inline __fastcall virtual ~TCustomDirViewColProperties(void) { }
	
};


enum DECLSPEC_DENUM TDirViewCol : unsigned char { dvName, dvSize, dvType, dvChanged, dvAttr, dvExt };

class DELPHICLASS TDirViewColProperties;
class PASCALIMPLEMENTATION TDirViewColProperties : public TCustomDirViewColProperties
{
	typedef TCustomDirViewColProperties inherited;
	
private:
	bool __fastcall StoreAlignment(int Index);
	bool __fastcall StoreCaption(int Index);
	bool __fastcall StoreWidth(int Index);
	TDirViewCol __fastcall GetSortDirColumn(void);
	void __fastcall SetSortDirColumn(TDirViewCol Value);
	
public:
	__fastcall TDirViewColProperties(Vcl::Comctrls::TCustomListView* DirView);
	
__published:
	__property MaxWidth = {default=1000};
	__property MinWidth = {default=20};
	__property SortAscending = {default=1};
	__property TDirViewCol SortDirColumn = {read=GetSortDirColumn, write=SetSortDirColumn, default=0};
	__property System::UnicodeString NameCaption = {read=GetCaptions, write=SetCaptions, stored=StoreCaption, index=0};
	__property int NameWidth = {read=GetWidths, write=SetWidths, stored=StoreWidth, index=0, nodefault};
	__property bool NameVisible = {read=GetVisible, write=SetVisible, index=0, default=1};
	__property System::Classes::TAlignment NameAlignment = {read=GetAlignments, write=SetAlignments, stored=StoreAlignment, index=0, nodefault};
	__property System::UnicodeString SizeCaption = {read=GetCaptions, write=SetCaptions, stored=StoreCaption, index=1};
	__property int SizeWidth = {read=GetWidths, write=SetWidths, stored=StoreWidth, index=1, nodefault};
	__property bool SizeVisible = {read=GetVisible, write=SetVisible, index=1, default=1};
	__property System::Classes::TAlignment SizeAlignment = {read=GetAlignments, write=SetAlignments, stored=StoreAlignment, index=1, nodefault};
	__property System::UnicodeString TypeCaption = {read=GetCaptions, write=SetCaptions, stored=StoreCaption, index=2};
	__property int TypeWidth = {read=GetWidths, write=SetWidths, stored=StoreWidth, index=2, nodefault};
	__property bool TypeVisible = {read=GetVisible, write=SetVisible, index=2, default=1};
	__property System::Classes::TAlignment TypeAlignment = {read=GetAlignments, write=SetAlignments, stored=StoreAlignment, index=2, nodefault};
	__property System::UnicodeString ChangedCaption = {read=GetCaptions, write=SetCaptions, stored=StoreCaption, index=3};
	__property int ChangedWidth = {read=GetWidths, write=SetWidths, stored=StoreWidth, index=3, nodefault};
	__property bool ChangedVisible = {read=GetVisible, write=SetVisible, index=3, default=1};
	__property System::Classes::TAlignment ChangedAlignment = {read=GetAlignments, write=SetAlignments, stored=StoreAlignment, index=3, nodefault};
	__property System::UnicodeString AttrCaption = {read=GetCaptions, write=SetCaptions, stored=StoreCaption, index=4};
	__property int AttrWidth = {read=GetWidths, write=SetWidths, stored=StoreWidth, index=4, nodefault};
	__property bool AttrVisible = {read=GetVisible, write=SetVisible, index=4, default=1};
	__property System::Classes::TAlignment AttrAlignment = {read=GetAlignments, write=SetAlignments, stored=StoreAlignment, index=4, nodefault};
	__property System::UnicodeString ExtCaption = {read=GetCaptions, write=SetCaptions, stored=StoreCaption, index=5};
	__property int ExtWidth = {read=GetWidths, write=SetWidths, stored=StoreWidth, index=5, nodefault};
	__property bool ExtVisible = {read=GetVisible, write=SetVisible, index=5, default=1};
	__property System::Classes::TAlignment ExtAlignment = {read=GetAlignments, write=SetAlignments, stored=StoreAlignment, index=5, nodefault};
public:
	/* TCustomListViewColProperties.Destroy */ inline __fastcall virtual ~TDirViewColProperties(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE System::ResourceString _SDirViewNameCol;
#define Dirviewcolproperties_SDirViewNameCol System::LoadResourceString(&Dirviewcolproperties::_SDirViewNameCol)
extern DELPHI_PACKAGE System::ResourceString _SDirViewSizeCol;
#define Dirviewcolproperties_SDirViewSizeCol System::LoadResourceString(&Dirviewcolproperties::_SDirViewSizeCol)
extern DELPHI_PACKAGE System::ResourceString _SDirViewTypeCol;
#define Dirviewcolproperties_SDirViewTypeCol System::LoadResourceString(&Dirviewcolproperties::_SDirViewTypeCol)
extern DELPHI_PACKAGE System::ResourceString _SDirViewChangedCol;
#define Dirviewcolproperties_SDirViewChangedCol System::LoadResourceString(&Dirviewcolproperties::_SDirViewChangedCol)
extern DELPHI_PACKAGE System::ResourceString _SDirViewAttrCol;
#define Dirviewcolproperties_SDirViewAttrCol System::LoadResourceString(&Dirviewcolproperties::_SDirViewAttrCol)
extern DELPHI_PACKAGE System::ResourceString _SDirViewExtCol;
#define Dirviewcolproperties_SDirViewExtCol System::LoadResourceString(&Dirviewcolproperties::_SDirViewExtCol)
static const System::Int8 DirViewColumns = System::Int8(0x6);
extern DELPHI_PACKAGE System::StaticArray<void *, 6> DefaultDirViewCaptions;
extern DELPHI_PACKAGE System::StaticArray<int, 6> DefaultDirViewWidths;
extern DELPHI_PACKAGE System::StaticArray<System::Classes::TAlignment, 6> DefaultDirViewAlignments;
extern DELPHI_PACKAGE System::StaticArray<bool, 6> DefaultDirViewVisible;
}	/* namespace Dirviewcolproperties */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DIRVIEWCOLPROPERTIES)
using namespace Dirviewcolproperties;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DirviewcolpropertiesHPP
