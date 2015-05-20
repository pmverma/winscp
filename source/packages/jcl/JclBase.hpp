// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'JclBase.pas' rev: 27.00 (Windows)

#ifndef JclbaseHPP
#define JclbaseHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Winapi.Windows.hpp>	// Pascal unit
#include <System.SysUtils.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Jclbase
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS EJclError;
#pragma pack(push,4)
class PASCALIMPLEMENTATION EJclError : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EJclError(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EJclError(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EJclError(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EJclError(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EJclError(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EJclError(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EJclError(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EJclError(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EJclError(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EJclError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EJclError(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EJclError(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EJclError(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS EJclInternalError;
#pragma pack(push,4)
class PASCALIMPLEMENTATION EJclInternalError : public EJclError
{
	typedef EJclError inherited;
	
public:
	/* Exception.Create */ inline __fastcall EJclInternalError(const System::UnicodeString Msg) : EJclError(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EJclInternalError(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : EJclError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EJclInternalError(NativeUInt Ident)/* overload */ : EJclError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EJclInternalError(System::PResStringRec ResStringRec)/* overload */ : EJclError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EJclInternalError(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : EJclError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EJclInternalError(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : EJclError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EJclInternalError(const System::UnicodeString Msg, int AHelpContext) : EJclError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EJclInternalError(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : EJclError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EJclInternalError(NativeUInt Ident, int AHelpContext)/* overload */ : EJclError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EJclInternalError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EJclError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EJclInternalError(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : EJclError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EJclInternalError(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : EJclError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EJclInternalError(void) { }
	
};

#pragma pack(pop)

typedef System::Extended Float;

typedef System::Extended *PFloat;

typedef int SizeInt;

typedef int *PSizeInt;

typedef void * *PPointer;

using System::PByte;

using System::Int8;

typedef short Int16;

typedef int Int32;

typedef System::Byte UInt8;

typedef System::Word UInt16;

typedef unsigned UInt32;

typedef unsigned *PCardinal;

typedef System::WideChar * PWideChar;

typedef System::WideChar * *PPWideChar;

typedef char * *PPAnsiChar;

typedef __int64 *PInt64;

typedef PInt64 *PPInt64;

typedef PPAnsiChar *PPPAnsiChar;

typedef __int64 *PLargeInteger;

typedef __int64 TLargeInteger;

typedef System::StaticArray<System::Byte, 2147483647> TJclByteArray;

typedef TJclByteArray *PJclByteArray;

typedef void * TJclBytes;

typedef ULARGE_INTEGER TJclULargeInteger;

typedef PULARGE_INTEGER PJclULargeInteger;

typedef System::DynamicArray<System::Byte> TDynByteArray;

typedef System::DynamicArray<System::Int8> TDynShortIntArray;

typedef System::DynamicArray<System::Word> TDynWordArray;

typedef System::DynamicArray<short> TDynSmallIntArray;

typedef System::DynamicArray<int> TDynLongIntArray;

typedef System::DynamicArray<__int64> TDynInt64Array;

typedef System::DynamicArray<unsigned> TDynCardinalArray;

typedef System::DynamicArray<int> TDynIntegerArray;

typedef System::DynamicArray<int> TDynSizeIntArray;

typedef System::DynamicArray<System::Extended> TDynExtendedArray;

typedef System::DynamicArray<double> TDynDoubleArray;

typedef System::DynamicArray<float> TDynSingleArray;

typedef System::DynamicArray<System::Extended> TDynFloatArray;

typedef System::DynamicArray<void *> TDynPointerArray;

typedef System::DynamicArray<System::UnicodeString> TDynStringArray;

typedef System::DynamicArray<System::AnsiString> TDynAnsiStringArray;

typedef System::DynamicArray<System::WideString> TDynWideStringArray;

typedef System::DynamicArray<System::UnicodeString> TDynUnicodeStringArray;

typedef System::DynamicArray<System::_di_IInterface> TDynIInterfaceArray;

typedef System::DynamicArray<System::TObject*> TDynObjectArray;

typedef System::DynamicArray<System::WideChar> TDynCharArray;

typedef System::DynamicArray<char> TDynAnsiCharArray;

typedef System::DynamicArray<System::WideChar> TDynWideCharArray;

typedef char *PUTF7;

typedef char UTF7;

typedef char *PUTF8;

typedef char UTF8;

typedef System::WideChar *PUTF16;

typedef System::WideChar UTF16;

typedef unsigned *PUTF32;

typedef unsigned UTF32;

typedef unsigned *PUCS4;

typedef unsigned UCS4;

typedef System::WideChar * PUCS2;

typedef System::WideChar UCS2;

typedef System::DynamicArray<System::WideChar> TUCS2Array;

typedef System::DynamicArray<unsigned> TUCS4Array;

typedef System::AnsiString TUTF8String;

typedef System::UnicodeString TUTF16String;

typedef System::UnicodeString TUCS2String;

typedef System::Set<char, _DELPHI_SET_CHAR(0), _DELPHI_SET_CHAR(255)> TSetOfAnsiChar;

typedef unsigned TJclAddr32;

typedef __int64 TJclAddr64;

typedef unsigned TJclAddr;

typedef unsigned *PJclAddr;

class DELPHICLASS EJclAddr64Exception;
#pragma pack(push,4)
class PASCALIMPLEMENTATION EJclAddr64Exception : public EJclError
{
	typedef EJclError inherited;
	
public:
	/* Exception.Create */ inline __fastcall EJclAddr64Exception(const System::UnicodeString Msg) : EJclError(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EJclAddr64Exception(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : EJclError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EJclAddr64Exception(NativeUInt Ident)/* overload */ : EJclError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EJclAddr64Exception(System::PResStringRec ResStringRec)/* overload */ : EJclError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EJclAddr64Exception(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : EJclError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EJclAddr64Exception(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : EJclError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EJclAddr64Exception(const System::UnicodeString Msg, int AHelpContext) : EJclError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EJclAddr64Exception(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : EJclError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EJclAddr64Exception(NativeUInt Ident, int AHelpContext)/* overload */ : EJclError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EJclAddr64Exception(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EJclError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EJclAddr64Exception(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : EJclError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EJclAddr64Exception(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : EJclError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EJclAddr64Exception(void) { }
	
};

#pragma pack(pop)


#define _decl_Jclbase_TCompare__1(T, _DECLNAME) int __fastcall (*_DECLNAME)(const T Obj1, const T Obj2)
// typedef template<typename T> int __fastcall (*TCompare__1)(const T Obj1, const T Obj2);


#define _decl_Jclbase_TEqualityCompare__1(T, _DECLNAME) bool __fastcall (*_DECLNAME)(const T Obj1, const T Obj2)
// typedef template<typename T> bool __fastcall (*TEqualityCompare__1)(const T Obj1, const T Obj2);


#define _decl_Jclbase_THashConvert__1(T, _DECLNAME) int __fastcall (*_DECLNAME)(const T AItem)
// typedef template<typename T> int __fastcall (*THashConvert__1)(const T AItem);

template<typename T> __interface IEqualityComparer__1;
// template<typename T> typedef System::DelphiInterface<IEqualityComparer__1<T> > _di_IEqualityComparer__1;
// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T> __interface IEqualityComparer__1  : public System::IInterface 
{
	
public:
	virtual bool __fastcall Equals(T A, T B) = 0 ;
	virtual int __fastcall GetHashCode(T Obj) = 0 ;
};

template<typename T> class DELPHICLASS TEquatable__1;
#pragma pack(push,4)
// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T> class PASCALIMPLEMENTATION TEquatable__1 : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
public:
	bool __fastcall TestEquals(T Other)/* overload */;
	bool __fastcall TestEquals(T A, T B)/* overload */;
	int __fastcall GetHashCode2(T Obj);
public:
	/* TObject.Create */ inline __fastcall TEquatable__1(void) : System::TInterfacedObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TEquatable__1(void) { }
	
private:
	void *__IEqualityComparer__1;	// IEqualityComparer__1<T> 
	void *__IEquatable__1;	// System::IEquatable__1<T> 
	
public:
	operator IEqualityComparer__1<T>*(void) { return (IEqualityComparer__1<T>*)&__IEqualityComparer__1; }
	operator System::IEquatable__1<T>*(void) { return (System::IEquatable__1<T>*)&__IEquatable__1; }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
static const System::Int8 JclVersionMajor = System::Int8(0x2);
static const System::Int8 JclVersionMinor = System::Int8(0x6);
static const System::Int8 JclVersionRelease = System::Int8(0x0);
static const System::Word JclVersionBuild = System::Word(0x143a);
static const int JclVersion = int(0x206143a);
static const System::WideChar NativeLineFeed = (System::WideChar)(0xa);
static const System::WideChar NativeCarriageReturn = (System::WideChar)(0xd);
#define NativeCrLf L"\r\n"
#define NativeLineBreak L"\r\n"
#define HexPrefixPascal L"$"
#define HexPrefixC L"0x"
#define HexDigitFmt32 L"%.8x"
#define HexDigitFmt64 L"%.16x"
#define HexPrefix L"0x"
#define HexDigitFmt L"%.8x"
#define HexFmt L"0x%.8x"
extern DELPHI_PACKAGE System::StaticArray<System::Byte, 2> BOM_UTF16_LSB;
extern DELPHI_PACKAGE System::StaticArray<System::Byte, 2> BOM_UTF16_MSB;
extern DELPHI_PACKAGE System::StaticArray<System::Byte, 3> BOM_UTF8;
extern DELPHI_PACKAGE System::StaticArray<System::Byte, 4> BOM_UTF32_LSB;
extern DELPHI_PACKAGE System::StaticArray<System::Byte, 4> BOM_UTF32_MSB;
extern DELPHI_PACKAGE char AnsiReplacementCharacter;
extern DELPHI_PACKAGE unsigned UCS4ReplacementCharacter;
extern DELPHI_PACKAGE unsigned MaximumUCS2;
extern DELPHI_PACKAGE unsigned MaximumUTF16;
extern DELPHI_PACKAGE unsigned MaximumUCS4;
static const unsigned SurrogateHighStart = unsigned(0xd800);
static const unsigned SurrogateHighEnd = unsigned(0xdbff);
static const unsigned SurrogateLowStart = unsigned(0xdc00);
static const unsigned SurrogateLowEnd = unsigned(0xdfff);
static const System::WideChar AWSuffix = (System::WideChar)(0x57);
extern DELPHI_PACKAGE void __fastcall MoveChar(const System::UnicodeString Source, int FromIndex, System::UnicodeString &Dest, int ToIndex, int Count)/* overload */;
extern DELPHI_PACKAGE int __fastcall AnsiByteArrayStringLen(System::DynamicArray<System::Byte> Data);
extern DELPHI_PACKAGE System::DynamicArray<System::Byte> __fastcall StringToAnsiByteArray(const System::UnicodeString S);
extern DELPHI_PACKAGE System::UnicodeString __fastcall AnsiByteArrayToString(const System::DynamicArray<System::Byte> Data, int Count);
extern DELPHI_PACKAGE System::DynamicArray<System::Byte> __fastcall BytesOf(const System::AnsiString Value)/* overload */;
extern DELPHI_PACKAGE System::DynamicArray<System::Byte> __fastcall BytesOf(const System::WideString Value)/* overload */;
extern DELPHI_PACKAGE System::DynamicArray<System::Byte> __fastcall BytesOf(const System::WideChar Value)/* overload */;
extern DELPHI_PACKAGE System::DynamicArray<System::Byte> __fastcall BytesOf(const char Value)/* overload */;
extern DELPHI_PACKAGE System::AnsiString __fastcall StringOf(System::Byte const *Bytes, const int Bytes_High)/* overload */;
extern DELPHI_PACKAGE System::AnsiString __fastcall StringOf(const void * Bytes, unsigned Size)/* overload */;
extern DELPHI_PACKAGE void __fastcall I64ToCardinals(__int64 I, /* out */ unsigned &LowPart, /* out */ unsigned &HighPart);
extern DELPHI_PACKAGE void __fastcall CardinalsToI64(/* out */ __int64 &I, const unsigned LowPart, const unsigned HighPart);
extern DELPHI_PACKAGE unsigned __fastcall Addr64ToAddr32(const __int64 Value);
extern DELPHI_PACKAGE __int64 __fastcall Addr32ToAddr64(const unsigned Value);
}	/* namespace Jclbase */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_JCLBASE)
using namespace Jclbase;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// JclbaseHPP
