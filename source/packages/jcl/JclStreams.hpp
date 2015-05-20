// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'JclStreams.pas' rev: 27.00 (Windows)

#ifndef JclstreamsHPP
#define JclstreamsHPP

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
#include <System.Contnrs.hpp>	// Pascal unit
#include <JclBase.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Jclstreams
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS EJclStreamError;
#pragma pack(push,4)
class PASCALIMPLEMENTATION EJclStreamError : public Jclbase::EJclError
{
	typedef Jclbase::EJclError inherited;
	
public:
	/* Exception.Create */ inline __fastcall EJclStreamError(const System::UnicodeString Msg) : Jclbase::EJclError(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EJclStreamError(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : Jclbase::EJclError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EJclStreamError(NativeUInt Ident)/* overload */ : Jclbase::EJclError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EJclStreamError(System::PResStringRec ResStringRec)/* overload */ : Jclbase::EJclError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EJclStreamError(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : Jclbase::EJclError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EJclStreamError(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : Jclbase::EJclError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EJclStreamError(const System::UnicodeString Msg, int AHelpContext) : Jclbase::EJclError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EJclStreamError(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : Jclbase::EJclError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EJclStreamError(NativeUInt Ident, int AHelpContext)/* overload */ : Jclbase::EJclError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EJclStreamError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : Jclbase::EJclError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EJclStreamError(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : Jclbase::EJclError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EJclStreamError(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : Jclbase::EJclError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EJclStreamError(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS TJclStream;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TJclStream : public System::Classes::TStream
{
	typedef System::Classes::TStream inherited;
	
protected:
	virtual void __fastcall SetSize(int NewSize)/* overload */;
	virtual void __fastcall SetSize(const __int64 NewSize)/* overload */;
	
public:
	virtual int __fastcall Seek(int Offset, System::Word Origin)/* overload */;
	virtual __int64 __fastcall Seek(const __int64 Offset, System::Classes::TSeekOrigin Origin)/* overload */;
	virtual void __fastcall LoadFromStream(System::Classes::TStream* Source, int BufferSize = 0x1000);
	virtual void __fastcall LoadFromFile(const System::Sysutils::TFileName FileName, int BufferSize = 0x1000);
	virtual void __fastcall SaveToStream(System::Classes::TStream* Dest, int BufferSize = 0x1000);
	virtual void __fastcall SaveToFile(const System::Sysutils::TFileName FileName, int BufferSize = 0x1000);
public:
	/* TObject.Create */ inline __fastcall TJclStream(void) : System::Classes::TStream() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJclStream(void) { }
	
	/* Hoisted overloads: */
	
public:
	inline __int64 __fastcall  Seek _DEPRECATED_ATTRIBUTE0 (const __int64 Offset, System::Word Origin){ return System::Classes::TStream::Seek(Offset, Origin); }
	
};

#pragma pack(pop)

class DELPHICLASS TJclHandleStream;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TJclHandleStream : public TJclStream
{
	typedef TJclStream inherited;
	
private:
	NativeUInt FHandle;
	
protected:
	virtual void __fastcall SetSize(const __int64 NewSize)/* overload */;
	
public:
	__fastcall TJclHandleStream(NativeUInt AHandle);
	virtual int __fastcall Read(void *Buffer, int Count)/* overload */;
	virtual int __fastcall Write(const void *Buffer, int Count)/* overload */;
	virtual __int64 __fastcall Seek(const __int64 Offset, System::Classes::TSeekOrigin Origin)/* overload */;
	__property NativeUInt Handle = {read=FHandle, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TJclHandleStream(void) { }
	
	/* Hoisted overloads: */
	
protected:
	inline void __fastcall  SetSize(int NewSize){ TJclStream::SetSize(NewSize); }
	
public:
	inline int __fastcall  Read(System::DynamicArray<System::Byte> Buffer, int Offset, int Count){ return System::Classes::TStream::Read(Buffer, Offset, Count); }
	inline int __fastcall  Read(System::DynamicArray<System::Byte> &Buffer, int Count){ return System::Classes::TStream::Read(Buffer, Count); }
	inline int __fastcall  Write(const System::DynamicArray<System::Byte> Buffer, int Offset, int Count){ return System::Classes::TStream::Write(Buffer, Offset, Count); }
	inline int __fastcall  Write(const System::DynamicArray<System::Byte> Buffer, int Count){ return System::Classes::TStream::Write(Buffer, Count); }
	inline int __fastcall  Seek(int Offset, System::Word Origin){ return TJclStream::Seek(Offset, Origin); }
	inline __int64 __fastcall  Seek _DEPRECATED_ATTRIBUTE0 (const __int64 Offset, System::Word Origin){ return System::Classes::TStream::Seek(Offset, Origin); }
	
};

#pragma pack(pop)

class DELPHICLASS TJclFileStream;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TJclFileStream : public TJclHandleStream
{
	typedef TJclHandleStream inherited;
	
public:
	__fastcall TJclFileStream(const System::Sysutils::TFileName FileName, System::Word Mode, unsigned Rights);
	__fastcall virtual ~TJclFileStream(void);
};

#pragma pack(pop)

class DELPHICLASS TJclEmptyStream;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TJclEmptyStream : public TJclStream
{
	typedef TJclStream inherited;
	
protected:
	virtual void __fastcall SetSize(const __int64 NewSize)/* overload */;
	
public:
	virtual int __fastcall Read(void *Buffer, int Count)/* overload */;
	virtual int __fastcall Write(const void *Buffer, int Count)/* overload */;
	virtual __int64 __fastcall Seek(const __int64 Offset, System::Classes::TSeekOrigin Origin)/* overload */;
public:
	/* TObject.Create */ inline __fastcall TJclEmptyStream(void) : TJclStream() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJclEmptyStream(void) { }
	
	/* Hoisted overloads: */
	
protected:
	inline void __fastcall  SetSize(int NewSize){ TJclStream::SetSize(NewSize); }
	
public:
	inline int __fastcall  Read(System::DynamicArray<System::Byte> Buffer, int Offset, int Count){ return System::Classes::TStream::Read(Buffer, Offset, Count); }
	inline int __fastcall  Read(System::DynamicArray<System::Byte> &Buffer, int Count){ return System::Classes::TStream::Read(Buffer, Count); }
	inline int __fastcall  Write(const System::DynamicArray<System::Byte> Buffer, int Offset, int Count){ return System::Classes::TStream::Write(Buffer, Offset, Count); }
	inline int __fastcall  Write(const System::DynamicArray<System::Byte> Buffer, int Count){ return System::Classes::TStream::Write(Buffer, Count); }
	inline int __fastcall  Seek(int Offset, System::Word Origin){ return TJclStream::Seek(Offset, Origin); }
	inline __int64 __fastcall  Seek _DEPRECATED_ATTRIBUTE0 (const __int64 Offset, System::Word Origin){ return System::Classes::TStream::Seek(Offset, Origin); }
	
};

#pragma pack(pop)

class DELPHICLASS TJclMultiplexStream;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TJclMultiplexStream : public TJclStream
{
	typedef TJclStream inherited;
	
private:
	System::Classes::TList* FStreams;
	int FReadStreamIndex;
	System::Classes::TStream* __fastcall GetStream(int Index);
	int __fastcall GetCount(void);
	void __fastcall SetStream(int Index, System::Classes::TStream* const Value);
	System::Classes::TStream* __fastcall GetReadStream(void);
	void __fastcall SetReadStream(System::Classes::TStream* const Value);
	void __fastcall SetReadStreamIndex(const int Value);
	
protected:
	virtual void __fastcall SetSize(const __int64 NewSize)/* overload */;
	
public:
	__fastcall TJclMultiplexStream(void);
	__fastcall virtual ~TJclMultiplexStream(void);
	virtual int __fastcall Read(void *Buffer, int Count)/* overload */;
	virtual int __fastcall Write(const void *Buffer, int Count)/* overload */;
	virtual __int64 __fastcall Seek(const __int64 Offset, System::Classes::TSeekOrigin Origin)/* overload */;
	int __fastcall Add(System::Classes::TStream* NewStream);
	void __fastcall Clear(void);
	int __fastcall Remove(System::Classes::TStream* AStream);
	void __fastcall Delete(const int Index);
	__property System::Classes::TStream* Streams[int Index] = {read=GetStream, write=SetStream};
	__property int ReadStreamIndex = {read=FReadStreamIndex, write=SetReadStreamIndex, nodefault};
	__property System::Classes::TStream* ReadStream = {read=GetReadStream, write=SetReadStream};
	__property int Count = {read=GetCount, nodefault};
	/* Hoisted overloads: */
	
protected:
	inline void __fastcall  SetSize(int NewSize){ TJclStream::SetSize(NewSize); }
	
public:
	inline int __fastcall  Read(System::DynamicArray<System::Byte> Buffer, int Offset, int Count){ return System::Classes::TStream::Read(Buffer, Offset, Count); }
	inline int __fastcall  Read(System::DynamicArray<System::Byte> &Buffer, int Count){ return System::Classes::TStream::Read(Buffer, Count); }
	inline int __fastcall  Write(const System::DynamicArray<System::Byte> Buffer, int Offset, int Count){ return System::Classes::TStream::Write(Buffer, Offset, Count); }
	inline int __fastcall  Write(const System::DynamicArray<System::Byte> Buffer, int Count){ return System::Classes::TStream::Write(Buffer, Count); }
	inline int __fastcall  Seek(int Offset, System::Word Origin){ return TJclStream::Seek(Offset, Origin); }
	inline __int64 __fastcall  Seek _DEPRECATED_ATTRIBUTE0 (const __int64 Offset, System::Word Origin){ return System::Classes::TStream::Seek(Offset, Origin); }
	
};

#pragma pack(pop)

class DELPHICLASS TJclStreamDecorator;
class PASCALIMPLEMENTATION TJclStreamDecorator : public TJclStream
{
	typedef TJclStream inherited;
	
private:
	System::Classes::TNotifyEvent FAfterStreamChange;
	System::Classes::TNotifyEvent FBeforeStreamChange;
	bool FOwnsStream;
	System::Classes::TStream* FStream;
	void __fastcall SetStream(System::Classes::TStream* Value);
	
protected:
	virtual void __fastcall DoAfterStreamChange(void);
	virtual void __fastcall DoBeforeStreamChange(void);
	virtual void __fastcall SetSize(const __int64 NewSize)/* overload */;
	
public:
	__fastcall TJclStreamDecorator(System::Classes::TStream* AStream, bool AOwnsStream);
	__fastcall virtual ~TJclStreamDecorator(void);
	virtual int __fastcall Read(void *Buffer, int Count)/* overload */;
	virtual int __fastcall Write(const void *Buffer, int Count)/* overload */;
	virtual __int64 __fastcall Seek(const __int64 Offset, System::Classes::TSeekOrigin Origin)/* overload */;
	__property System::Classes::TNotifyEvent AfterStreamChange = {read=FAfterStreamChange, write=FAfterStreamChange};
	__property System::Classes::TNotifyEvent BeforeStreamChange = {read=FBeforeStreamChange, write=FBeforeStreamChange};
	__property bool OwnsStream = {read=FOwnsStream, write=FOwnsStream, nodefault};
	__property System::Classes::TStream* Stream = {read=FStream, write=SetStream};
	/* Hoisted overloads: */
	
protected:
	inline void __fastcall  SetSize(int NewSize){ TJclStream::SetSize(NewSize); }
	
public:
	inline int __fastcall  Read(System::DynamicArray<System::Byte> Buffer, int Offset, int Count){ return System::Classes::TStream::Read(Buffer, Offset, Count); }
	inline int __fastcall  Read(System::DynamicArray<System::Byte> &Buffer, int Count){ return System::Classes::TStream::Read(Buffer, Count); }
	inline int __fastcall  Write(const System::DynamicArray<System::Byte> Buffer, int Offset, int Count){ return System::Classes::TStream::Write(Buffer, Offset, Count); }
	inline int __fastcall  Write(const System::DynamicArray<System::Byte> Buffer, int Count){ return System::Classes::TStream::Write(Buffer, Count); }
	inline int __fastcall  Seek(int Offset, System::Word Origin){ return TJclStream::Seek(Offset, Origin); }
	inline __int64 __fastcall  Seek _DEPRECATED_ATTRIBUTE0 (const __int64 Offset, System::Word Origin){ return System::Classes::TStream::Seek(Offset, Origin); }
	
};


class DELPHICLASS TJclBufferedStream;
class PASCALIMPLEMENTATION TJclBufferedStream : public TJclStreamDecorator
{
	typedef TJclStreamDecorator inherited;
	
private:
	typedef System::DynamicArray<System::Byte> _TJclBufferedStream__1;
	
	
protected:
	_TJclBufferedStream__1 FBuffer;
	int FBufferCurrentSize;
	int FBufferMaxModifiedPos;
	int FBufferSize;
	__int64 FBufferStart;
	__int64 FPosition;
	bool __fastcall BufferHit(void);
	virtual __int64 __fastcall GetCalcedSize(void);
	virtual bool __fastcall LoadBuffer(void);
	int __fastcall ReadFromBuffer(void *Buffer, int Count, int Start);
	int __fastcall WriteToBuffer(const void *Buffer, int Count, int Start);
	virtual void __fastcall DoAfterStreamChange(void);
	virtual void __fastcall DoBeforeStreamChange(void);
	virtual void __fastcall SetSize(const __int64 NewSize)/* overload */;
	
public:
	__fastcall TJclBufferedStream(System::Classes::TStream* AStream, bool AOwnsStream);
	__fastcall virtual ~TJclBufferedStream(void);
	virtual void __fastcall Flush(void);
	virtual int __fastcall Read(void *Buffer, int Count)/* overload */;
	virtual int __fastcall Write(const void *Buffer, int Count)/* overload */;
	virtual __int64 __fastcall Seek(const __int64 Offset, System::Classes::TSeekOrigin Origin)/* overload */;
	__property int BufferSize = {read=FBufferSize, write=FBufferSize, nodefault};
	/* Hoisted overloads: */
	
protected:
	inline void __fastcall  SetSize(int NewSize){ TJclStream::SetSize(NewSize); }
	
public:
	inline int __fastcall  Read(System::DynamicArray<System::Byte> Buffer, int Offset, int Count){ return System::Classes::TStream::Read(Buffer, Offset, Count); }
	inline int __fastcall  Read(System::DynamicArray<System::Byte> &Buffer, int Count){ return System::Classes::TStream::Read(Buffer, Count); }
	inline int __fastcall  Write(const System::DynamicArray<System::Byte> Buffer, int Offset, int Count){ return System::Classes::TStream::Write(Buffer, Offset, Count); }
	inline int __fastcall  Write(const System::DynamicArray<System::Byte> Buffer, int Count){ return System::Classes::TStream::Write(Buffer, Count); }
	inline int __fastcall  Seek(int Offset, System::Word Origin){ return TJclStream::Seek(Offset, Origin); }
	inline __int64 __fastcall  Seek _DEPRECATED_ATTRIBUTE0 (const __int64 Offset, System::Word Origin){ return System::Classes::TStream::Seek(Offset, Origin); }
	
};


typedef void __fastcall (__closure *TStreamNotifyEvent)(System::TObject* Sender, __int64 Position, __int64 Size);

class DELPHICLASS TJclEventStream;
class PASCALIMPLEMENTATION TJclEventStream : public TJclStreamDecorator
{
	typedef TJclStreamDecorator inherited;
	
private:
	TStreamNotifyEvent FNotification;
	void __fastcall DoNotification(void);
	
protected:
	virtual void __fastcall DoBeforeStreamChange(void);
	virtual void __fastcall DoAfterStreamChange(void);
	virtual void __fastcall SetSize(const __int64 NewSize)/* overload */;
	
public:
	__fastcall TJclEventStream(System::Classes::TStream* AStream, TStreamNotifyEvent ANotification, bool AOwnsStream);
	virtual int __fastcall Read(void *Buffer, int Count)/* overload */;
	virtual int __fastcall Write(const void *Buffer, int Count)/* overload */;
	virtual __int64 __fastcall Seek(const __int64 Offset, System::Classes::TSeekOrigin Origin)/* overload */;
	__property TStreamNotifyEvent OnNotification = {read=FNotification, write=FNotification};
public:
	/* TJclStreamDecorator.Destroy */ inline __fastcall virtual ~TJclEventStream(void) { }
	
	/* Hoisted overloads: */
	
protected:
	inline void __fastcall  SetSize(int NewSize){ TJclStream::SetSize(NewSize); }
	
public:
	inline int __fastcall  Read(System::DynamicArray<System::Byte> Buffer, int Offset, int Count){ return System::Classes::TStream::Read(Buffer, Offset, Count); }
	inline int __fastcall  Read(System::DynamicArray<System::Byte> &Buffer, int Count){ return System::Classes::TStream::Read(Buffer, Count); }
	inline int __fastcall  Write(const System::DynamicArray<System::Byte> Buffer, int Offset, int Count){ return System::Classes::TStream::Write(Buffer, Offset, Count); }
	inline int __fastcall  Write(const System::DynamicArray<System::Byte> Buffer, int Count){ return System::Classes::TStream::Write(Buffer, Count); }
	inline int __fastcall  Seek(int Offset, System::Word Origin){ return TJclStream::Seek(Offset, Origin); }
	inline __int64 __fastcall  Seek _DEPRECATED_ATTRIBUTE0 (const __int64 Offset, System::Word Origin){ return System::Classes::TStream::Seek(Offset, Origin); }
	
};


class DELPHICLASS TJclEasyStream;
class PASCALIMPLEMENTATION TJclEasyStream : public TJclStreamDecorator
{
	typedef TJclStreamDecorator inherited;
	
public:
	bool __fastcall IsEqual(System::Classes::TStream* Stream);
	bool __fastcall ReadBoolean(void);
	System::WideChar __fastcall ReadChar(void);
	char __fastcall ReadAnsiChar(void);
	System::WideChar __fastcall ReadWideChar(void);
	System::Byte __fastcall ReadByte(void);
	System::Currency __fastcall ReadCurrency(void);
	System::TDateTime __fastcall ReadDateTime(void);
	System::Extended __fastcall ReadExtended(void);
	double __fastcall ReadDouble(void);
	__int64 __fastcall ReadInt64(void);
	int __fastcall ReadInteger(void);
	System::UnicodeString __fastcall ReadCString(void);
	System::AnsiString __fastcall ReadCAnsiString(void);
	System::WideString __fastcall ReadCWideString(void);
	System::UnicodeString __fastcall ReadShortString(void);
	float __fastcall ReadSingle(void);
	System::UnicodeString __fastcall ReadSizedString(void);
	System::AnsiString __fastcall ReadSizedAnsiString(void);
	System::WideString __fastcall ReadSizedWideString(void);
	void __fastcall WriteBoolean(bool Value);
	void __fastcall WriteChar(System::WideChar Value);
	void __fastcall WriteAnsiChar(char Value);
	void __fastcall WriteWideChar(System::WideChar Value);
	void __fastcall WriteByte(System::Byte Value);
	void __fastcall WriteCurrency(const System::Currency Value);
	void __fastcall WriteDateTime(const System::TDateTime Value);
	void __fastcall WriteExtended(const System::Extended Value);
	void __fastcall WriteDouble(const double Value);
	void __fastcall WriteInt64(__int64 Value)/* overload */;
	void __fastcall WriteInteger(int Value)/* overload */;
	void __fastcall WriteCString(const System::UnicodeString Value);
	void __fastcall WriteCAnsiString(const System::AnsiString Value);
	void __fastcall WriteCWideString(const System::WideString Value);
	void __fastcall WriteShortString(const System::ShortString &Value);
	void __fastcall WriteSingle(const float Value);
	void __fastcall WriteSizedString(const System::UnicodeString Value);
	void __fastcall WriteSizedAnsiString(const System::AnsiString Value);
	void __fastcall WriteSizedWideString(const System::WideString Value);
public:
	/* TJclStreamDecorator.Create */ inline __fastcall TJclEasyStream(System::Classes::TStream* AStream, bool AOwnsStream) : TJclStreamDecorator(AStream, AOwnsStream) { }
	/* TJclStreamDecorator.Destroy */ inline __fastcall virtual ~TJclEasyStream(void) { }
	
};


class DELPHICLASS TJclScopedStream;
class PASCALIMPLEMENTATION TJclScopedStream : public TJclStream
{
	typedef TJclStream inherited;
	
private:
	System::Classes::TStream* FParentStream;
	__int64 FStartPos;
	__int64 FCurrentPos;
	__int64 FMaxSize;
	
protected:
	virtual void __fastcall SetSize(const __int64 NewSize)/* overload */;
	
public:
	__fastcall TJclScopedStream(System::Classes::TStream* AParentStream, const __int64 AMaxSize)/* overload */;
	__fastcall TJclScopedStream(System::Classes::TStream* AParentStream, const __int64 AStartPos, const __int64 AMaxSize)/* overload */;
	virtual int __fastcall Read(void *Buffer, int Count)/* overload */;
	virtual int __fastcall Write(const void *Buffer, int Count)/* overload */;
	virtual __int64 __fastcall Seek(const __int64 Offset, System::Classes::TSeekOrigin Origin)/* overload */;
	__property System::Classes::TStream* ParentStream = {read=FParentStream};
	__property __int64 StartPos = {read=FStartPos};
	__property __int64 MaxSize = {read=FMaxSize, write=FMaxSize};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TJclScopedStream(void) { }
	
	/* Hoisted overloads: */
	
protected:
	inline void __fastcall  SetSize(int NewSize){ TJclStream::SetSize(NewSize); }
	
public:
	inline int __fastcall  Read(System::DynamicArray<System::Byte> Buffer, int Offset, int Count){ return System::Classes::TStream::Read(Buffer, Offset, Count); }
	inline int __fastcall  Read(System::DynamicArray<System::Byte> &Buffer, int Count){ return System::Classes::TStream::Read(Buffer, Count); }
	inline int __fastcall  Write(const System::DynamicArray<System::Byte> Buffer, int Offset, int Count){ return System::Classes::TStream::Write(Buffer, Offset, Count); }
	inline int __fastcall  Write(const System::DynamicArray<System::Byte> Buffer, int Count){ return System::Classes::TStream::Write(Buffer, Count); }
	inline int __fastcall  Seek(int Offset, System::Word Origin){ return TJclStream::Seek(Offset, Origin); }
	inline __int64 __fastcall  Seek _DEPRECATED_ATTRIBUTE0 (const __int64 Offset, System::Word Origin){ return System::Classes::TStream::Seek(Offset, Origin); }
	
};


typedef __int64 __fastcall (__closure *TJclStreamSeekEvent)(System::TObject* Sender, const __int64 Offset, System::Classes::TSeekOrigin Origin);

typedef int __fastcall (__closure *TJclStreamReadEvent)(System::TObject* Sender, void *Buffer, int Count);

typedef int __fastcall (__closure *TJclStreamWriteEvent)(System::TObject* Sender, const void *Buffer, int Count);

typedef void __fastcall (__closure *TJclStreamSizeEvent)(System::TObject* Sender, const __int64 NewSize);

class DELPHICLASS TJclDelegatedStream;
class PASCALIMPLEMENTATION TJclDelegatedStream : public TJclStream
{
	typedef TJclStream inherited;
	
private:
	TJclStreamSeekEvent FOnSeek;
	TJclStreamReadEvent FOnRead;
	TJclStreamWriteEvent FOnWrite;
	TJclStreamSizeEvent FOnSize;
	
protected:
	virtual void __fastcall SetSize(const __int64 NewSize)/* overload */;
	
public:
	virtual __int64 __fastcall Seek(const __int64 Offset, System::Classes::TSeekOrigin Origin)/* overload */;
	virtual int __fastcall Read(void *Buffer, int Count)/* overload */;
	virtual int __fastcall Write(const void *Buffer, int Count)/* overload */;
	__property TJclStreamSeekEvent OnSeek = {read=FOnSeek, write=FOnSeek};
	__property TJclStreamReadEvent OnRead = {read=FOnRead, write=FOnRead};
	__property TJclStreamWriteEvent OnWrite = {read=FOnWrite, write=FOnWrite};
	__property TJclStreamSizeEvent OnSize = {read=FOnSize, write=FOnSize};
public:
	/* TObject.Create */ inline __fastcall TJclDelegatedStream(void) : TJclStream() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJclDelegatedStream(void) { }
	
	/* Hoisted overloads: */
	
protected:
	inline void __fastcall  SetSize(int NewSize){ TJclStream::SetSize(NewSize); }
	
public:
	inline int __fastcall  Seek(int Offset, System::Word Origin){ return TJclStream::Seek(Offset, Origin); }
	inline __int64 __fastcall  Seek _DEPRECATED_ATTRIBUTE0 (const __int64 Offset, System::Word Origin){ return System::Classes::TStream::Seek(Offset, Origin); }
	inline int __fastcall  Read(System::DynamicArray<System::Byte> Buffer, int Offset, int Count){ return System::Classes::TStream::Read(Buffer, Offset, Count); }
	inline int __fastcall  Read(System::DynamicArray<System::Byte> &Buffer, int Count){ return System::Classes::TStream::Read(Buffer, Count); }
	inline int __fastcall  Write(const System::DynamicArray<System::Byte> Buffer, int Offset, int Count){ return System::Classes::TStream::Write(Buffer, Offset, Count); }
	inline int __fastcall  Write(const System::DynamicArray<System::Byte> Buffer, int Count){ return System::Classes::TStream::Write(Buffer, Count); }
	
};


class DELPHICLASS TJclSectoredStream;
class PASCALIMPLEMENTATION TJclSectoredStream : public TJclBufferedStream
{
	typedef TJclBufferedStream inherited;
	
protected:
	int FSectorOverHead;
	__int64 __fastcall FlatToSectored(const __int64 Position);
	__int64 __fastcall SectoredToFlat(const __int64 Position);
	virtual __int64 __fastcall GetCalcedSize(void);
	virtual bool __fastcall LoadBuffer(void);
	virtual void __fastcall DoAfterStreamChange(void);
	virtual void __fastcall AfterBlockRead(void);
	virtual void __fastcall BeforeBlockWrite(void);
	virtual void __fastcall SetSize(const __int64 NewSize)/* overload */;
	
public:
	__fastcall TJclSectoredStream(System::Classes::TStream* AStorageStream, bool AOwnsStream, int ASectorOverHead);
	virtual void __fastcall Flush(void);
public:
	/* TJclBufferedStream.Destroy */ inline __fastcall virtual ~TJclSectoredStream(void) { }
	
	/* Hoisted overloads: */
	
protected:
	inline void __fastcall  SetSize(int NewSize){ TJclStream::SetSize(NewSize); }
	
};


class DELPHICLASS TJclSplitStream;
class PASCALIMPLEMENTATION TJclSplitStream : public TJclStream
{
	typedef TJclStream inherited;
	
private:
	System::Classes::TStream* FVolume;
	int FVolumeIndex;
	__int64 FVolumeMaxSize;
	__int64 FPosition;
	__int64 FVolumePosition;
	bool FForcePosition;
	
protected:
	virtual System::Classes::TStream* __fastcall GetVolume(int Index) = 0 ;
	virtual __int64 __fastcall GetVolumeMaxSize(int Index) = 0 ;
	virtual __int64 __fastcall GetSize(void);
	virtual void __fastcall SetSize(const __int64 NewSize)/* overload */;
	bool __fastcall InternalLoadVolume(int Index);
	
public:
	__fastcall TJclSplitStream(bool AForcePosition);
	virtual __int64 __fastcall Seek(const __int64 Offset, System::Classes::TSeekOrigin Origin)/* overload */;
	virtual int __fastcall Read(void *Buffer, int Count)/* overload */;
	virtual int __fastcall Write(const void *Buffer, int Count)/* overload */;
	__property bool ForcePosition = {read=FForcePosition, write=FForcePosition, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TJclSplitStream(void) { }
	
	/* Hoisted overloads: */
	
protected:
	inline void __fastcall  SetSize(int NewSize){ TJclStream::SetSize(NewSize); }
	
public:
	inline int __fastcall  Seek(int Offset, System::Word Origin){ return TJclStream::Seek(Offset, Origin); }
	inline __int64 __fastcall  Seek _DEPRECATED_ATTRIBUTE0 (const __int64 Offset, System::Word Origin){ return System::Classes::TStream::Seek(Offset, Origin); }
	inline int __fastcall  Read(System::DynamicArray<System::Byte> Buffer, int Offset, int Count){ return System::Classes::TStream::Read(Buffer, Offset, Count); }
	inline int __fastcall  Read(System::DynamicArray<System::Byte> &Buffer, int Count){ return System::Classes::TStream::Read(Buffer, Count); }
	inline int __fastcall  Write(const System::DynamicArray<System::Byte> Buffer, int Offset, int Count){ return System::Classes::TStream::Write(Buffer, Offset, Count); }
	inline int __fastcall  Write(const System::DynamicArray<System::Byte> Buffer, int Count){ return System::Classes::TStream::Write(Buffer, Count); }
	
};


typedef System::Classes::TStream* __fastcall (__closure *TJclVolumeEvent)(int Index);

typedef __int64 __fastcall (__closure *TJclVolumeMaxSizeEvent)(int Index);

class DELPHICLASS TJclDynamicSplitStream;
class PASCALIMPLEMENTATION TJclDynamicSplitStream : public TJclSplitStream
{
	typedef TJclSplitStream inherited;
	
private:
	TJclVolumeEvent FOnVolume;
	TJclVolumeMaxSizeEvent FOnVolumeMaxSize;
	
protected:
	virtual System::Classes::TStream* __fastcall GetVolume(int Index);
	virtual __int64 __fastcall GetVolumeMaxSize(int Index);
	
public:
	__property TJclVolumeEvent OnVolume = {read=FOnVolume, write=FOnVolume};
	__property TJclVolumeMaxSizeEvent OnVolumeMaxSize = {read=FOnVolumeMaxSize, write=FOnVolumeMaxSize};
public:
	/* TJclSplitStream.Create */ inline __fastcall TJclDynamicSplitStream(bool AForcePosition) : TJclSplitStream(AForcePosition) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TJclDynamicSplitStream(void) { }
	
};


class DELPHICLASS TJclSplitVolume;
class PASCALIMPLEMENTATION TJclSplitVolume : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	__int64 MaxSize;
	System::Classes::TStream* Stream;
	bool OwnStream;
public:
	/* TObject.Create */ inline __fastcall TJclSplitVolume(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJclSplitVolume(void) { }
	
};


class DELPHICLASS TJclStaticSplitStream;
class PASCALIMPLEMENTATION TJclStaticSplitStream : public TJclSplitStream
{
	typedef TJclSplitStream inherited;
	
private:
	System::Contnrs::TObjectList* FVolumes;
	int __fastcall GetVolumeCount(void);
	
protected:
	virtual System::Classes::TStream* __fastcall GetVolume(int Index);
	virtual __int64 __fastcall GetVolumeMaxSize(int Index);
	
public:
	__fastcall TJclStaticSplitStream(bool AForcePosition);
	__fastcall virtual ~TJclStaticSplitStream(void);
	int __fastcall AddVolume(System::Classes::TStream* AStream, __int64 AMaxSize = 0LL, bool AOwnStream = false);
	__property int VolumeCount = {read=GetVolumeCount, nodefault};
	__property System::Classes::TStream* Volumes[int Index] = {read=GetVolume};
	__property __int64 VolumeMaxSizes[int Index] = {read=GetVolumeMaxSize};
};


//-- var, const, procedure ---------------------------------------------------
static const System::Word StreamDefaultBufferSize = System::Word(0x1000);
extern DELPHI_PACKAGE __int64 __fastcall StreamCopy(System::Classes::TStream* Source, System::Classes::TStream* Dest, int BufferSize = 0x1000);
extern DELPHI_PACKAGE bool __fastcall CompareStreams(System::Classes::TStream* A, System::Classes::TStream* B, int BufferSize = 0x1000);
extern DELPHI_PACKAGE bool __fastcall CompareFiles(const System::Sysutils::TFileName FileA, const System::Sysutils::TFileName FileB, int BufferSize = 0x1000);
}	/* namespace Jclstreams */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_JCLSTREAMS)
using namespace Jclstreams;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// JclstreamsHPP
