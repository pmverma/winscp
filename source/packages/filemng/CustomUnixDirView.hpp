// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'CustomUnixDirView.pas' rev: 27.00 (Windows)

#ifndef CustomunixdirviewHPP
#define CustomunixdirviewHPP

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
#include <Vcl.Graphics.hpp>	// Pascal unit
#include <Vcl.Controls.hpp>	// Pascal unit
#include <Vcl.Forms.hpp>	// Pascal unit
#include <Vcl.Dialogs.hpp>	// Pascal unit
#include <Vcl.ComCtrls.hpp>	// Pascal unit
#include <NortonLikeListView.hpp>	// Pascal unit
#include <IEListView.hpp>	// Pascal unit
#include <CustomDirView.hpp>	// Pascal unit
#include <ListViewColProperties.hpp>	// Pascal unit
#include <UnixDirViewColProperties.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Customunixdirview
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TCustomUnixDirView;
class PASCALIMPLEMENTATION TCustomUnixDirView : public Customdirview::TCustomDirView
{
	typedef Customdirview::TCustomDirView inherited;
	
private:
	void __fastcall SetUnixColProperties(Unixdirviewcolproperties::TUnixDirViewColProperties* Value);
	Unixdirviewcolproperties::TUnixDirViewColProperties* __fastcall GetUnixColProperties(void);
	
protected:
	virtual Listviewcolproperties::TCustomListViewColProperties* __fastcall NewColProperties(void);
	virtual bool __fastcall SortAscendingByDefault(int Index);
	
public:
	__property Items;
	
__published:
	__property Unixdirviewcolproperties::TUnixDirViewColProperties* UnixColProperties = {read=GetUnixColProperties, write=SetUnixColProperties};
public:
	/* TCustomDirView.Create */ inline __fastcall virtual TCustomUnixDirView(System::Classes::TComponent* AOwner) : Customdirview::TCustomDirView(AOwner) { }
	/* TCustomDirView.Destroy */ inline __fastcall virtual ~TCustomUnixDirView(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomUnixDirView(HWND ParentWindow) : Customdirview::TCustomDirView(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE System::ResourceString _SUnixDefaultRootName;
#define Customunixdirview_SUnixDefaultRootName System::LoadResourceString(&Customunixdirview::_SUnixDefaultRootName)
}	/* namespace Customunixdirview */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_CUSTOMUNIXDIRVIEW)
using namespace Customunixdirview;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// CustomunixdirviewHPP
