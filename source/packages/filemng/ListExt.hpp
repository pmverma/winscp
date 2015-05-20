// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'ListExt.pas' rev: 27.00 (Windows)

#ifndef ListextHPP
#define ListextHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.Classes.hpp>	// Pascal unit
#include <System.SysUtils.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Listext
{
//-- type declarations -------------------------------------------------------
typedef int IntType;

typedef void __fastcall (__closure *TLxDeleteEvent)(System::TObject* Sender, void * &P, int Size);

class DELPHICLASS TListExt;
class PASCALIMPLEMENTATION TListExt : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	typedef System::DynamicArray<void *> _TListExt__1;
	
	
public:
	void * operator[](int i) { return data[i]; }
	
private:
	int FCount;
	_TListExt__1 FData;
	bool FSorted;
	TLxDeleteEvent fOnDelete;
	int FItemSize;
	int MaxCount;
	void * __fastcall GetItem(int I);
	void __fastcall FreeItem(int I);
	
public:
	__property void * data[int i] = {read=GetItem/*, default*/};
	__property bool Sorted = {read=FSorted, nodefault};
	__property int Count = {read=FCount, nodefault};
	__property int ItemSize = {read=FItemSize, nodefault};
	__fastcall TListExt(int ItemSize);
	HIDESBASE void __fastcall Free(void);
	void __fastcall Clear(void);
	void __fastcall Add(void * P);
	int __fastcall IndexOf(void * P);
	void __fastcall Sort(System::Classes::TListSortCompare Compare);
	int __fastcall Find(void * P, System::Classes::TListSortCompare Compare);
	int __fastcall FindSequential(void * P, System::Classes::TListSortCompare Compare);
	void * __fastcall First(void);
	void * __fastcall Last(void);
	void __fastcall Delete(int I);
	
__published:
	__property TLxDeleteEvent OnDelete = {read=fOnDelete, write=fOnDelete};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TListExt(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------
static const System::Word InitSize = System::Word(0x1f4);
static const System::Word ExtendSize = System::Word(0x1f4);
static const System::Int8 FLess = System::Int8(-1);
static const System::Int8 FEqual = System::Int8(0x0);
static const System::Int8 FGreater = System::Int8(0x1);
}	/* namespace Listext */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_LISTEXT)
using namespace Listext;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// ListextHPP
