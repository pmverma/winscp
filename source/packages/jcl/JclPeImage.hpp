// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'JclPeImage.pas' rev: 27.00 (Windows)

#ifndef JclpeimageHPP
#define JclpeimageHPP

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
#include <System.TypInfo.hpp>	// Pascal unit
#include <System.Contnrs.hpp>	// Pascal unit
#include <JclBase.hpp>	// Pascal unit
#include <JclFileUtils.hpp>	// Pascal unit
#include <JclWin32.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Jclpeimage
{
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TJclSmartCompOption : unsigned char { scSimpleCompare, scIgnoreCase };

typedef System::Set<TJclSmartCompOption, TJclSmartCompOption::scSimpleCompare, TJclSmartCompOption::scIgnoreCase> TJclSmartCompOptions;

class DELPHICLASS EJclPeImageError;
#pragma pack(push,4)
class PASCALIMPLEMENTATION EJclPeImageError : public Jclbase::EJclError
{
	typedef Jclbase::EJclError inherited;
	
public:
	/* Exception.Create */ inline __fastcall EJclPeImageError(const System::UnicodeString Msg) : Jclbase::EJclError(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EJclPeImageError(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : Jclbase::EJclError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EJclPeImageError(NativeUInt Ident)/* overload */ : Jclbase::EJclError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EJclPeImageError(System::PResStringRec ResStringRec)/* overload */ : Jclbase::EJclError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EJclPeImageError(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : Jclbase::EJclError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EJclPeImageError(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : Jclbase::EJclError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EJclPeImageError(const System::UnicodeString Msg, int AHelpContext) : Jclbase::EJclError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EJclPeImageError(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : Jclbase::EJclError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EJclPeImageError(NativeUInt Ident, int AHelpContext)/* overload */ : Jclbase::EJclError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EJclPeImageError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : Jclbase::EJclError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EJclPeImageError(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : Jclbase::EJclError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EJclPeImageError(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : Jclbase::EJclError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EJclPeImageError(void) { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TJclPeImageClass;

class DELPHICLASS TJclPeImageBaseList;
class DELPHICLASS TJclPeImage;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TJclPeImageBaseList : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
private:
	TJclPeImage* FImage;
	
public:
	__fastcall TJclPeImageBaseList(TJclPeImage* AImage);
	__property TJclPeImage* Image = {read=FImage};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TJclPeImageBaseList(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS TJclPeImagesCache;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TJclPeImagesCache : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	TJclPeImage* operator[](const System::Sysutils::TFileName FileName) { return Images[FileName]; }
	
private:
	System::Classes::TStringList* FList;
	int __fastcall GetCount(void);
	TJclPeImage* __fastcall GetImages(const System::Sysutils::TFileName FileName);
	
protected:
	virtual TJclPeImageClass __fastcall GetPeImageClass(void);
	
public:
	__fastcall TJclPeImagesCache(void);
	__fastcall virtual ~TJclPeImagesCache(void);
	void __fastcall Clear(void);
	__property TJclPeImage* Images[const System::Sysutils::TFileName FileName] = {read=GetImages/*, default*/};
	__property int Count = {read=GetCount, nodefault};
};

#pragma pack(pop)

enum DECLSPEC_DENUM TJclPeImportSort : unsigned char { isName, isOrdinal, isHint, isLibImport };

enum DECLSPEC_DENUM TJclPeImportLibSort : unsigned char { ilName, ilIndex };

enum DECLSPEC_DENUM TJclPeImportKind : unsigned char { ikImport, ikDelayImport, ikBoundImport };

enum DECLSPEC_DENUM TJclPeResolveCheck : unsigned char { icNotChecked, icResolved, icUnresolved };

enum DECLSPEC_DENUM TJclPeLinkerProducer : unsigned char { lrBorland, lrMicrosoft };

class DELPHICLASS TJclPeImportFuncItem;
class DELPHICLASS TJclPeImportLibItem;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TJclPeImportFuncItem : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::Word FOrdinal;
	System::Word FHint;
	TJclPeImportLibItem* FImportLib;
	bool FIndirectImportName;
	System::UnicodeString FName;
	TJclPeResolveCheck FResolveCheck;
	bool __fastcall GetIsByOrdinal(void);
	
protected:
	void __fastcall SetName(const System::UnicodeString Value);
	void __fastcall SetIndirectImportName(const System::UnicodeString Value);
	void __fastcall SetResolveCheck(TJclPeResolveCheck Value);
	
public:
	__fastcall TJclPeImportFuncItem(TJclPeImportLibItem* AImportLib, System::Word AOrdinal, System::Word AHint, const System::UnicodeString AName);
	__property System::Word Ordinal = {read=FOrdinal, nodefault};
	__property System::Word Hint = {read=FHint, nodefault};
	__property TJclPeImportLibItem* ImportLib = {read=FImportLib};
	__property bool IndirectImportName = {read=FIndirectImportName, nodefault};
	__property bool IsByOrdinal = {read=GetIsByOrdinal, nodefault};
	__property System::UnicodeString Name = {read=FName};
	__property TJclPeResolveCheck ResolveCheck = {read=FResolveCheck, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TJclPeImportFuncItem(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJclPeImportLibItem : public TJclPeImageBaseList
{
	typedef TJclPeImageBaseList inherited;
	
public:
	TJclPeImportFuncItem* operator[](int Index) { return Items[Index]; }
	
private:
	void *FImportDescriptor;
	int FImportDirectoryIndex;
	TJclPeImportKind FImportKind;
	TJclPeImportSort FLastSortType;
	bool FLastSortDescending;
	System::UnicodeString FName;
	bool FSorted;
	TJclPeResolveCheck FTotalResolveCheck;
	void *FThunk;
	void *FThunkData;
	int __fastcall GetCount(void);
	System::Sysutils::TFileName __fastcall GetFileName(void);
	TJclPeImportFuncItem* __fastcall GetItems(int Index);
	System::UnicodeString __fastcall GetName(void);
	PIMAGE_THUNK_DATA32 __fastcall GetThunkData32(void);
	PIMAGE_THUNK_DATA64 __fastcall GetThunkData64(void);
	
protected:
	void __fastcall CheckImports(TJclPeImage* ExportImage);
	void __fastcall CreateList(void);
	void __fastcall SetImportDirectoryIndex(int Value);
	void __fastcall SetImportKind(TJclPeImportKind Value);
	void __fastcall SetSorted(bool Value);
	void __fastcall SetThunk(void * Value);
	
public:
	__fastcall TJclPeImportLibItem(TJclPeImage* AImage, void * AImportDescriptor, TJclPeImportKind AImportKind, const System::UnicodeString AName, void * AThunk);
	HIDESBASE void __fastcall SortList(TJclPeImportSort SortType, bool Descending = false);
	__property int Count = {read=GetCount, nodefault};
	__property System::Sysutils::TFileName FileName = {read=GetFileName};
	__property void * ImportDescriptor = {read=FImportDescriptor};
	__property int ImportDirectoryIndex = {read=FImportDirectoryIndex, nodefault};
	__property TJclPeImportKind ImportKind = {read=FImportKind, nodefault};
	__property TJclPeImportFuncItem* Items[int Index] = {read=GetItems/*, default*/};
	__property System::UnicodeString Name = {read=GetName};
	__property System::UnicodeString OriginalName = {read=FName};
	__property PIMAGE_THUNK_DATA32 ThunkData32 = {read=GetThunkData32};
	__property PIMAGE_THUNK_DATA64 ThunkData64 = {read=GetThunkData64};
	__property TJclPeResolveCheck TotalResolveCheck = {read=FTotalResolveCheck, nodefault};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TJclPeImportLibItem(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS TJclPeImportList;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TJclPeImportList : public TJclPeImageBaseList
{
	typedef TJclPeImageBaseList inherited;
	
private:
	typedef System::DynamicArray<void *> _TJclPeImportList__1;
	
	
public:
	TJclPeImportLibItem* operator[](int Index) { return Items[Index]; }
	
private:
	System::Classes::TList* FAllItemsList;
	System::UnicodeString FFilterModuleName;
	TJclPeImportSort FLastAllSortType;
	bool FLastAllSortDescending;
	TJclPeLinkerProducer FLinkerProducer;
	_TJclPeImportList__1 FParallelImportTable;
	System::Classes::TStringList* FUniqueNamesList;
	int __fastcall GetAllItemCount(void);
	TJclPeImportFuncItem* __fastcall GetAllItems(int Index);
	TJclPeImportLibItem* __fastcall GetItems(int Index);
	int __fastcall GetUniqueLibItemCount(void);
	TJclPeImportLibItem* __fastcall GetUniqueLibItems(int Index);
	System::UnicodeString __fastcall GetUniqueLibNames(int Index);
	TJclPeImportLibItem* __fastcall GetUniqueLibItemFromName(const System::UnicodeString Name);
	void __fastcall SetFilterModuleName(const System::UnicodeString Value);
	
protected:
	void __fastcall CreateList(void);
	void __fastcall RefreshAllItems(void);
	
public:
	__fastcall TJclPeImportList(TJclPeImage* AImage);
	__fastcall virtual ~TJclPeImportList(void);
	void __fastcall CheckImports(TJclPeImagesCache* PeImageCache = (TJclPeImagesCache*)(0x0));
	bool __fastcall MakeBorlandImportTableForMappedImage(void);
	TJclPeImportFuncItem* __fastcall SmartFindName(const System::UnicodeString CompareName, const System::UnicodeString LibName, TJclSmartCompOptions Options = TJclSmartCompOptions() );
	void __fastcall SortAllItemsList(TJclPeImportSort SortType, bool Descending = false);
	HIDESBASE void __fastcall SortList(TJclPeImportLibSort SortType);
	void __fastcall TryGetNamesForOrdinalImports(void);
	__property TJclPeImportFuncItem* AllItems[int Index] = {read=GetAllItems};
	__property int AllItemCount = {read=GetAllItemCount, nodefault};
	__property System::UnicodeString FilterModuleName = {read=FFilterModuleName, write=SetFilterModuleName};
	__property TJclPeImportLibItem* Items[int Index] = {read=GetItems/*, default*/};
	__property TJclPeLinkerProducer LinkerProducer = {read=FLinkerProducer, nodefault};
	__property int UniqueLibItemCount = {read=GetUniqueLibItemCount, nodefault};
	__property TJclPeImportLibItem* UniqueLibItemFromName[const System::UnicodeString Name] = {read=GetUniqueLibItemFromName};
	__property TJclPeImportLibItem* UniqueLibItems[int Index] = {read=GetUniqueLibItems};
	__property System::UnicodeString UniqueLibNames[int Index] = {read=GetUniqueLibNames};
};

#pragma pack(pop)

enum DECLSPEC_DENUM TJclPeExportSort : unsigned char { esName, esOrdinal, esHint, esAddress, esForwarded, esAddrOrFwd, esSection };

class DELPHICLASS TJclPeExportFuncItem;
class DELPHICLASS TJclPeExportFuncList;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TJclPeExportFuncItem : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	unsigned FAddress;
	TJclPeExportFuncList* FExportList;
	System::UnicodeString FForwardedName;
	System::UnicodeString FForwardedDotPos;
	System::Word FHint;
	System::UnicodeString FName;
	System::Word FOrdinal;
	TJclPeResolveCheck FResolveCheck;
	System::UnicodeString __fastcall GetAddressOrForwardStr(void);
	System::UnicodeString __fastcall GetForwardedFuncName(void);
	System::UnicodeString __fastcall GetForwardedLibName(void);
	unsigned __fastcall GetForwardedFuncOrdinal(void);
	bool __fastcall GetIsExportedVariable(void);
	bool __fastcall GetIsForwarded(void);
	System::UnicodeString __fastcall GetSectionName(void);
	void * __fastcall GetMappedAddress(void);
	
protected:
	void __fastcall SetResolveCheck(TJclPeResolveCheck Value);
	
public:
	__fastcall TJclPeExportFuncItem(TJclPeExportFuncList* AExportList, const System::UnicodeString AName, const System::UnicodeString AForwardedName, unsigned AAddress, System::Word AHint, System::Word AOrdinal, TJclPeResolveCheck AResolveCheck);
	__property unsigned Address = {read=FAddress, nodefault};
	__property System::UnicodeString AddressOrForwardStr = {read=GetAddressOrForwardStr};
	__property bool IsExportedVariable = {read=GetIsExportedVariable, nodefault};
	__property bool IsForwarded = {read=GetIsForwarded, nodefault};
	__property System::UnicodeString ForwardedName = {read=FForwardedName};
	__property System::UnicodeString ForwardedLibName = {read=GetForwardedLibName};
	__property unsigned ForwardedFuncOrdinal = {read=GetForwardedFuncOrdinal, nodefault};
	__property System::UnicodeString ForwardedFuncName = {read=GetForwardedFuncName};
	__property System::Word Hint = {read=FHint, nodefault};
	__property void * MappedAddress = {read=GetMappedAddress};
	__property System::UnicodeString Name = {read=FName};
	__property System::Word Ordinal = {read=FOrdinal, nodefault};
	__property TJclPeResolveCheck ResolveCheck = {read=FResolveCheck, nodefault};
	__property System::UnicodeString SectionName = {read=GetSectionName};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TJclPeExportFuncItem(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJclPeExportFuncList : public TJclPeImageBaseList
{
	typedef TJclPeImageBaseList inherited;
	
public:
	TJclPeExportFuncItem* operator[](int Index) { return Items[Index]; }
	
private:
	bool FAnyForwards;
	unsigned FBase;
	_IMAGE_EXPORT_DIRECTORY *FExportDir;
	System::Classes::TStringList* FForwardedLibsList;
	unsigned FFunctionCount;
	TJclPeExportSort FLastSortType;
	bool FLastSortDescending;
	bool FSorted;
	TJclPeResolveCheck FTotalResolveCheck;
	System::Classes::TStrings* __fastcall GetForwardedLibsList(void);
	TJclPeExportFuncItem* __fastcall GetItems(int Index);
	TJclPeExportFuncItem* __fastcall GetItemFromAddress(unsigned Address);
	TJclPeExportFuncItem* __fastcall GetItemFromOrdinal(unsigned Ordinal);
	TJclPeExportFuncItem* __fastcall GetItemFromName(const System::UnicodeString Name);
	System::UnicodeString __fastcall GetName(void);
	
protected:
	bool __fastcall CanPerformFastNameSearch(void);
	void __fastcall CreateList(void);
	__property TJclPeExportSort LastSortType = {read=FLastSortType, nodefault};
	__property bool LastSortDescending = {read=FLastSortDescending, nodefault};
	__property bool Sorted = {read=FSorted, nodefault};
	
public:
	__fastcall TJclPeExportFuncList(TJclPeImage* AImage);
	__fastcall virtual ~TJclPeExportFuncList(void);
	void __fastcall CheckForwards(TJclPeImagesCache* PeImageCache = (TJclPeImagesCache*)(0x0));
	__classmethod System::UnicodeString __fastcall ItemName(TJclPeExportFuncItem* Item);
	bool __fastcall OrdinalValid(unsigned Ordinal);
	void __fastcall PrepareForFastNameSearch(void);
	TJclPeExportFuncItem* __fastcall SmartFindName(const System::UnicodeString CompareName, TJclSmartCompOptions Options = TJclSmartCompOptions() );
	HIDESBASE void __fastcall SortList(TJclPeExportSort SortType, bool Descending = false);
	__property bool AnyForwards = {read=FAnyForwards, nodefault};
	__property unsigned Base = {read=FBase, nodefault};
	__property PIMAGE_EXPORT_DIRECTORY ExportDir = {read=FExportDir};
	__property System::Classes::TStrings* ForwardedLibsList = {read=GetForwardedLibsList};
	__property unsigned FunctionCount = {read=FFunctionCount, nodefault};
	__property TJclPeExportFuncItem* Items[int Index] = {read=GetItems/*, default*/};
	__property TJclPeExportFuncItem* ItemFromAddress[unsigned Address] = {read=GetItemFromAddress};
	__property TJclPeExportFuncItem* ItemFromName[const System::UnicodeString Name] = {read=GetItemFromName};
	__property TJclPeExportFuncItem* ItemFromOrdinal[unsigned Ordinal] = {read=GetItemFromOrdinal};
	__property System::UnicodeString Name = {read=GetName};
	__property TJclPeResolveCheck TotalResolveCheck = {read=FTotalResolveCheck, nodefault};
};

#pragma pack(pop)

enum DECLSPEC_DENUM TJclPeResourceKind : unsigned char { rtUnknown0, rtCursorEntry, rtBitmap, rtIconEntry, rtMenu, rtDialog, rtString, rtFontDir, rtFont, rtAccelerators, rtRCData, rtMessageTable, rtCursor, rtUnknown13, rtIcon, rtUnknown15, rtVersion, rtDlgInclude, rtUnknown18, rtPlugPlay, rtVxd, rtAniCursor, rtAniIcon, rtHmtl, rtManifest, rtUserDefined };

class DELPHICLASS TJclPeResourceRawStream;
class DELPHICLASS TJclPeResourceItem;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TJclPeResourceRawStream : public System::Classes::TCustomMemoryStream
{
	typedef System::Classes::TCustomMemoryStream inherited;
	
public:
	__fastcall TJclPeResourceRawStream(TJclPeResourceItem* AResourceItem);
	virtual int __fastcall Write(const void *Buffer, int Count)/* overload */;
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TJclPeResourceRawStream(void) { }
	
	/* Hoisted overloads: */
	
public:
	inline int __fastcall  Write(const System::DynamicArray<System::Byte> Buffer, int Offset, int Count){ return System::Classes::TStream::Write(Buffer, Offset, Count); }
	inline int __fastcall  Write(const System::DynamicArray<System::Byte> Buffer, int Count){ return System::Classes::TStream::Write(Buffer, Count); }
	
};

#pragma pack(pop)

class DELPHICLASS TJclPeResourceList;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TJclPeResourceItem : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	_IMAGE_RESOURCE_DIRECTORY_ENTRY *FEntry;
	TJclPeImage* FImage;
	TJclPeResourceList* FList;
	System::Byte FLevel;
	TJclPeResourceItem* FParentItem;
	System::UnicodeString FNameCache;
	PIMAGE_RESOURCE_DATA_ENTRY __fastcall GetDataEntry(void);
	bool __fastcall GetIsDirectory(void);
	bool __fastcall GetIsName(void);
	System::Word __fastcall GetLangID(void);
	TJclPeResourceList* __fastcall GetList(void);
	System::UnicodeString __fastcall GetName(void);
	System::UnicodeString __fastcall GetParameterName(void);
	void * __fastcall GetRawEntryData(void);
	int __fastcall GetRawEntryDataSize(void);
	TJclPeResourceKind __fastcall GetResourceType(void);
	System::UnicodeString __fastcall GetResourceTypeStr(void);
	
protected:
	unsigned __fastcall OffsetToRawData(unsigned Ofs);
	TJclPeResourceItem* __fastcall Level1Item(void);
	PIMAGE_RESOURCE_DIRECTORY __fastcall SubDirData(void);
	
public:
	__fastcall TJclPeResourceItem(TJclPeImage* AImage, TJclPeResourceItem* AParentItem, PIMAGE_RESOURCE_DIRECTORY_ENTRY AEntry);
	__fastcall virtual ~TJclPeResourceItem(void);
	bool __fastcall CompareName(System::WideChar * AName);
	__property PIMAGE_RESOURCE_DATA_ENTRY DataEntry = {read=GetDataEntry};
	__property PIMAGE_RESOURCE_DIRECTORY_ENTRY Entry = {read=FEntry};
	__property TJclPeImage* Image = {read=FImage};
	__property bool IsDirectory = {read=GetIsDirectory, nodefault};
	__property bool IsName = {read=GetIsName, nodefault};
	__property System::Word LangID = {read=GetLangID, nodefault};
	__property TJclPeResourceList* List = {read=GetList};
	__property System::Byte Level = {read=FLevel, nodefault};
	__property System::UnicodeString Name = {read=GetName};
	__property System::UnicodeString ParameterName = {read=GetParameterName};
	__property TJclPeResourceItem* ParentItem = {read=FParentItem};
	__property void * RawEntryData = {read=GetRawEntryData};
	__property int RawEntryDataSize = {read=GetRawEntryDataSize, nodefault};
	__property TJclPeResourceKind ResourceType = {read=GetResourceType, nodefault};
	__property System::UnicodeString ResourceTypeStr = {read=GetResourceTypeStr};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJclPeResourceList : public TJclPeImageBaseList
{
	typedef TJclPeImageBaseList inherited;
	
public:
	TJclPeResourceItem* operator[](int Index) { return Items[Index]; }
	
private:
	_IMAGE_RESOURCE_DIRECTORY *FDirectory;
	TJclPeResourceItem* FParentItem;
	TJclPeResourceItem* __fastcall GetItems(int Index);
	
protected:
	void __fastcall CreateList(TJclPeResourceItem* AParentItem);
	
public:
	__fastcall TJclPeResourceList(TJclPeImage* AImage, TJclPeResourceItem* AParentItem, PIMAGE_RESOURCE_DIRECTORY ADirectory);
	TJclPeResourceItem* __fastcall FindName(const System::UnicodeString Name);
	__property PIMAGE_RESOURCE_DIRECTORY Directory = {read=FDirectory};
	__property TJclPeResourceItem* Items[int Index] = {read=GetItems/*, default*/};
	__property TJclPeResourceItem* ParentItem = {read=FParentItem};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TJclPeResourceList(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS TJclPeRootResourceList;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TJclPeRootResourceList : public TJclPeResourceList
{
	typedef TJclPeResourceList inherited;
	
private:
	System::Classes::TStringList* FManifestContent;
	System::Classes::TStrings* __fastcall GetManifestContent(void);
	
public:
	__fastcall virtual ~TJclPeRootResourceList(void);
	TJclPeResourceItem* __fastcall FindResource(TJclPeResourceKind ResourceType, const System::UnicodeString ResourceName = System::UnicodeString())/* overload */;
	TJclPeResourceItem* __fastcall FindResource(const System::WideChar * ResourceType, const System::WideChar * ResourceName = (System::WideChar *)(0x0))/* overload */;
	bool __fastcall ListResourceNames(TJclPeResourceKind ResourceType, System::Classes::TStrings* const Strings);
	__property System::Classes::TStrings* ManifestContent = {read=GetManifestContent};
public:
	/* TJclPeResourceList.Create */ inline __fastcall TJclPeRootResourceList(TJclPeImage* AImage, TJclPeResourceItem* AParentItem, PIMAGE_RESOURCE_DIRECTORY ADirectory) : TJclPeResourceList(AImage, AParentItem, ADirectory) { }
	
};

#pragma pack(pop)

struct DECLSPEC_DRECORD TJclPeRelocation
{
public:
	System::Word Address;
	System::Byte RelocType;
	unsigned VirtualAddress;
};


class DELPHICLASS TJclPeRelocEntry;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TJclPeRelocEntry : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	TJclPeRelocation operator[](int Index) { return Relocations[Index]; }
	
private:
	_IMAGE_BASE_RELOCATION *FChunk;
	int FCount;
	TJclPeRelocation __fastcall GetRelocations(int Index);
	unsigned __fastcall GetSize(void);
	unsigned __fastcall GetVirtualAddress(void);
	
public:
	__fastcall TJclPeRelocEntry(PIMAGE_BASE_RELOCATION AChunk, int ACount);
	__property int Count = {read=FCount, nodefault};
	__property TJclPeRelocation Relocations[int Index] = {read=GetRelocations/*, default*/};
	__property unsigned Size = {read=GetSize, nodefault};
	__property unsigned VirtualAddress = {read=GetVirtualAddress, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TJclPeRelocEntry(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS TJclPeRelocList;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TJclPeRelocList : public TJclPeImageBaseList
{
	typedef TJclPeImageBaseList inherited;
	
public:
	TJclPeRelocEntry* operator[](int Index) { return Items[Index]; }
	
private:
	int FAllItemCount;
	TJclPeRelocEntry* __fastcall GetItems(int Index);
	TJclPeRelocation __fastcall GetAllItems(int Index);
	
protected:
	void __fastcall CreateList(void);
	
public:
	__fastcall TJclPeRelocList(TJclPeImage* AImage);
	__property TJclPeRelocation AllItems[int Index] = {read=GetAllItems};
	__property int AllItemCount = {read=FAllItemCount, nodefault};
	__property TJclPeRelocEntry* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TJclPeRelocList(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS TJclPeDebugList;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TJclPeDebugList : public TJclPeImageBaseList
{
	typedef TJclPeImageBaseList inherited;
	
public:
	_IMAGE_DEBUG_DIRECTORY operator[](int Index) { return Items[Index]; }
	
private:
	_IMAGE_DEBUG_DIRECTORY __fastcall GetItems(int Index);
	
protected:
	void __fastcall CreateList(void);
	
public:
	__fastcall TJclPeDebugList(TJclPeImage* AImage);
	__property _IMAGE_DEBUG_DIRECTORY Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TJclPeDebugList(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS TJclPeCertificate;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TJclPeCertificate : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	void *FData;
	_WIN_CERTIFICATE FHeader;
	
public:
	__fastcall TJclPeCertificate(const _WIN_CERTIFICATE &AHeader, void * AData);
	__property void * Data = {read=FData};
	__property _WIN_CERTIFICATE Header = {read=FHeader};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TJclPeCertificate(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS TJclPeCertificateList;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TJclPeCertificateList : public TJclPeImageBaseList
{
	typedef TJclPeImageBaseList inherited;
	
public:
	TJclPeCertificate* operator[](int Index) { return Items[Index]; }
	
private:
	TJclPeCertificate* __fastcall GetItems(int Index);
	
protected:
	void __fastcall CreateList(void);
	
public:
	__fastcall TJclPeCertificateList(TJclPeImage* AImage);
	__property TJclPeCertificate* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TJclPeCertificateList(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS TJclPeCLRHeader;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TJclPeCLRHeader : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	Jclwin32::IMAGE_COR20_HEADER FHeader;
	TJclPeImage* FImage;
	System::UnicodeString __fastcall GetVersionString(void);
	bool __fastcall GetHasMetadata(void);
	
protected:
	void __fastcall ReadHeader(void);
	
public:
	__fastcall TJclPeCLRHeader(TJclPeImage* AImage);
	__property bool HasMetadata = {read=GetHasMetadata, nodefault};
	__property Jclwin32::IMAGE_COR20_HEADER Header = {read=FHeader};
	__property System::UnicodeString VersionString = {read=GetVersionString};
	__property TJclPeImage* Image = {read=FImage};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TJclPeCLRHeader(void) { }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TJclPeHeader : unsigned char { JclPeHeader_Signature, JclPeHeader_Machine, JclPeHeader_NumberOfSections, JclPeHeader_TimeDateStamp, JclPeHeader_PointerToSymbolTable, JclPeHeader_NumberOfSymbols, JclPeHeader_SizeOfOptionalHeader, JclPeHeader_Characteristics, JclPeHeader_Magic, JclPeHeader_LinkerVersion, JclPeHeader_SizeOfCode, JclPeHeader_SizeOfInitializedData, JclPeHeader_SizeOfUninitializedData, JclPeHeader_AddressOfEntryPoint, JclPeHeader_BaseOfCode, JclPeHeader_BaseOfData, JclPeHeader_ImageBase, JclPeHeader_SectionAlignment, JclPeHeader_FileAlignment, JclPeHeader_OperatingSystemVersion, JclPeHeader_ImageVersion, JclPeHeader_SubsystemVersion, JclPeHeader_Win32VersionValue, JclPeHeader_SizeOfImage, JclPeHeader_SizeOfHeaders, 
	JclPeHeader_CheckSum, JclPeHeader_Subsystem, JclPeHeader_DllCharacteristics, JclPeHeader_SizeOfStackReserve, JclPeHeader_SizeOfStackCommit, JclPeHeader_SizeOfHeapReserve, JclPeHeader_SizeOfHeapCommit, JclPeHeader_LoaderFlags, JclPeHeader_NumberOfRvaAndSizes };

enum DECLSPEC_DENUM TJclLoadConfig : unsigned char { JclLoadConfig_Characteristics, JclLoadConfig_TimeDateStamp, JclLoadConfig_Version, JclLoadConfig_GlobalFlagsClear, JclLoadConfig_GlobalFlagsSet, JclLoadConfig_CriticalSectionDefaultTimeout, JclLoadConfig_DeCommitFreeBlockThreshold, JclLoadConfig_DeCommitTotalFreeThreshold, JclLoadConfig_LockPrefixTable, JclLoadConfig_MaximumAllocationSize, JclLoadConfig_VirtualMemoryThreshold, JclLoadConfig_ProcessHeapFlags, JclLoadConfig_ProcessAffinityMask, JclLoadConfig_CSDVersion, JclLoadConfig_Reserved1, JclLoadConfig_EditList, JclLoadConfig_Reserved };

struct DECLSPEC_DRECORD TJclPeFileProperties
{
public:
	unsigned Size;
	System::TDateTime CreationTime;
	System::TDateTime LastAccessTime;
	System::TDateTime LastWriteTime;
	int Attributes;
};


enum DECLSPEC_DENUM TJclPeImageStatus : unsigned char { stNotLoaded, stOk, stNotPE, stNotSupported, stNotFound, stError };

enum DECLSPEC_DENUM TJclPeTarget : unsigned char { taUnknown, taWin32, taWin64 };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJclPeImage : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	bool FAttachedImage;
	TJclPeCertificateList* FCertificateList;
	TJclPeCLRHeader* FCLRHeader;
	TJclPeDebugList* FDebugList;
	System::Sysutils::TFileName FFileName;
	System::Classes::TStringList* FImageSections;
	_LOADED_IMAGE FLoadedImage;
	TJclPeExportFuncList* FExportList;
	TJclPeImportList* FImportList;
	bool FNoExceptions;
	bool FReadOnlyAccess;
	TJclPeRelocList* FRelocationList;
	TJclPeRootResourceList* FResourceList;
	unsigned FResourceVA;
	TJclPeImageStatus FStatus;
	TJclPeTarget FTarget;
	Jclfileutils::TJclFileVersionInfo* FVersionInfo;
	System::Classes::TStringList* FStringTable;
	TJclPeCertificateList* __fastcall GetCertificateList(void);
	TJclPeCLRHeader* __fastcall GetCLRHeader(void);
	TJclPeDebugList* __fastcall GetDebugList(void);
	System::UnicodeString __fastcall GetDescription(void);
	_IMAGE_DATA_DIRECTORY __fastcall GetDirectories(System::Word Directory);
	bool __fastcall GetDirectoryExists(System::Word Directory);
	TJclPeExportFuncList* __fastcall GetExportList(void);
	int __fastcall GetImageSectionCount(void);
	_IMAGE_SECTION_HEADER __fastcall GetImageSectionHeaders(int Index);
	System::UnicodeString __fastcall GetImageSectionNames(int Index);
	System::UnicodeString __fastcall GetImageSectionNameFromRva(const unsigned Rva);
	TJclPeImportList* __fastcall GetImportList(void);
	System::UnicodeString __fastcall GetHeaderValues(TJclPeHeader Index);
	System::UnicodeString __fastcall GetLoadConfigValues(TJclLoadConfig Index);
	unsigned __fastcall GetMappedAddress(void);
	Winapi::Windows::_IMAGE_OPTIONAL_HEADER32 __fastcall GetOptionalHeader32(void);
	_IMAGE_OPTIONAL_HEADER64 __fastcall GetOptionalHeader64(void);
	TJclPeRelocList* __fastcall GetRelocationList(void);
	TJclPeRootResourceList* __fastcall GetResourceList(void);
	_IMAGE_DATA_DIRECTORY __fastcall GetUnusedHeaderBytes(void);
	Jclfileutils::TJclFileVersionInfo* __fastcall GetVersionInfo(void);
	bool __fastcall GetVersionInfoAvailable(void);
	void __fastcall ReadImageSections(void);
	void __fastcall ReadStringTable(void);
	void __fastcall SetFileName(const System::Sysutils::TFileName Value);
	int __fastcall GetStringTableCount(void);
	System::UnicodeString __fastcall GetStringTableItem(int Index);
	System::UnicodeString __fastcall GetImageSectionFullNames(int Index);
	
protected:
	DYNAMIC void __fastcall AfterOpen(void);
	void __fastcall CheckNotAttached(void);
	DYNAMIC void __fastcall Clear(void);
	System::Sysutils::TFileName __fastcall ExpandModuleName(const System::UnicodeString ModuleName);
	void __fastcall RaiseStatusException(void);
	virtual TJclPeResourceItem* __fastcall ResourceItemCreate(PIMAGE_RESOURCE_DIRECTORY_ENTRY AEntry, TJclPeResourceItem* AParentItem);
	virtual TJclPeResourceList* __fastcall ResourceListCreate(PIMAGE_RESOURCE_DIRECTORY ADirectory, TJclPeResourceItem* AParentItem);
	__property bool NoExceptions = {read=FNoExceptions, nodefault};
	
public:
	__fastcall virtual TJclPeImage(bool ANoExceptions);
	__fastcall virtual ~TJclPeImage(void);
	void __fastcall AttachLoadedModule(const NativeUInt Handle);
	unsigned __fastcall CalculateCheckSum(void);
	void * __fastcall DirectoryEntryToData(System::Word Directory);
	bool __fastcall GetSectionHeader(const System::UnicodeString SectionName, /* out */ Winapi::Windows::PImageSectionHeader &Header);
	System::UnicodeString __fastcall GetSectionName(Winapi::Windows::PImageSectionHeader Header);
	System::UnicodeString __fastcall GetNameInStringTable(unsigned Offset);
	bool __fastcall IsBrokenFormat(void);
	bool __fastcall IsCLR(void);
	bool __fastcall IsSystemImage(void);
	void * __fastcall RawToVa(unsigned Raw)/* overload */;
	Winapi::Windows::PImageSectionHeader __fastcall RvaToSection(unsigned Rva)/* overload */;
	void * __fastcall RvaToVa(unsigned Rva)/* overload */;
	void * __fastcall RvaToVaEx(unsigned Rva)/* overload */;
	bool __fastcall StatusOK(void);
	void __fastcall TryGetNamesForOrdinalImports(void);
	bool __fastcall VerifyCheckSum(void);
	__classmethod System::UnicodeString __fastcall DebugTypeNames(unsigned DebugType);
	__classmethod System::UnicodeString __fastcall DirectoryNames(System::Word Directory);
	__classmethod System::Sysutils::TFileName __fastcall ExpandBySearchPath(const System::UnicodeString ModuleName, const System::UnicodeString BasePath);
	__classmethod System::UnicodeString __fastcall HeaderNames(TJclPeHeader Index);
	__classmethod System::UnicodeString __fastcall LoadConfigNames(TJclLoadConfig Index);
	__classmethod System::UnicodeString __fastcall ShortSectionInfo(unsigned Characteristics);
	__classmethod unsigned __fastcall DateTimeToStamp(const System::TDateTime DateTime);
	__classmethod System::TDateTime __fastcall StampToDateTime(unsigned TimeDateStamp);
	__property bool AttachedImage = {read=FAttachedImage, nodefault};
	__property TJclPeCertificateList* CertificateList = {read=GetCertificateList};
	__property TJclPeCLRHeader* CLRHeader = {read=GetCLRHeader};
	__property TJclPeDebugList* DebugList = {read=GetDebugList};
	__property System::UnicodeString Description = {read=GetDescription};
	__property _IMAGE_DATA_DIRECTORY Directories[System::Word Directory] = {read=GetDirectories};
	__property bool DirectoryExists[System::Word Directory] = {read=GetDirectoryExists};
	__property TJclPeExportFuncList* ExportList = {read=GetExportList};
	__property System::Sysutils::TFileName FileName = {read=FFileName, write=SetFileName};
	__property System::UnicodeString HeaderValues[TJclPeHeader Index] = {read=GetHeaderValues};
	__property int ImageSectionCount = {read=GetImageSectionCount, nodefault};
	__property _IMAGE_SECTION_HEADER ImageSectionHeaders[int Index] = {read=GetImageSectionHeaders};
	__property System::UnicodeString ImageSectionNames[int Index] = {read=GetImageSectionNames};
	__property System::UnicodeString ImageSectionFullNames[int Index] = {read=GetImageSectionFullNames};
	__property System::UnicodeString ImageSectionNameFromRva[const unsigned Rva] = {read=GetImageSectionNameFromRva};
	__property TJclPeImportList* ImportList = {read=GetImportList};
	__property System::UnicodeString LoadConfigValues[TJclLoadConfig Index] = {read=GetLoadConfigValues};
	__property _LOADED_IMAGE LoadedImage = {read=FLoadedImage};
	__property unsigned MappedAddress = {read=GetMappedAddress, nodefault};
	__property int StringTableCount = {read=GetStringTableCount, nodefault};
	__property System::UnicodeString StringTable[int Index] = {read=GetStringTableItem};
	__property Winapi::Windows::_IMAGE_OPTIONAL_HEADER32 OptionalHeader32 = {read=GetOptionalHeader32};
	__property _IMAGE_OPTIONAL_HEADER64 OptionalHeader64 = {read=GetOptionalHeader64};
	__property bool ReadOnlyAccess = {read=FReadOnlyAccess, write=FReadOnlyAccess, nodefault};
	__property TJclPeRelocList* RelocationList = {read=GetRelocationList};
	__property unsigned ResourceVA = {read=FResourceVA, nodefault};
	__property TJclPeRootResourceList* ResourceList = {read=GetResourceList};
	__property TJclPeImageStatus Status = {read=FStatus, nodefault};
	__property TJclPeTarget Target = {read=FTarget, nodefault};
	__property _IMAGE_DATA_DIRECTORY UnusedHeaderBytes = {read=GetUnusedHeaderBytes};
	__property Jclfileutils::TJclFileVersionInfo* VersionInfo = {read=GetVersionInfo};
	__property bool VersionInfoAvailable = {read=GetVersionInfoAvailable, nodefault};
};

#pragma pack(pop)

class DELPHICLASS TJclPeBorImagesCache;
class DELPHICLASS TJclPeBorImage;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TJclPeBorImagesCache : public TJclPeImagesCache
{
	typedef TJclPeImagesCache inherited;
	
public:
	TJclPeBorImage* operator[](const System::Sysutils::TFileName FileName) { return Images[FileName]; }
	
private:
	HIDESBASE TJclPeBorImage* __fastcall GetImages(const System::Sysutils::TFileName FileName);
	
protected:
	virtual TJclPeImageClass __fastcall GetPeImageClass(void);
	
public:
	__property TJclPeBorImage* Images[const System::Sysutils::TFileName FileName] = {read=GetImages/*, default*/};
public:
	/* TJclPeImagesCache.Create */ inline __fastcall TJclPeBorImagesCache(void) : TJclPeImagesCache() { }
	/* TJclPeImagesCache.Destroy */ inline __fastcall virtual ~TJclPeBorImagesCache(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS TJclPePackageInfo;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TJclPePackageInfo : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	bool FAvailable;
	System::Classes::TStringList* FContains;
	System::UnicodeString FDcpName;
	System::Classes::TStringList* FRequires;
	int FFlags;
	System::UnicodeString FDescription;
	bool FEnsureExtension;
	bool FSorted;
	System::Classes::TStrings* __fastcall GetContains(void);
	int __fastcall GetContainsCount(void);
	System::Byte __fastcall GetContainsFlags(int Index);
	System::UnicodeString __fastcall GetContainsNames(int Index);
	System::Classes::TStrings* __fastcall GetRequires(void);
	int __fastcall GetRequiresCount(void);
	System::UnicodeString __fastcall GetRequiresNames(int Index);
	
protected:
	void __fastcall ReadPackageInfo(NativeUInt ALibHandle);
	void __fastcall SetDcpName(const System::UnicodeString Value);
	
public:
	__fastcall TJclPePackageInfo(NativeUInt ALibHandle);
	__fastcall virtual ~TJclPePackageInfo(void);
	__classmethod System::UnicodeString __fastcall PackageModuleTypeToString(unsigned Flags);
	__classmethod System::UnicodeString __fastcall PackageOptionsToString(unsigned Flags);
	__classmethod System::UnicodeString __fastcall ProducerToString(unsigned Flags);
	__classmethod System::UnicodeString __fastcall UnitInfoFlagsToString(System::Byte UnitFlags);
	__property bool Available = {read=FAvailable, nodefault};
	__property System::Classes::TStrings* Contains = {read=GetContains};
	__property int ContainsCount = {read=GetContainsCount, nodefault};
	__property System::UnicodeString ContainsNames[int Index] = {read=GetContainsNames};
	__property System::Byte ContainsFlags[int Index] = {read=GetContainsFlags};
	__property System::UnicodeString Description = {read=FDescription};
	__property System::UnicodeString DcpName = {read=FDcpName};
	__property bool EnsureExtension = {read=FEnsureExtension, write=FEnsureExtension, nodefault};
	__property int Flags = {read=FFlags, nodefault};
	__property System::Classes::TStrings* Requires = {read=GetRequires};
	__property int RequiresCount = {read=GetRequiresCount, nodefault};
	__property System::UnicodeString RequiresNames[int Index] = {read=GetRequiresNames};
	__property bool Sorted = {read=FSorted, write=FSorted, nodefault};
};

#pragma pack(pop)

class DELPHICLASS TJclPeBorForm;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TJclPeBorForm : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::Classes::TFilerFlags FFormFlags;
	System::UnicodeString FFormClassName;
	System::UnicodeString FFormObjectName;
	int FFormPosition;
	TJclPeResourceItem* FResItem;
	System::UnicodeString __fastcall GetDisplayName(void);
	
public:
	__fastcall TJclPeBorForm(TJclPeResourceItem* AResItem, System::Classes::TFilerFlags AFormFlags, int AFormPosition, const System::UnicodeString AFormClassName, const System::UnicodeString AFormObjectName);
	void __fastcall ConvertFormToText(System::Classes::TStream* const Stream)/* overload */;
	void __fastcall ConvertFormToText(System::Classes::TStrings* const Strings)/* overload */;
	__property System::UnicodeString FormClassName = {read=FFormClassName};
	__property System::Classes::TFilerFlags FormFlags = {read=FFormFlags, nodefault};
	__property System::UnicodeString FormObjectName = {read=FFormObjectName};
	__property int FormPosition = {read=FFormPosition, nodefault};
	__property System::UnicodeString DisplayName = {read=GetDisplayName};
	__property TJclPeResourceItem* ResItem = {read=FResItem};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TJclPeBorForm(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJclPeBorImage : public TJclPeImage
{
	typedef TJclPeImage inherited;
	
private:
	System::Contnrs::TObjectList* FForms;
	bool FIsPackage;
	bool FIsBorlandImage;
	NativeUInt FLibHandle;
	TJclPePackageInfo* FPackageInfo;
	bool FPackageInfoSorted;
	int FPackageCompilerVersion;
	int __fastcall GetFormCount(void);
	TJclPeBorForm* __fastcall GetForms(int Index);
	TJclPeBorForm* __fastcall GetFormFromName(const System::UnicodeString FormClassName);
	NativeUInt __fastcall GetLibHandle(void);
	int __fastcall GetPackageCompilerVersion(void);
	TJclPePackageInfo* __fastcall GetPackageInfo(void);
	
protected:
	DYNAMIC void __fastcall AfterOpen(void);
	DYNAMIC void __fastcall Clear(void);
	void __fastcall CreateFormsList(void);
	
public:
	__fastcall virtual TJclPeBorImage(bool ANoExceptions);
	__fastcall virtual ~TJclPeBorImage(void);
	bool __fastcall DependedPackages(System::Classes::TStrings* List, bool FullPathName, bool Descriptions);
	bool __fastcall FreeLibHandle(void);
	__property TJclPeBorForm* Forms[int Index] = {read=GetForms};
	__property int FormCount = {read=GetFormCount, nodefault};
	__property TJclPeBorForm* FormFromName[const System::UnicodeString FormClassName] = {read=GetFormFromName};
	__property bool IsBorlandImage = {read=FIsBorlandImage, nodefault};
	__property bool IsPackage = {read=FIsPackage, nodefault};
	__property NativeUInt LibHandle = {read=GetLibHandle, nodefault};
	__property int PackageCompilerVersion = {read=GetPackageCompilerVersion, nodefault};
	__property TJclPePackageInfo* PackageInfo = {read=GetPackageInfo};
	__property bool PackageInfoSorted = {read=FPackageInfoSorted, write=FPackageInfoSorted, nodefault};
};

#pragma pack(pop)

enum DECLSPEC_DENUM TJclPeNameSearchOption : unsigned char { seImports, seDelayImports, seBoundImports, seExports };

typedef System::Set<TJclPeNameSearchOption, TJclPeNameSearchOption::seImports, TJclPeNameSearchOption::seExports> TJclPeNameSearchOptions;

typedef void __fastcall (__closure *TJclPeNameSearchNotifyEvent)(System::TObject* Sender, TJclPeImage* PeImage, bool &Process);

typedef void __fastcall (__closure *TJclPeNameSearchFoundEvent)(System::TObject* Sender, const System::Sysutils::TFileName FileName, const System::UnicodeString FunctionName, TJclPeNameSearchOption Option);

class DELPHICLASS TJclPeNameSearch;
class PASCALIMPLEMENTATION TJclPeNameSearch : public System::Classes::TThread
{
	typedef System::Classes::TThread inherited;
	
private:
	System::Sysutils::TFileName F_FileName;
	System::UnicodeString F_FunctionName;
	TJclPeNameSearchOption F_Option;
	bool F_Process;
	System::UnicodeString FFunctionName;
	TJclPeNameSearchOptions FOptions;
	System::UnicodeString FPath;
	TJclPeImage* FPeImage;
	TJclPeNameSearchFoundEvent FOnFound;
	TJclPeNameSearchNotifyEvent FOnProcessFile;
	
protected:
	virtual bool __fastcall CompareName(const System::UnicodeString FunctionName, const System::UnicodeString ComparedName);
	void __fastcall DoFound(void);
	void __fastcall DoProcessFile(void);
	virtual void __fastcall Execute(void);
	
public:
	__fastcall TJclPeNameSearch(const System::UnicodeString FunctionName, const System::UnicodeString Path, TJclPeNameSearchOptions Options);
	HIDESBASE void __fastcall Start(void);
	__property TJclPeNameSearchFoundEvent OnFound = {read=FOnFound, write=FOnFound};
	__property TJclPeNameSearchNotifyEvent OnProcessFile = {read=FOnProcessFile, write=FOnProcessFile};
public:
	/* TThread.Destroy */ inline __fastcall virtual ~TJclPeNameSearch(void) { }
	
};


struct DECLSPEC_DRECORD TJclRebaseImageInfo32
{
public:
	unsigned OldImageSize;
	unsigned OldImageBase;
	unsigned NewImageSize;
	unsigned NewImageBase;
};


struct DECLSPEC_DRECORD TJclRebaseImageInfo64
{
public:
	unsigned OldImageSize;
	__int64 OldImageBase;
	unsigned NewImageSize;
	__int64 NewImageBase;
};


typedef System::DynamicArray<_IMAGE_SECTION_HEADER> TImageSectionHeaderArray;

class DELPHICLASS TJclPeSectionStream;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TJclPeSectionStream : public System::Classes::TCustomMemoryStream
{
	typedef System::Classes::TCustomMemoryStream inherited;
	
private:
	NativeUInt FInstance;
	_IMAGE_SECTION_HEADER FSectionHeader;
	void __fastcall Initialize(NativeUInt Instance, const System::UnicodeString ASectionName);
	
public:
	__fastcall TJclPeSectionStream(NativeUInt Instance, const System::UnicodeString ASectionName);
	virtual int __fastcall Write(const void *Buffer, int Count)/* overload */;
	__property NativeUInt Instance = {read=FInstance, nodefault};
	__property _IMAGE_SECTION_HEADER SectionHeader = {read=FSectionHeader};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TJclPeSectionStream(void) { }
	
	/* Hoisted overloads: */
	
public:
	inline int __fastcall  Write(const System::DynamicArray<System::Byte> Buffer, int Offset, int Count){ return System::Classes::TStream::Write(Buffer, Offset, Count); }
	inline int __fastcall  Write(const System::DynamicArray<System::Byte> Buffer, int Count){ return System::Classes::TStream::Write(Buffer, Count); }
	
};

#pragma pack(pop)

class DELPHICLASS TJclPeMapImgHookItem;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TJclPeMapImgHookItem : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	void *FBaseAddress;
	System::UnicodeString FFunctionName;
	System::UnicodeString FModuleName;
	void *FNewAddress;
	void *FOriginalAddress;
	System::Contnrs::TObjectList* FList;
	
protected:
	bool __fastcall InternalUnhook(void);
	
public:
	__fastcall TJclPeMapImgHookItem(System::Contnrs::TObjectList* AList, const System::UnicodeString AFunctionName, const System::UnicodeString AModuleName, void * ABaseAddress, void * ANewAddress, void * AOriginalAddress);
	__fastcall virtual ~TJclPeMapImgHookItem(void);
	bool __fastcall Unhook(void);
	__property void * BaseAddress = {read=FBaseAddress};
	__property System::UnicodeString FunctionName = {read=FFunctionName};
	__property System::UnicodeString ModuleName = {read=FModuleName};
	__property void * NewAddress = {read=FNewAddress};
	__property void * OriginalAddress = {read=FOriginalAddress};
};

#pragma pack(pop)

class DELPHICLASS TJclPeMapImgHooks;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TJclPeMapImgHooks : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TJclPeMapImgHookItem* operator[](int Index) { return Items[Index]; }
	
private:
	TJclPeMapImgHookItem* __fastcall GetItems(int Index);
	TJclPeMapImgHookItem* __fastcall GetItemFromOriginalAddress(void * OriginalAddress);
	TJclPeMapImgHookItem* __fastcall GetItemFromNewAddress(void * NewAddress);
	
public:
	bool __fastcall HookImport(void * Base, const System::UnicodeString ModuleName, const System::UnicodeString FunctionName, void * NewAddress, void * &OriginalAddress);
	__classmethod bool __fastcall IsWin9xDebugThunk(void * P);
	__classmethod bool __fastcall ReplaceImport(void * Base, const System::UnicodeString ModuleName, void * FromProc, void * ToProc);
	__classmethod void * __fastcall SystemBase();
	void __fastcall UnhookAll(void);
	bool __fastcall UnhookByNewAddress(void * NewAddress);
	void __fastcall UnhookByBaseAddress(void * BaseAddress);
	__property TJclPeMapImgHookItem* Items[int Index] = {read=GetItems/*, default*/};
	__property TJclPeMapImgHookItem* ItemFromOriginalAddress[void * OriginalAddress] = {read=GetItemFromOriginalAddress};
	__property TJclPeMapImgHookItem* ItemFromNewAddress[void * NewAddress] = {read=GetItemFromNewAddress};
public:
	/* TObjectList.Create */ inline __fastcall TJclPeMapImgHooks(void)/* overload */ : System::Contnrs::TObjectList() { }
	/* TObjectList.Create */ inline __fastcall TJclPeMapImgHooks(bool AOwnsObjects)/* overload */ : System::Contnrs::TObjectList(AOwnsObjects) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TJclPeMapImgHooks(void) { }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TJclBorUmSymbolKind : unsigned char { skData, skFunction, skConstructor, skDestructor, skRTTI, skVTable };

enum DECLSPEC_DENUM TJclBorUmSymbolModifier : unsigned char { smQualified, smLinkProc };

typedef System::Set<TJclBorUmSymbolModifier, TJclBorUmSymbolModifier::smQualified, TJclBorUmSymbolModifier::smLinkProc> TJclBorUmSymbolModifiers;

struct DECLSPEC_DRECORD TJclBorUmDescription
{
public:
	TJclBorUmSymbolKind Kind;
	TJclBorUmSymbolModifiers Modifiers;
};


enum DECLSPEC_DENUM TJclBorUmResult : unsigned char { urOk, urNotMangled, urMicrosoft, urError };

enum DECLSPEC_DENUM TJclPeUmResult : unsigned char { umNotMangled, umBorland, umMicrosoft };

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE System::UnicodeString __fastcall PeStripFunctionAW(const System::UnicodeString FunctionName);
extern DELPHI_PACKAGE bool __fastcall PeSmartFunctionNameSame(const System::UnicodeString ComparedName, const System::UnicodeString FunctionName, TJclSmartCompOptions Options = TJclSmartCompOptions() );
extern DELPHI_PACKAGE bool __fastcall IsValidPeFile(const System::Sysutils::TFileName FileName);
extern DELPHI_PACKAGE bool __fastcall PeGetNtHeaders32(const System::Sysutils::TFileName FileName, /* out */ _IMAGE_NT_HEADERS &NtHeaders);
extern DELPHI_PACKAGE bool __fastcall PeGetNtHeaders64(const System::Sysutils::TFileName FileName, /* out */ _IMAGE_NT_HEADERS64 &NtHeaders);
extern DELPHI_PACKAGE bool __fastcall PeCreateNameHintTable(const System::Sysutils::TFileName FileName);
extern DELPHI_PACKAGE TJclRebaseImageInfo32 __fastcall PeRebaseImage32(const System::Sysutils::TFileName ImageName, unsigned NewBase = (unsigned)(0x0), unsigned TimeStamp = (unsigned)(0x0), unsigned MaxNewSize = (unsigned)(0x0));
extern DELPHI_PACKAGE TJclRebaseImageInfo64 __fastcall PeRebaseImage64(const System::Sysutils::TFileName ImageName, __int64 NewBase = 0LL, unsigned TimeStamp = (unsigned)(0x0), unsigned MaxNewSize = (unsigned)(0x0));
extern DELPHI_PACKAGE bool __fastcall PeUpdateLinkerTimeStamp(const System::Sysutils::TFileName FileName, const System::TDateTime Time);
extern DELPHI_PACKAGE System::TDateTime __fastcall PeReadLinkerTimeStamp(const System::Sysutils::TFileName FileName);
extern DELPHI_PACKAGE bool __fastcall PeInsertSection(const System::Sysutils::TFileName FileName, System::Classes::TStream* SectionStream, System::UnicodeString SectionName);
extern DELPHI_PACKAGE bool __fastcall PeVerifyCheckSum(const System::Sysutils::TFileName FileName);
extern DELPHI_PACKAGE bool __fastcall PeClearCheckSum(const System::Sysutils::TFileName FileName);
extern DELPHI_PACKAGE bool __fastcall PeUpdateCheckSum(const System::Sysutils::TFileName FileName);
extern DELPHI_PACKAGE bool __fastcall PeDoesExportFunction(const System::Sysutils::TFileName FileName, const System::UnicodeString FunctionName, TJclSmartCompOptions Options = TJclSmartCompOptions() );
extern DELPHI_PACKAGE bool __fastcall PeIsExportFunctionForwardedEx(const System::Sysutils::TFileName FileName, const System::UnicodeString FunctionName, /* out */ System::UnicodeString &ForwardedName, TJclSmartCompOptions Options = TJclSmartCompOptions() );
extern DELPHI_PACKAGE bool __fastcall PeIsExportFunctionForwarded(const System::Sysutils::TFileName FileName, const System::UnicodeString FunctionName, TJclSmartCompOptions Options = TJclSmartCompOptions() );
extern DELPHI_PACKAGE bool __fastcall PeDoesImportFunction(const System::Sysutils::TFileName FileName, const System::UnicodeString FunctionName, const System::UnicodeString LibraryName = System::UnicodeString(), TJclSmartCompOptions Options = TJclSmartCompOptions() );
extern DELPHI_PACKAGE bool __fastcall PeDoesImportLibrary(const System::Sysutils::TFileName FileName, const System::UnicodeString LibraryName, bool Recursive = false);
extern DELPHI_PACKAGE bool __fastcall PeImportedLibraries(const System::Sysutils::TFileName FileName, System::Classes::TStrings* const LibrariesList, bool Recursive = false, bool FullPathName = false);
extern DELPHI_PACKAGE bool __fastcall PeImportedFunctions(const System::Sysutils::TFileName FileName, System::Classes::TStrings* const FunctionsList, const System::UnicodeString LibraryName = System::UnicodeString(), bool IncludeLibNames = false);
extern DELPHI_PACKAGE bool __fastcall PeExportedFunctions(const System::Sysutils::TFileName FileName, System::Classes::TStrings* const FunctionsList);
extern DELPHI_PACKAGE bool __fastcall PeExportedNames(const System::Sysutils::TFileName FileName, System::Classes::TStrings* const FunctionsList);
extern DELPHI_PACKAGE bool __fastcall PeExportedVariables(const System::Sysutils::TFileName FileName, System::Classes::TStrings* const FunctionsList);
extern DELPHI_PACKAGE bool __fastcall PeResourceKindNames(const System::Sysutils::TFileName FileName, TJclPeResourceKind ResourceType, System::Classes::TStrings* const NamesList);
extern DELPHI_PACKAGE bool __fastcall PeBorFormNames(const System::Sysutils::TFileName FileName, System::Classes::TStrings* const NamesList);
extern DELPHI_PACKAGE bool __fastcall PeBorDependedPackages(const System::Sysutils::TFileName FileName, System::Classes::TStrings* PackagesList, bool FullPathName, bool Descriptions);
extern DELPHI_PACKAGE bool __fastcall PeFindMissingImports(const System::Sysutils::TFileName FileName, System::Classes::TStrings* MissingImportsList)/* overload */;
extern DELPHI_PACKAGE bool __fastcall PeFindMissingImports(System::Classes::TStrings* RequiredImportsList, System::Classes::TStrings* MissingImportsList)/* overload */;
extern DELPHI_PACKAGE bool __fastcall PeCreateRequiredImportList(const System::Sysutils::TFileName FileName, System::Classes::TStrings* RequiredImportsList);
extern DELPHI_PACKAGE PIMAGE_NT_HEADERS32 __fastcall PeMapImgNtHeaders32(const void * BaseAddress)/* overload */;
extern DELPHI_PACKAGE __int64 __fastcall PeMapImgNtHeaders32(System::Classes::TStream* Stream, const __int64 BasePosition, /* out */ _IMAGE_NT_HEADERS &NtHeaders32)/* overload */;
extern DELPHI_PACKAGE PIMAGE_NT_HEADERS64 __fastcall PeMapImgNtHeaders64(const void * BaseAddress)/* overload */;
extern DELPHI_PACKAGE __int64 __fastcall PeMapImgNtHeaders64(System::Classes::TStream* Stream, const __int64 BasePosition, /* out */ _IMAGE_NT_HEADERS64 &NtHeaders64)/* overload */;
extern DELPHI_PACKAGE unsigned __fastcall PeMapImgSize(const void * BaseAddress)/* overload */;
extern DELPHI_PACKAGE unsigned __fastcall PeMapImgSize(System::Classes::TStream* Stream, const __int64 BasePosition)/* overload */;
extern DELPHI_PACKAGE unsigned __fastcall PeMapImgSize32(const void * BaseAddress)/* overload */;
extern DELPHI_PACKAGE unsigned __fastcall PeMapImgSize32(System::Classes::TStream* Stream, const __int64 BasePosition)/* overload */;
extern DELPHI_PACKAGE unsigned __fastcall PeMapImgSize64(const void * BaseAddress)/* overload */;
extern DELPHI_PACKAGE unsigned __fastcall PeMapImgSize64(System::Classes::TStream* Stream, const __int64 BasePosition)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall PeMapImgLibraryName(const void * BaseAddress);
extern DELPHI_PACKAGE System::UnicodeString __fastcall PeMapImgLibraryName32(const void * BaseAddress);
extern DELPHI_PACKAGE System::UnicodeString __fastcall PeMapImgLibraryName64(const void * BaseAddress);
extern DELPHI_PACKAGE TJclPeTarget __fastcall PeMapImgTarget(const void * BaseAddress)/* overload */;
extern DELPHI_PACKAGE TJclPeTarget __fastcall PeMapImgTarget(System::Classes::TStream* Stream, const __int64 BasePosition)/* overload */;
extern DELPHI_PACKAGE Winapi::Windows::PImageSectionHeader __fastcall PeMapImgSections32(PIMAGE_NT_HEADERS32 NtHeaders)/* overload */;
extern DELPHI_PACKAGE __int64 __fastcall PeMapImgSections32(System::Classes::TStream* Stream, const __int64 NtHeaders32Position, const _IMAGE_NT_HEADERS &NtHeaders32, /* out */ TImageSectionHeaderArray &ImageSectionHeaders)/* overload */;
extern DELPHI_PACKAGE Winapi::Windows::PImageSectionHeader __fastcall PeMapImgSections64(PIMAGE_NT_HEADERS64 NtHeaders)/* overload */;
extern DELPHI_PACKAGE __int64 __fastcall PeMapImgSections64(System::Classes::TStream* Stream, const __int64 NtHeaders64Position, const _IMAGE_NT_HEADERS64 &NtHeaders64, /* out */ TImageSectionHeaderArray &ImageSectionHeaders)/* overload */;
extern DELPHI_PACKAGE Winapi::Windows::PImageSectionHeader __fastcall PeMapImgFindSection32(PIMAGE_NT_HEADERS32 NtHeaders, const System::UnicodeString SectionName);
extern DELPHI_PACKAGE Winapi::Windows::PImageSectionHeader __fastcall PeMapImgFindSection64(PIMAGE_NT_HEADERS64 NtHeaders, const System::UnicodeString SectionName);
extern DELPHI_PACKAGE int __fastcall PeMapImgFindSection(const TImageSectionHeaderArray ImageSectionHeaders, const System::UnicodeString SectionName);
extern DELPHI_PACKAGE Winapi::Windows::PImageSectionHeader __fastcall PeMapImgFindSectionFromModule(const void * BaseAddress, const System::UnicodeString SectionName);
extern DELPHI_PACKAGE bool __fastcall PeMapImgExportedVariables(const NativeUInt Module, System::Classes::TStrings* const VariablesList);
extern DELPHI_PACKAGE void * __fastcall PeMapImgResolvePackageThunk(void * Address);
extern DELPHI_PACKAGE void * __fastcall PeMapFindResource(const NativeUInt Module, const System::WideChar * ResourceType, const System::UnicodeString ResourceName);
extern DELPHI_PACKAGE bool __fastcall PeDbgImgNtHeaders32(NativeUInt ProcessHandle, unsigned BaseAddress, _IMAGE_NT_HEADERS &NtHeaders);
extern DELPHI_PACKAGE bool __fastcall PeDbgImgLibraryName32(NativeUInt ProcessHandle, unsigned BaseAddress, System::UnicodeString &Name);
extern DELPHI_PACKAGE TJclBorUmResult __fastcall PeBorUnmangleName(const System::UnicodeString Name, /* out */ System::UnicodeString &Unmangled, /* out */ TJclBorUmDescription &Description, /* out */ int &BasePos)/* overload */;
extern DELPHI_PACKAGE TJclBorUmResult __fastcall PeBorUnmangleName(const System::UnicodeString Name, /* out */ System::UnicodeString &Unmangled, /* out */ TJclBorUmDescription &Description)/* overload */;
extern DELPHI_PACKAGE TJclBorUmResult __fastcall PeBorUnmangleName(const System::UnicodeString Name, /* out */ System::UnicodeString &Unmangled)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall PeBorUnmangleName(const System::UnicodeString Name)/* overload */;
extern DELPHI_PACKAGE TJclPeUmResult __fastcall PeIsNameMangled(const System::UnicodeString Name);
extern DELPHI_PACKAGE bool __fastcall UndecorateSymbolName(const System::UnicodeString DecoratedName, /* out */ System::UnicodeString &UnMangled, unsigned Flags);
extern DELPHI_PACKAGE TJclPeUmResult __fastcall PeUnmangleName(const System::UnicodeString Name, /* out */ System::UnicodeString &Unmangled);
}	/* namespace Jclpeimage */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_JCLPEIMAGE)
using namespace Jclpeimage;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// JclpeimageHPP
