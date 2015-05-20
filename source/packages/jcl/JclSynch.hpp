// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'JclSynch.pas' rev: 27.00 (Windows)

#ifndef JclsynchHPP
#define JclsynchHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Winapi.Windows.hpp>	// Pascal unit
#include <JclWin32.hpp>	// Pascal unit
#include <JclBase.hpp>	// Pascal unit
#include <System.SysUtils.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Jclsynch
{
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TJclWaitResult : unsigned char { wrAbandoned, wrError, wrIoCompletion, wrSignaled, wrTimeout };

typedef NativeUInt TJclWaitHandle;

class DELPHICLASS TJclDispatcherObject;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TJclDispatcherObject : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	bool FExisted;
	NativeUInt FHandle;
	System::UnicodeString FName;
	
public:
	__fastcall TJclDispatcherObject(NativeUInt AHandle);
	__fastcall virtual ~TJclDispatcherObject(void);
	TJclWaitResult __fastcall SignalAndWait(TJclDispatcherObject* const Obj, unsigned TimeOut, bool Alertable);
	TJclWaitResult __fastcall WaitAlertable(const unsigned TimeOut);
	TJclWaitResult __fastcall WaitFor(const unsigned TimeOut);
	TJclWaitResult __fastcall WaitForever(void);
	__property bool Existed = {read=FExisted, nodefault};
	__property NativeUInt Handle = {read=FHandle, nodefault};
	__property System::UnicodeString Name = {read=FName};
public:
	/* TObject.Create */ inline __fastcall TJclDispatcherObject(void) : System::TObject() { }
	
};

#pragma pack(pop)

class DELPHICLASS TJclCriticalSection;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TJclCriticalSection : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	_RTL_CRITICAL_SECTION FCriticalSection;
	
public:
	__fastcall virtual TJclCriticalSection(void);
	__fastcall virtual ~TJclCriticalSection(void);
	__classmethod void __fastcall CreateAndEnter(TJclCriticalSection* &CS);
	void __fastcall Enter(void);
	void __fastcall Leave(void);
};

#pragma pack(pop)

class DELPHICLASS TJclCriticalSectionEx;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TJclCriticalSectionEx : public TJclCriticalSection
{
	typedef TJclCriticalSection inherited;
	
private:
	unsigned FSpinCount;
	
public:
	__fastcall virtual TJclCriticalSectionEx(void);
	__fastcall virtual TJclCriticalSectionEx(unsigned SpinCount, bool NoFailEnter);
	bool __fastcall TryEnter(void);
public:
	/* TJclCriticalSection.Destroy */ inline __fastcall virtual ~TJclCriticalSectionEx(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS TJclEvent;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TJclEvent : public TJclDispatcherObject
{
	typedef TJclDispatcherObject inherited;
	
public:
	__fastcall TJclEvent(Winapi::Windows::PSecurityAttributes SecAttr, bool Manual, bool Signaled, const System::UnicodeString Name);
	__fastcall TJclEvent(unsigned Access, bool Inheritable, const System::UnicodeString Name);
	bool __fastcall Pulse(void);
	bool __fastcall ResetEvent(void);
	bool __fastcall SetEvent(void);
public:
	/* TJclDispatcherObject.Attach */ inline __fastcall TJclEvent(NativeUInt AHandle) : TJclDispatcherObject(AHandle) { }
	/* TJclDispatcherObject.Destroy */ inline __fastcall virtual ~TJclEvent(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS TJclWaitableTimer;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TJclWaitableTimer : public TJclDispatcherObject
{
	typedef TJclDispatcherObject inherited;
	
private:
	bool FResume;
	
public:
	__fastcall TJclWaitableTimer(Winapi::Windows::PSecurityAttributes SecAttr, bool Manual, const System::UnicodeString Name);
	__fastcall TJclWaitableTimer(unsigned Access, bool Inheritable, const System::UnicodeString Name);
	bool __fastcall Cancel(void);
	bool __fastcall SetTimer(const __int64 DueTime, int Period, bool Resume);
	bool __fastcall SetTimerApc(const __int64 DueTime, int Period, bool Resume, void * Apc, void * Arg);
public:
	/* TJclDispatcherObject.Attach */ inline __fastcall TJclWaitableTimer(NativeUInt AHandle) : TJclDispatcherObject(AHandle) { }
	/* TJclDispatcherObject.Destroy */ inline __fastcall virtual ~TJclWaitableTimer(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS TJclSemaphore;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TJclSemaphore : public TJclDispatcherObject
{
	typedef TJclDispatcherObject inherited;
	
public:
	__fastcall TJclSemaphore(Winapi::Windows::PSecurityAttributes SecAttr, int Initial, int Maximum, const System::UnicodeString Name);
	__fastcall TJclSemaphore(unsigned Access, bool Inheritable, const System::UnicodeString Name);
	bool __fastcall Release(int ReleaseCount);
	bool __fastcall ReleasePrev(int ReleaseCount, int &PrevCount);
public:
	/* TJclDispatcherObject.Attach */ inline __fastcall TJclSemaphore(NativeUInt AHandle) : TJclDispatcherObject(AHandle) { }
	/* TJclDispatcherObject.Destroy */ inline __fastcall virtual ~TJclSemaphore(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS TJclMutex;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TJclMutex : public TJclDispatcherObject
{
	typedef TJclDispatcherObject inherited;
	
public:
	__fastcall TJclMutex(Winapi::Windows::PSecurityAttributes SecAttr, bool InitialOwner, const System::UnicodeString Name);
	__fastcall TJclMutex(unsigned Access, bool Inheritable, const System::UnicodeString Name);
	bool __fastcall Acquire(const unsigned TimeOut = (unsigned)(0xffffffff));
	bool __fastcall Release(void);
public:
	/* TJclDispatcherObject.Attach */ inline __fastcall TJclMutex(NativeUInt AHandle) : TJclDispatcherObject(AHandle) { }
	/* TJclDispatcherObject.Destroy */ inline __fastcall virtual ~TJclMutex(void) { }
	
};

#pragma pack(pop)

struct TOptexSharedInfo;
typedef TOptexSharedInfo *POptexSharedInfo;

struct DECLSPEC_DRECORD TOptexSharedInfo
{
public:
	int SpinCount;
	int LockCount;
	unsigned ThreadId;
	int RecursionCount;
};


enum DECLSPEC_DENUM TMrewPreferred : unsigned char { mpReaders, mpWriters, mpEqual };

struct DECLSPEC_DRECORD TMrewThreadInfo
{
public:
	unsigned ThreadId;
	int RecursionCount;
	bool Reader;
};


typedef System::DynamicArray<TMrewThreadInfo> TMrewThreadInfoArray;

class DELPHICLASS TJclMultiReadExclusiveWrite;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TJclMultiReadExclusiveWrite : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TJclCriticalSection* FLock;
	TMrewPreferred FPreferred;
	TJclSemaphore* FSemReaders;
	TJclSemaphore* FSemWriters;
	int FState;
	TMrewThreadInfoArray FThreads;
	int FWaitingReaders;
	int FWaitingWriters;
	void __fastcall AddToThreadList(unsigned ThreadId, bool Reader);
	void __fastcall RemoveFromThreadList(int Index);
	int __fastcall FindThread(unsigned ThreadId);
	void __fastcall ReleaseWaiters(bool WasReading);
	
protected:
	void __fastcall Release(void);
	
public:
	__fastcall TJclMultiReadExclusiveWrite(TMrewPreferred Preferred);
	__fastcall virtual ~TJclMultiReadExclusiveWrite(void);
	void __fastcall BeginRead(void);
	void __fastcall BeginWrite(void);
	void __fastcall EndRead(void);
	void __fastcall EndWrite(void);
};

#pragma pack(pop)

struct TMetSectSharedInfo;
typedef TMetSectSharedInfo *PMetSectSharedInfo;

struct DECLSPEC_DRECORD TMetSectSharedInfo
{
public:
	BOOL Initialized;
	int SpinLock;
	int ThreadsWaiting;
	int AvailableCount;
	int MaximumCount;
};


struct TMeteredSection;
typedef TMeteredSection *PMeteredSection;

struct DECLSPEC_DRECORD TMeteredSection
{
public:
	NativeUInt Event;
	NativeUInt FileMap;
	TMetSectSharedInfo *SharedInfo;
};


class DELPHICLASS TJclMeteredSection;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TJclMeteredSection : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TMeteredSection *FMetSect;
	void __fastcall CloseMeteredSection(void);
	bool __fastcall InitMeteredSection(int InitialCount, int MaxCount, const System::UnicodeString Name, bool OpenOnly);
	bool __fastcall CreateMetSectEvent(const System::UnicodeString Name, bool OpenOnly);
	bool __fastcall CreateMetSectFileView(int InitialCount, int MaxCount, const System::UnicodeString Name, bool OpenOnly);
	
protected:
	void __fastcall AcquireLock(void);
	void __fastcall ReleaseLock(void);
	
public:
	__fastcall TJclMeteredSection(int InitialCount, int MaxCount, const System::UnicodeString Name);
	__fastcall TJclMeteredSection(const System::UnicodeString Name);
	__fastcall virtual ~TJclMeteredSection(void);
	TJclWaitResult __fastcall Enter(unsigned TimeOut);
	bool __fastcall Leave(int ReleaseCount)/* overload */;
	bool __fastcall Leave(int ReleaseCount, /* out */ int &PrevCount)/* overload */;
};

#pragma pack(pop)

struct DECLSPEC_DRECORD TEventInfo
{
public:
	int EventType;
	BOOL Signaled;
};


struct DECLSPEC_DRECORD TMutexInfo
{
public:
	int SignalState;
	System::ByteBool Owned;
	System::ByteBool Abandoned;
};


struct DECLSPEC_DRECORD TSemaphoreCounts
{
public:
	int CurrentCount;
	int MaximumCount;
};


struct DECLSPEC_DRECORD TTimerInfo
{
public:
	__int64 Remaining;
	System::ByteBool Signaled;
};


class DELPHICLASS EJclWin32HandleObjectError;
#pragma pack(push,4)
class PASCALIMPLEMENTATION EJclWin32HandleObjectError : public Jclwin32::EJclWin32Error
{
	typedef Jclwin32::EJclWin32Error inherited;
	
public:
	/* EJclWin32Error.Create */ inline __fastcall EJclWin32HandleObjectError(const System::UnicodeString Msg) : Jclwin32::EJclWin32Error(Msg) { }
	/* EJclWin32Error.CreateFmt */ inline __fastcall EJclWin32HandleObjectError(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : Jclwin32::EJclWin32Error(Msg, Args, Args_High) { }
	/* EJclWin32Error.CreateRes */ inline __fastcall EJclWin32HandleObjectError(int Ident)/* overload */ : Jclwin32::EJclWin32Error(Ident) { }
	/* EJclWin32Error.CreateRes */ inline __fastcall EJclWin32HandleObjectError(System::PResStringRec ResStringRec)/* overload */ : Jclwin32::EJclWin32Error(ResStringRec) { }
	
public:
	/* Exception.CreateRes */ inline __fastcall EJclWin32HandleObjectError(NativeUInt Ident)/* overload */ : Jclwin32::EJclWin32Error(Ident) { }
	/* Exception.CreateResFmt */ inline __fastcall EJclWin32HandleObjectError(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : Jclwin32::EJclWin32Error(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EJclWin32HandleObjectError(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : Jclwin32::EJclWin32Error(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EJclWin32HandleObjectError(const System::UnicodeString Msg, int AHelpContext) : Jclwin32::EJclWin32Error(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EJclWin32HandleObjectError(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : Jclwin32::EJclWin32Error(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EJclWin32HandleObjectError(NativeUInt Ident, int AHelpContext)/* overload */ : Jclwin32::EJclWin32Error(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EJclWin32HandleObjectError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : Jclwin32::EJclWin32Error(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EJclWin32HandleObjectError(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : Jclwin32::EJclWin32Error(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EJclWin32HandleObjectError(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : Jclwin32::EJclWin32Error(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EJclWin32HandleObjectError(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS EJclDispatcherObjectError;
#pragma pack(push,4)
class PASCALIMPLEMENTATION EJclDispatcherObjectError : public Jclwin32::EJclWin32Error
{
	typedef Jclwin32::EJclWin32Error inherited;
	
public:
	/* EJclWin32Error.Create */ inline __fastcall EJclDispatcherObjectError(const System::UnicodeString Msg) : Jclwin32::EJclWin32Error(Msg) { }
	/* EJclWin32Error.CreateFmt */ inline __fastcall EJclDispatcherObjectError(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : Jclwin32::EJclWin32Error(Msg, Args, Args_High) { }
	/* EJclWin32Error.CreateRes */ inline __fastcall EJclDispatcherObjectError(int Ident)/* overload */ : Jclwin32::EJclWin32Error(Ident) { }
	/* EJclWin32Error.CreateRes */ inline __fastcall EJclDispatcherObjectError(System::PResStringRec ResStringRec)/* overload */ : Jclwin32::EJclWin32Error(ResStringRec) { }
	
public:
	/* Exception.CreateRes */ inline __fastcall EJclDispatcherObjectError(NativeUInt Ident)/* overload */ : Jclwin32::EJclWin32Error(Ident) { }
	/* Exception.CreateResFmt */ inline __fastcall EJclDispatcherObjectError(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : Jclwin32::EJclWin32Error(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EJclDispatcherObjectError(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : Jclwin32::EJclWin32Error(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EJclDispatcherObjectError(const System::UnicodeString Msg, int AHelpContext) : Jclwin32::EJclWin32Error(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EJclDispatcherObjectError(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : Jclwin32::EJclWin32Error(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EJclDispatcherObjectError(NativeUInt Ident, int AHelpContext)/* overload */ : Jclwin32::EJclWin32Error(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EJclDispatcherObjectError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : Jclwin32::EJclWin32Error(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EJclDispatcherObjectError(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : Jclwin32::EJclWin32Error(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EJclDispatcherObjectError(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : Jclwin32::EJclWin32Error(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EJclDispatcherObjectError(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS EJclCriticalSectionError;
#pragma pack(push,4)
class PASCALIMPLEMENTATION EJclCriticalSectionError : public Jclwin32::EJclWin32Error
{
	typedef Jclwin32::EJclWin32Error inherited;
	
public:
	/* EJclWin32Error.Create */ inline __fastcall EJclCriticalSectionError(const System::UnicodeString Msg) : Jclwin32::EJclWin32Error(Msg) { }
	/* EJclWin32Error.CreateFmt */ inline __fastcall EJclCriticalSectionError(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : Jclwin32::EJclWin32Error(Msg, Args, Args_High) { }
	/* EJclWin32Error.CreateRes */ inline __fastcall EJclCriticalSectionError(int Ident)/* overload */ : Jclwin32::EJclWin32Error(Ident) { }
	/* EJclWin32Error.CreateRes */ inline __fastcall EJclCriticalSectionError(System::PResStringRec ResStringRec)/* overload */ : Jclwin32::EJclWin32Error(ResStringRec) { }
	
public:
	/* Exception.CreateRes */ inline __fastcall EJclCriticalSectionError(NativeUInt Ident)/* overload */ : Jclwin32::EJclWin32Error(Ident) { }
	/* Exception.CreateResFmt */ inline __fastcall EJclCriticalSectionError(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : Jclwin32::EJclWin32Error(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EJclCriticalSectionError(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : Jclwin32::EJclWin32Error(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EJclCriticalSectionError(const System::UnicodeString Msg, int AHelpContext) : Jclwin32::EJclWin32Error(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EJclCriticalSectionError(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : Jclwin32::EJclWin32Error(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EJclCriticalSectionError(NativeUInt Ident, int AHelpContext)/* overload */ : Jclwin32::EJclWin32Error(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EJclCriticalSectionError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : Jclwin32::EJclWin32Error(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EJclCriticalSectionError(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : Jclwin32::EJclWin32Error(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EJclCriticalSectionError(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : Jclwin32::EJclWin32Error(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EJclCriticalSectionError(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS EJclEventError;
#pragma pack(push,4)
class PASCALIMPLEMENTATION EJclEventError : public Jclwin32::EJclWin32Error
{
	typedef Jclwin32::EJclWin32Error inherited;
	
public:
	/* EJclWin32Error.Create */ inline __fastcall EJclEventError(const System::UnicodeString Msg) : Jclwin32::EJclWin32Error(Msg) { }
	/* EJclWin32Error.CreateFmt */ inline __fastcall EJclEventError(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : Jclwin32::EJclWin32Error(Msg, Args, Args_High) { }
	/* EJclWin32Error.CreateRes */ inline __fastcall EJclEventError(int Ident)/* overload */ : Jclwin32::EJclWin32Error(Ident) { }
	/* EJclWin32Error.CreateRes */ inline __fastcall EJclEventError(System::PResStringRec ResStringRec)/* overload */ : Jclwin32::EJclWin32Error(ResStringRec) { }
	
public:
	/* Exception.CreateRes */ inline __fastcall EJclEventError(NativeUInt Ident)/* overload */ : Jclwin32::EJclWin32Error(Ident) { }
	/* Exception.CreateResFmt */ inline __fastcall EJclEventError(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : Jclwin32::EJclWin32Error(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EJclEventError(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : Jclwin32::EJclWin32Error(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EJclEventError(const System::UnicodeString Msg, int AHelpContext) : Jclwin32::EJclWin32Error(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EJclEventError(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : Jclwin32::EJclWin32Error(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EJclEventError(NativeUInt Ident, int AHelpContext)/* overload */ : Jclwin32::EJclWin32Error(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EJclEventError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : Jclwin32::EJclWin32Error(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EJclEventError(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : Jclwin32::EJclWin32Error(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EJclEventError(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : Jclwin32::EJclWin32Error(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EJclEventError(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS EJclWaitableTimerError;
#pragma pack(push,4)
class PASCALIMPLEMENTATION EJclWaitableTimerError : public Jclwin32::EJclWin32Error
{
	typedef Jclwin32::EJclWin32Error inherited;
	
public:
	/* EJclWin32Error.Create */ inline __fastcall EJclWaitableTimerError(const System::UnicodeString Msg) : Jclwin32::EJclWin32Error(Msg) { }
	/* EJclWin32Error.CreateFmt */ inline __fastcall EJclWaitableTimerError(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : Jclwin32::EJclWin32Error(Msg, Args, Args_High) { }
	/* EJclWin32Error.CreateRes */ inline __fastcall EJclWaitableTimerError(int Ident)/* overload */ : Jclwin32::EJclWin32Error(Ident) { }
	/* EJclWin32Error.CreateRes */ inline __fastcall EJclWaitableTimerError(System::PResStringRec ResStringRec)/* overload */ : Jclwin32::EJclWin32Error(ResStringRec) { }
	
public:
	/* Exception.CreateRes */ inline __fastcall EJclWaitableTimerError(NativeUInt Ident)/* overload */ : Jclwin32::EJclWin32Error(Ident) { }
	/* Exception.CreateResFmt */ inline __fastcall EJclWaitableTimerError(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : Jclwin32::EJclWin32Error(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EJclWaitableTimerError(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : Jclwin32::EJclWin32Error(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EJclWaitableTimerError(const System::UnicodeString Msg, int AHelpContext) : Jclwin32::EJclWin32Error(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EJclWaitableTimerError(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : Jclwin32::EJclWin32Error(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EJclWaitableTimerError(NativeUInt Ident, int AHelpContext)/* overload */ : Jclwin32::EJclWin32Error(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EJclWaitableTimerError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : Jclwin32::EJclWin32Error(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EJclWaitableTimerError(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : Jclwin32::EJclWin32Error(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EJclWaitableTimerError(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : Jclwin32::EJclWin32Error(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EJclWaitableTimerError(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS EJclSemaphoreError;
#pragma pack(push,4)
class PASCALIMPLEMENTATION EJclSemaphoreError : public Jclwin32::EJclWin32Error
{
	typedef Jclwin32::EJclWin32Error inherited;
	
public:
	/* EJclWin32Error.Create */ inline __fastcall EJclSemaphoreError(const System::UnicodeString Msg) : Jclwin32::EJclWin32Error(Msg) { }
	/* EJclWin32Error.CreateFmt */ inline __fastcall EJclSemaphoreError(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : Jclwin32::EJclWin32Error(Msg, Args, Args_High) { }
	/* EJclWin32Error.CreateRes */ inline __fastcall EJclSemaphoreError(int Ident)/* overload */ : Jclwin32::EJclWin32Error(Ident) { }
	/* EJclWin32Error.CreateRes */ inline __fastcall EJclSemaphoreError(System::PResStringRec ResStringRec)/* overload */ : Jclwin32::EJclWin32Error(ResStringRec) { }
	
public:
	/* Exception.CreateRes */ inline __fastcall EJclSemaphoreError(NativeUInt Ident)/* overload */ : Jclwin32::EJclWin32Error(Ident) { }
	/* Exception.CreateResFmt */ inline __fastcall EJclSemaphoreError(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : Jclwin32::EJclWin32Error(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EJclSemaphoreError(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : Jclwin32::EJclWin32Error(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EJclSemaphoreError(const System::UnicodeString Msg, int AHelpContext) : Jclwin32::EJclWin32Error(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EJclSemaphoreError(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : Jclwin32::EJclWin32Error(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EJclSemaphoreError(NativeUInt Ident, int AHelpContext)/* overload */ : Jclwin32::EJclWin32Error(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EJclSemaphoreError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : Jclwin32::EJclWin32Error(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EJclSemaphoreError(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : Jclwin32::EJclWin32Error(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EJclSemaphoreError(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : Jclwin32::EJclWin32Error(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EJclSemaphoreError(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS EJclMutexError;
#pragma pack(push,4)
class PASCALIMPLEMENTATION EJclMutexError : public Jclwin32::EJclWin32Error
{
	typedef Jclwin32::EJclWin32Error inherited;
	
public:
	/* EJclWin32Error.Create */ inline __fastcall EJclMutexError(const System::UnicodeString Msg) : Jclwin32::EJclWin32Error(Msg) { }
	/* EJclWin32Error.CreateFmt */ inline __fastcall EJclMutexError(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : Jclwin32::EJclWin32Error(Msg, Args, Args_High) { }
	/* EJclWin32Error.CreateRes */ inline __fastcall EJclMutexError(int Ident)/* overload */ : Jclwin32::EJclWin32Error(Ident) { }
	/* EJclWin32Error.CreateRes */ inline __fastcall EJclMutexError(System::PResStringRec ResStringRec)/* overload */ : Jclwin32::EJclWin32Error(ResStringRec) { }
	
public:
	/* Exception.CreateRes */ inline __fastcall EJclMutexError(NativeUInt Ident)/* overload */ : Jclwin32::EJclWin32Error(Ident) { }
	/* Exception.CreateResFmt */ inline __fastcall EJclMutexError(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : Jclwin32::EJclWin32Error(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EJclMutexError(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : Jclwin32::EJclWin32Error(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EJclMutexError(const System::UnicodeString Msg, int AHelpContext) : Jclwin32::EJclWin32Error(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EJclMutexError(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : Jclwin32::EJclWin32Error(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EJclMutexError(NativeUInt Ident, int AHelpContext)/* overload */ : Jclwin32::EJclWin32Error(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EJclMutexError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : Jclwin32::EJclWin32Error(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EJclMutexError(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : Jclwin32::EJclWin32Error(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EJclMutexError(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : Jclwin32::EJclWin32Error(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EJclMutexError(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS EJclMeteredSectionError;
#pragma pack(push,4)
class PASCALIMPLEMENTATION EJclMeteredSectionError : public Jclbase::EJclError
{
	typedef Jclbase::EJclError inherited;
	
public:
	/* Exception.Create */ inline __fastcall EJclMeteredSectionError(const System::UnicodeString Msg) : Jclbase::EJclError(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EJclMeteredSectionError(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : Jclbase::EJclError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EJclMeteredSectionError(NativeUInt Ident)/* overload */ : Jclbase::EJclError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EJclMeteredSectionError(System::PResStringRec ResStringRec)/* overload */ : Jclbase::EJclError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EJclMeteredSectionError(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : Jclbase::EJclError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EJclMeteredSectionError(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : Jclbase::EJclError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EJclMeteredSectionError(const System::UnicodeString Msg, int AHelpContext) : Jclbase::EJclError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EJclMeteredSectionError(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : Jclbase::EJclError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EJclMeteredSectionError(NativeUInt Ident, int AHelpContext)/* overload */ : Jclbase::EJclError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EJclMeteredSectionError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : Jclbase::EJclError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EJclMeteredSectionError(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : Jclbase::EJclError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EJclMeteredSectionError(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : Jclbase::EJclError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EJclMeteredSectionError(void) { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE int __fastcall LockedAdd(int &Target, int Value)/* overload */;
extern DELPHI_PACKAGE int __fastcall LockedCompareExchange(int &Target, int Exch, int Comp)/* overload */;
extern DELPHI_PACKAGE void * __fastcall LockedCompareExchange(void * &Target, void * Exch, void * Comp)/* overload */;
extern DELPHI_PACKAGE System::TObject* __fastcall LockedCompareExchange(System::TObject* &Target, System::TObject* Exch, System::TObject* Comp)/* overload */;
extern DELPHI_PACKAGE int __fastcall LockedDec(int &Target)/* overload */;
extern DELPHI_PACKAGE int __fastcall LockedExchange(int &Target, int Value)/* overload */;
extern DELPHI_PACKAGE int __fastcall LockedExchangeAdd(int &Target, int Value)/* overload */;
extern DELPHI_PACKAGE int __fastcall LockedExchangeDec(int &Target)/* overload */;
extern DELPHI_PACKAGE int __fastcall LockedExchangeInc(int &Target)/* overload */;
extern DELPHI_PACKAGE int __fastcall LockedExchangeSub(int &Target, int Value)/* overload */;
extern DELPHI_PACKAGE int __fastcall LockedInc(int &Target)/* overload */;
extern DELPHI_PACKAGE int __fastcall LockedSub(int &Target, int Value)/* overload */;
extern DELPHI_PACKAGE unsigned __fastcall WaitForMultipleObjects(TJclDispatcherObject* const *Objects, const int Objects_High, bool WaitAll, unsigned TimeOut);
extern DELPHI_PACKAGE unsigned __fastcall WaitAlertableForMultipleObjects(TJclDispatcherObject* const *Objects, const int Objects_High, bool WaitAll, unsigned TimeOut);
extern DELPHI_PACKAGE bool __fastcall QueryCriticalSection(TJclCriticalSection* CS, _RTL_CRITICAL_SECTION &Info);
extern DELPHI_PACKAGE bool __fastcall QueryEvent(NativeUInt Handle, TEventInfo &Info);
extern DELPHI_PACKAGE bool __fastcall QueryMutex(NativeUInt Handle, TMutexInfo &Info);
extern DELPHI_PACKAGE bool __fastcall QuerySemaphore(NativeUInt Handle, TSemaphoreCounts &Info);
extern DELPHI_PACKAGE bool __fastcall QueryTimer(NativeUInt Handle, TTimerInfo &Info);
extern DELPHI_PACKAGE System::UnicodeString __fastcall ValidateMutexName(const System::UnicodeString aName);
}	/* namespace Jclsynch */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_JCLSYNCH)
using namespace Jclsynch;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// JclsynchHPP
