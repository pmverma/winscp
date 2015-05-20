// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'PngComponentEditors.pas' rev: 27.00 (Windows)

#ifndef PngcomponenteditorsHPP
#define PngcomponenteditorsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Winapi.Windows.hpp>	// Pascal unit
#include <System.SysUtils.hpp>	// Pascal unit
#include <Vcl.Forms.hpp>	// Pascal unit
#include <System.Classes.hpp>	// Pascal unit
#include <Vcl.Controls.hpp>	// Pascal unit
#include <PngImageList.hpp>	// Pascal unit
#include <System.TypInfo.hpp>	// Pascal unit
#include <DesignIntf.hpp>	// Pascal unit
#include <DesignEditors.hpp>	// Pascal unit
#include <ColnEdit.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Pngcomponenteditors
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TPngImageListEditor;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TPngImageListEditor : public Designeditors::TComponentEditor
{
	typedef Designeditors::TComponentEditor inherited;
	
public:
	virtual void __fastcall Edit(void);
	virtual void __fastcall ExecuteVerb(int Index);
	virtual System::UnicodeString __fastcall GetVerb(int Index);
	virtual int __fastcall GetVerbCount(void);
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TPngImageListEditor(System::Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : Designeditors::TComponentEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TPngImageListEditor(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS TPngImageCollectionEditor;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TPngImageCollectionEditor : public Designeditors::TComponentEditor
{
	typedef Designeditors::TComponentEditor inherited;
	
public:
	virtual void __fastcall Edit(void);
	virtual void __fastcall ExecuteVerb(int Index);
	virtual System::UnicodeString __fastcall GetVerb(int Index);
	virtual int __fastcall GetVerbCount(void);
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TPngImageCollectionEditor(System::Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : Designeditors::TComponentEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TPngImageCollectionEditor(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS TPngButtonEditor;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TPngButtonEditor : public Designeditors::TComponentEditor
{
	typedef Designeditors::TComponentEditor inherited;
	
public:
	virtual void __fastcall Edit(void);
	virtual void __fastcall ExecuteVerb(int Index);
	virtual System::UnicodeString __fastcall GetVerb(int Index);
	virtual int __fastcall GetVerbCount(void);
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TPngButtonEditor(System::Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : Designeditors::TComponentEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TPngButtonEditor(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS TPngImageListImagesEditor;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TPngImageListImagesEditor : public Designeditors::TStringProperty
{
	typedef Designeditors::TStringProperty inherited;
	
public:
	virtual void __fastcall Edit(void);
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes(void);
	virtual System::UnicodeString __fastcall GetValue(void);
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TPngImageListImagesEditor(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TStringProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TPngImageListImagesEditor(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS TPngImageCollectionItemsEditor;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TPngImageCollectionItemsEditor : public TPngImageListImagesEditor
{
	typedef TPngImageListImagesEditor inherited;
	
public:
	virtual void __fastcall Edit(void);
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TPngImageCollectionItemsEditor(const Designintf::_di_IDesigner ADesigner, int APropCount) : TPngImageListImagesEditor(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TPngImageCollectionItemsEditor(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS TEditProperty;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TEditProperty : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::UnicodeString FPropery;
	void __fastcall EnumProperty(const Designintf::_di_IProperty Prop);
	
public:
	__fastcall TEditProperty(System::Classes::TComponent* Component, const System::UnicodeString Prop, Designintf::_di_IDesigner Designer);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TEditProperty(void) { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Pngcomponenteditors */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_PNGCOMPONENTEDITORS)
using namespace Pngcomponenteditors;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// PngcomponenteditorsHPP
