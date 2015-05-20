// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'UnixDirViewColProperties.pas' rev: 27.00 (Windows)

#ifndef UnixdirviewcolpropertiesHPP
#define UnixdirviewcolpropertiesHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.Classes.hpp>	// Pascal unit
#include <Vcl.ComCtrls.hpp>	// Pascal unit
#include <DirViewColProperties.hpp>	// Pascal unit
#include <IEListView.hpp>	// Pascal unit
#include <ListViewColProperties.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Unixdirviewcolproperties
{
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TUnixDirViewCol : unsigned char { uvName, uvSize, uvChanged, uvRights, uvOwner, uvGroup, uvExt, uvLinkTarget, uvType };

class DELPHICLASS TUnixDirViewColProperties;
class PASCALIMPLEMENTATION TUnixDirViewColProperties : public Dirviewcolproperties::TCustomDirViewColProperties
{
	typedef Dirviewcolproperties::TCustomDirViewColProperties inherited;
	
private:
	bool __fastcall StoreAlignment(int Index);
	bool __fastcall StoreCaption(int Index);
	bool __fastcall StoreWidth(int Index);
	TUnixDirViewCol __fastcall GetSortDirColumn(void);
	void __fastcall SetSortDirColumn(TUnixDirViewCol Value);
	
public:
	__fastcall TUnixDirViewColProperties(Vcl::Comctrls::TCustomListView* DirView);
	
__published:
	__property MaxWidth = {default=1000};
	__property MinWidth = {default=20};
	__property SortAscending = {default=1};
	__property TUnixDirViewCol SortDirColumn = {read=GetSortDirColumn, write=SetSortDirColumn, default=0};
	__property System::UnicodeString NameCaption = {read=GetCaptions, write=SetCaptions, stored=StoreCaption, index=0};
	__property int NameWidth = {read=GetWidths, write=SetWidths, stored=StoreWidth, index=0, nodefault};
	__property bool NameVisible = {read=GetVisible, write=SetVisible, index=0, default=1};
	__property System::Classes::TAlignment NameAlignment = {read=GetAlignments, write=SetAlignments, stored=StoreAlignment, index=0, nodefault};
	__property System::UnicodeString SizeCaption = {read=GetCaptions, write=SetCaptions, stored=StoreCaption, index=1};
	__property int SizeWidth = {read=GetWidths, write=SetWidths, stored=StoreWidth, index=1, nodefault};
	__property bool SizeVisible = {read=GetVisible, write=SetVisible, index=1, default=1};
	__property System::Classes::TAlignment SizeAlignment = {read=GetAlignments, write=SetAlignments, stored=StoreAlignment, index=1, nodefault};
	__property System::UnicodeString ChangedCaption = {read=GetCaptions, write=SetCaptions, stored=StoreCaption, index=2};
	__property int ChangedWidth = {read=GetWidths, write=SetWidths, stored=StoreWidth, index=2, nodefault};
	__property bool ChangedVisible = {read=GetVisible, write=SetVisible, index=2, default=1};
	__property System::Classes::TAlignment ChangedAlignment = {read=GetAlignments, write=SetAlignments, stored=StoreAlignment, index=2, nodefault};
	__property System::UnicodeString RightsCaption = {read=GetCaptions, write=SetCaptions, stored=StoreCaption, index=3};
	__property int RightsWidth = {read=GetWidths, write=SetWidths, stored=StoreWidth, index=3, nodefault};
	__property bool RightsVisible = {read=GetVisible, write=SetVisible, index=3, default=1};
	__property System::Classes::TAlignment RightsAlignment = {read=GetAlignments, write=SetAlignments, stored=StoreAlignment, index=3, nodefault};
	__property System::UnicodeString OwnerCaption = {read=GetCaptions, write=SetCaptions, stored=StoreCaption, index=4};
	__property int OwnerWidth = {read=GetWidths, write=SetWidths, stored=StoreWidth, index=4, nodefault};
	__property bool OwnerVisible = {read=GetVisible, write=SetVisible, index=4, default=1};
	__property System::Classes::TAlignment OwnerAlignment = {read=GetAlignments, write=SetAlignments, stored=StoreAlignment, index=4, nodefault};
	__property System::UnicodeString GroupCaption = {read=GetCaptions, write=SetCaptions, stored=StoreCaption, index=5};
	__property int GroupWidth = {read=GetWidths, write=SetWidths, stored=StoreWidth, index=5, nodefault};
	__property bool GroupVisible = {read=GetVisible, write=SetVisible, index=5, default=1};
	__property System::Classes::TAlignment GroupAlignment = {read=GetAlignments, write=SetAlignments, stored=StoreAlignment, index=5, nodefault};
	__property System::UnicodeString ExtCaption = {read=GetCaptions, write=SetCaptions, stored=StoreCaption, index=6};
	__property int ExtWidth = {read=GetWidths, write=SetWidths, stored=StoreWidth, index=6, nodefault};
	__property bool ExtVisible = {read=GetVisible, write=SetVisible, index=6, default=0};
	__property System::Classes::TAlignment ExtAlignment = {read=GetAlignments, write=SetAlignments, stored=StoreAlignment, index=6, nodefault};
	__property System::UnicodeString LinkTargetCaption = {read=GetCaptions, write=SetCaptions, stored=StoreCaption, index=7};
	__property int LinkTargetWidth = {read=GetWidths, write=SetWidths, stored=StoreWidth, index=7, nodefault};
	__property bool LinkTargetVisible = {read=GetVisible, write=SetVisible, index=7, default=0};
	__property System::Classes::TAlignment LinkTargetAlignment = {read=GetAlignments, write=SetAlignments, stored=StoreAlignment, index=7, nodefault};
	__property System::UnicodeString TypeCaption = {read=GetCaptions, write=SetCaptions, stored=StoreCaption, index=8};
	__property int TypeWidth = {read=GetWidths, write=SetWidths, stored=StoreWidth, index=8, nodefault};
	__property bool TypeVisible = {read=GetVisible, write=SetVisible, index=8, default=1};
	__property System::Classes::TAlignment TypeAlignment = {read=GetAlignments, write=SetAlignments, stored=StoreAlignment, index=8, nodefault};
public:
	/* TCustomListViewColProperties.Destroy */ inline __fastcall virtual ~TUnixDirViewColProperties(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE System::ResourceString _SUnixDirViewRightsCol;
#define Unixdirviewcolproperties_SUnixDirViewRightsCol System::LoadResourceString(&Unixdirviewcolproperties::_SUnixDirViewRightsCol)
extern DELPHI_PACKAGE System::ResourceString _SUnixDirViewOwnerCol;
#define Unixdirviewcolproperties_SUnixDirViewOwnerCol System::LoadResourceString(&Unixdirviewcolproperties::_SUnixDirViewOwnerCol)
extern DELPHI_PACKAGE System::ResourceString _SUnixDirViewGroupCol;
#define Unixdirviewcolproperties_SUnixDirViewGroupCol System::LoadResourceString(&Unixdirviewcolproperties::_SUnixDirViewGroupCol)
extern DELPHI_PACKAGE System::ResourceString _SUnixDirViewLinkTargetCol;
#define Unixdirviewcolproperties_SUnixDirViewLinkTargetCol System::LoadResourceString(&Unixdirviewcolproperties::_SUnixDirViewLinkTargetCol)
extern DELPHI_PACKAGE System::ResourceString _SUnixDirViewTypeCol;
#define Unixdirviewcolproperties_SUnixDirViewTypeCol System::LoadResourceString(&Unixdirviewcolproperties::_SUnixDirViewTypeCol)
static const System::Int8 UnixDirViewColumns = System::Int8(0x9);
extern DELPHI_PACKAGE System::StaticArray<void *, 9> DefaultUnixDirViewCaptions;
extern DELPHI_PACKAGE System::StaticArray<int, 9> DefaultUnixDirViewWidths;
extern DELPHI_PACKAGE System::StaticArray<System::Classes::TAlignment, 9> DefaultUnixDirViewAlignments;
extern DELPHI_PACKAGE System::StaticArray<bool, 9> DefaultUnixDirViewVisible;
}	/* namespace Unixdirviewcolproperties */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_UNIXDIRVIEWCOLPROPERTIES)
using namespace Unixdirviewcolproperties;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// UnixdirviewcolpropertiesHPP
