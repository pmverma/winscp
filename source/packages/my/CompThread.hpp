// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'CompThread.pas' rev: 27.00 (Windows)

#ifndef CompthreadHPP
#define CompthreadHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.Classes.hpp>	// Pascal unit
#include <Winapi.Windows.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Compthread
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TCompThread;
class PASCALIMPLEMENTATION TCompThread : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	NativeUInt FHandle;
	unsigned FThreadID;
	bool FTerminated;
	bool FSuspended;
	bool FFreeOnTerminate;
	bool FFinished;
	int FReturnValue;
	System::Classes::TNotifyEvent FOnTerminate;
	System::Classes::TThreadMethod FMethod;
	System::TObject* FSynchronizeException;
	void __fastcall CallOnTerminate(void);
	System::Classes::TThreadPriority __fastcall GetPriority(void);
	void __fastcall SetPriority(System::Classes::TThreadPriority Value);
	void __fastcall SetSuspended(bool Value);
	
protected:
	virtual void __fastcall DoTerminate(void);
	virtual void __fastcall Execute(void) = 0 ;
	void __fastcall Synchronize(System::Classes::TThreadMethod Method);
	__property int ReturnValue = {read=FReturnValue, write=FReturnValue, nodefault};
	__property bool Terminated = {read=FTerminated, nodefault};
	
public:
	__fastcall TCompThread(bool CreateSuspended);
	__fastcall virtual ~TCompThread(void);
	void __fastcall Resume(void);
	void __fastcall Suspend(void);
	virtual void __fastcall Terminate(void);
	bool __fastcall WaitFor(unsigned Milliseconds = (unsigned)(0xffffffff));
	__property bool FreeOnTerminate = {read=FFreeOnTerminate, write=FFreeOnTerminate, nodefault};
	__property NativeUInt Handle = {read=FHandle, nodefault};
	__property System::Classes::TThreadPriority Priority = {read=GetPriority, write=SetPriority, nodefault};
	__property bool Suspended = {read=FSuspended, write=SetSuspended, nodefault};
	__property unsigned ThreadID = {read=FThreadID, nodefault};
	__property System::Classes::TNotifyEvent OnTerminate = {read=FOnTerminate, write=FOnTerminate};
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Compthread */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_COMPTHREAD)
using namespace Compthread;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// CompthreadHPP
