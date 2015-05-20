// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FileOperator.pas' rev: 27.00 (Windows)

#ifndef FileoperatorHPP
#define FileoperatorHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Winapi.Windows.hpp>	// Pascal unit
#include <System.Classes.hpp>	// Pascal unit
#include <Vcl.Forms.hpp>	// Pascal unit
#include <Vcl.Controls.hpp>	// Pascal unit
#include <Winapi.ShellAPI.hpp>	// Pascal unit
#include <BaseUtils.hpp>	// Pascal unit
#include <System.SysUtils.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Fileoperator
{
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TFileOperation : unsigned char { foCopy, foDelete, foMove, foRename };

enum DECLSPEC_DENUM TFileOperationFlag : unsigned char { foAllowUndo, foConfirmMouse, foFilesOnly, foMultiDestFiles, foNoConfirmation, foNoConfirmMkDir, foRenameOnCollision, foSilent, foSimpleProgress };

typedef System::Set<TFileOperationFlag, TFileOperationFlag::foAllowUndo, TFileOperationFlag::foSimpleProgress> TFileOperationFlags;

class DELPHICLASS TFileOperator;
class PASCALIMPLEMENTATION TFileOperator : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	_SHFILEOPSTRUCTW FData;
	System::Classes::TStringList* FFrom;
	System::Classes::TStringList* FTo;
	System::Classes::TStringList* FLastFrom;
	System::Classes::TStringList* FLastTo;
	TFileOperation FLastOperation;
	TFileOperationFlags fLastFlags;
	bool fCanUndo;
	System::UnicodeString FProgressTitle;
	System::Classes::TComponent* FOwner;
	void __fastcall SetOperation(TFileOperation Value);
	TFileOperation __fastcall GetOperation(void);
	bool __fastcall GetWantMappingHandle(void);
	void __fastcall SetWantMappingHandle(bool Value);
	void __fastcall SetFlags(TFileOperationFlags Value);
	TFileOperationFlags __fastcall GetFlags(void);
	bool __fastcall GetOperFlag(unsigned F);
	void __fastcall SetOperFlag(unsigned F, bool V);
	void __fastcall ReadData(System::Classes::TReader* Reader);
	void __fastcall WriteData(System::Classes::TWriter* Writer);
	void __fastcall SwapStringList(System::Classes::TStringList* &FromL, System::Classes::TStringList* &ToL);
	BOOL __fastcall GetOperationAborted(void);
	
protected:
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	
public:
	__property BOOL OperationAborted = {read=GetOperationAborted, nodefault};
	__property System::Classes::TStringList* OperandFrom = {read=FFrom, write=FFrom};
	__property System::Classes::TStringList* OperandTo = {read=FTo, write=FTo};
	__property bool CanUndo = {read=fCanUndo, nodefault};
	__property TFileOperation LastOperation = {read=FLastOperation, nodefault};
	__property System::Classes::TStringList* LastOperandFrom = {read=FLastFrom};
	__property System::Classes::TStringList* LastOperandTo = {read=FLastTo};
	__fastcall virtual TFileOperator(System::Classes::TComponent* aOwner);
	__fastcall virtual ~TFileOperator(void);
	bool __fastcall Execute(void);
	bool __fastcall UndoExecute(void);
	void __fastcall ClearUndo(void);
	
__published:
	__property TFileOperation Operation = {read=GetOperation, write=SetOperation, stored=false, nodefault};
	__property TFileOperationFlags Flags = {read=GetFlags, write=SetFlags, stored=false, nodefault};
	__property System::UnicodeString ProgressTitle = {read=FProgressTitle, write=FProgressTitle};
	__property bool WantMappingHandle = {read=GetWantMappingHandle, write=SetWantMappingHandle, stored=false, nodefault};
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE System::ResourceString _SFileOperation;
#define Fileoperator_SFileOperation System::LoadResourceString(&Fileoperator::_SFileOperation)
extern DELPHI_PACKAGE void __fastcall Register(void);
}	/* namespace Fileoperator */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FILEOPERATOR)
using namespace Fileoperator;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// FileoperatorHPP
