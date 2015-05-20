// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'PasTools.pas' rev: 27.00 (Windows)

#ifndef PastoolsHPP
#define PastoolsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Winapi.Windows.hpp>	// Pascal unit
#include <System.Types.hpp>	// Pascal unit
#include <System.Classes.hpp>	// Pascal unit
#include <Vcl.ComCtrls.hpp>	// Pascal unit
#include <Vcl.ExtCtrls.hpp>	// Pascal unit
#include <Vcl.Controls.hpp>	// Pascal unit
#include <Vcl.Dialogs.hpp>	// Pascal unit
#include <Vcl.Forms.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Pastools
{
//-- type declarations -------------------------------------------------------
typedef System::UnicodeString __fastcall (*TApiPathEvent)(System::UnicodeString Path);

typedef void __fastcall (__closure *TControlScrollBeforeUpdate)(System::TObject* ObjectToValidate);

typedef void __fastcall (__closure *TControlScrollAfterUpdate)(void);

class DELPHICLASS TCustomControlScrollOnDragOver;
class PASCALIMPLEMENTATION TCustomControlScrollOnDragOver : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TControlScrollBeforeUpdate FOnBeforeUpdate;
	TControlScrollAfterUpdate FOnAfterUpdate;
	Vcl::Extctrls::TTimer* FDragOverTimer;
	Vcl::Controls::TControl* FControl;
	_FILETIME FDragOverTime;
	_FILETIME FLastVScrollTime;
	int FVScrollCount;
	void __fastcall DragOverTimer(System::TObject* Sender);
	void __fastcall BeforeUpdate(System::TObject* ObjectToValidate);
	void __fastcall AfterUpdate(void);
	
public:
	__fastcall TCustomControlScrollOnDragOver(Vcl::Controls::TControl* Control, bool ScheduleDragOver);
	__fastcall virtual ~TCustomControlScrollOnDragOver(void);
	virtual void __fastcall StartDrag(void);
	virtual void __fastcall EndDrag(void);
	virtual void __fastcall DragOver(const System::Types::TPoint &Point) = 0 ;
	__property TControlScrollBeforeUpdate OnBeforeUpdate = {read=FOnBeforeUpdate, write=FOnBeforeUpdate};
	__property TControlScrollAfterUpdate OnAfterUpdate = {read=FOnAfterUpdate, write=FOnAfterUpdate};
};


class DELPHICLASS TTreeViewScrollOnDragOver;
class PASCALIMPLEMENTATION TTreeViewScrollOnDragOver : public TCustomControlScrollOnDragOver
{
	typedef TCustomControlScrollOnDragOver inherited;
	
private:
	Vcl::Comctrls::TTreeNode* FLastDragNode;
	_FILETIME FLastHScrollTime;
	
public:
	virtual void __fastcall StartDrag(void);
	virtual void __fastcall DragOver(const System::Types::TPoint &Point);
public:
	/* TCustomControlScrollOnDragOver.Create */ inline __fastcall TTreeViewScrollOnDragOver(Vcl::Controls::TControl* Control, bool ScheduleDragOver) : TCustomControlScrollOnDragOver(Control, ScheduleDragOver) { }
	/* TCustomControlScrollOnDragOver.Destroy */ inline __fastcall virtual ~TTreeViewScrollOnDragOver(void) { }
	
};


class DELPHICLASS TListViewScrollOnDragOver;
class PASCALIMPLEMENTATION TListViewScrollOnDragOver : public TCustomControlScrollOnDragOver
{
	typedef TCustomControlScrollOnDragOver inherited;
	
public:
	virtual void __fastcall DragOver(const System::Types::TPoint &Point);
public:
	/* TCustomControlScrollOnDragOver.Create */ inline __fastcall TListViewScrollOnDragOver(Vcl::Controls::TControl* Control, bool ScheduleDragOver) : TCustomControlScrollOnDragOver(Control, ScheduleDragOver) { }
	/* TCustomControlScrollOnDragOver.Destroy */ inline __fastcall virtual ~TListViewScrollOnDragOver(void) { }
	
};


class DELPHICLASS TListBoxScrollOnDragOver;
class PASCALIMPLEMENTATION TListBoxScrollOnDragOver : public TCustomControlScrollOnDragOver
{
	typedef TCustomControlScrollOnDragOver inherited;
	
public:
	virtual void __fastcall DragOver(const System::Types::TPoint &Point);
public:
	/* TCustomControlScrollOnDragOver.Create */ inline __fastcall TListBoxScrollOnDragOver(Vcl::Controls::TControl* Control, bool ScheduleDragOver) : TCustomControlScrollOnDragOver(Control, ScheduleDragOver) { }
	/* TCustomControlScrollOnDragOver.Destroy */ inline __fastcall virtual ~TListBoxScrollOnDragOver(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE TApiPathEvent OnApiPath;
extern DELPHI_PACKAGE System::Classes::TComponent* __fastcall Construct(System::Classes::TComponentClass ComponentClass, System::Classes::TComponent* Owner);
extern DELPHI_PACKAGE bool __fastcall IsVistaHard(void);
extern DELPHI_PACKAGE bool __fastcall IsVista(void);
extern DELPHI_PACKAGE bool __fastcall IsWin7(void);
extern DELPHI_PACKAGE bool __fastcall IsWin8(void);
extern DELPHI_PACKAGE System::UnicodeString __fastcall CutToChar(System::UnicodeString &Str, System::WideChar Ch, bool Trim);
extern DELPHI_PACKAGE void __fastcall FilterToFileTypes(System::UnicodeString Filter, Vcl::Dialogs::TFileTypeItems* FileTypes);
extern DELPHI_PACKAGE int __fastcall LoadDimension(int Dimension, int PixelsPerInch);
extern DELPHI_PACKAGE int __fastcall StrToDimensionDef(System::UnicodeString Str, int PixelsPerInch, int Default);
extern DELPHI_PACKAGE int __fastcall SaveDimension(int Dimension);
extern DELPHI_PACKAGE int __fastcall DimensionToDefaultPixelsPerInch(int Dimension);
extern DELPHI_PACKAGE int __fastcall LoadPixelsPerInch(System::UnicodeString S);
extern DELPHI_PACKAGE System::UnicodeString __fastcall SavePixelsPerInch(void);
extern DELPHI_PACKAGE System::UnicodeString __fastcall SaveDefaultPixelsPerInch(void);
extern DELPHI_PACKAGE int __fastcall ScaleByTextHeight(Vcl::Controls::TControl* Control, int Dimension);
extern DELPHI_PACKAGE int __fastcall ScaleByTextHeightRunTime(Vcl::Controls::TControl* Control, int Dimension);
extern DELPHI_PACKAGE bool __fastcall ControlHasRecreationPersistenceData(Vcl::Controls::TControl* Control);
extern DELPHI_PACKAGE bool __fastcall IsAppIconic(void);
extern DELPHI_PACKAGE void __fastcall SetAppIconic(bool Value);
extern DELPHI_PACKAGE void __fastcall SetAppMainForm(Vcl::Forms::TForm* Value);
extern DELPHI_PACKAGE System::UnicodeString __fastcall ApiPath(System::UnicodeString Path);
extern DELPHI_PACKAGE void __fastcall ForceColorChange(Vcl::Controls::TWinControl* Control);
}	/* namespace Pastools */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_PASTOOLS)
using namespace Pastools;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// PastoolsHPP
