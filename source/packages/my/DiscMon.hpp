// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DiscMon.pas' rev: 27.00 (Windows)

#ifndef DiscmonHPP
#define DiscmonHPP

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
#include <CompThread.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Discmon
{
//-- type declarations -------------------------------------------------------
typedef void __fastcall (__closure *TDiscMonitorNotify)(System::TObject* Sender, const System::UnicodeString Directory, bool &SubdirsChanged);

typedef void __fastcall (__closure *TDiscMonitorInvalid)(System::TObject* Sender, const System::UnicodeString Directory, const System::UnicodeString ErrorStr);

typedef void __fastcall (__closure *TDiscMonitorSynchronize)(System::TObject* Sender, System::Classes::TThreadMethod Method);

typedef void __fastcall (__closure *TDiscMonitorFilter)(System::TObject* Sender, const System::UnicodeString DirectoryName, bool &Add);

typedef void __fastcall (__closure *TDiscMonitorTooManyDirectories)(System::TObject* Sender, int &MaxDirectories);

typedef void __fastcall (__closure *TDiscMonitorDirectoriesChange)(System::TObject* Sender, int Directories);

class DELPHICLASS TDiscMonitorThread;
class PASCALIMPLEMENTATION TDiscMonitorThread : public Compthread::TCompThread
{
	typedef Compthread::TCompThread inherited;
	
private:
	TDiscMonitorNotify FOnChange;
	TDiscMonitorInvalid FOnInvalid;
	TDiscMonitorSynchronize FOnSynchronize;
	TDiscMonitorFilter FOnFilter;
	TDiscMonitorDirectoriesChange FOnDirectoriesChange;
	System::Classes::TStrings* FDirectories;
	unsigned FFilters;
	NativeUInt FDestroyEvent;
	NativeUInt FChangeEvent;
	bool FSubTree;
	int FChangeDelay;
	System::UnicodeString FNotifiedDirectory;
	bool FSubdirsChanged;
	System::UnicodeString FInvalidMessage;
	int FNotifiedDirectories;
	bool FEnabled;
	void __fastcall InformChange(void);
	void __fastcall InformInvalid(void);
	void __fastcall InformDirectoriesChange(void);
	void __fastcall SetDirectories(System::Classes::TStrings* const Value);
	void __fastcall SetFilters(unsigned Value);
	void __fastcall SetSubTree(bool Value);
	void __fastcall SetEnabled(bool Value);
	void __fastcall SaveOSError(void);
	
protected:
	virtual void __fastcall Execute(void);
	void __fastcall Update(void);
	void __fastcall DoSynchronize(System::Classes::TThreadMethod Method);
	
public:
	__fastcall TDiscMonitorThread(void);
	__fastcall virtual ~TDiscMonitorThread(void);
	__property System::Classes::TStrings* Directories = {read=FDirectories, write=SetDirectories};
	__property unsigned Filters = {read=FFilters, write=SetFilters, nodefault};
	__property TDiscMonitorNotify OnChange = {read=FOnChange, write=FOnChange};
	__property TDiscMonitorInvalid OnInvalid = {read=FOnInvalid, write=FOnInvalid};
	__property TDiscMonitorSynchronize OnSynchronize = {read=FOnSynchronize, write=FOnSynchronize};
	__property TDiscMonitorFilter OnFilter = {read=FOnFilter, write=FOnFilter};
	__property TDiscMonitorDirectoriesChange OnDirectoriesChange = {read=FOnDirectoriesChange, write=FOnDirectoriesChange};
	__property bool SubTree = {read=FSubTree, write=SetSubTree, nodefault};
	__property int ChangeDelay = {read=FChangeDelay, write=FChangeDelay, default=500};
	__property bool Enabled = {read=FEnabled, write=SetEnabled, nodefault};
};


enum DECLSPEC_DENUM TMonitorFilter : unsigned char { moFilename, moDirName, moAttributes, moSize, moLastWrite, moSecurity };

typedef System::Set<TMonitorFilter, TMonitorFilter::moFilename, TMonitorFilter::moSecurity> TMonitorFilters;

class DELPHICLASS TDiscMonitor;
class PASCALIMPLEMENTATION TDiscMonitor : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	bool FActive;
	TDiscMonitorThread* FMonitor;
	TMonitorFilters FFilters;
	TDiscMonitorNotify FOnChange;
	TDiscMonitorInvalid FOnInvalid;
	TDiscMonitorSynchronize FOnSynchronize;
	TDiscMonitorFilter FOnFilter;
	TDiscMonitorTooManyDirectories FOnTooManyDirectories;
	TDiscMonitorDirectoriesChange FOnDirectoriesChange;
	bool FShowMsg;
	bool FPending;
	int FMaxDirectories;
	System::Classes::TStrings* __fastcall GetDirectories(void);
	bool __fastcall GetSubTree(void);
	bool __fastcall GetEnabled(void);
	void __fastcall SetActive(bool Value);
	void __fastcall SetDirectories(System::Classes::TStrings* Value);
	void __fastcall SetFilters(TMonitorFilters Value);
	void __fastcall SetSubTree(bool Value);
	void __fastcall SetEnabled(bool Value);
	int __fastcall GetChangeDelay(void);
	void __fastcall SetChangeDelay(int Value);
	
protected:
	void __fastcall Change(System::TObject* Sender, const System::UnicodeString Directory, bool &SubdirsChanged);
	void __fastcall Invalid(System::TObject* Sender, const System::UnicodeString Directory, const System::UnicodeString ErrorStr);
	void __fastcall Filter(System::TObject* Sender, const System::UnicodeString DirectoryName, bool &Add);
	void __fastcall DirectoriesChange(System::TObject* Sender, int Directories);
	void __fastcall DoSynchronize(System::TObject* Sender, System::Classes::TThreadMethod Method);
	
public:
	__fastcall virtual TDiscMonitor(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TDiscMonitor(void);
	void __fastcall Close(void);
	void __fastcall Open(void);
	void __fastcall AddDirectory(System::UnicodeString Directory, bool SubDirs);
	void __fastcall SetDirectory(System::UnicodeString Directory);
	__property TDiscMonitorThread* Thread = {read=FMonitor};
	__property int MaxDirectories = {read=FMaxDirectories, write=FMaxDirectories, nodefault};
	
__published:
	__property System::Classes::TStrings* Directories = {read=GetDirectories};
	__property bool ShowDesignMsg = {read=FShowMsg, write=FShowMsg, default=0};
	__property TDiscMonitorNotify OnChange = {read=FOnChange, write=FOnChange};
	__property TDiscMonitorInvalid OnInvalid = {read=FOnInvalid, write=FOnInvalid};
	__property TDiscMonitorSynchronize OnSynchronize = {read=FOnSynchronize, write=FOnSynchronize};
	__property TDiscMonitorFilter OnFilter = {read=FOnFilter, write=FOnFilter};
	__property TDiscMonitorTooManyDirectories OnTooManyDirectories = {read=FOnTooManyDirectories, write=FOnTooManyDirectories};
	__property TDiscMonitorDirectoriesChange OnDirectoriesChange = {read=FOnDirectoriesChange, write=FOnDirectoriesChange};
	__property TMonitorFilters Filters = {read=FFilters, write=SetFilters, default=1};
	__property bool SubTree = {read=GetSubTree, write=SetSubTree, default=1};
	__property bool Active = {read=FActive, write=SetActive, default=0};
	__property int ChangeDelay = {read=GetChangeDelay, write=SetChangeDelay, default=500};
	__property bool Enabled = {read=GetEnabled, write=SetEnabled, default=1};
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE void __fastcall Register(void);
}	/* namespace Discmon */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DISCMON)
using namespace Discmon;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DiscmonHPP
