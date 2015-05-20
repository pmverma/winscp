// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FileChanges.pas' rev: 27.00 (Windows)

#ifndef FilechangesHPP
#define FilechangesHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.SysUtils.hpp>	// Pascal unit
#include <Winapi.Windows.hpp>	// Pascal unit
#include <System.Classes.hpp>	// Pascal unit
#include <CompThread.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Filechanges
{
//-- type declarations -------------------------------------------------------
typedef void __fastcall (__closure *TFileDeleteEvent)(System::TObject* Sender, System::Classes::TStringList* Files);

class DELPHICLASS TFileDeleteThread;
class PASCALIMPLEMENTATION TFileDeleteThread : public Compthread::TCompThread
{
	typedef Compthread::TCompThread inherited;
	
private:
	TFileDeleteEvent fOnSignalDelete;
	System::Classes::TStringList* fFiles;
	System::Classes::TStringList* fDelFiles;
	_FILETIME fEndTime;
	
protected:
	virtual void __fastcall Execute(void);
	virtual void __fastcall DoTerminate(void);
	void __fastcall DoOnSignalDelete(void);
	
public:
	__fastcall TFileDeleteThread(System::Classes::TStringList* Files, unsigned TimeOut, TFileDeleteEvent SignalProc);
	__property Terminated;
	
__published:
	__property TFileDeleteEvent OnSignalDelete = {read=fOnSignalDelete, write=fOnSignalDelete};
public:
	/* TCompThread.Destroy */ inline __fastcall virtual ~TFileDeleteThread(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Filechanges */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FILECHANGES)
using namespace Filechanges;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// FilechangesHPP
