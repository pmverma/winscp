// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'JclSysUtils.pas' rev: 27.00 (Windows)

#ifndef JclsysutilsHPP
#define JclsysutilsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Winapi.Windows.hpp>	// Pascal unit
#include <System.SysUtils.hpp>	// Pascal unit
#include <System.Classes.hpp>	// Pascal unit
#include <System.TypInfo.hpp>	// Pascal unit
#include <System.SyncObjs.hpp>	// Pascal unit
#include <JclBase.hpp>	// Pascal unit
#include <JclSynch.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------
namespace Jclsysutils
{
  // For some reason, the generator puts this interface after its first
  // usage, resulting in an unusable header file. We fix this by forward
  // declaring the interface.
  __interface IJclCommandLineTool;
}

namespace Jclsysutils
{
//-- type declarations -------------------------------------------------------
__interface ISafeGuard;
typedef System::DelphiInterface<ISafeGuard> _di_ISafeGuard;
__interface ISafeGuard  : public System::IInterface 
{
	
public:
	virtual void * __fastcall ReleaseItem(void) = 0 ;
	virtual void * __fastcall GetItem(void) = 0 ;
	virtual void __fastcall FreeItem(void) = 0 ;
	__property void * Item = {read=GetItem};
};

__interface IMultiSafeGuard;
typedef System::DelphiInterface<IMultiSafeGuard> _di_IMultiSafeGuard;
__interface IMultiSafeGuard  : public System::IInterface 
{
	
public:
	virtual void * __fastcall AddItem(void * Item) = 0 ;
	virtual void __fastcall FreeItem(int Index) = 0 ;
	virtual int __fastcall GetCount(void) = 0 ;
	virtual void * __fastcall GetItem(int Index) = 0 ;
	virtual void * __fastcall ReleaseItem(int Index) = 0 ;
	__property int Count = {read=GetCount};
	__property void * Items[int Index] = {read=GetItem};
};

class DELPHICLASS TJclSafeGuard;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TJclSafeGuard : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	void *FItem;
	
public:
	__fastcall TJclSafeGuard(void * Mem);
	__fastcall virtual ~TJclSafeGuard(void);
	void * __fastcall ReleaseItem(void);
	void * __fastcall GetItem(void);
	virtual void __fastcall FreeItem(void);
	__property void * Item = {read=GetItem};
private:
	void *__ISafeGuard;	// ISafeGuard 
	
public:
	operator ISafeGuard*(void) { return (ISafeGuard*)&__ISafeGuard; }
	
};

#pragma pack(pop)

class DELPHICLASS TJclObjSafeGuard;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TJclObjSafeGuard : public TJclSafeGuard
{
	typedef TJclSafeGuard inherited;
	
public:
	__fastcall TJclObjSafeGuard(System::TObject* Obj);
	virtual void __fastcall FreeItem(void);
public:
	/* TJclSafeGuard.Destroy */ inline __fastcall virtual ~TJclObjSafeGuard(void) { }
	
private:
	void *__ISafeGuard;	// ISafeGuard 
	
public:
	operator ISafeGuard*(void) { return (ISafeGuard*)&__ISafeGuard; }
	
};

#pragma pack(pop)

class DELPHICLASS TJclMultiSafeGuard;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TJclMultiSafeGuard : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	System::Classes::TList* FItems;
	
public:
	__fastcall TJclMultiSafeGuard(void);
	__fastcall virtual ~TJclMultiSafeGuard(void);
	void * __fastcall AddItem(void * Item);
	virtual void __fastcall FreeItem(int Index);
	int __fastcall GetCount(void);
	void * __fastcall GetItem(int Index);
	void * __fastcall ReleaseItem(int Index);
	__property int Count = {read=GetCount, nodefault};
	__property void * Items[int Index] = {read=GetItem};
private:
	void *__IMultiSafeGuard;	// IMultiSafeGuard 
	
public:
	operator IMultiSafeGuard*(void) { return (IMultiSafeGuard*)&__IMultiSafeGuard; }
	
};

#pragma pack(pop)

class DELPHICLASS TJclObjMultiSafeGuard;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TJclObjMultiSafeGuard : public TJclMultiSafeGuard
{
	typedef TJclMultiSafeGuard inherited;
	
public:
	virtual void __fastcall FreeItem(int Index);
public:
	/* TJclMultiSafeGuard.Create */ inline __fastcall TJclObjMultiSafeGuard(void) : TJclMultiSafeGuard() { }
	/* TJclMultiSafeGuard.Destroy */ inline __fastcall virtual ~TJclObjMultiSafeGuard(void) { }
	
private:
	void *__IMultiSafeGuard;	// IMultiSafeGuard 
	
public:
	operator IMultiSafeGuard*(void) { return (IMultiSafeGuard*)&__IMultiSafeGuard; }
	
};

#pragma pack(pop)

class DELPHICLASS ESharedMemError;
#pragma pack(push,4)
class PASCALIMPLEMENTATION ESharedMemError : public Jclbase::EJclError
{
	typedef Jclbase::EJclError inherited;
	
public:
	/* Exception.Create */ inline __fastcall ESharedMemError(const System::UnicodeString Msg) : Jclbase::EJclError(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ESharedMemError(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : Jclbase::EJclError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ESharedMemError(NativeUInt Ident)/* overload */ : Jclbase::EJclError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ESharedMemError(System::PResStringRec ResStringRec)/* overload */ : Jclbase::EJclError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ESharedMemError(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : Jclbase::EJclError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ESharedMemError(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : Jclbase::EJclError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ESharedMemError(const System::UnicodeString Msg, int AHelpContext) : Jclbase::EJclError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ESharedMemError(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : Jclbase::EJclError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ESharedMemError(NativeUInt Ident, int AHelpContext)/* overload */ : Jclbase::EJclError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ESharedMemError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : Jclbase::EJclError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ESharedMemError(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : Jclbase::EJclError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ESharedMemError(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : Jclbase::EJclError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ESharedMemError(void) { }
	
};

#pragma pack(pop)

typedef int __fastcall (*TUntypedSearchCompare)(void * Param, int ItemIndex, const void *Value);

typedef int __fastcall (*TDynArraySortCompare)(void * Item1, void * Item2);

class DELPHICLASS TJclReferenceMemoryStream;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TJclReferenceMemoryStream : public System::Classes::TCustomMemoryStream
{
	typedef System::Classes::TCustomMemoryStream inherited;
	
public:
	__fastcall TJclReferenceMemoryStream(const void * Ptr, int Size);
	virtual int __fastcall Write(const void *Buffer, int Count)/* overload */;
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TJclReferenceMemoryStream(void) { }
	
	/* Hoisted overloads: */
	
public:
	inline int __fastcall  Write(const System::DynamicArray<System::Byte> Buffer, int Offset, int Count){ return System::Classes::TStream::Write(Buffer, Offset, Count); }
	inline int __fastcall  Write(const System::DynamicArray<System::Byte> Buffer, int Count){ return System::Classes::TStream::Write(Buffer, Count); }
	
};

#pragma pack(pop)

__interface IAutoPtr;
typedef System::DelphiInterface<IAutoPtr> _di_IAutoPtr;
__interface IAutoPtr  : public System::IInterface 
{
	
public:
	virtual void * __fastcall AsPointer(void) = 0 ;
	virtual System::TObject* __fastcall AsObject(void) = 0 ;
	virtual System::TObject* __fastcall ReleaseObject(void) = 0 ;
};

class DELPHICLASS TJclAutoPtr;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TJclAutoPtr : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	System::TObject* FValue;
	
public:
	__fastcall TJclAutoPtr(System::TObject* AValue);
	__fastcall virtual ~TJclAutoPtr(void);
	void * __fastcall AsPointer(void);
	System::TObject* __fastcall AsObject(void);
	System::TObject* __fastcall ReleaseObject(void);
private:
	void *__IAutoPtr;	// IAutoPtr 
	
public:
	operator IAutoPtr*(void) { return (IAutoPtr*)&__IAutoPtr; }
	
};

#pragma pack(pop)

class DELPHICLASS EJclVMTError;
#pragma pack(push,4)
class PASCALIMPLEMENTATION EJclVMTError : public Jclbase::EJclError
{
	typedef Jclbase::EJclError inherited;
	
public:
	/* Exception.Create */ inline __fastcall EJclVMTError(const System::UnicodeString Msg) : Jclbase::EJclError(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EJclVMTError(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : Jclbase::EJclError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EJclVMTError(NativeUInt Ident)/* overload */ : Jclbase::EJclError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EJclVMTError(System::PResStringRec ResStringRec)/* overload */ : Jclbase::EJclError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EJclVMTError(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : Jclbase::EJclError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EJclVMTError(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : Jclbase::EJclError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EJclVMTError(const System::UnicodeString Msg, int AHelpContext) : Jclbase::EJclError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EJclVMTError(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : Jclbase::EJclError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EJclVMTError(NativeUInt Ident, int AHelpContext)/* overload */ : Jclbase::EJclError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EJclVMTError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : Jclbase::EJclError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EJclVMTError(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : Jclbase::EJclError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EJclVMTError(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : Jclbase::EJclError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EJclVMTError(void) { }
	
};

#pragma pack(pop)

typedef System::StaticArray<System::Word, 134217728> TDynamicIndexList;

typedef TDynamicIndexList *PDynamicIndexList;

typedef System::StaticArray<void *, 134217728> TDynamicAddressList;

typedef TDynamicAddressList *PDynamicAddressList;

struct TFieldEntry;
typedef TFieldEntry *PFieldEntry;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TFieldEntry
{
public:
	int OffSet;
	System::Word IDX;
	System::ShortString Name;
};
#pragma pack(pop)


struct TFieldClassTable;
typedef TFieldClassTable *PFieldClassTable;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TFieldClassTable
{
public:
	short Count;
	System::StaticArray<System::Classes::TPersistentClass*, 8192> Classes;
};
#pragma pack(pop)


struct TFieldTable;
typedef TFieldTable *PFieldTable;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TFieldTable
{
public:
	System::Word EntryCount;
	TFieldClassTable *FieldClassTable;
	TFieldEntry FirstEntry;
};
#pragma pack(pop)


struct TMethodEntry;
typedef TMethodEntry *PMethodEntry;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TMethodEntry
{
public:
	System::Word EntrySize;
	void *Address;
	System::ShortString Name;
};
#pragma pack(pop)


struct TMethodTable;
typedef TMethodTable *PMethodTable;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TMethodTable
{
public:
	System::Word Count;
	TMethodEntry FirstEntry;
};
#pragma pack(pop)


class DELPHICLASS TJclInterfacedPersistent;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TJclInterfacedPersistent : public System::Classes::TInterfacedPersistent
{
	typedef System::Classes::TInterfacedPersistent inherited;
	
protected:
	System::_di_IInterface FOwnerInterface;
	int FRefCount;
	
public:
	virtual void __fastcall AfterConstruction(void);
	HIDESBASE int __stdcall _AddRef(void);
	HIDESBASE int __stdcall _Release(void);
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TJclInterfacedPersistent(void) { }
	
public:
	/* TObject.Create */ inline __fastcall TJclInterfacedPersistent(void) : System::Classes::TInterfacedPersistent() { }
	
private:
	void *__IInterface;	// System::IInterface 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {00000000-0000-0000-C000-000000000046}
	operator System::_di_IInterface()
	{
		System::_di_IInterface intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator System::IInterface*(void) { return (System::IInterface*)&__IInterface; }
	#endif
	
};

#pragma pack(pop)

typedef System::Byte TDigitCount;

typedef System::Int8 TDigitValue;

typedef System::Int8 TNumericSystemBase;

typedef void __fastcall (__closure *TTextHandler)(const System::UnicodeString Text);

enum DECLSPEC_DENUM TJclProcessPriority : unsigned char { ppIdle, ppNormal, ppHigh, ppRealTime, ppBelowNormal, ppAboveNormal };

__interface IJclCommandLineTool;
typedef System::DelphiInterface<IJclCommandLineTool> _di_IJclCommandLineTool;
__interface  INTERFACE_UUID("{A0034B09-A074-D811-847D-0030849E4592}") IJclCommandLineTool  : public System::IInterface 
{
	
public:
	virtual System::UnicodeString __fastcall GetExeName(void) = 0 ;
	virtual System::Classes::TStrings* __fastcall GetOptions(void) = 0 ;
	virtual System::UnicodeString __fastcall GetOutput(void) = 0 ;
	virtual TTextHandler __fastcall GetOutputCallback(void) = 0 ;
	virtual void __fastcall AddPathOption(const System::UnicodeString Option, const System::UnicodeString Path) = 0 ;
	virtual bool __fastcall Execute(const System::UnicodeString CommandLine) = 0 ;
	virtual void __fastcall SetOutputCallback(const TTextHandler CallbackMethod) = 0 ;
	__property System::UnicodeString ExeName = {read=GetExeName};
	__property System::Classes::TStrings* Options = {read=GetOptions};
	__property TTextHandler OutputCallback = {read=GetOutputCallback, write=SetOutputCallback};
	__property System::UnicodeString Output = {read=GetOutput};
};

class DELPHICLASS EJclCommandLineToolError;
#pragma pack(push,4)
class PASCALIMPLEMENTATION EJclCommandLineToolError : public Jclbase::EJclError
{
	typedef Jclbase::EJclError inherited;
	
public:
	/* Exception.Create */ inline __fastcall EJclCommandLineToolError(const System::UnicodeString Msg) : Jclbase::EJclError(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EJclCommandLineToolError(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : Jclbase::EJclError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EJclCommandLineToolError(NativeUInt Ident)/* overload */ : Jclbase::EJclError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EJclCommandLineToolError(System::PResStringRec ResStringRec)/* overload */ : Jclbase::EJclError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EJclCommandLineToolError(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : Jclbase::EJclError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EJclCommandLineToolError(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : Jclbase::EJclError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EJclCommandLineToolError(const System::UnicodeString Msg, int AHelpContext) : Jclbase::EJclError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EJclCommandLineToolError(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : Jclbase::EJclError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EJclCommandLineToolError(NativeUInt Ident, int AHelpContext)/* overload */ : Jclbase::EJclError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EJclCommandLineToolError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : Jclbase::EJclError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EJclCommandLineToolError(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : Jclbase::EJclError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EJclCommandLineToolError(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : Jclbase::EJclError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EJclCommandLineToolError(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS TJclCommandLineTool;
class PASCALIMPLEMENTATION TJclCommandLineTool : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	System::UnicodeString FExeName;
	System::Classes::TStringList* FOptions;
	System::UnicodeString FOutput;
	TTextHandler FOutputCallback;
	
public:
	__fastcall TJclCommandLineTool(const System::UnicodeString AExeName);
	__fastcall virtual ~TJclCommandLineTool(void);
	System::UnicodeString __fastcall GetExeName(void);
	System::Classes::TStrings* __fastcall GetOptions(void);
	System::UnicodeString __fastcall GetOutput(void);
	TTextHandler __fastcall GetOutputCallback(void);
	void __fastcall AddPathOption(const System::UnicodeString Option, const System::UnicodeString Path);
	bool __fastcall Execute(const System::UnicodeString CommandLine);
	void __fastcall SetOutputCallback(const TTextHandler CallbackMethod);
	__property System::UnicodeString ExeName = {read=GetExeName};
	__property System::Classes::TStrings* Options = {read=GetOptions};
	__property TTextHandler OutputCallback = {read=GetOutputCallback, write=SetOutputCallback};
	__property System::UnicodeString Output = {read=GetOutput};
private:
	void *__IJclCommandLineTool;	// IJclCommandLineTool 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {A0034B09-A074-D811-847D-0030849E4592}
	operator _di_IJclCommandLineTool()
	{
		_di_IJclCommandLineTool intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator IJclCommandLineTool*(void) { return (IJclCommandLineTool*)&__IJclCommandLineTool; }
	#endif
	
};


typedef NativeUInt TModuleHandle;

class DELPHICLASS EJclConversionError;
#pragma pack(push,4)
class PASCALIMPLEMENTATION EJclConversionError : public Jclbase::EJclError
{
	typedef Jclbase::EJclError inherited;
	
public:
	/* Exception.Create */ inline __fastcall EJclConversionError(const System::UnicodeString Msg) : Jclbase::EJclError(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EJclConversionError(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : Jclbase::EJclError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EJclConversionError(NativeUInt Ident)/* overload */ : Jclbase::EJclError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EJclConversionError(System::PResStringRec ResStringRec)/* overload */ : Jclbase::EJclError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EJclConversionError(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : Jclbase::EJclError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EJclConversionError(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : Jclbase::EJclError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EJclConversionError(const System::UnicodeString Msg, int AHelpContext) : Jclbase::EJclError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EJclConversionError(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : Jclbase::EJclError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EJclConversionError(NativeUInt Ident, int AHelpContext)/* overload */ : Jclbase::EJclError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EJclConversionError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : Jclbase::EJclError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EJclConversionError(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : Jclbase::EJclError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EJclConversionError(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : Jclbase::EJclError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EJclConversionError(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS TJclIntfCriticalSection;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TJclIntfCriticalSection : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	System::Syncobjs::TCriticalSection* FCriticalSection;
	
public:
	__fastcall TJclIntfCriticalSection(void);
	__fastcall virtual ~TJclIntfCriticalSection(void);
	HIDESBASE int __stdcall _AddRef(void);
	HIDESBASE int __stdcall _Release(void);
private:
	void *__IInterface;	// System::IInterface 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {00000000-0000-0000-C000-000000000046}
	operator System::_di_IInterface()
	{
		System::_di_IInterface intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator System::IInterface*(void) { return (System::IInterface*)&__IInterface; }
	#endif
	
};

#pragma pack(pop)

typedef NativeUInt TFileHandle;

class DELPHICLASS TJclFormatSettings;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TJclFormatSettings : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::Byte __fastcall GetCurrencyDecimals(void);
	System::Byte __fastcall GetCurrencyFormat(void);
	System::UnicodeString __fastcall GetCurrencyString(void);
	System::WideChar __fastcall GetDateSeparator(void);
	int __fastcall GetDayNamesHighIndex(void);
	int __fastcall GetDayNamesLowIndex(void);
	System::WideChar __fastcall GetDecimalSeparator(void);
	System::WideChar __fastcall GetListSeparator(void);
	System::UnicodeString __fastcall GetLongDateFormat(void);
	System::UnicodeString __fastcall GetLongDayNames(int AIndex);
	System::UnicodeString __fastcall GetLongMonthNames(int AIndex);
	System::UnicodeString __fastcall GetLongTimeFormat(void);
	int __fastcall GetMonthNamesHighIndex(void);
	int __fastcall GetMonthNamesLowIndex(void);
	System::Byte __fastcall GetNegCurrFormat(void);
	System::UnicodeString __fastcall GetShortDateFormat(void);
	System::UnicodeString __fastcall GetShortDayNames(int AIndex);
	System::UnicodeString __fastcall GetShortMonthNames(int AIndex);
	System::UnicodeString __fastcall GetShortTimeFormat(void);
	System::WideChar __fastcall GetThousandSeparator(void);
	System::UnicodeString __fastcall GetTimeAMString(void);
	System::UnicodeString __fastcall GetTimePMString(void);
	System::WideChar __fastcall GetTimeSeparator(void);
	System::Word __fastcall GetTwoDigitYearCenturyWindow(void);
	void __fastcall SetCurrencyDecimals(System::Byte AValue);
	void __fastcall SetCurrencyFormat(const System::Byte AValue);
	void __fastcall SetCurrencyString(System::UnicodeString AValue);
	void __fastcall SetDateSeparator(const System::WideChar AValue);
	void __fastcall SetDecimalSeparator(System::WideChar AValue);
	void __fastcall SetListSeparator(const System::WideChar AValue);
	void __fastcall SetLongDateFormat(const System::UnicodeString AValue);
	void __fastcall SetLongTimeFormat(const System::UnicodeString AValue);
	void __fastcall SetNegCurrFormat(const System::Byte AValue);
	void __fastcall SetShortDateFormat(System::UnicodeString AValue);
	void __fastcall SetShortTimeFormat(const System::UnicodeString AValue);
	void __fastcall SetThousandSeparator(System::WideChar AValue);
	void __fastcall SetTimeAMString(const System::UnicodeString AValue);
	void __fastcall SetTimePMString(const System::UnicodeString AValue);
	void __fastcall SetTimeSeparator(const System::WideChar AValue);
	void __fastcall SetTwoDigitYearCenturyWindow(const System::Word AValue);
	
public:
	__property System::Byte CurrencyDecimals = {read=GetCurrencyDecimals, write=SetCurrencyDecimals, nodefault};
	__property System::Byte CurrencyFormat = {read=GetCurrencyFormat, write=SetCurrencyFormat, nodefault};
	__property System::UnicodeString CurrencyString = {read=GetCurrencyString, write=SetCurrencyString};
	__property System::WideChar DateSeparator = {read=GetDateSeparator, write=SetDateSeparator, nodefault};
	__property int DayNamesHighIndex = {read=GetDayNamesHighIndex, nodefault};
	__property int DayNamesLowIndex = {read=GetDayNamesLowIndex, nodefault};
	__property System::WideChar DecimalSeparator = {read=GetDecimalSeparator, write=SetDecimalSeparator, nodefault};
	__property System::WideChar ListSeparator = {read=GetListSeparator, write=SetListSeparator, nodefault};
	__property System::UnicodeString LongDateFormat = {read=GetLongDateFormat, write=SetLongDateFormat};
	__property System::UnicodeString LongDayNames[int AIndex] = {read=GetLongDayNames};
	__property System::UnicodeString LongMonthNames[int AIndex] = {read=GetLongMonthNames};
	__property System::UnicodeString LongTimeFormat = {read=GetLongTimeFormat, write=SetLongTimeFormat};
	__property int MonthNamesHighIndex = {read=GetMonthNamesHighIndex, nodefault};
	__property int MonthNamesLowIndex = {read=GetMonthNamesLowIndex, nodefault};
	__property System::Byte NegCurrFormat = {read=GetNegCurrFormat, write=SetNegCurrFormat, nodefault};
	__property System::UnicodeString ShortDateFormat = {read=GetShortDateFormat, write=SetShortDateFormat};
	__property System::UnicodeString ShortDayNames[int AIndex] = {read=GetShortDayNames};
	__property System::UnicodeString ShortMonthNames[int AIndex] = {read=GetShortMonthNames};
	__property System::UnicodeString ShortTimeFormat = {read=GetShortTimeFormat, write=SetShortTimeFormat};
	__property System::WideChar ThousandSeparator = {read=GetThousandSeparator, write=SetThousandSeparator, nodefault};
	__property System::UnicodeString TimeAMString = {read=GetTimeAMString, write=SetTimeAMString};
	__property System::UnicodeString TimePMString = {read=GetTimePMString, write=SetTimePMString};
	__property System::WideChar TimeSeparator = {read=GetTimeSeparator, write=SetTimeSeparator, nodefault};
	__property System::Word TwoDigitYearCenturyWindow = {read=GetTwoDigitYearCenturyWindow, write=SetTwoDigitYearCenturyWindow, nodefault};
public:
	/* TObject.Create */ inline __fastcall TJclFormatSettings(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJclFormatSettings(void) { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
static const System::Word ABORT_EXIT_CODE = System::Word(0x4c7);
static const NativeUInt INVALID_MODULEHANDLE_VALUE = NativeUInt(0x0);
extern DELPHI_PACKAGE TJclFormatSettings* JclFormatSettings;
extern DELPHI_PACKAGE void __fastcall ResetMemory(/* out */ void *P, int Size);
extern DELPHI_PACKAGE void __fastcall GetAndFillMem(void * &P, const int Size, const System::Byte Value);
extern DELPHI_PACKAGE void __fastcall FreeMemAndNil(void * &P);
extern DELPHI_PACKAGE System::WideChar * __fastcall PCharOrNil(const System::UnicodeString S);
extern DELPHI_PACKAGE char * __fastcall PAnsiCharOrNil(const System::AnsiString S);
extern DELPHI_PACKAGE System::WideChar * __fastcall PWideCharOrNil(const System::WideString W);
extern DELPHI_PACKAGE int __fastcall SizeOfMem(const void * APointer);
extern DELPHI_PACKAGE bool __fastcall WriteProtectedMemory(void * BaseAddress, void * Buffer, unsigned Size, /* out */ unsigned &WrittenBytes);
extern DELPHI_PACKAGE void * __fastcall Guard(void * Mem, _di_IMultiSafeGuard &SafeGuard)/* overload */;
extern DELPHI_PACKAGE System::TObject* __fastcall Guard(System::TObject* Obj, _di_IMultiSafeGuard &SafeGuard)/* overload */;
extern DELPHI_PACKAGE void * __fastcall Guard(void * Mem, /* out */ _di_ISafeGuard &SafeGuard)/* overload */;
extern DELPHI_PACKAGE System::TObject* __fastcall Guard(System::TObject* Obj, /* out */ _di_ISafeGuard &SafeGuard)/* overload */;
extern DELPHI_PACKAGE void * __fastcall GuardGetMem(unsigned Size, /* out */ _di_ISafeGuard &SafeGuard);
extern DELPHI_PACKAGE void * __fastcall GuardAllocMem(unsigned Size, /* out */ _di_ISafeGuard &SafeGuard);
extern DELPHI_PACKAGE int __fastcall SharedGetMem(void *P, const System::UnicodeString Name, unsigned Size, unsigned DesiredAccess = (unsigned)(0xf001f));
extern DELPHI_PACKAGE void * __fastcall SharedAllocMem(const System::UnicodeString Name, unsigned Size, unsigned DesiredAccess = (unsigned)(0xf001f));
extern DELPHI_PACKAGE bool __fastcall SharedFreeMem(void *P);
extern DELPHI_PACKAGE bool __fastcall SharedOpenMem(void *P, const System::UnicodeString Name, unsigned DesiredAccess = (unsigned)(0xf001f))/* overload */;
extern DELPHI_PACKAGE void * __fastcall SharedOpenMem(const System::UnicodeString Name, unsigned DesiredAccess = (unsigned)(0xf001f))/* overload */;
extern DELPHI_PACKAGE bool __fastcall SharedCloseMem(void *P);
extern DELPHI_PACKAGE int __fastcall SearchSortedList(System::Classes::TList* List, System::Classes::TListSortCompare SortFunc, void * Item, bool Nearest = false);
extern DELPHI_PACKAGE int __fastcall SearchSortedUntyped(void * Param, int ItemCount, TUntypedSearchCompare SearchFunc, const void *Value, bool Nearest = false);
extern DELPHI_PACKAGE void __fastcall SortDynArray(const void * ArrayPtr, unsigned ElementSize, TDynArraySortCompare SortFunc);
extern DELPHI_PACKAGE int __fastcall SearchDynArray(const void * ArrayPtr, unsigned ElementSize, TDynArraySortCompare SortFunc, void * ValuePtr, bool Nearest = false);
extern DELPHI_PACKAGE int __fastcall DynArrayCompareByte(void * Item1, void * Item2);
extern DELPHI_PACKAGE int __fastcall DynArrayCompareShortInt(void * Item1, void * Item2);
extern DELPHI_PACKAGE int __fastcall DynArrayCompareWord(void * Item1, void * Item2);
extern DELPHI_PACKAGE int __fastcall DynArrayCompareSmallInt(void * Item1, void * Item2);
extern DELPHI_PACKAGE int __fastcall DynArrayCompareInteger(void * Item1, void * Item2);
extern DELPHI_PACKAGE int __fastcall DynArrayCompareCardinal(void * Item1, void * Item2);
extern DELPHI_PACKAGE int __fastcall DynArrayCompareInt64(void * Item1, void * Item2);
extern DELPHI_PACKAGE int __fastcall DynArrayCompareSingle(void * Item1, void * Item2);
extern DELPHI_PACKAGE int __fastcall DynArrayCompareDouble(void * Item1, void * Item2);
extern DELPHI_PACKAGE int __fastcall DynArrayCompareExtended(void * Item1, void * Item2);
extern DELPHI_PACKAGE int __fastcall DynArrayCompareFloat(void * Item1, void * Item2);
extern DELPHI_PACKAGE int __fastcall DynArrayCompareAnsiString(void * Item1, void * Item2);
extern DELPHI_PACKAGE int __fastcall DynArrayCompareAnsiText(void * Item1, void * Item2);
extern DELPHI_PACKAGE int __fastcall DynArrayCompareWideString(void * Item1, void * Item2);
extern DELPHI_PACKAGE int __fastcall DynArrayCompareWideText(void * Item1, void * Item2);
extern DELPHI_PACKAGE int __fastcall DynArrayCompareString(void * Item1, void * Item2);
extern DELPHI_PACKAGE int __fastcall DynArrayCompareText(void * Item1, void * Item2);
extern DELPHI_PACKAGE void __fastcall ClearObjectList(System::Classes::TList* List);
extern DELPHI_PACKAGE void __fastcall FreeObjectList(System::Classes::TList* &List);
extern DELPHI_PACKAGE _di_IAutoPtr __fastcall CreateAutoPtr(System::TObject* Value);
extern DELPHI_PACKAGE System::UnicodeString __fastcall Iff(const bool Condition, const System::UnicodeString TruePart, const System::UnicodeString FalsePart)/* overload */;
extern DELPHI_PACKAGE System::WideChar __fastcall Iff(const bool Condition, const System::WideChar TruePart, const System::WideChar FalsePart)/* overload */;
extern DELPHI_PACKAGE System::Byte __fastcall Iff(const bool Condition, const System::Byte TruePart, const System::Byte FalsePart)/* overload */;
extern DELPHI_PACKAGE int __fastcall Iff(const bool Condition, const int TruePart, const int FalsePart)/* overload */;
extern DELPHI_PACKAGE unsigned __fastcall Iff(const bool Condition, const unsigned TruePart, const unsigned FalsePart)/* overload */;
extern DELPHI_PACKAGE System::Extended __fastcall Iff(const bool Condition, const System::Extended TruePart, const System::Extended FalsePart)/* overload */;
extern DELPHI_PACKAGE bool __fastcall Iff(const bool Condition, const bool TruePart, const bool FalsePart)/* overload */;
extern DELPHI_PACKAGE void * __fastcall Iff(const bool Condition, const void * TruePart, const void * FalsePart)/* overload */;
extern DELPHI_PACKAGE __int64 __fastcall Iff(const bool Condition, const __int64 TruePart, const __int64 FalsePart)/* overload */;
extern DELPHI_PACKAGE System::Variant __fastcall Iff(const bool Condition, const System::Variant &TruePart, const System::Variant &FalsePart)/* overload */;
extern DELPHI_PACKAGE int __fastcall GetVirtualMethodCount(System::TClass AClass);
extern DELPHI_PACKAGE void * __fastcall GetVirtualMethod(System::TClass AClass, const int Index);
extern DELPHI_PACKAGE void __fastcall SetVirtualMethod(System::TClass AClass, const int Index, const void * Method);
extern DELPHI_PACKAGE int __fastcall GetDynamicMethodCount(System::TClass AClass);
extern DELPHI_PACKAGE PDynamicIndexList __fastcall GetDynamicIndexList(System::TClass AClass);
extern DELPHI_PACKAGE PDynamicAddressList __fastcall GetDynamicAddressList(System::TClass AClass);
extern DELPHI_PACKAGE bool __fastcall HasDynamicMethod(System::TClass AClass, int Index);
extern DELPHI_PACKAGE void * __fastcall GetDynamicMethod(System::TClass AClass, int Index);
extern DELPHI_PACKAGE System::Typinfo::PTypeInfo __fastcall GetInitTable(System::TClass AClass);
extern DELPHI_PACKAGE PFieldTable __fastcall GetFieldTable(System::TClass AClass);
extern DELPHI_PACKAGE PMethodTable __fastcall GetMethodTable(System::TClass AClass);
extern DELPHI_PACKAGE PMethodEntry __fastcall GetMethodEntry(PMethodTable MethodTable, int Index);
extern DELPHI_PACKAGE void __fastcall SetClassParent(System::TClass AClass, System::TClass NewClassParent);
extern DELPHI_PACKAGE System::TClass __fastcall GetClassParent(System::TClass AClass);
extern DELPHI_PACKAGE bool __fastcall IsClass(void * Address);
extern DELPHI_PACKAGE bool __fastcall IsObject(void * Address);
extern DELPHI_PACKAGE bool __fastcall InheritsFromByName(System::TClass AClass, const System::UnicodeString AClassName);
extern DELPHI_PACKAGE System::TObject* __fastcall GetImplementorOfInterface(const System::_di_IInterface I);
extern DELPHI_PACKAGE System::UnicodeString __fastcall IntToStrZeroPad(int Value, int Count);
extern DELPHI_PACKAGE unsigned __fastcall Execute(const System::UnicodeString CommandLine, System::UnicodeString &Output, bool RawOutput = false, System::PBoolean AbortPtr = (System::PBoolean)(0x0), TJclProcessPriority ProcessPriority = (TJclProcessPriority)(0x1))/* overload */;
extern DELPHI_PACKAGE unsigned __fastcall Execute(const System::UnicodeString CommandLine, Jclsynch::TJclEvent* AbortEvent, System::UnicodeString &Output, bool RawOutput = false, TJclProcessPriority ProcessPriority = (TJclProcessPriority)(0x1))/* overload */;
extern DELPHI_PACKAGE unsigned __fastcall Execute(const System::UnicodeString CommandLine, TTextHandler OutputLineCallback, bool RawOutput = false, System::PBoolean AbortPtr = (System::PBoolean)(0x0), TJclProcessPriority ProcessPriority = (TJclProcessPriority)(0x1))/* overload */;
extern DELPHI_PACKAGE unsigned __fastcall Execute(const System::UnicodeString CommandLine, Jclsynch::TJclEvent* AbortEvent, TTextHandler OutputLineCallback, bool RawOutput = false, TJclProcessPriority ProcessPriority = (TJclProcessPriority)(0x1))/* overload */;
extern DELPHI_PACKAGE unsigned __fastcall Execute(const System::UnicodeString CommandLine, System::UnicodeString &Output, System::UnicodeString &Error, bool RawOutput = false, bool RawError = false, System::PBoolean AbortPtr = (System::PBoolean)(0x0), TJclProcessPriority ProcessPriority = (TJclProcessPriority)(0x1))/* overload */;
extern DELPHI_PACKAGE unsigned __fastcall Execute(const System::UnicodeString CommandLine, Jclsynch::TJclEvent* AbortEvent, System::UnicodeString &Output, System::UnicodeString &Error, bool RawOutput = false, bool RawError = false, TJclProcessPriority ProcessPriority = (TJclProcessPriority)(0x1))/* overload */;
extern DELPHI_PACKAGE unsigned __fastcall Execute(const System::UnicodeString CommandLine, TTextHandler OutputLineCallback, TTextHandler ErrorLineCallback, bool RawOutput = false, bool RawError = false, System::PBoolean AbortPtr = (System::PBoolean)(0x0), TJclProcessPriority ProcessPriority = (TJclProcessPriority)(0x1))/* overload */;
extern DELPHI_PACKAGE unsigned __fastcall Execute(const System::UnicodeString CommandLine, Jclsynch::TJclEvent* AbortEvent, TTextHandler OutputLineCallback, TTextHandler ErrorLineCallback, bool RawOutput = false, bool RawError = false, TJclProcessPriority ProcessPriority = (TJclProcessPriority)(0x1))/* overload */;
extern DELPHI_PACKAGE bool __fastcall LoadModule(NativeUInt &Module, System::UnicodeString FileName);
extern DELPHI_PACKAGE bool __fastcall LoadModuleEx(NativeUInt &Module, System::UnicodeString FileName, unsigned Flags);
extern DELPHI_PACKAGE void __fastcall UnloadModule(NativeUInt &Module);
extern DELPHI_PACKAGE void * __fastcall GetModuleSymbol(NativeUInt Module, System::UnicodeString SymbolName);
extern DELPHI_PACKAGE void * __fastcall GetModuleSymbolEx(NativeUInt Module, System::UnicodeString SymbolName, bool &Accu);
extern DELPHI_PACKAGE bool __fastcall ReadModuleData(NativeUInt Module, System::UnicodeString SymbolName, void *Buffer, unsigned Size);
extern DELPHI_PACKAGE bool __fastcall WriteModuleData(NativeUInt Module, System::UnicodeString SymbolName, void *Buffer, unsigned Size);
extern DELPHI_PACKAGE bool __fastcall StrToBoolean(const System::UnicodeString S);
extern DELPHI_PACKAGE System::UnicodeString __fastcall BooleanToStr(bool B);
extern DELPHI_PACKAGE bool __fastcall IntToBool(int I);
extern DELPHI_PACKAGE int __fastcall BoolToInt(bool B);
extern DELPHI_PACKAGE bool __fastcall TryStrToUInt(const System::UnicodeString Value, /* out */ unsigned &Res);
extern DELPHI_PACKAGE unsigned __fastcall StrToUIntDef(const System::UnicodeString Value, const unsigned Default);
extern DELPHI_PACKAGE unsigned __fastcall StrToUInt(const System::UnicodeString Value);
extern DELPHI_PACKAGE unsigned __fastcall SystemTObjectInstance(void);
extern DELPHI_PACKAGE bool __fastcall IsCompiledWithPackages(void);
extern DELPHI_PACKAGE System::UnicodeString __fastcall JclGUIDToString(const GUID &GUID);
extern DELPHI_PACKAGE GUID __fastcall JclStringToGUID(const System::UnicodeString S);
extern DELPHI_PACKAGE bool __fastcall GUIDEquals(const GUID &GUID1, const GUID &GUID2);
extern DELPHI_PACKAGE void __fastcall ListAddItems(System::UnicodeString &List, const System::UnicodeString Separator, const System::UnicodeString Items);
extern DELPHI_PACKAGE void __fastcall ListIncludeItems(System::UnicodeString &List, const System::UnicodeString Separator, const System::UnicodeString Items);
extern DELPHI_PACKAGE void __fastcall ListRemoveItems(System::UnicodeString &List, const System::UnicodeString Separator, const System::UnicodeString Items);
extern DELPHI_PACKAGE void __fastcall ListDelItem(System::UnicodeString &List, const System::UnicodeString Separator, const int Index);
extern DELPHI_PACKAGE int __fastcall ListItemCount(const System::UnicodeString List, const System::UnicodeString Separator);
extern DELPHI_PACKAGE System::UnicodeString __fastcall ListGetItem(const System::UnicodeString List, const System::UnicodeString Separator, const int Index);
extern DELPHI_PACKAGE void __fastcall ListSetItem(System::UnicodeString &List, const System::UnicodeString Separator, const int Index, const System::UnicodeString Value);
extern DELPHI_PACKAGE int __fastcall ListItemIndex(const System::UnicodeString List, const System::UnicodeString Separator, const System::UnicodeString Item);
extern DELPHI_PACKAGE bool __fastcall VarIsNullEmpty(const System::Variant &V);
extern DELPHI_PACKAGE bool __fastcall VarIsNullEmptyBlank(const System::Variant &V);
}	/* namespace Jclsysutils */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_JCLSYSUTILS)
using namespace Jclsysutils;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// JclsysutilsHPP
