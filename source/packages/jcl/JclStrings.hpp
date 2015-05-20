// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'JclStrings.pas' rev: 27.00 (Windows)

#ifndef JclstringsHPP
#define JclstringsHPP

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
#include <JclBase.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Jclstrings
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS EJclStringError;
#pragma pack(push,4)
class PASCALIMPLEMENTATION EJclStringError : public Jclbase::EJclError
{
	typedef Jclbase::EJclError inherited;
	
public:
	/* Exception.Create */ inline __fastcall EJclStringError(const System::UnicodeString Msg) : Jclbase::EJclError(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EJclStringError(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : Jclbase::EJclError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EJclStringError(NativeUInt Ident)/* overload */ : Jclbase::EJclError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EJclStringError(System::PResStringRec ResStringRec)/* overload */ : Jclbase::EJclError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EJclStringError(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : Jclbase::EJclError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EJclStringError(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : Jclbase::EJclError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EJclStringError(const System::UnicodeString Msg, int AHelpContext) : Jclbase::EJclError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EJclStringError(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : Jclbase::EJclError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EJclStringError(NativeUInt Ident, int AHelpContext)/* overload */ : Jclbase::EJclError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EJclStringError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : Jclbase::EJclError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EJclStringError(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : Jclbase::EJclError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EJclStringError(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : Jclbase::EJclError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EJclStringError(void) { }
	
};

#pragma pack(pop)

typedef bool __fastcall (*TCharValidator)(const System::WideChar C);

typedef System::WideChar * *PCharVector;

class DELPHICLASS FormatException;
#pragma pack(push,4)
class PASCALIMPLEMENTATION FormatException : public Jclbase::EJclError
{
	typedef Jclbase::EJclError inherited;
	
public:
	/* Exception.Create */ inline __fastcall FormatException(const System::UnicodeString Msg) : Jclbase::EJclError(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall FormatException(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : Jclbase::EJclError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall FormatException(NativeUInt Ident)/* overload */ : Jclbase::EJclError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall FormatException(System::PResStringRec ResStringRec)/* overload */ : Jclbase::EJclError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall FormatException(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : Jclbase::EJclError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall FormatException(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : Jclbase::EJclError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall FormatException(const System::UnicodeString Msg, int AHelpContext) : Jclbase::EJclError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall FormatException(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : Jclbase::EJclError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall FormatException(NativeUInt Ident, int AHelpContext)/* overload */ : Jclbase::EJclError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall FormatException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : Jclbase::EJclError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall FormatException(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : Jclbase::EJclError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall FormatException(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : Jclbase::EJclError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~FormatException(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS ArgumentException;
#pragma pack(push,4)
class PASCALIMPLEMENTATION ArgumentException : public Jclbase::EJclError
{
	typedef Jclbase::EJclError inherited;
	
public:
	/* Exception.Create */ inline __fastcall ArgumentException(const System::UnicodeString Msg) : Jclbase::EJclError(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ArgumentException(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : Jclbase::EJclError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ArgumentException(NativeUInt Ident)/* overload */ : Jclbase::EJclError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ArgumentException(System::PResStringRec ResStringRec)/* overload */ : Jclbase::EJclError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ArgumentException(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : Jclbase::EJclError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ArgumentException(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : Jclbase::EJclError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ArgumentException(const System::UnicodeString Msg, int AHelpContext) : Jclbase::EJclError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ArgumentException(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : Jclbase::EJclError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ArgumentException(NativeUInt Ident, int AHelpContext)/* overload */ : Jclbase::EJclError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ArgumentException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : Jclbase::EJclError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ArgumentException(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : Jclbase::EJclError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ArgumentException(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : Jclbase::EJclError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ArgumentException(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS ArgumentNullException;
#pragma pack(push,4)
class PASCALIMPLEMENTATION ArgumentNullException : public Jclbase::EJclError
{
	typedef Jclbase::EJclError inherited;
	
public:
	/* Exception.Create */ inline __fastcall ArgumentNullException(const System::UnicodeString Msg) : Jclbase::EJclError(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ArgumentNullException(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : Jclbase::EJclError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ArgumentNullException(NativeUInt Ident)/* overload */ : Jclbase::EJclError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ArgumentNullException(System::PResStringRec ResStringRec)/* overload */ : Jclbase::EJclError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ArgumentNullException(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : Jclbase::EJclError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ArgumentNullException(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : Jclbase::EJclError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ArgumentNullException(const System::UnicodeString Msg, int AHelpContext) : Jclbase::EJclError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ArgumentNullException(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : Jclbase::EJclError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ArgumentNullException(NativeUInt Ident, int AHelpContext)/* overload */ : Jclbase::EJclError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ArgumentNullException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : Jclbase::EJclError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ArgumentNullException(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : Jclbase::EJclError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ArgumentNullException(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : Jclbase::EJclError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ArgumentNullException(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS ArgumentOutOfRangeException;
#pragma pack(push,4)
class PASCALIMPLEMENTATION ArgumentOutOfRangeException : public Jclbase::EJclError
{
	typedef Jclbase::EJclError inherited;
	
public:
	/* Exception.Create */ inline __fastcall ArgumentOutOfRangeException(const System::UnicodeString Msg) : Jclbase::EJclError(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ArgumentOutOfRangeException(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : Jclbase::EJclError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ArgumentOutOfRangeException(NativeUInt Ident)/* overload */ : Jclbase::EJclError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ArgumentOutOfRangeException(System::PResStringRec ResStringRec)/* overload */ : Jclbase::EJclError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ArgumentOutOfRangeException(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : Jclbase::EJclError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ArgumentOutOfRangeException(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : Jclbase::EJclError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ArgumentOutOfRangeException(const System::UnicodeString Msg, int AHelpContext) : Jclbase::EJclError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ArgumentOutOfRangeException(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : Jclbase::EJclError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ArgumentOutOfRangeException(NativeUInt Ident, int AHelpContext)/* overload */ : Jclbase::EJclError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ArgumentOutOfRangeException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : Jclbase::EJclError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ArgumentOutOfRangeException(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : Jclbase::EJclError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ArgumentOutOfRangeException(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : Jclbase::EJclError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ArgumentOutOfRangeException(void) { }
	
};

#pragma pack(pop)

__interface IToString;
typedef System::DelphiInterface<IToString> _di_IToString;
__interface  INTERFACE_UUID("{C4ABABB4-1029-46E7-B5FA-99800F130C05}") IToString  : public System::IInterface 
{
	
public:
	virtual System::UnicodeString __fastcall ToString(void) = 0 ;
};

typedef System::DynamicArray<System::WideChar> TCharDynArray;

class DELPHICLASS TJclStringBuilder;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TJclStringBuilder : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
public:
	System::WideChar operator[](int Index) { return __Chars__[Index]; }
	
private:
	TCharDynArray FChars;
	int FLength;
	int FMaxCapacity;
	int __fastcall GetCapacity(void);
	void __fastcall SetCapacity(const int Value);
	System::WideChar __fastcall GetChars(int Index);
	void __fastcall SetChars(int Index, const System::WideChar Value);
	void __fastcall Set_Length(const int Value);
	
protected:
	TJclStringBuilder* __fastcall AppendPChar(System::WideChar * Value, int Count, int RepeatCount = 0x1);
	TJclStringBuilder* __fastcall InsertPChar(int Index, System::WideChar * Value, int Count, int RepeatCount = 0x1);
	
public:
	__fastcall TJclStringBuilder(const System::UnicodeString Value, int Capacity)/* overload */;
	__fastcall TJclStringBuilder(int Capacity, int MaxCapacity)/* overload */;
	__fastcall TJclStringBuilder(const System::UnicodeString Value, int StartIndex, int Length, int Capacity)/* overload */;
	TJclStringBuilder* __fastcall Append(const System::UnicodeString Value)/* overload */;
	TJclStringBuilder* __fastcall Append(const System::UnicodeString Value, int StartIndex, int Length)/* overload */;
	TJclStringBuilder* __fastcall Append(bool Value)/* overload */;
	TJclStringBuilder* __fastcall Append(System::WideChar Value, int RepeatCount = 0x1)/* overload */;
	TJclStringBuilder* __fastcall Append(System::WideChar const *Value, const int Value_High)/* overload */;
	TJclStringBuilder* __fastcall Append(System::WideChar const *Value, const int Value_High, int StartIndex, int Length)/* overload */;
	TJclStringBuilder* __fastcall Append(unsigned Value)/* overload */;
	TJclStringBuilder* __fastcall Append(int Value)/* overload */;
	TJclStringBuilder* __fastcall Append(double Value)/* overload */;
	TJclStringBuilder* __fastcall Append(__int64 Value)/* overload */;
	TJclStringBuilder* __fastcall Append(System::TObject* Obj)/* overload */;
	TJclStringBuilder* __fastcall AppendFormat(const System::UnicodeString Fmt, System::TVarRec const *Args, const int Args_High)/* overload */;
	TJclStringBuilder* __fastcall AppendFormat(const System::UnicodeString Fmt, const System::Variant &Arg0)/* overload */;
	TJclStringBuilder* __fastcall AppendFormat(const System::UnicodeString Fmt, const System::Variant &Arg0, const System::Variant &Arg1)/* overload */;
	TJclStringBuilder* __fastcall AppendFormat(const System::UnicodeString Fmt, const System::Variant &Arg0, const System::Variant &Arg1, const System::Variant &Arg2)/* overload */;
	TJclStringBuilder* __fastcall Insert(int Index, const System::UnicodeString Value, int Count = 0x1)/* overload */;
	TJclStringBuilder* __fastcall Insert(int Index, bool Value)/* overload */;
	TJclStringBuilder* __fastcall Insert(int Index, System::WideChar const *Value, const int Value_High)/* overload */;
	TJclStringBuilder* __fastcall Insert(int Index, System::WideChar const *Value, const int Value_High, int StartIndex, int Length)/* overload */;
	TJclStringBuilder* __fastcall Insert(int Index, unsigned Value)/* overload */;
	TJclStringBuilder* __fastcall Insert(int Index, int Value)/* overload */;
	TJclStringBuilder* __fastcall Insert(int Index, double Value)/* overload */;
	TJclStringBuilder* __fastcall Insert(int Index, __int64 Value)/* overload */;
	TJclStringBuilder* __fastcall Insert(int Index, System::TObject* Obj)/* overload */;
	TJclStringBuilder* __fastcall Replace(System::WideChar OldChar, System::WideChar NewChar, int StartIndex = 0x0, int Count = 0xffffffff)/* overload */;
	TJclStringBuilder* __fastcall Replace(System::UnicodeString OldValue, System::UnicodeString NewValue, int StartIndex = 0x0, int Count = 0xffffffff)/* overload */;
	TJclStringBuilder* __fastcall Remove(int StartIndex, int Length);
	int __fastcall EnsureCapacity(int Capacity);
	void __fastcall Clear(void);
	virtual System::UnicodeString __fastcall ToString(void);
	__property System::WideChar __Chars__[int Index] = {read=GetChars, write=SetChars/*, default*/};
	__property TCharDynArray Chars = {read=FChars};
	__property int Length = {read=FLength, write=Set_Length, nodefault};
	__property int Capacity = {read=GetCapacity, write=SetCapacity, nodefault};
	__property int MaxCapacity = {read=FMaxCapacity, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TJclStringBuilder(void) { }
	
private:
	void *__IToString;	// IToString 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {C4ABABB4-1029-46E7-B5FA-99800F130C05}
	operator _di_IToString()
	{
		_di_IToString intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator IToString*(void) { return (IToString*)&__IToString; }
	#endif
	
};

#pragma pack(pop)

;

class DELPHICLASS TJclTabSet;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TJclTabSet : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
public:
	int operator[](int Index) { return TabStops[Index]; }
	
private:
	System::TObject* FData;
	int __fastcall GetCount(void);
	int __fastcall GetStops(int Index);
	int __fastcall GetTabWidth(void);
	bool __fastcall GetZeroBased(void);
	void __fastcall SetStops(int Index, int Value);
	void __fastcall SetTabWidth(int Value);
	void __fastcall SetZeroBased(bool Value);
	
protected:
	int __fastcall FindStop(int Column);
	Jclbase::TDynSizeIntArray __fastcall InternalTabStops(void);
	int __fastcall InternalTabWidth(void);
	void __fastcall RemoveAt(int Index);
	
public:
	__fastcall TJclTabSet(void)/* overload */;
	__fastcall TJclTabSet(System::TObject* Data)/* overload */;
	__fastcall TJclTabSet(int TabWidth)/* overload */;
	__fastcall TJclTabSet(int const *Tabstops, const int Tabstops_High, bool ZeroBased)/* overload */;
	__fastcall TJclTabSet(int const *Tabstops, const int Tabstops_High, bool ZeroBased, int TabWidth)/* overload */;
	__fastcall virtual ~TJclTabSet(void);
	TJclTabSet* __fastcall Clone(void);
	TJclTabSet* __fastcall NewReference(void);
	int __fastcall Add(int Column);
	int __fastcall Delete(int Column);
	System::UnicodeString __fastcall Expand(const System::UnicodeString S)/* overload */;
	System::UnicodeString __fastcall Expand(const System::UnicodeString S, int Column)/* overload */;
	void __fastcall OptimalFillInfo(int StartColumn, int TargetColumn, /* out */ int &TabsNeeded, /* out */ int &SpacesNeeded);
	System::UnicodeString __fastcall Optimize(const System::UnicodeString S)/* overload */;
	System::UnicodeString __fastcall Optimize(const System::UnicodeString S, int Column)/* overload */;
	int __fastcall StartColumn(void);
	int __fastcall TabFrom(int Column);
	int __fastcall UpdatePosition(const System::UnicodeString S)/* overload */;
	int __fastcall UpdatePosition(const System::UnicodeString S, int Column)/* overload */;
	int __fastcall UpdatePosition(const System::UnicodeString S, int &Column, int &Line)/* overload */;
	virtual System::UnicodeString __fastcall ToString(void)/* overload */;
	HIDESBASE System::UnicodeString __fastcall ToString(int FormattingOptions)/* overload */;
	static TJclTabSet* __fastcall FromString(const System::UnicodeString S);
	__property int ActualTabWidth = {read=InternalTabWidth, nodefault};
	__property int Count = {read=GetCount, nodefault};
	__property int TabStops[int Index] = {read=GetStops, write=SetStops/*, default*/};
	__property int TabWidth = {read=GetTabWidth, write=SetTabWidth, nodefault};
	__property bool ZeroBased = {read=GetZeroBased, write=SetZeroBased, nodefault};
private:
	void *__IToString;	// IToString 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {C4ABABB4-1029-46E7-B5FA-99800F130C05}
	operator _di_IToString()
	{
		_di_IToString intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator IToString*(void) { return (IToString*)&__IToString; }
	#endif
	
};

#pragma pack(pop)

class DELPHICLASS NullReferenceException;
#pragma pack(push,4)
class PASCALIMPLEMENTATION NullReferenceException : public Jclbase::EJclError
{
	typedef Jclbase::EJclError inherited;
	
public:
	__fastcall NullReferenceException(void)/* overload */;
public:
	/* Exception.CreateFmt */ inline __fastcall NullReferenceException(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : Jclbase::EJclError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall NullReferenceException(NativeUInt Ident)/* overload */ : Jclbase::EJclError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall NullReferenceException(System::PResStringRec ResStringRec)/* overload */ : Jclbase::EJclError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall NullReferenceException(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : Jclbase::EJclError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall NullReferenceException(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : Jclbase::EJclError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall NullReferenceException(const System::UnicodeString Msg, int AHelpContext) : Jclbase::EJclError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall NullReferenceException(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : Jclbase::EJclError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall NullReferenceException(NativeUInt Ident, int AHelpContext)/* overload */ : Jclbase::EJclError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall NullReferenceException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : Jclbase::EJclError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall NullReferenceException(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : Jclbase::EJclError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall NullReferenceException(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : Jclbase::EJclError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~NullReferenceException(void) { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
static const System::WideChar NativeNull = (System::WideChar)(0x0);
static const System::WideChar NativeSoh = (System::WideChar)(0x1);
static const System::WideChar NativeStx = (System::WideChar)(0x2);
static const System::WideChar NativeEtx = (System::WideChar)(0x3);
static const System::WideChar NativeEot = (System::WideChar)(0x4);
static const System::WideChar NativeEnq = (System::WideChar)(0x5);
static const System::WideChar NativeAck = (System::WideChar)(0x6);
static const System::WideChar NativeBell = (System::WideChar)(0x7);
static const System::WideChar NativeBackspace = (System::WideChar)(0x8);
static const System::WideChar NativeTab = (System::WideChar)(0x9);
static const System::WideChar NativeLineFeed = (System::WideChar)(0xa);
static const System::WideChar NativeVerticalTab = (System::WideChar)(0xb);
static const System::WideChar NativeFormFeed = (System::WideChar)(0xc);
static const System::WideChar NativeCarriageReturn = (System::WideChar)(0xd);
#define NativeCrLf L"\r\n"
static const System::WideChar NativeSo = (System::WideChar)(0xe);
static const System::WideChar NativeSi = (System::WideChar)(0xf);
static const System::WideChar NativeDle = (System::WideChar)(0x10);
static const System::WideChar NativeDc1 = (System::WideChar)(0x11);
static const System::WideChar NativeDc2 = (System::WideChar)(0x12);
static const System::WideChar NativeDc3 = (System::WideChar)(0x13);
static const System::WideChar NativeDc4 = (System::WideChar)(0x14);
static const System::WideChar NativeNak = (System::WideChar)(0x15);
static const System::WideChar NativeSyn = (System::WideChar)(0x16);
static const System::WideChar NativeEtb = (System::WideChar)(0x17);
static const System::WideChar NativeCan = (System::WideChar)(0x18);
static const System::WideChar NativeEm = (System::WideChar)(0x19);
static const System::WideChar NativeEndOfFile = (System::WideChar)(0x1a);
static const System::WideChar NativeEscape = (System::WideChar)(0x1b);
static const System::WideChar NativeFs = (System::WideChar)(0x1c);
static const System::WideChar NativeGs = (System::WideChar)(0x1d);
static const System::WideChar NativeRs = (System::WideChar)(0x1e);
static const System::WideChar NativeUs = (System::WideChar)(0x1f);
static const System::WideChar NativeSpace = (System::WideChar)(0x20);
static const System::WideChar NativeComma = (System::WideChar)(0x2c);
static const System::WideChar NativeBackslash = (System::WideChar)(0x5c);
static const System::WideChar NativeForwardSlash = (System::WideChar)(0x2f);
static const System::WideChar NativeDoubleQuote = (System::WideChar)(0x22);
static const System::WideChar NativeSingleQuote = (System::WideChar)(0x27);
#define NativeLineBreak L"\r\n"
static const System::Int8 TabSetFormatting_SurroundStopsWithBrackets = System::Int8(0x1);
static const System::Int8 TabSetFormatting_EmptyBracketsIfNoStops = System::Int8(0x2);
static const System::Int8 TabSetFormatting_NoTabStops = System::Int8(0x4);
static const System::Int8 TabSetFormatting_NoTabWidth = System::Int8(0x8);
static const System::Int8 TabSetFormatting_AutoTabWidth = System::Int8(0x10);
static const System::Int8 TabSetFormatting_Default = System::Int8(0x0);
static const System::Int8 TabSetFormatting_AlwaysUseBrackets = System::Int8(0x3);
static const System::Int8 TabSetFormatting_Full = System::Int8(0x13);
static const System::Int8 TabSetFormatting_StopsOnly = System::Int8(0x8);
static const System::Int8 TabSetFormatting_TabWidthOnly = System::Int8(0x4);
static const System::Int8 TabSetFormatting_StopsWithoutBracketsAndTabWidth = System::Int8(0x0);
static const int MaxStrCharCount = int(0x10000);
static const System::Int8 StrLoOffset = System::Int8(0x0);
static const int StrUpOffset = int(0x10000);
static const int StrReOffset = int(0x20000);
static const int StrCaseMapSize = int(0x30000);
extern DELPHI_PACKAGE System::StaticArray<System::WideChar, 196608> StrCaseMap;
extern DELPHI_PACKAGE bool StrCaseMapReady;
extern DELPHI_PACKAGE System::StaticArray<System::Word, 65536> StrCharTypes;
extern DELPHI_PACKAGE bool __fastcall ArrayContainsChar(System::WideChar const *Chars, const int Chars_High, const System::WideChar C)/* overload */;
extern DELPHI_PACKAGE bool __fastcall ArrayContainsChar(System::WideChar const *Chars, const int Chars_High, const System::WideChar C, /* out */ int &Index)/* overload */;
extern DELPHI_PACKAGE bool __fastcall StrIsAlpha(const System::UnicodeString S);
extern DELPHI_PACKAGE bool __fastcall StrIsAlphaNum(const System::UnicodeString S);
extern DELPHI_PACKAGE bool __fastcall StrContainsChars(const System::UnicodeString S, const TCharValidator Chars, bool CheckAll)/* overload */;
extern DELPHI_PACKAGE bool __fastcall StrContainsChars(const System::UnicodeString S, System::WideChar const *Chars, const int Chars_High, bool CheckAll)/* overload */;
extern DELPHI_PACKAGE bool __fastcall StrIsAlphaNumUnderscore(const System::UnicodeString S);
extern DELPHI_PACKAGE bool __fastcall StrIsDigit(const System::UnicodeString S);
extern DELPHI_PACKAGE bool __fastcall StrIsSubset(const System::UnicodeString S, const TCharValidator ValidChars)/* overload */;
extern DELPHI_PACKAGE bool __fastcall StrIsSubset(const System::UnicodeString S, System::WideChar const *ValidChars, const int ValidChars_High)/* overload */;
extern DELPHI_PACKAGE bool __fastcall StrSame(const System::UnicodeString S1, const System::UnicodeString S2, bool CaseSensitive = false);
extern DELPHI_PACKAGE System::UnicodeString __fastcall StrCenter(const System::UnicodeString S, int L, System::WideChar C = (System::WideChar)(0x20));
extern DELPHI_PACKAGE System::UnicodeString __fastcall StrCharPosLower(const System::UnicodeString S, int CharPos);
extern DELPHI_PACKAGE System::UnicodeString __fastcall StrCharPosUpper(const System::UnicodeString S, int CharPos);
extern DELPHI_PACKAGE System::UnicodeString __fastcall StrDoubleQuote(const System::UnicodeString S);
extern DELPHI_PACKAGE System::UnicodeString __fastcall StrEnsureNoPrefix(const System::UnicodeString Prefix, const System::UnicodeString Text);
extern DELPHI_PACKAGE System::UnicodeString __fastcall StrEnsureNoSuffix(const System::UnicodeString Suffix, const System::UnicodeString Text);
extern DELPHI_PACKAGE System::UnicodeString __fastcall StrEnsurePrefix(const System::UnicodeString Prefix, const System::UnicodeString Text);
extern DELPHI_PACKAGE System::UnicodeString __fastcall StrEnsureSuffix(const System::UnicodeString Suffix, const System::UnicodeString Text);
extern DELPHI_PACKAGE System::UnicodeString __fastcall StrEscapedToString(const System::UnicodeString S);
extern DELPHI_PACKAGE System::UnicodeString __fastcall StrLower(const System::UnicodeString S);
extern DELPHI_PACKAGE void __fastcall StrLowerInPlace(System::UnicodeString &S);
extern DELPHI_PACKAGE void __fastcall StrLowerBuff(System::WideChar * S);
extern DELPHI_PACKAGE void __fastcall StrMove(System::UnicodeString &Dest, const System::UnicodeString Source, const int ToIndex, const int FromIndex, const int Count);
extern DELPHI_PACKAGE System::UnicodeString __fastcall StrPadLeft(const System::UnicodeString S, int Len, System::WideChar C = (System::WideChar)(0x20));
extern DELPHI_PACKAGE System::UnicodeString __fastcall StrPadRight(const System::UnicodeString S, int Len, System::WideChar C = (System::WideChar)(0x20));
extern DELPHI_PACKAGE System::UnicodeString __fastcall StrProper(const System::UnicodeString S);
extern DELPHI_PACKAGE void __fastcall StrProperBuff(System::WideChar * S);
extern DELPHI_PACKAGE System::UnicodeString __fastcall StrQuote(const System::UnicodeString S, System::WideChar C);
extern DELPHI_PACKAGE System::UnicodeString __fastcall StrRemoveChars(const System::UnicodeString S, const TCharValidator Chars)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall StrRemoveChars(const System::UnicodeString S, System::WideChar const *Chars, const int Chars_High)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall StrRemoveLeadingChars(const System::UnicodeString S, const TCharValidator Chars)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall StrRemoveLeadingChars(const System::UnicodeString S, System::WideChar const *Chars, const int Chars_High)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall StrRemoveEndChars(const System::UnicodeString S, const TCharValidator Chars)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall StrRemoveEndChars(const System::UnicodeString S, System::WideChar const *Chars, const int Chars_High)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall StrKeepChars(const System::UnicodeString S, const TCharValidator Chars)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall StrKeepChars(const System::UnicodeString S, System::WideChar const *Chars, const int Chars_High)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall StrRepeat(const System::UnicodeString S, int Count);
extern DELPHI_PACKAGE System::UnicodeString __fastcall StrRepeatLength(const System::UnicodeString S, int L);
extern DELPHI_PACKAGE void __fastcall StrReplace(System::UnicodeString &S, const System::UnicodeString Search, const System::UnicodeString Replace, System::Sysutils::TReplaceFlags Flags = System::Sysutils::TReplaceFlags() );
extern DELPHI_PACKAGE System::UnicodeString __fastcall StrReplaceChar(const System::UnicodeString S, const System::WideChar Source, const System::WideChar Replace);
extern DELPHI_PACKAGE System::UnicodeString __fastcall StrReplaceChars(const System::UnicodeString S, const TCharValidator Chars, System::WideChar Replace)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall StrReplaceChars(const System::UnicodeString S, System::WideChar const *Chars, const int Chars_High, System::WideChar Replace)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall StrReplaceButChars(const System::UnicodeString S, const TCharValidator Chars, System::WideChar Replace)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall StrReplaceButChars(const System::UnicodeString S, System::WideChar const *Chars, const int Chars_High, System::WideChar Replace)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall StrReverse(const System::UnicodeString S);
extern DELPHI_PACKAGE void __fastcall StrReverseInPlace(System::UnicodeString &S);
extern DELPHI_PACKAGE System::UnicodeString __fastcall StrSingleQuote(const System::UnicodeString S);
extern DELPHI_PACKAGE void __fastcall StrSkipChars(System::WideChar * &S, const TCharValidator Chars)/* overload */;
extern DELPHI_PACKAGE void __fastcall StrSkipChars(System::WideChar * &S, System::WideChar const *Chars, const int Chars_High)/* overload */;
extern DELPHI_PACKAGE void __fastcall StrSkipChars(const System::UnicodeString S, int &Index, const TCharValidator Chars)/* overload */;
extern DELPHI_PACKAGE void __fastcall StrSkipChars(const System::UnicodeString S, int &Index, System::WideChar const *Chars, const int Chars_High)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall StrSmartCase(const System::UnicodeString S, const TCharValidator Delimiters)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall StrSmartCase(const System::UnicodeString S, System::WideChar const *Delimiters, const int Delimiters_High)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall StrStringToEscaped(const System::UnicodeString S);
extern DELPHI_PACKAGE System::UnicodeString __fastcall StrToHex(const System::UnicodeString Source);
extern DELPHI_PACKAGE System::UnicodeString __fastcall StrTrimCharLeft(const System::UnicodeString S, System::WideChar C);
extern DELPHI_PACKAGE System::UnicodeString __fastcall StrTrimCharsLeft(const System::UnicodeString S, const TCharValidator Chars)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall StrTrimCharsLeft(const System::UnicodeString S, System::WideChar const *Chars, const int Chars_High)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall StrTrimCharRight(const System::UnicodeString S, System::WideChar C);
extern DELPHI_PACKAGE System::UnicodeString __fastcall StrTrimCharsRight(const System::UnicodeString S, const TCharValidator Chars)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall StrTrimCharsRight(const System::UnicodeString S, System::WideChar const *Chars, const int Chars_High)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall StrTrimQuotes(const System::UnicodeString S);
extern DELPHI_PACKAGE System::UnicodeString __fastcall StrUpper(const System::UnicodeString S);
extern DELPHI_PACKAGE void __fastcall StrUpperInPlace(System::UnicodeString &S);
extern DELPHI_PACKAGE void __fastcall StrUpperBuff(System::WideChar * S);
extern DELPHI_PACKAGE void __fastcall StrAddRef(System::UnicodeString &S);
extern DELPHI_PACKAGE void __fastcall StrDecRef(System::UnicodeString &S);
extern DELPHI_PACKAGE int __fastcall StrLength(const System::UnicodeString S);
extern DELPHI_PACKAGE int __fastcall StrRefCount(const System::UnicodeString S);
extern DELPHI_PACKAGE void __fastcall StrResetLength(System::WideString &S)/* overload */;
extern DELPHI_PACKAGE void __fastcall StrResetLength(System::AnsiString &S)/* overload */;
extern DELPHI_PACKAGE void __fastcall StrResetLength(TJclStringBuilder* S)/* overload */;
extern DELPHI_PACKAGE void __fastcall StrResetLength(System::UnicodeString &S)/* overload */;
extern DELPHI_PACKAGE int __fastcall StrCharCount(const System::UnicodeString S, System::WideChar C)/* overload */;
extern DELPHI_PACKAGE int __fastcall StrCharsCount(const System::UnicodeString S, const TCharValidator Chars)/* overload */;
extern DELPHI_PACKAGE int __fastcall StrCharsCount(const System::UnicodeString S, System::WideChar const *Chars, const int Chars_High)/* overload */;
extern DELPHI_PACKAGE int __fastcall StrStrCount(const System::UnicodeString S, const System::UnicodeString SubS);
extern DELPHI_PACKAGE int __fastcall StrCompareRangeEx(const System::UnicodeString S1, const System::UnicodeString S2, int Index, int Count, bool CaseSensitive);
extern DELPHI_PACKAGE int __fastcall StrCompare(const System::UnicodeString S1, const System::UnicodeString S2, bool CaseSensitive = false);
extern DELPHI_PACKAGE int __fastcall StrCompareRange(const System::UnicodeString S1, const System::UnicodeString S2, int Index, int Count, bool CaseSensitive = true);
extern DELPHI_PACKAGE void __fastcall StrFillChar(void *S, int Count, System::WideChar C);
extern DELPHI_PACKAGE System::UnicodeString __fastcall StrRepeatChar(System::WideChar C, int Count);
extern DELPHI_PACKAGE int __fastcall StrFind(const System::UnicodeString Substr, const System::UnicodeString S, const int Index = 0x1);
extern DELPHI_PACKAGE bool __fastcall StrHasPrefix(const System::UnicodeString S, System::UnicodeString const *Prefixes, const int Prefixes_High);
extern DELPHI_PACKAGE bool __fastcall StrHasSuffix(const System::UnicodeString S, System::UnicodeString const *Suffixes, const int Suffixes_High);
extern DELPHI_PACKAGE int __fastcall StrIndex(const System::UnicodeString S, System::UnicodeString const *List, const int List_High, bool CaseSensitive = false);
extern DELPHI_PACKAGE bool __fastcall StrIHasPrefix(const System::UnicodeString S, System::UnicodeString const *Prefixes, const int Prefixes_High);
extern DELPHI_PACKAGE bool __fastcall StrIHasSuffix(const System::UnicodeString S, System::UnicodeString const *Suffixes, const int Suffixes_High);
extern DELPHI_PACKAGE int __fastcall StrILastPos(const System::UnicodeString SubStr, const System::UnicodeString S);
extern DELPHI_PACKAGE int __fastcall StrIPos(const System::UnicodeString SubStr, const System::UnicodeString S);
extern DELPHI_PACKAGE int __fastcall StrIPrefixIndex(const System::UnicodeString S, System::UnicodeString const *Prefixes, const int Prefixes_High);
extern DELPHI_PACKAGE bool __fastcall StrIsOneOf(const System::UnicodeString S, System::UnicodeString const *List, const int List_High);
extern DELPHI_PACKAGE int __fastcall StrISuffixIndex(const System::UnicodeString S, System::UnicodeString const *Suffixes, const int Suffixes_High);
extern DELPHI_PACKAGE int __fastcall StrLastPos(const System::UnicodeString SubStr, const System::UnicodeString S);
extern DELPHI_PACKAGE int __fastcall StrMatch(const System::UnicodeString Substr, const System::UnicodeString S, int Index = 0x1);
extern DELPHI_PACKAGE bool __fastcall StrMatches(const System::UnicodeString Substr, const System::UnicodeString S, const int Index = 0x1);
extern DELPHI_PACKAGE int __fastcall StrNPos(const System::UnicodeString S, const System::UnicodeString SubStr, int N);
extern DELPHI_PACKAGE int __fastcall StrNIPos(const System::UnicodeString S, const System::UnicodeString SubStr, int N);
extern DELPHI_PACKAGE int __fastcall StrPrefixIndex(const System::UnicodeString S, System::UnicodeString const *Prefixes, const int Prefixes_High);
extern DELPHI_PACKAGE int __fastcall StrSearch(const System::UnicodeString Substr, const System::UnicodeString S, const int Index = 0x1);
extern DELPHI_PACKAGE int __fastcall StrSuffixIndex(const System::UnicodeString S, System::UnicodeString const *Suffixes, const int Suffixes_High);
extern DELPHI_PACKAGE System::UnicodeString __fastcall StrAfter(const System::UnicodeString SubStr, const System::UnicodeString S);
extern DELPHI_PACKAGE System::UnicodeString __fastcall StrBefore(const System::UnicodeString SubStr, const System::UnicodeString S);
extern DELPHI_PACKAGE bool __fastcall StrSplit(const System::UnicodeString SubStr, const System::UnicodeString S, System::UnicodeString &Left, System::UnicodeString &Right);
extern DELPHI_PACKAGE System::UnicodeString __fastcall StrBetween(const System::UnicodeString S, const System::WideChar Start, const System::WideChar Stop);
extern DELPHI_PACKAGE System::UnicodeString __fastcall StrChopRight(const System::UnicodeString S, int N);
extern DELPHI_PACKAGE System::UnicodeString __fastcall StrLeft(const System::UnicodeString S, int Count);
extern DELPHI_PACKAGE System::UnicodeString __fastcall StrMid(const System::UnicodeString S, int Start, int Count);
extern DELPHI_PACKAGE System::UnicodeString __fastcall StrRestOf(const System::UnicodeString S, int N);
extern DELPHI_PACKAGE System::UnicodeString __fastcall StrRight(const System::UnicodeString S, int Count);
extern DELPHI_PACKAGE bool __fastcall CharEqualNoCase(const System::WideChar C1, const System::WideChar C2);
extern DELPHI_PACKAGE bool __fastcall CharIsAlpha(const System::WideChar C);
extern DELPHI_PACKAGE bool __fastcall CharIsAlphaNum(const System::WideChar C);
extern DELPHI_PACKAGE bool __fastcall CharIsBlank(const System::WideChar C);
extern DELPHI_PACKAGE bool __fastcall CharIsControl(const System::WideChar C);
extern DELPHI_PACKAGE bool __fastcall CharIsDelete(const System::WideChar C);
extern DELPHI_PACKAGE bool __fastcall CharIsDigit(const System::WideChar C);
extern DELPHI_PACKAGE bool __fastcall CharIsFracDigit(const System::WideChar C);
extern DELPHI_PACKAGE bool __fastcall CharIsHexDigit(const System::WideChar C);
extern DELPHI_PACKAGE bool __fastcall CharIsLower(const System::WideChar C);
extern DELPHI_PACKAGE bool __fastcall CharIsPrintable(const System::WideChar C);
extern DELPHI_PACKAGE bool __fastcall CharIsPunctuation(const System::WideChar C);
extern DELPHI_PACKAGE bool __fastcall CharIsReturn(const System::WideChar C);
extern DELPHI_PACKAGE bool __fastcall CharIsSpace(const System::WideChar C);
extern DELPHI_PACKAGE bool __fastcall CharIsUpper(const System::WideChar C);
extern DELPHI_PACKAGE bool __fastcall CharIsValidIdentifierLetter(const System::WideChar C);
extern DELPHI_PACKAGE bool __fastcall CharIsWhiteSpace(const System::WideChar C);
extern DELPHI_PACKAGE bool __fastcall CharIsWildcard(const System::WideChar C);
extern DELPHI_PACKAGE System::Word __fastcall CharType(const System::WideChar C);
extern DELPHI_PACKAGE PCharVector __fastcall StringsToPCharVector(PCharVector &Dest, System::Classes::TStrings* const Source);
extern DELPHI_PACKAGE int __fastcall PCharVectorCount(PCharVector Source);
extern DELPHI_PACKAGE void __fastcall PCharVectorToStrings(System::Classes::TStrings* const Dest, PCharVector Source);
extern DELPHI_PACKAGE void __fastcall FreePCharVector(PCharVector &Dest);
extern DELPHI_PACKAGE System::Byte __fastcall CharHex(const System::WideChar C);
extern DELPHI_PACKAGE System::WideChar __fastcall CharLower(const System::WideChar C);
extern DELPHI_PACKAGE System::WideChar __fastcall CharToggleCase(const System::WideChar C);
extern DELPHI_PACKAGE System::WideChar __fastcall CharUpper(const System::WideChar C);
extern DELPHI_PACKAGE int __fastcall CharLastPos(const System::UnicodeString S, const System::WideChar C, const int Index = 0x1);
extern DELPHI_PACKAGE int __fastcall CharPos(const System::UnicodeString S, const System::WideChar C, const int Index = 0x1);
extern DELPHI_PACKAGE int __fastcall CharIPos(const System::UnicodeString S, System::WideChar C, const int Index = 0x1);
extern DELPHI_PACKAGE int __fastcall CharReplace(System::UnicodeString &S, const System::WideChar Search, const System::WideChar Replace);
extern DELPHI_PACKAGE void __fastcall StrToStrings(System::UnicodeString S, System::UnicodeString Sep, System::Classes::TStrings* const List, const bool AllowEmptyString = true);
extern DELPHI_PACKAGE void __fastcall StrIToStrings(System::UnicodeString S, System::UnicodeString Sep, System::Classes::TStrings* const List, const bool AllowEmptyString = true);
extern DELPHI_PACKAGE System::UnicodeString __fastcall StringsToStr(System::Classes::TStrings* const List, const System::UnicodeString Sep, const bool AllowEmptyString = true)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall StringsToStr(System::Classes::TStrings* const List, const System::UnicodeString Sep, const int NumberOfItems, const bool AllowEmptyString = true)/* overload */;
extern DELPHI_PACKAGE void __fastcall TrimStrings(System::Classes::TStrings* const List, bool DeleteIfEmpty = true);
extern DELPHI_PACKAGE void __fastcall TrimStringsRight(System::Classes::TStrings* const List, bool DeleteIfEmpty = true);
extern DELPHI_PACKAGE void __fastcall TrimStringsLeft(System::Classes::TStrings* const List, bool DeleteIfEmpty = true);
extern DELPHI_PACKAGE bool __fastcall AddStringToStrings(const System::UnicodeString S, System::Classes::TStrings* Strings, const bool Unique);
extern DELPHI_PACKAGE System::RawByteString __fastcall FileToString(const System::UnicodeString FileName);
extern DELPHI_PACKAGE void __fastcall StringToFile(const System::UnicodeString FileName, const System::RawByteString Contents, bool Append = false);
extern DELPHI_PACKAGE System::UnicodeString __fastcall StrToken(System::UnicodeString &S, System::WideChar Separator);
extern DELPHI_PACKAGE void __fastcall StrTokens(const System::UnicodeString S, System::Classes::TStrings* const List);
extern DELPHI_PACKAGE bool __fastcall StrWord(const System::UnicodeString S, int &Index, /* out */ System::UnicodeString &Word)/* overload */;
extern DELPHI_PACKAGE bool __fastcall StrWord(System::WideChar * &S, /* out */ System::UnicodeString &Word)/* overload */;
extern DELPHI_PACKAGE bool __fastcall StrIdent(const System::UnicodeString S, int &Index, /* out */ System::UnicodeString &Ident)/* overload */;
extern DELPHI_PACKAGE bool __fastcall StrIdent(System::WideChar * &S, /* out */ System::UnicodeString &Ident)/* overload */;
extern DELPHI_PACKAGE void __fastcall StrTokenToStrings(System::UnicodeString S, System::WideChar Separator, System::Classes::TStrings* const List);
extern DELPHI_PACKAGE void __fastcall StrNormIndex(const int StrLen, int &Index, int &Count)/* overload */;
extern DELPHI_PACKAGE Jclbase::TDynStringArray __fastcall ArrayOf(System::Classes::TStrings* List)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall DotNetFormat(const System::UnicodeString Fmt, const System::Variant &Arg0)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall DotNetFormat(const System::UnicodeString Fmt, const System::Variant &Arg0, const System::Variant &Arg1)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall DotNetFormat(const System::UnicodeString Fmt, const System::Variant &Arg0, const System::Variant &Arg1, const System::Variant &Arg2)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall DotNetFormat(const System::UnicodeString Fmt, System::TVarRec const *Args, const int Args_High)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall StrExpandTabs(System::UnicodeString S)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall StrExpandTabs(System::UnicodeString S, int TabWidth)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall StrExpandTabs(System::UnicodeString S, TJclTabSet* TabSet)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall StrOptimizeTabs(System::UnicodeString S)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall StrOptimizeTabs(System::UnicodeString S, int TabWidth)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall StrOptimizeTabs(System::UnicodeString S, TJclTabSet* TabSet)/* overload */;
}	/* namespace Jclstrings */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_JCLSTRINGS)
using namespace Jclstrings;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// JclstringsHPP
