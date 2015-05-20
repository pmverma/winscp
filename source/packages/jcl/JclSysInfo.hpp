// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'JclSysInfo.pas' rev: 27.00 (Windows)

#ifndef JclsysinfoHPP
#define JclsysinfoHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Winapi.Windows.hpp>	// Pascal unit
#include <Winapi.ActiveX.hpp>	// Pascal unit
#include <Winapi.ShlObj.hpp>	// Pascal unit
#include <System.Classes.hpp>	// Pascal unit
#include <JclBase.hpp>	// Pascal unit
#include <JclResources.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Jclsysinfo
{
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TEnvironmentOption : unsigned char { eoLocalMachine, eoCurrentUser, eoAdditional };

typedef System::Set<TEnvironmentOption, TEnvironmentOption::eoLocalMachine, TEnvironmentOption::eoAdditional> TEnvironmentOptions;

enum DECLSPEC_DENUM TAPMLineStatus : unsigned char { alsOffline, alsOnline, alsUnknown };

enum DECLSPEC_DENUM TAPMBatteryFlag : unsigned char { abfHigh, abfLow, abfCritical, abfCharging, abfNoBattery, abfUnknown };

typedef System::Set<TAPMBatteryFlag, TAPMBatteryFlag::abfHigh, TAPMBatteryFlag::abfUnknown> TAPMBatteryFlags;

enum DECLSPEC_DENUM TFileSystemFlag : unsigned char { fsCaseSensitive, fsCasePreservedNames, fsSupportsUnicodeOnDisk, fsPersistentACLs, fsSupportsFileCompression, fsSupportsVolumeQuotas, fsSupportsSparseFiles, fsSupportsReparsePoints, fsSupportsRemoteStorage, fsVolumeIsCompressed, fsSupportsObjectIds, fsSupportsEncryption, fsSupportsNamedStreams, fsVolumeIsReadOnly };

typedef System::Set<TFileSystemFlag, TFileSystemFlag::fsCaseSensitive, TFileSystemFlag::fsVolumeIsReadOnly> TFileSystemFlags;

enum DECLSPEC_DENUM TJclTerminateAppResult : unsigned char { taError, taClean, taKill };

enum DECLSPEC_DENUM TWindowsVersion : unsigned char { wvUnknown, wvWin95, wvWin95OSR2, wvWin98, wvWin98SE, wvWinME, wvWinNT31, wvWinNT35, wvWinNT351, wvWinNT4, wvWin2000, wvWinXP, wvWin2003, wvWinXP64, wvWin2003R2, wvWinVista, wvWinServer2008, wvWin7, wvWinServer2008R2, wvWin8, wvWin8RT, wvWinServer2012, wvWin81, wvWin81RT, wvWinServer2012R2 };

enum DECLSPEC_DENUM TWindowsEdition : unsigned char { weUnknown, weWinXPHome, weWinXPPro, weWinXPHomeN, weWinXPProN, weWinXPHomeK, weWinXPProK, weWinXPHomeKN, weWinXPProKN, weWinXPStarter, weWinXPMediaCenter, weWinXPTablet, weWinVistaStarter, weWinVistaHomeBasic, weWinVistaHomeBasicN, weWinVistaHomePremium, weWinVistaBusiness, weWinVistaBusinessN, weWinVistaEnterprise, weWinVistaUltimate, weWin7Starter, weWin7HomeBasic, weWin7HomePremium, weWin7Professional, weWin7Enterprise, weWin7Ultimate, weWin8, weWin8Pro, weWin8Enterprise, weWin8RT, weWin81, weWin81Pro, weWin81Enterprise, weWin81RT };

enum DECLSPEC_DENUM TNtProductType : unsigned char { ptUnknown, ptWorkStation, ptServer, ptAdvancedServer, ptPersonal, ptProfessional, ptDatacenterServer, ptEnterprise, ptWebEdition };

enum DECLSPEC_DENUM TProcessorArchitecture : unsigned char { paUnknown, pax8632, pax8664, paIA64 };

enum DECLSPEC_DENUM TTLBInformation : unsigned char { tiEntries, tiAssociativity };

enum DECLSPEC_DENUM TCacheInformation : unsigned char { ciLineSize, ciLinesPerTag, ciAssociativity, ciSize };

struct DECLSPEC_DRECORD TIntelSpecific
{
public:
	unsigned L2Cache;
	System::StaticArray<System::Byte, 16> CacheDescriptors;
	System::Byte BrandID;
	System::Byte FlushLineSize;
	System::Byte APICID;
	unsigned ExFeatures;
	unsigned Ex64Features;
	unsigned Ex64Features2;
	unsigned PowerManagementFeatures;
	System::Byte PhysicalAddressBits;
	System::Byte VirtualAddressBits;
};


struct DECLSPEC_DRECORD TCyrixSpecific
{
public:
	System::StaticArray<System::Byte, 4> L1CacheInfo;
	System::StaticArray<System::Byte, 4> TLBInfo;
};


#pragma pack(push,1)
struct DECLSPEC_DRECORD TAMDSpecific
{
public:
	unsigned ExFeatures;
	unsigned ExFeatures2;
	unsigned Features2;
	System::Byte BrandID;
	System::Byte FlushLineSize;
	System::Byte APICID;
	System::Word ExBrandID;
	System::StaticArray<System::Byte, 2> L1MByteInstructionTLB;
	System::StaticArray<System::Byte, 2> L1MByteDataTLB;
	System::StaticArray<System::Byte, 2> L1KByteInstructionTLB;
	System::StaticArray<System::Byte, 2> L1KByteDataTLB;
	System::StaticArray<System::Byte, 4> L1DataCache;
	System::StaticArray<System::Byte, 4> L1InstructionCache;
	System::StaticArray<System::Byte, 2> L2MByteInstructionTLB;
	System::StaticArray<System::Byte, 2> L2MByteDataTLB;
	System::StaticArray<System::Byte, 2> L2KByteDataTLB;
	System::StaticArray<System::Byte, 2> L2KByteInstructionTLB;
	unsigned L2Cache;
	unsigned L3Cache;
	unsigned AdvancedPowerManagement;
	System::Byte PhysicalAddressSize;
	System::Byte VirtualAddressSize;
};
#pragma pack(pop)


struct DECLSPEC_DRECORD TVIASpecific
{
public:
	unsigned ExFeatures;
	System::StaticArray<System::Byte, 2> DataTLB;
	System::StaticArray<System::Byte, 2> InstructionTLB;
	System::StaticArray<System::Byte, 4> L1DataCache;
	System::StaticArray<System::Byte, 4> L1InstructionCache;
	unsigned L2DataCache;
};


struct DECLSPEC_DRECORD TTransmetaSpecific
{
public:
	unsigned ExFeatures;
	System::StaticArray<System::Byte, 2> DataTLB;
	System::StaticArray<System::Byte, 2> CodeTLB;
	System::StaticArray<System::Byte, 4> L1DataCache;
	System::StaticArray<System::Byte, 4> L1CodeCache;
	unsigned L2Cache;
	unsigned RevisionABCD;
	unsigned RevisionXXXX;
	unsigned Frequency;
	unsigned CodeMorphingABCD;
	unsigned CodeMorphingXXXX;
	unsigned TransmetaFeatures;
	System::StaticArray<System::WideChar, 65> TransmetaInformations;
	unsigned CurrentVoltage;
	unsigned CurrentFrequency;
	unsigned CurrentPerformance;
};


enum DECLSPEC_DENUM TCacheFamily : unsigned char { cfInstructionTLB, cfDataTLB, cfL1InstructionCache, cfL1DataCache, cfL2Cache, cfL2TLB, cfL3Cache, cfTrace, cfOther };

struct DECLSPEC_DRECORD TCacheInfo
{
public:
	System::Byte D;
	TCacheFamily Family;
	unsigned Size;
	System::Byte WaysOfAssoc;
	System::Byte LineSize;
	System::Byte LinePerSector;
	unsigned Entries;
	System::TResStringRec *I;
};


struct DECLSPEC_DRECORD TFreqInfo
{
public:
	__int64 RawFreq;
	__int64 NormFreq;
	__int64 InCycles;
	__int64 ExTicks;
};


enum DECLSPEC_DENUM TSSESupport : unsigned char { sse, sse2, sse3, ssse3, sse41, sse42, sse4A, sse5, avx };

typedef System::Set<TSSESupport, TSSESupport::sse, TSSESupport::avx> TSSESupports;

struct DECLSPEC_DRECORD TCpuInfo
{
public:
	bool HasInstruction;
	bool AES;
	bool MMX;
	bool ExMMX;
	bool _3DNow;
	bool Ex3DNow;
	TSSESupports SSE;
	bool IsFDIVOK;
	bool Is64Bits;
	bool DEPCapable;
	bool HasCacheInfo;
	bool HasExtendedInfo;
	System::Byte PType;
	System::Byte Family;
	System::Byte ExtendedFamily;
	System::Byte Model;
	System::Byte ExtendedModel;
	System::Byte Stepping;
	unsigned Features;
	TFreqInfo FrequencyInfo;
	System::StaticArray<char, 12> VendorIDString;
	System::StaticArray<char, 10> Manufacturer;
	System::StaticArray<char, 48> CpuName;
	unsigned L1DataCacheSize;
	System::Byte L1DataCacheLineSize;
	System::Byte L1DataCacheAssociativity;
	unsigned L1InstructionCacheSize;
	System::Byte L1InstructionCacheLineSize;
	System::Byte L1InstructionCacheAssociativity;
	unsigned L2CacheSize;
	System::Byte L2CacheLineSize;
	System::Byte L2CacheAssociativity;
	unsigned L3CacheSize;
	System::Byte L3CacheLineSize;
	System::Byte L3CacheAssociativity;
	System::Byte L3LinesPerSector;
	System::Byte LogicalCore;
	System::Byte PhysicalCore;
	bool HyperThreadingTechnology;
	bool HardwareHyperThreadingTechnology;
	
public:
	System::Byte CpuType;
	union
	{
		struct 
		{
			TVIASpecific ViaSpecific;
		};
		struct 
		{
			TTransmetaSpecific TransmetaSpecific;
		};
		struct 
		{
			TAMDSpecific AMDSpecific;
		};
		struct 
		{
			TCyrixSpecific CyrixSpecific;
		};
		struct 
		{
			TIntelSpecific IntelSpecific;
		};
		
	};
};


enum DECLSPEC_DENUM TOSEnabledFeature : unsigned char { oefFPU, oefSSE, oefAVX };

typedef System::Set<TOSEnabledFeature, TOSEnabledFeature::oefFPU, TOSEnabledFeature::oefAVX> TOSEnabledFeatures;

enum DECLSPEC_DENUM TFreeSysResKind : unsigned char { rtSystem, rtGdi, rtUser };

struct DECLSPEC_DRECORD TFreeSystemResources
{
public:
	int SystemRes;
	int GdiRes;
	int UserRes;
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE bool IsWin95;
extern DELPHI_PACKAGE bool IsWin95OSR2;
extern DELPHI_PACKAGE bool IsWin98;
extern DELPHI_PACKAGE bool IsWin98SE;
extern DELPHI_PACKAGE bool IsWinME;
extern DELPHI_PACKAGE bool IsWinNT;
extern DELPHI_PACKAGE bool IsWinNT3;
extern DELPHI_PACKAGE bool IsWinNT31;
extern DELPHI_PACKAGE bool IsWinNT35;
extern DELPHI_PACKAGE bool IsWinNT351;
extern DELPHI_PACKAGE bool IsWinNT4;
extern DELPHI_PACKAGE bool IsWin2K;
extern DELPHI_PACKAGE bool IsWinXP;
extern DELPHI_PACKAGE bool IsWin2003;
extern DELPHI_PACKAGE bool IsWinXP64;
extern DELPHI_PACKAGE bool IsWin2003R2;
extern DELPHI_PACKAGE bool IsWinVista;
extern DELPHI_PACKAGE bool IsWinServer2008;
extern DELPHI_PACKAGE bool IsWin7;
extern DELPHI_PACKAGE bool IsWinServer2008R2;
extern DELPHI_PACKAGE bool IsWin8;
extern DELPHI_PACKAGE bool IsWin8RT;
extern DELPHI_PACKAGE bool IsWinServer2012;
extern DELPHI_PACKAGE bool IsWin81;
extern DELPHI_PACKAGE bool IsWin81RT;
extern DELPHI_PACKAGE bool IsWinServer2012R2;
static const System::Int8 CPU_TYPE_INTEL = System::Int8(0x1);
static const System::Int8 CPU_TYPE_CYRIX = System::Int8(0x2);
static const System::Int8 CPU_TYPE_AMD = System::Int8(0x3);
static const System::Int8 CPU_TYPE_TRANSMETA = System::Int8(0x4);
static const System::Int8 CPU_TYPE_VIA = System::Int8(0x5);
extern DELPHI_PACKAGE System::StaticArray<char, 12> VendorIDIntel;
extern DELPHI_PACKAGE System::StaticArray<char, 12> VendorIDCyrix;
extern DELPHI_PACKAGE System::StaticArray<char, 12> VendorIDAMD;
extern DELPHI_PACKAGE System::StaticArray<char, 12> VendorIDTransmeta;
extern DELPHI_PACKAGE System::StaticArray<char, 12> VendorIDVIA;
static const System::Int8 BIT_0 = System::Int8(0x1);
static const System::Int8 BIT_1 = System::Int8(0x2);
static const System::Int8 BIT_2 = System::Int8(0x4);
static const System::Int8 BIT_3 = System::Int8(0x8);
static const System::Int8 BIT_4 = System::Int8(0x10);
static const System::Int8 BIT_5 = System::Int8(0x20);
static const System::Int8 BIT_6 = System::Int8(0x40);
static const System::Byte BIT_7 = System::Byte(0x80);
static const System::Word BIT_8 = System::Word(0x100);
static const System::Word BIT_9 = System::Word(0x200);
static const System::Word BIT_10 = System::Word(0x400);
static const System::Word BIT_11 = System::Word(0x800);
static const System::Word BIT_12 = System::Word(0x1000);
static const System::Word BIT_13 = System::Word(0x2000);
static const System::Word BIT_14 = System::Word(0x4000);
static const System::Word BIT_15 = System::Word(0x8000);
static const int BIT_16 = int(0x10000);
static const int BIT_17 = int(0x20000);
static const int BIT_18 = int(0x40000);
static const int BIT_19 = int(0x80000);
static const int BIT_20 = int(0x100000);
static const int BIT_21 = int(0x200000);
static const int BIT_22 = int(0x400000);
static const int BIT_23 = int(0x800000);
static const int BIT_24 = int(0x1000000);
static const int BIT_25 = int(0x2000000);
static const int BIT_26 = int(0x4000000);
static const int BIT_27 = int(0x8000000);
static const int BIT_28 = int(0x10000000);
static const int BIT_29 = int(0x20000000);
static const int BIT_30 = int(0x40000000);
static const unsigned BIT_31 = unsigned(0x80000000);
static const System::Int8 FPU_FLAG = System::Int8(0x1);
static const System::Int8 VME_FLAG = System::Int8(0x2);
static const System::Int8 DE_FLAG = System::Int8(0x4);
static const System::Int8 PSE_FLAG = System::Int8(0x8);
static const System::Int8 TSC_FLAG = System::Int8(0x10);
static const System::Int8 MSR_FLAG = System::Int8(0x20);
static const System::Int8 PAE_FLAG = System::Int8(0x40);
static const System::Byte MCE_FLAG = System::Byte(0x80);
static const System::Word CX8_FLAG = System::Word(0x100);
static const System::Word APIC_FLAG = System::Word(0x200);
static const System::Word BIT_10_FLAG = System::Word(0x400);
static const System::Word SEP_FLAG = System::Word(0x800);
static const System::Word MTRR_FLAG = System::Word(0x1000);
static const System::Word PGE_FLAG = System::Word(0x2000);
static const System::Word MCA_FLAG = System::Word(0x4000);
static const System::Word CMOV_FLAG = System::Word(0x8000);
static const int PAT_FLAG = int(0x10000);
static const int PSE36_FLAG = int(0x20000);
static const int PSN_FLAG = int(0x40000);
static const int CLFLSH_FLAG = int(0x80000);
static const int BIT_20_FLAG = int(0x100000);
static const int DS_FLAG = int(0x200000);
static const int ACPI_FLAG = int(0x400000);
static const int MMX_FLAG = int(0x800000);
static const int FXSR_FLAG = int(0x1000000);
static const int SSE_FLAG = int(0x2000000);
static const int SSE2_FLAG = int(0x4000000);
static const int SS_FLAG = int(0x8000000);
static const int HTT_FLAG = int(0x10000000);
static const int TM_FLAG = int(0x20000000);
static const int BIT_30_FLAG = int(0x40000000);
static const unsigned PBE_FLAG = unsigned(0x80000000);
static const System::Int8 INTEL_FPU = System::Int8(0x1);
static const System::Int8 INTEL_VME = System::Int8(0x2);
static const System::Int8 INTEL_DE = System::Int8(0x4);
static const System::Int8 INTEL_PSE = System::Int8(0x8);
static const System::Int8 INTEL_TSC = System::Int8(0x10);
static const System::Int8 INTEL_MSR = System::Int8(0x20);
static const System::Int8 INTEL_PAE = System::Int8(0x40);
static const System::Byte INTEL_MCE = System::Byte(0x80);
static const System::Word INTEL_CX8 = System::Word(0x100);
static const System::Word INTEL_APIC = System::Word(0x200);
static const System::Word INTEL_BIT_10 = System::Word(0x400);
static const System::Word INTEL_SEP = System::Word(0x800);
static const System::Word INTEL_MTRR = System::Word(0x1000);
static const System::Word INTEL_PGE = System::Word(0x2000);
static const System::Word INTEL_MCA = System::Word(0x4000);
static const System::Word INTEL_CMOV = System::Word(0x8000);
static const int INTEL_PAT = int(0x10000);
static const int INTEL_PSE36 = int(0x20000);
static const int INTEL_PSN = int(0x40000);
static const int INTEL_CLFLSH = int(0x80000);
static const int INTEL_BIT_20 = int(0x100000);
static const int INTEL_DS = int(0x200000);
static const int INTEL_ACPI = int(0x400000);
static const int INTEL_MMX = int(0x800000);
static const int INTEL_FXSR = int(0x1000000);
static const int INTEL_SSE = int(0x2000000);
static const int INTEL_SSE2 = int(0x4000000);
static const int INTEL_SS = int(0x8000000);
static const int INTEL_HTT = int(0x10000000);
static const int INTEL_TM = int(0x20000000);
static const int INTEL_IA64 = int(0x40000000);
static const unsigned INTEL_PBE = unsigned(0x80000000);
static const System::Int8 EINTEL_SSE3 = System::Int8(0x1);
static const System::Int8 EINTEL_PCLMULQDQ = System::Int8(0x2);
static const System::Int8 EINTEL_DTES64 = System::Int8(0x4);
static const System::Int8 EINTEL_MONITOR = System::Int8(0x8);
static const System::Int8 EINTEL_DSCPL = System::Int8(0x10);
static const System::Int8 EINTEL_VMX = System::Int8(0x20);
static const System::Int8 EINTEL_SMX = System::Int8(0x40);
static const System::Byte EINTEL_EST = System::Byte(0x80);
static const System::Word EINTEL_TM2 = System::Word(0x100);
static const System::Word EINTEL_SSSE3 = System::Word(0x200);
static const System::Word EINTEL_CNXTID = System::Word(0x400);
static const System::Word EINTEL_BIT_11 = System::Word(0x800);
static const System::Word EINTEL_FMA = System::Word(0x1000);
static const System::Word EINTEL_CX16 = System::Word(0x2000);
static const System::Word EINTEL_XTPR = System::Word(0x4000);
static const System::Word EINTEL_PDCM = System::Word(0x8000);
static const int EINTEL_BIT_16 = int(0x10000);
static const int EINTEL_PCID = int(0x20000);
static const int EINTEL_DCA = int(0x40000);
static const int EINTEL_SSE4_1 = int(0x80000);
static const int EINTEL_SSE4_2 = int(0x100000);
static const int EINTEL_X2APIC = int(0x200000);
static const int EINTEL_MOVBE = int(0x400000);
static const int EINTEL_POPCNT = int(0x800000);
static const int EINTEL_TSC_DL = int(0x1000000);
static const int EINTEL_AES = int(0x2000000);
static const int EINTEL_XSAVE = int(0x4000000);
static const int EINTEL_OSXSAVE = int(0x8000000);
static const int EINTEL_AVX = int(0x10000000);
static const int EINTEL_BIT_29 = int(0x20000000);
static const int EINTEL_RDRAND = int(0x40000000);
static const unsigned EINTEL_BIT_31 = unsigned(0x80000000);
static const System::Int8 EINTEL64_BIT_0 = System::Int8(0x1);
static const System::Int8 EINTEL64_BIT_1 = System::Int8(0x2);
static const System::Int8 EINTEL64_BIT_2 = System::Int8(0x4);
static const System::Int8 EINTEL64_BIT_3 = System::Int8(0x8);
static const System::Int8 EINTEL64_BIT_4 = System::Int8(0x10);
static const System::Int8 EINTEL64_BIT_5 = System::Int8(0x20);
static const System::Int8 EINTEL64_BIT_6 = System::Int8(0x40);
static const System::Byte EINTEL64_BIT_7 = System::Byte(0x80);
static const System::Word EINTEL64_BIT_8 = System::Word(0x100);
static const System::Word EINTEL64_BIT_9 = System::Word(0x200);
static const System::Word EINTEL64_BIT_10 = System::Word(0x400);
static const System::Word EINTEL64_SYS = System::Word(0x800);
static const System::Word EINTEL64_BIT_12 = System::Word(0x1000);
static const System::Word EINTEL64_BIT_13 = System::Word(0x2000);
static const System::Word EINTEL64_BIT_14 = System::Word(0x4000);
static const System::Word EINTEL64_BIT_15 = System::Word(0x8000);
static const int EINTEL64_BIT_16 = int(0x10000);
static const int EINTEL64_BIT_17 = int(0x20000);
static const int EINTEL64_BIT_18 = int(0x40000);
static const int EINTEL64_BIT_19 = int(0x80000);
static const int EINTEL64_XD = int(0x100000);
static const int EINTEL64_BIT_21 = int(0x200000);
static const int EINTEL64_BIT_22 = int(0x400000);
static const int EINTEL64_BIT_23 = int(0x800000);
static const int EINTEL64_BIT_24 = int(0x1000000);
static const int EINTEL64_BIT_25 = int(0x2000000);
static const int EINTEL64_1GBYTE = int(0x4000000);
static const int EINTEL64_RDTSCP = int(0x8000000);
static const int EINTEL64_BIT_28 = int(0x10000000);
static const int EINTEL64_EM64T = int(0x20000000);
static const int EINTEL64_BIT_30 = int(0x40000000);
static const unsigned EINTEL64_BIT_31 = unsigned(0x80000000);
static const System::Int8 EINTEL64_2_LAHF = System::Int8(0x1);
static const System::Int8 EINTEL64_2_BIT_1 = System::Int8(0x2);
static const System::Int8 EINTEL64_2_BIT_2 = System::Int8(0x4);
static const System::Int8 EINTEL64_2_BIT_3 = System::Int8(0x8);
static const System::Int8 EINTEL64_2_BIT_4 = System::Int8(0x10);
static const System::Int8 EINTEL64_2_BIT_5 = System::Int8(0x20);
static const System::Int8 EINTEL64_2_BIT_6 = System::Int8(0x40);
static const System::Byte EINTEL64_2_BIT_7 = System::Byte(0x80);
static const System::Word EINTEL64_2_BIT_8 = System::Word(0x100);
static const System::Word EINTEL64_2_BIT_9 = System::Word(0x200);
static const System::Word EINTEL64_2_BIT_10 = System::Word(0x400);
static const System::Word EINTEL64_2_BIT_11 = System::Word(0x800);
static const System::Word EINTEL64_2_BIT_12 = System::Word(0x1000);
static const System::Word EINTEL64_2_BIT_13 = System::Word(0x2000);
static const System::Word EINTEL64_2_BIT_14 = System::Word(0x4000);
static const System::Word EINTEL64_2_BIT_15 = System::Word(0x8000);
static const int EINTEL64_2_BIT_16 = int(0x10000);
static const int EINTEL64_2_BIT_17 = int(0x20000);
static const int EINTEL64_2_BIT_18 = int(0x40000);
static const int EINTEL64_2_BIT_19 = int(0x80000);
static const int EINTEL64_2_BIT_20 = int(0x100000);
static const int EINTEL64_2_BIT_21 = int(0x200000);
static const int EINTEL64_2_BIT_22 = int(0x400000);
static const int EINTEL64_2_BIT_23 = int(0x800000);
static const int EINTEL64_2_BIT_24 = int(0x1000000);
static const int EINTEL64_2_BIT_25 = int(0x2000000);
static const int EINTEL64_2_BIT_26 = int(0x4000000);
static const int EINTEL64_2_BIT_27 = int(0x8000000);
static const int EINTEL64_2_BIT_28 = int(0x10000000);
static const int EINTEL64_2_BIT_29 = int(0x20000000);
static const int EINTEL64_2_BIT_30 = int(0x40000000);
static const unsigned EINTEL64_2_BIT_31 = unsigned(0x80000000);
static const System::Int8 PINTEL_TEMPSENSOR = System::Int8(0x1);
static const System::Int8 PINTEL_TURBOBOOST = System::Int8(0x2);
static const System::Int8 PINTEL_ARAT = System::Int8(0x4);
static const System::Int8 PINTEL_BIT_3 = System::Int8(0x8);
static const System::Int8 PINTEL_PLN = System::Int8(0x10);
static const System::Int8 PINTEL_ECMD = System::Int8(0x20);
static const System::Int8 PINTEL_PTM = System::Int8(0x40);
static const System::Byte PINTEL_BIT_7 = System::Byte(0x80);
static const System::Word PINTEL_BIT_8 = System::Word(0x100);
static const System::Word PINTEL_BIT_9 = System::Word(0x200);
static const System::Word PINTEL_BIT_10 = System::Word(0x400);
static const System::Word PINTEL_BIT_11 = System::Word(0x800);
static const System::Word PINTEL_BIT_12 = System::Word(0x1000);
static const System::Word PINTEL_BIT_13 = System::Word(0x2000);
static const System::Word PINTEL_BIT_14 = System::Word(0x4000);
static const System::Word PINTEL_BIT_15 = System::Word(0x8000);
static const int PINTEL_BIT_16 = int(0x10000);
static const int PINTEL_BIT_17 = int(0x20000);
static const int PINTEL_BIT_18 = int(0x40000);
static const int PINTEL_BIT_19 = int(0x80000);
static const int PINTEL_BIT_20 = int(0x100000);
static const int PINTEL_BIT_21 = int(0x200000);
static const int PINTEL_BIT_22 = int(0x400000);
static const int PINTEL_BIT_23 = int(0x800000);
static const int PINTEL_BIT_24 = int(0x1000000);
static const int PINTEL_BIT_25 = int(0x2000000);
static const int PINTEL_BIT_26 = int(0x4000000);
static const int PINTEL_BIT_27 = int(0x8000000);
static const int PINTEL_BIT_28 = int(0x10000000);
static const int PINTEL_BIT_29 = int(0x20000000);
static const int PINTEL_BIT_30 = int(0x40000000);
static const unsigned PINTEL_BIT_31 = unsigned(0x80000000);
static const System::Int8 AMD_FPU = System::Int8(0x1);
static const System::Int8 AMD_VME = System::Int8(0x2);
static const System::Int8 AMD_DE = System::Int8(0x4);
static const System::Int8 AMD_PSE = System::Int8(0x8);
static const System::Int8 AMD_TSC = System::Int8(0x10);
static const System::Int8 AMD_MSR = System::Int8(0x20);
static const System::Int8 AMD_PAE = System::Int8(0x40);
static const System::Byte AMD_MCE = System::Byte(0x80);
static const System::Word AMD_CX8 = System::Word(0x100);
static const System::Word AMD_APIC = System::Word(0x200);
static const System::Word AMD_BIT_10 = System::Word(0x400);
static const System::Word AMD_SEP_BIT = System::Word(0x800);
static const System::Word AMD_MTRR = System::Word(0x1000);
static const System::Word AMD_PGE = System::Word(0x2000);
static const System::Word AMD_MCA = System::Word(0x4000);
static const System::Word AMD_CMOV = System::Word(0x8000);
static const int AMD_PAT = int(0x10000);
static const int AMD_PSE36 = int(0x20000);
static const int AMD_BIT_18 = int(0x40000);
static const int AMD_CLFLSH = int(0x80000);
static const int AMD_BIT_20 = int(0x100000);
static const int AMD_BIT_21 = int(0x200000);
static const int AMD_BIT_22 = int(0x400000);
static const int AMD_MMX = int(0x800000);
static const int AMD_FXSR = int(0x1000000);
static const int AMD_SSE = int(0x2000000);
static const int AMD_SSE2 = int(0x4000000);
static const int AMD_BIT_27 = int(0x8000000);
static const int AMD_HTT = int(0x10000000);
static const int AMD_BIT_29 = int(0x20000000);
static const int AMD_BIT_30 = int(0x40000000);
static const unsigned AMD_BIT_31 = unsigned(0x80000000);
static const System::Int8 AMD2_SSE3 = System::Int8(0x1);
static const System::Int8 AMD2_PCLMULQDQ = System::Int8(0x2);
static const System::Int8 AMD2_BIT_2 = System::Int8(0x4);
static const System::Int8 AMD2_MONITOR = System::Int8(0x8);
static const System::Int8 AMD2_BIT_4 = System::Int8(0x10);
static const System::Int8 AMD2_BIT_5 = System::Int8(0x20);
static const System::Int8 AMD2_BIT_6 = System::Int8(0x40);
static const System::Byte AMD2_BIT_7 = System::Byte(0x80);
static const System::Word AMD2_BIT_8 = System::Word(0x100);
static const System::Word AMD2_SSSE3 = System::Word(0x200);
static const System::Word AMD2_BIT_10 = System::Word(0x400);
static const System::Word AMD2_BIT_11 = System::Word(0x800);
static const System::Word AMD2_FMA = System::Word(0x1000);
static const System::Word AMD2_CMPXCHG16B = System::Word(0x2000);
static const System::Word AMD2_BIT_14 = System::Word(0x4000);
static const System::Word AMD2_BIT_15 = System::Word(0x8000);
static const int AMD2_BIT_16 = int(0x10000);
static const int AMD2_BIT_17 = int(0x20000);
static const int AMD2_BIT_18 = int(0x40000);
static const int AMD2_SSE41 = int(0x80000);
static const int AMD2_SSE42 = int(0x100000);
static const int AMD2_BIT_21 = int(0x200000);
static const int AMD2_BIT_22 = int(0x400000);
static const int AMD2_POPCNT = int(0x800000);
static const int AMD2_BIT_24 = int(0x1000000);
static const int AMD2_AES = int(0x2000000);
static const int AMD2_XSAVE = int(0x4000000);
static const int AMD2_OSXSAVE = int(0x8000000);
static const int AMD2_AVX = int(0x10000000);
static const int AMD2_F16C = int(0x20000000);
static const int AMD2_BIT_30 = int(0x40000000);
static const unsigned AMD2_RAZ = unsigned(0x80000000);
static const System::Int8 EAMD_FPU = System::Int8(0x1);
static const System::Int8 EAMD_VME = System::Int8(0x2);
static const System::Int8 EAMD_DE = System::Int8(0x4);
static const System::Int8 EAMD_PSE = System::Int8(0x8);
static const System::Int8 EAMD_TSC = System::Int8(0x10);
static const System::Int8 EAMD_MSR = System::Int8(0x20);
static const System::Int8 EAMD_PAE = System::Int8(0x40);
static const System::Byte EAMD_MCE = System::Byte(0x80);
static const System::Word EAMD_CX8 = System::Word(0x100);
static const System::Word EAMD_APIC = System::Word(0x200);
static const System::Word EAMD_BIT_10 = System::Word(0x400);
static const System::Word EAMD_SEP = System::Word(0x800);
static const System::Word EAMD_MTRR = System::Word(0x1000);
static const System::Word EAMD_PGE = System::Word(0x2000);
static const System::Word EAMD_MCA = System::Word(0x4000);
static const System::Word EAMD_CMOV = System::Word(0x8000);
static const int EAMD_PAT = int(0x10000);
static const int EAMD_PSE2 = int(0x20000);
static const int EAMD_BIT_18 = int(0x40000);
static const int EAMD_BIT_19 = int(0x80000);
static const int EAMD_NX = int(0x100000);
static const int EAMD_BIT_21 = int(0x200000);
static const int EAMD_EXMMX = int(0x400000);
static const int EAMD_MMX = int(0x800000);
static const int EAMD_FX = int(0x1000000);
static const int EAMD_FFX = int(0x2000000);
static const int EAMD_1GBPAGE = int(0x4000000);
static const int EAMD_RDTSCP = int(0x8000000);
static const int EAMD_BIT_28 = int(0x10000000);
static const int EAMD_LONG = int(0x20000000);
static const int EAMD_EX3DNOW = int(0x40000000);
static const unsigned EAMD_3DNOW = unsigned(0x80000000);
static const System::Int8 EAMD2_LAHF = System::Int8(0x1);
static const System::Int8 EAMD2_CMPLEGACY = System::Int8(0x2);
static const System::Int8 EAMD2_SVM = System::Int8(0x4);
static const System::Int8 EAMD2_EXTAPICSPACE = System::Int8(0x8);
static const System::Int8 EAMD2_ALTMOVCR8 = System::Int8(0x10);
static const System::Int8 EAMD2_ABM = System::Int8(0x20);
static const System::Int8 EAMD2_SSE4A = System::Int8(0x40);
static const System::Byte EAMD2_MISALIGNSSE = System::Byte(0x80);
static const System::Word EAMD2_3DNOWPREFETCH = System::Word(0x100);
static const System::Word EAMD2_OSVW = System::Word(0x200);
static const System::Word EAMD2_IBS = System::Word(0x400);
static const System::Word EAMD2_XOP = System::Word(0x800);
static const System::Word EAMD2_SKINIT = System::Word(0x1000);
static const System::Word EAMD2_WDT = System::Word(0x2000);
static const System::Word EAMD2_BIT_14 = System::Word(0x4000);
static const System::Word EAMD2_LWP = System::Word(0x8000);
static const int EAMD2_FMA4 = int(0x10000);
static const int EAMD2_BIT_17 = int(0x20000);
static const int EAMD2_BIT_18 = int(0x40000);
static const int EAMD2_NODEID = int(0x80000);
static const int EAMD2_BIT_20 = int(0x100000);
static const int EAMD2_TBM = int(0x200000);
static const int EAMD2_TOPOLOGYEXT = int(0x400000);
static const int EAMD2_BIT_23 = int(0x800000);
static const int EAMD2_BIT_24 = int(0x1000000);
static const int EAMD2_BIT_25 = int(0x2000000);
static const int EAMD2_BIT_26 = int(0x4000000);
static const int EAMD2_BIT_27 = int(0x8000000);
static const int EAMD2_BIT_28 = int(0x10000000);
static const int EAMD2_BIT_29 = int(0x20000000);
static const int EAMD2_BIT_30 = int(0x40000000);
static const unsigned EAMD2_BIT_31 = unsigned(0x80000000);
static const System::Int8 PAMD_TEMPSENSOR = System::Int8(0x1);
static const System::Int8 PAMD_FREQUENCYID = System::Int8(0x2);
static const System::Int8 PAMD_VOLTAGEID = System::Int8(0x4);
static const System::Int8 PAMD_THERMALTRIP = System::Int8(0x8);
static const System::Int8 PAMD_THERMALMONITOR = System::Int8(0x10);
static const System::Int8 PAMD_BIT_5 = System::Int8(0x20);
static const System::Int8 PAMD_100MHZSTEP = System::Int8(0x40);
static const System::Byte PAMD_HWPSTATE = System::Byte(0x80);
static const System::Word PAMD_TSC_INVARIANT = System::Word(0x100);
static const System::Word PAMD_CPB = System::Word(0x200);
static const System::Word PAMD_EFFFREQRO = System::Word(0x400);
static const System::Word PAMD_BIT_11 = System::Word(0x800);
static const System::Word PAMD_BIT_12 = System::Word(0x1000);
static const System::Word PAMD_BIT_13 = System::Word(0x2000);
static const System::Word PAMD_BIT_14 = System::Word(0x4000);
static const System::Word PAMD_BIT_15 = System::Word(0x8000);
static const int PAMD_BIT_16 = int(0x10000);
static const int PAMD_BIT_17 = int(0x20000);
static const int PAMD_BIT_18 = int(0x40000);
static const int PAMD_BIT_19 = int(0x80000);
static const int PAMD_BIT_20 = int(0x100000);
static const int PAMD_BIT_21 = int(0x200000);
static const int PAMD_BIT_22 = int(0x400000);
static const int PAMD_BIT_23 = int(0x800000);
static const int PAMD_BIT_24 = int(0x1000000);
static const int PAMD_BIT_25 = int(0x2000000);
static const int PAMD_BIT_26 = int(0x4000000);
static const int PAMD_BIT_27 = int(0x8000000);
static const int PAMD_BIT_28 = int(0x10000000);
static const int PAMD_BIT_29 = int(0x20000000);
static const int PAMD_BIT_30 = int(0x40000000);
static const unsigned PAMD_BIT_31 = unsigned(0x80000000);
static const System::Int8 AMD_ASSOC_RESERVED = System::Int8(0x0);
static const System::Int8 AMD_ASSOC_DIRECT = System::Int8(0x1);
static const System::Byte AMD_ASSOC_FULLY = System::Byte(0xff);
static const System::Int8 AMD_L2_ASSOC_DISABLED = System::Int8(0x0);
static const System::Int8 AMD_L2_ASSOC_DIRECT = System::Int8(0x1);
static const System::Int8 AMD_L2_ASSOC_2WAY = System::Int8(0x2);
static const System::Int8 AMD_L2_ASSOC_4WAY = System::Int8(0x4);
static const System::Int8 AMD_L2_ASSOC_8WAY = System::Int8(0x6);
static const System::Int8 AMD_L2_ASSOC_16WAY = System::Int8(0x8);
static const System::Int8 AMD_L2_ASSOC_32WAY = System::Int8(0xa);
static const System::Int8 AMD_L2_ASSOC_48WAY = System::Int8(0xb);
static const System::Int8 AMD_L2_ASSOC_64WAY = System::Int8(0xc);
static const System::Int8 AMD_L2_ASSOC_96WAY = System::Int8(0xd);
static const System::Int8 AMD_L2_ASSOC_128WAY = System::Int8(0xe);
static const System::Int8 AMD_L2_ASSOC_FULLY = System::Int8(0xf);
static const System::Int8 VIA_FPU = System::Int8(0x1);
static const System::Int8 VIA_VME = System::Int8(0x2);
static const System::Int8 VIA_DE = System::Int8(0x4);
static const System::Int8 VIA_PSE = System::Int8(0x8);
static const System::Int8 VIA_TSC = System::Int8(0x10);
static const System::Int8 VIA_MSR = System::Int8(0x20);
static const System::Int8 VIA_PAE = System::Int8(0x40);
static const System::Byte VIA_MCE = System::Byte(0x80);
static const System::Word VIA_CX8 = System::Word(0x100);
static const System::Word VIA_APIC = System::Word(0x200);
static const System::Word VIA_BIT_10 = System::Word(0x400);
static const System::Word VIA_SEP = System::Word(0x800);
static const System::Word VIA_MTRR = System::Word(0x1000);
static const System::Word VIA_PTE = System::Word(0x2000);
static const System::Word VIA_MCA = System::Word(0x4000);
static const System::Word VIA_CMOVE = System::Word(0x8000);
static const int VIA_PAT = int(0x10000);
static const int VIA_PSE2 = int(0x20000);
static const int VIA_SNUM = int(0x40000);
static const int VIA_BIT_19 = int(0x80000);
static const int VIA_BIT_20 = int(0x100000);
static const int VIA_BIT_21 = int(0x200000);
static const int VIA_BIT_22 = int(0x400000);
static const int VIA_MMX = int(0x800000);
static const int VIA_FX = int(0x1000000);
static const int VIA_SSE = int(0x2000000);
static const int VIA_BIT_26 = int(0x4000000);
static const int VIA_BIT_27 = int(0x8000000);
static const int VIA_BIT_28 = int(0x10000000);
static const int VIA_BIT_29 = int(0x20000000);
static const int VIA_BIT_30 = int(0x40000000);
static const unsigned VIA_3DNOW = unsigned(0x80000000);
static const System::Int8 EVIA_AIS = System::Int8(0x1);
static const System::Int8 EVIA_AISE = System::Int8(0x2);
static const System::Int8 EVIA_NO_RNG = System::Int8(0x4);
static const System::Int8 EVIA_RNGE = System::Int8(0x8);
static const System::Int8 EVIA_MSR = System::Int8(0x10);
static const System::Int8 EVIA_FEMMS = System::Int8(0x20);
static const System::Int8 EVIA_NO_ACE = System::Int8(0x40);
static const System::Byte EVIA_ACEE = System::Byte(0x80);
static const System::Word EVIA_BIT_8 = System::Word(0x100);
static const System::Word EVIA_BIT_9 = System::Word(0x200);
static const System::Word EVIA_BIT_10 = System::Word(0x400);
static const System::Word EVIA_BIT_11 = System::Word(0x800);
static const System::Word EVIA_BIT_12 = System::Word(0x1000);
static const System::Word EVIA_BIT_13 = System::Word(0x2000);
static const System::Word EVIA_BIT_14 = System::Word(0x4000);
static const System::Word EVIA_BIT_15 = System::Word(0x8000);
static const int EVIA_BIT_16 = int(0x10000);
static const int EVIA_BIT_17 = int(0x20000);
static const int EVIA_BIT_18 = int(0x40000);
static const int EVIA_BIT_19 = int(0x80000);
static const int EVIA_BIT_20 = int(0x100000);
static const int EVIA_BIT_21 = int(0x200000);
static const int EVIA_BIT_22 = int(0x400000);
static const int EVIA_BIT_23 = int(0x800000);
static const int EVIA_BIT_24 = int(0x1000000);
static const int EVIA_BIT_25 = int(0x2000000);
static const int EVIA_BIT_26 = int(0x4000000);
static const int EVIA_BIT_27 = int(0x8000000);
static const int EVIA_BIT_28 = int(0x10000000);
static const int EVIA_BIT_29 = int(0x20000000);
static const int EVIA_BIT_30 = int(0x40000000);
static const unsigned EVIA_BIT_31 = unsigned(0x80000000);
static const System::Int8 CYRIX_FPU = System::Int8(0x1);
static const System::Int8 CYRIX_VME = System::Int8(0x2);
static const System::Int8 CYRIX_DE = System::Int8(0x4);
static const System::Int8 CYRIX_PSE = System::Int8(0x8);
static const System::Int8 CYRIX_TSC = System::Int8(0x10);
static const System::Int8 CYRIX_MSR = System::Int8(0x20);
static const System::Int8 CYRIX_PAE = System::Int8(0x40);
static const System::Byte CYRIX_MCE = System::Byte(0x80);
static const System::Word CYRIX_CX8 = System::Word(0x100);
static const System::Word CYRIX_APIC = System::Word(0x200);
static const System::Word CYRIX_BIT_10 = System::Word(0x400);
static const System::Word CYRIX_BIT_11 = System::Word(0x800);
static const System::Word CYRIX_MTRR = System::Word(0x1000);
static const System::Word CYRIX_PGE = System::Word(0x2000);
static const System::Word CYRIX_MCA = System::Word(0x4000);
static const System::Word CYRIX_CMOV = System::Word(0x8000);
static const int CYRIX_BIT_16 = int(0x10000);
static const int CYRIX_BIT_17 = int(0x20000);
static const int CYRIX_BIT_18 = int(0x40000);
static const int CYRIX_BIT_19 = int(0x80000);
static const int CYRIX_BIT_20 = int(0x100000);
static const int CYRIX_BIT_21 = int(0x200000);
static const int CYRIX_BIT_22 = int(0x400000);
static const int CYRIX_MMX = int(0x800000);
static const int CYRIX_BIT_24 = int(0x1000000);
static const int CYRIX_BIT_25 = int(0x2000000);
static const int CYRIX_BIT_26 = int(0x4000000);
static const int CYRIX_BIT_27 = int(0x8000000);
static const int CYRIX_BIT_28 = int(0x10000000);
static const int CYRIX_BIT_29 = int(0x20000000);
static const int CYRIX_BIT_30 = int(0x40000000);
static const unsigned CYRIX_BIT_31 = unsigned(0x80000000);
static const System::Int8 ECYRIX_FPU = System::Int8(0x1);
static const System::Int8 ECYRIX_VME = System::Int8(0x2);
static const System::Int8 ECYRIX_DE = System::Int8(0x4);
static const System::Int8 ECYRIX_PSE = System::Int8(0x8);
static const System::Int8 ECYRIX_TSC = System::Int8(0x10);
static const System::Int8 ECYRIX_MSR = System::Int8(0x20);
static const System::Int8 ECYRIX_PAE = System::Int8(0x40);
static const System::Byte ECYRIX_MCE = System::Byte(0x80);
static const System::Word ECYRIX_CX8 = System::Word(0x100);
static const System::Word ECYRIX_APIC = System::Word(0x200);
static const System::Word ECYRIX_SEP = System::Word(0x400);
static const System::Word ECYRIX_BIT_11 = System::Word(0x800);
static const System::Word ECYRIX_MTRR = System::Word(0x1000);
static const System::Word ECYRIX_PGE = System::Word(0x2000);
static const System::Word ECYRIX_MCA = System::Word(0x4000);
static const System::Word ECYRIX_ICMOV = System::Word(0x8000);
static const int ECYRIX_FCMOV = int(0x10000);
static const int ECYRIX_BIT_17 = int(0x20000);
static const int ECYRIX_BIT_18 = int(0x40000);
static const int ECYRIX_BIT_19 = int(0x80000);
static const int ECYRIX_BIT_20 = int(0x100000);
static const int ECYRIX_BIT_21 = int(0x200000);
static const int ECYRIX_BIT_22 = int(0x400000);
static const int ECYRIX_MMX = int(0x800000);
static const int ECYRIX_EMMX = int(0x1000000);
static const int ECYRIX_BIT_25 = int(0x2000000);
static const int ECYRIX_BIT_26 = int(0x4000000);
static const int ECYRIX_BIT_27 = int(0x8000000);
static const int ECYRIX_BIT_28 = int(0x10000000);
static const int ECYRIX_BIT_29 = int(0x20000000);
static const int ECYRIX_BIT_30 = int(0x40000000);
static const unsigned ECYRIX_BIT_31 = unsigned(0x80000000);
static const System::Int8 TRANSMETA_FPU = System::Int8(0x1);
static const System::Int8 TRANSMETA_VME = System::Int8(0x2);
static const System::Int8 TRANSMETA_DE = System::Int8(0x4);
static const System::Int8 TRANSMETA_PSE = System::Int8(0x8);
static const System::Int8 TRANSMETA_TSC = System::Int8(0x10);
static const System::Int8 TRANSMETA_MSR = System::Int8(0x20);
static const System::Int8 TRANSMETA_BIT_6 = System::Int8(0x40);
static const System::Byte TRANSMETA_BIT_7 = System::Byte(0x80);
static const System::Word TRANSMETA_CX8 = System::Word(0x100);
static const System::Word TRANSMETA_BIT_9 = System::Word(0x200);
static const System::Word TRANSMETA_BIT_10 = System::Word(0x400);
static const System::Word TRANSMETA_SEP = System::Word(0x800);
static const System::Word TRANSMETA_BIT_12 = System::Word(0x1000);
static const System::Word TRANSMETA_BIT_13 = System::Word(0x2000);
static const System::Word TRANSMETA_BIT_14 = System::Word(0x4000);
static const System::Word TRANSMETA_CMOV = System::Word(0x8000);
static const int TRANSMETA_BIT_16 = int(0x10000);
static const int TRANSMETA_BIT_17 = int(0x20000);
static const int TRANSMETA_PSN = int(0x40000);
static const int TRANSMETA_BIT_19 = int(0x80000);
static const int TRANSMETA_BIT_20 = int(0x100000);
static const int TRANSMETA_BIT_21 = int(0x200000);
static const int TRANSMETA_BIT_22 = int(0x400000);
static const int TRANSMETA_MMX = int(0x800000);
static const int TRANSMETA_BIT_24 = int(0x1000000);
static const int TRANSMETA_BIT_25 = int(0x2000000);
static const int TRANSMETA_BIT_26 = int(0x4000000);
static const int TRANSMETA_BIT_27 = int(0x8000000);
static const int TRANSMETA_BIT_28 = int(0x10000000);
static const int TRANSMETA_BIT_29 = int(0x20000000);
static const int TRANSMETA_BIT_30 = int(0x40000000);
static const unsigned TRANSMETA_BIT_31 = unsigned(0x80000000);
static const System::Int8 ETRANSMETA_FPU = System::Int8(0x1);
static const System::Int8 ETRANSMETA_VME = System::Int8(0x2);
static const System::Int8 ETRANSMETA_DE = System::Int8(0x4);
static const System::Int8 ETRANSMETA_PSE = System::Int8(0x8);
static const System::Int8 ETRANSMETA_TSC = System::Int8(0x10);
static const System::Int8 ETRANSMETA_MSR = System::Int8(0x20);
static const System::Int8 ETRANSMETA_BIT_6 = System::Int8(0x40);
static const System::Byte ETRANSMETA_BIT_7 = System::Byte(0x80);
static const System::Word ETRANSMETA_CX8 = System::Word(0x100);
static const System::Word ETRANSMETA_BIT_9 = System::Word(0x200);
static const System::Word ETRANSMETA_BIT_10 = System::Word(0x400);
static const System::Word ETRANSMETA_BIT_11 = System::Word(0x800);
static const System::Word ETRANSMETA_BIT_12 = System::Word(0x1000);
static const System::Word ETRANSMETA_BIT_13 = System::Word(0x2000);
static const System::Word ETRANSMETA_BIT_14 = System::Word(0x4000);
static const System::Word ETRANSMETA_CMOV = System::Word(0x8000);
static const int ETRANSMETA_FCMOV = int(0x10000);
static const int ETRANSMETA_BIT_17 = int(0x20000);
static const int ETRANSMETA_BIT_18 = int(0x40000);
static const int ETRANSMETA_BIT_19 = int(0x80000);
static const int ETRANSMETA_BIT_20 = int(0x100000);
static const int ETRANSMETA_BIT_21 = int(0x200000);
static const int ETRANSMETA_BIT_22 = int(0x400000);
static const int ETRANSMETA_MMX = int(0x800000);
static const int ETRANSMETA_BIT_24 = int(0x1000000);
static const int ETRANSMETA_BIT_25 = int(0x2000000);
static const int ETRANSMETA_BIT_26 = int(0x4000000);
static const int ETRANSMETA_BIT_27 = int(0x8000000);
static const int ETRANSMETA_BIT_28 = int(0x10000000);
static const int ETRANSMETA_BIT_29 = int(0x20000000);
static const int ETRANSMETA_BIT_30 = int(0x40000000);
static const unsigned ETRANSMETA_BIT_31 = unsigned(0x80000000);
static const System::Int8 STRANSMETA_RECOVERY = System::Int8(0x1);
static const System::Int8 STRANSMETA_LONGRUN = System::Int8(0x2);
static const System::Int8 STRANSMETA_BIT_2 = System::Int8(0x4);
static const System::Int8 STRANSMETA_LRTI = System::Int8(0x8);
static const System::Int8 STRANSMETA_BIT_4 = System::Int8(0x10);
static const System::Int8 STRANSMETA_BIT_5 = System::Int8(0x20);
static const System::Int8 STRANSMETA_BIT_6 = System::Int8(0x40);
static const System::Byte STRANSMETA_PTTI1 = System::Byte(0x80);
static const System::Word STRANSMETA_PTTI2 = System::Word(0x100);
static const System::Word STRANSMETA_BIT_9 = System::Word(0x200);
static const System::Word STRANSMETA_BIT_10 = System::Word(0x400);
static const System::Word STRANSMETA_BIT_11 = System::Word(0x800);
static const System::Word STRANSMETA_BIT_12 = System::Word(0x1000);
static const System::Word STRANSMETA_BIT_13 = System::Word(0x2000);
static const System::Word STRANSMETA_BIT_14 = System::Word(0x4000);
static const System::Word STRANSMETA_BIT_15 = System::Word(0x8000);
static const int STRANSMETA_BIT_16 = int(0x10000);
static const int STRANSMETA_BIT_17 = int(0x20000);
static const int STRANSMETA_BIT_18 = int(0x40000);
static const int STRANSMETA_BIT_19 = int(0x80000);
static const int STRANSMETA_BIT_20 = int(0x100000);
static const int STRANSMETA_BIT_21 = int(0x200000);
static const int STRANSMETA_BIT_22 = int(0x400000);
static const int STRANSMETA_BIT_23 = int(0x800000);
static const int STRANSMETA_BIT_24 = int(0x1000000);
static const int STRANSMETA_BIT_25 = int(0x2000000);
static const int STRANSMETA_BIT_26 = int(0x4000000);
static const int STRANSMETA_BIT_27 = int(0x8000000);
static const int STRANSMETA_BIT_28 = int(0x10000000);
static const int STRANSMETA_BIT_29 = int(0x20000000);
static const int STRANSMETA_BIT_30 = int(0x40000000);
static const unsigned STRANSMETA_BIT_31 = unsigned(0x80000000);
static const System::Int8 MXCSR_IE = System::Int8(0x1);
static const System::Int8 MXCSR_DE = System::Int8(0x2);
static const System::Int8 MXCSR_ZE = System::Int8(0x4);
static const System::Int8 MXCSR_OE = System::Int8(0x8);
static const System::Int8 MXCSR_UE = System::Int8(0x10);
static const System::Int8 MXCSR_PE = System::Int8(0x20);
static const System::Int8 MXCSR_DAZ = System::Int8(0x40);
static const System::Byte MXCSR_IM = System::Byte(0x80);
static const System::Word MXCSR_DM = System::Word(0x100);
static const System::Word MXCSR_ZM = System::Word(0x200);
static const System::Word MXCSR_OM = System::Word(0x400);
static const System::Word MXCSR_UM = System::Word(0x800);
static const System::Word MXCSR_PM = System::Word(0x1000);
static const System::Word MXCSR_RC1 = System::Word(0x2000);
static const System::Word MXCSR_RC2 = System::Word(0x4000);
static const System::Word MXCSR_RC = System::Word(0x6000);
static const System::Word MXCSR_FZ = System::Word(0x8000);
extern DELPHI_PACKAGE System::StaticArray<TCacheInfo, 103> IntelCacheDescription;
extern DELPHI_PACKAGE unsigned ProcessorCount;
extern DELPHI_PACKAGE unsigned AllocGranularity;
extern DELPHI_PACKAGE unsigned PageSize;
extern DELPHI_PACKAGE bool __fastcall DelEnvironmentVar(const System::UnicodeString Name);
extern DELPHI_PACKAGE bool __fastcall ExpandEnvironmentVar(System::UnicodeString &Value);
extern DELPHI_PACKAGE bool __fastcall ExpandEnvironmentVarCustom(System::UnicodeString &Value, System::Classes::TStrings* Vars);
extern DELPHI_PACKAGE bool __fastcall GetEnvironmentVar(const System::UnicodeString Name, /* out */ System::UnicodeString &Value)/* overload */;
extern DELPHI_PACKAGE bool __fastcall GetEnvironmentVar(const System::UnicodeString Name, /* out */ System::UnicodeString &Value, bool Expand)/* overload */;
extern DELPHI_PACKAGE bool __fastcall SetEnvironmentVar(const System::UnicodeString Name, const System::UnicodeString Value);
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetCommonFilesFolder(void);
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetCurrentFolder(void);
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetProgramFilesFolder(void);
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetWindowsFolder(void);
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetWindowsSystemFolder(void);
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetWindowsTempFolder(void);
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetDesktopFolder(void);
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetProgramsFolder(void);
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetIPAddress(const System::UnicodeString HostName);
extern DELPHI_PACKAGE void __fastcall GetIpAddresses(System::Classes::TStrings* Results)/* overload */;
extern DELPHI_PACKAGE void __fastcall GetIpAddresses(System::Classes::TStrings* Results, const System::AnsiString HostName)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetLocalComputerName(void);
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetLocalUserName(void);
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetRegisteredCompany(void);
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetRegisteredOwner(void);
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetUserDomainName(const System::UnicodeString CurUser);
extern DELPHI_PACKAGE System::WideString __fastcall GetWorkGroupName(void);
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetDomainName(void);
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetBIOSName(void);
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetBIOSCopyright(void);
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetBIOSExtendedInfo(void);
extern DELPHI_PACKAGE bool __fastcall RunningProcessesList(System::Classes::TStrings* const List, bool FullPath = true);
extern DELPHI_PACKAGE bool __fastcall LoadedModulesList(System::Classes::TStrings* const List, unsigned ProcessID, bool HandlesOnly = false);
extern DELPHI_PACKAGE bool __fastcall GetTasksList(System::Classes::TStrings* const List);
extern DELPHI_PACKAGE NativeUInt __fastcall ModuleFromAddr(const void * Addr);
extern DELPHI_PACKAGE bool __fastcall IsSystemModule(const NativeUInt Module);
extern DELPHI_PACKAGE bool __fastcall IsMainAppWindow(NativeUInt Wnd);
extern DELPHI_PACKAGE bool __fastcall IsWindowResponding(NativeUInt Wnd, int Timeout);
extern DELPHI_PACKAGE HICON __fastcall GetWindowIcon(NativeUInt Wnd, bool LargeIcon);
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetWindowCaption(NativeUInt Wnd);
extern DELPHI_PACKAGE TJclTerminateAppResult __fastcall TerminateApp(unsigned ProcessID, int Timeout);
extern DELPHI_PACKAGE TJclTerminateAppResult __fastcall TerminateTask(NativeUInt Wnd, int Timeout);
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetProcessNameFromWnd(NativeUInt Wnd);
extern DELPHI_PACKAGE NativeUInt __fastcall GetPidFromProcessName(const System::UnicodeString ProcessName);
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetProcessNameFromPid(unsigned PID);
extern DELPHI_PACKAGE NativeUInt __fastcall GetMainAppWndFromPid(unsigned PID);
extern DELPHI_PACKAGE HWND __fastcall GetWndFromPid(unsigned PID, const System::UnicodeString WindowClassName);
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetShellProcessName(void);
extern DELPHI_PACKAGE NativeUInt __fastcall GetShellProcessHandle(void);
extern DELPHI_PACKAGE TWindowsVersion __fastcall GetWindowsVersion(void);
extern DELPHI_PACKAGE TWindowsEdition __fastcall GetWindowsEdition(void);
extern DELPHI_PACKAGE TNtProductType __fastcall NtProductType(void);
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetWindowsVersionString(void);
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetWindowsEditionString(void);
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetWindowsProductString(void);
extern DELPHI_PACKAGE System::UnicodeString __fastcall NtProductTypeString(void);
extern DELPHI_PACKAGE int __fastcall GetWindowsBuildNumber(void);
extern DELPHI_PACKAGE int __fastcall GetWindowsServicePackVersion(void);
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetWindowsServicePackVersionString(void);
extern DELPHI_PACKAGE bool __fastcall GetNativeSystemInfo(_SYSTEM_INFO &SystemInfo);
extern DELPHI_PACKAGE TProcessorArchitecture __fastcall GetProcessorArchitecture(void);
extern DELPHI_PACKAGE bool __fastcall IsWindows64(void);
extern DELPHI_PACKAGE bool __fastcall JclCheckWinVersion(int Major, int Minor);
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetOSVersionString(void);
extern DELPHI_PACKAGE __int64 __fastcall ReadTimeStampCounter(void);
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetIntelCacheDescription(const System::Byte D);
extern DELPHI_PACKAGE int __fastcall RoundFrequency(const int Frequency);
extern DELPHI_PACKAGE bool __fastcall GetCPUSpeed(TFreqInfo &CpuSpeed);
extern DELPHI_PACKAGE TOSEnabledFeatures __fastcall GetOSEnabledFeatures(void);
extern DELPHI_PACKAGE bool __fastcall TestFDIVInstruction(void);
extern DELPHI_PACKAGE void __fastcall RoundToAllocGranularity64(__int64 &Value, bool Up);
extern DELPHI_PACKAGE void __fastcall RoundToAllocGranularityPtr(void * &Value, bool Up);
extern DELPHI_PACKAGE TAPMLineStatus __fastcall GetAPMLineStatus(void);
extern DELPHI_PACKAGE TAPMBatteryFlag __fastcall GetAPMBatteryFlag(void);
extern DELPHI_PACKAGE TAPMBatteryFlags __fastcall GetAPMBatteryFlags(void);
extern DELPHI_PACKAGE int __fastcall GetAPMBatteryLifePercent(void);
extern DELPHI_PACKAGE unsigned __fastcall GetAPMBatteryLifeTime(void);
extern DELPHI_PACKAGE unsigned __fastcall GetAPMBatteryFullLifeTime(void);
extern DELPHI_PACKAGE unsigned __fastcall GetMaxAppAddress(void);
extern DELPHI_PACKAGE unsigned __fastcall GetMinAppAddress(void);
extern DELPHI_PACKAGE System::Byte __fastcall GetMemoryLoad(void);
extern DELPHI_PACKAGE __int64 __fastcall GetSwapFileSize(void);
extern DELPHI_PACKAGE System::Byte __fastcall GetSwapFileUsage(void);
extern DELPHI_PACKAGE __int64 __fastcall GetTotalPhysicalMemory(void);
extern DELPHI_PACKAGE __int64 __fastcall GetFreePhysicalMemory(void);
extern DELPHI_PACKAGE __int64 __fastcall GetTotalPageFileMemory(void);
extern DELPHI_PACKAGE __int64 __fastcall GetFreePageFileMemory(void);
extern DELPHI_PACKAGE __int64 __fastcall GetTotalVirtualMemory(void);
extern DELPHI_PACKAGE __int64 __fastcall GetFreeVirtualMemory(void);
extern DELPHI_PACKAGE bool __fastcall GetKeyState(const unsigned VirtualKey);
extern DELPHI_PACKAGE bool __fastcall GetNumLockKeyState(void);
extern DELPHI_PACKAGE bool __fastcall GetScrollLockKeyState(void);
extern DELPHI_PACKAGE bool __fastcall GetCapsLockKeyState(void);
extern DELPHI_PACKAGE bool __fastcall IsSystemResourcesMeterPresent(void);
extern DELPHI_PACKAGE int __fastcall GetFreeSystemResources(const TFreeSysResKind ResourceType)/* overload */;
extern DELPHI_PACKAGE TFreeSystemResources __fastcall GetFreeSystemResources(void)/* overload */;
extern DELPHI_PACKAGE unsigned __fastcall GetBPP(void);
extern DELPHI_PACKAGE bool __fastcall ProgIDExists(const System::UnicodeString ProgID);
extern DELPHI_PACKAGE bool __fastcall IsWordInstalled(void);
extern DELPHI_PACKAGE bool __fastcall IsExcelInstalled(void);
extern DELPHI_PACKAGE bool __fastcall IsAccessInstalled(void);
extern DELPHI_PACKAGE bool __fastcall IsPowerPointInstalled(void);
extern DELPHI_PACKAGE bool __fastcall IsFrontPageInstalled(void);
extern DELPHI_PACKAGE bool __fastcall IsOutlookInstalled(void);
extern DELPHI_PACKAGE bool __fastcall IsInternetExplorerInstalled(void);
extern DELPHI_PACKAGE bool __fastcall IsMSProjectInstalled(void);
extern DELPHI_PACKAGE bool __fastcall IsOpenOfficeInstalled(void);
extern DELPHI_PACKAGE bool __fastcall IsLibreOfficeInstalled(void);
}	/* namespace Jclsysinfo */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_JCLSYSINFO)
using namespace Jclsysinfo;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// JclsysinfoHPP
