// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'TcpIp.pas' rev: 27.00 (Windows)

#ifndef TcpipHPP
#define TcpipHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.SysUtils.hpp>	// Pascal unit
#include <System.Classes.hpp>	// Pascal unit
#include <Winapi.WinSock.hpp>	// Pascal unit
#include <Winapi.Windows.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Tcpip
{
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TSocketState : unsigned char { invalid, valid, connected, state_unknown };

enum DECLSPEC_DENUM TTraceLevel : unsigned char { tt_proto_sent, tt_proto_get, tt_socket };

class DELPHICLASS ETcpIpError;
#pragma pack(push,4)
class PASCALIMPLEMENTATION ETcpIpError : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall ETcpIpError(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ETcpIpError(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ETcpIpError(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ETcpIpError(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ETcpIpError(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ETcpIpError(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ETcpIpError(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ETcpIpError(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ETcpIpError(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ETcpIpError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ETcpIpError(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ETcpIpError(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ETcpIpError(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS ESocketError;
#pragma pack(push,4)
class PASCALIMPLEMENTATION ESocketError : public ETcpIpError
{
	typedef ETcpIpError inherited;
	
public:
	int ErrorNumber;
	__fastcall ESocketError(int Number);
public:
	/* Exception.CreateFmt */ inline __fastcall ESocketError(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : ETcpIpError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ESocketError(NativeUInt Ident)/* overload */ : ETcpIpError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ESocketError(System::PResStringRec ResStringRec)/* overload */ : ETcpIpError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ESocketError(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : ETcpIpError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ESocketError(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : ETcpIpError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ESocketError(const System::UnicodeString Msg, int AHelpContext) : ETcpIpError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ESocketError(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : ETcpIpError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ESocketError(NativeUInt Ident, int AHelpContext)/* overload */ : ETcpIpError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ESocketError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : ETcpIpError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ESocketError(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : ETcpIpError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ESocketError(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : ETcpIpError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ESocketError(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS EProtocolError;
#pragma pack(push,4)
class PASCALIMPLEMENTATION EProtocolError : public ETcpIpError
{
	typedef ETcpIpError inherited;
	
public:
	System::Word ErrorNumber;
	System::UnicodeString Protocol;
	__fastcall EProtocolError(const System::UnicodeString Proto, const System::UnicodeString Msg, System::Word number);
public:
	/* Exception.CreateFmt */ inline __fastcall EProtocolError(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : ETcpIpError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EProtocolError(NativeUInt Ident)/* overload */ : ETcpIpError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EProtocolError(System::PResStringRec ResStringRec)/* overload */ : ETcpIpError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EProtocolError(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : ETcpIpError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EProtocolError(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : ETcpIpError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EProtocolError(const System::UnicodeString Msg, int AHelpContext) : ETcpIpError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EProtocolError(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : ETcpIpError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EProtocolError(NativeUInt Ident, int AHelpContext)/* overload */ : ETcpIpError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EProtocolError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : ETcpIpError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EProtocolError(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : ETcpIpError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EProtocolError(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : ETcpIpError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EProtocolError(void) { }
	
};

#pragma pack(pop)

typedef void __fastcall (__closure *TTraceProc)(const System::UnicodeString S, TTraceLevel Level);

class DELPHICLASS TTcpIp;
class PASCALIMPLEMENTATION TTcpIp : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
protected:
	NativeInt FSocket;
	System::UnicodeString FHostname;
	TTraceProc FTracer;
	short FSocketNumber;
	int IpAddress;
	bool FEof;
	System::Classes::TStream* FStream;
	void *FBuffer;
	bool FLoggedIn;
	NativeInt __fastcall CreateSocket(void);
	void __fastcall ConnectSocket(NativeInt &Socket, short SocketNumber, int IpAddress);
	void __fastcall BindSocket(NativeInt &Socket, System::Word OutPortMin, System::Word OutPortMax);
	virtual void __fastcall OpenSocketOut(NativeInt &Socket, short SocketNumber, int IpAddress);
	void __fastcall OpenSocketIn(NativeInt &Socket, short &SocketNumber, int IpAddress);
	void __fastcall CloseSocket(NativeInt &Socket);
	NativeInt __fastcall AcceptSocketIn(NativeInt Socket, sockaddr_in &SockInfo);
	TSocketState __fastcall SocketState(NativeInt Socket);
	short __fastcall SocketByName(const System::UnicodeString Service);
	System::UnicodeString __fastcall ReadLine(NativeInt Socket);
	void __fastcall ReadVar(NativeInt Socket, void *Buf, int Size, int &Ok);
	void __fastcall WriteBuf(NativeInt Socket, const void *Buf, int &Size);
	void __fastcall WriteStr(NativeInt Socket, const System::UnicodeString S);
	void __fastcall SetStream(System::Classes::TStream* Value);
	virtual void __fastcall Action(void);
	virtual void __fastcall SendCommand(const System::UnicodeString S);
	
public:
	virtual void __fastcall Login(void);
	virtual void __fastcall Logout(void);
	__property TTraceProc OnTrace = {read=FTracer, write=FTracer};
	__fastcall virtual TTcpIp(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TTcpIp(void);
	virtual bool __fastcall Eof(NativeInt Socket);
};


class DELPHICLASS THttp;
class PASCALIMPLEMENTATION THttp : public TTcpIp
{
	typedef TTcpIp inherited;
	
protected:
	System::UnicodeString FUrl;
	System::UnicodeString FPath;
	System::UnicodeString FProxy;
	System::UnicodeString FSender;
	System::UnicodeString FReference;
	System::UnicodeString FAgent;
	bool FNoCache;
	int FStatusNr;
	System::UnicodeString FStatusTxt;
	int FSize;
	System::UnicodeString FType;
	System::Classes::TStringList* FDoAuthor;
	System::UnicodeString FContentPost;
	bool FRedirect;
	void __fastcall GetBody(bool Post);
	void __fastcall SendRequest(const System::UnicodeString Method, const System::UnicodeString Version);
	void __fastcall GetAnswer(void);
	void __fastcall ReportStatusError(void);
	
public:
	__property System::Classes::TStream* Stream = {read=FStream, write=SetStream};
	__property int ContentSize = {read=FSize, nodefault};
	__property System::UnicodeString ContentType = {read=FType};
	__property int StatusNumber = {read=FStatusNr, nodefault};
	__property System::UnicodeString StatusText = {read=FStatusTxt};
	virtual void __fastcall Action(void);
	void __fastcall Post(void);
	__fastcall virtual THttp(System::Classes::TComponent* AOwner);
	__fastcall virtual ~THttp(void);
	__property System::Classes::TStringList* AuthorizationRequest = {read=FDoAuthor};
	
__published:
	__property System::UnicodeString URL = {read=FUrl, write=FUrl};
	__property System::UnicodeString Proxy = {read=FProxy, write=FProxy};
	__property System::UnicodeString Sender = {read=FSender, write=FSender};
	__property System::UnicodeString Agent = {read=FAgent, write=FAgent};
	__property System::UnicodeString Reference = {read=FReference, write=FReference};
	__property bool NoCache = {read=FNoCache, write=FNoCache, nodefault};
	__property System::UnicodeString ContentTypePost = {read=FContentPost, write=FContentPost};
	__property OnTrace;
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE System::ResourceString _SSocketError2;
#define Tcpip_SSocketError2 System::LoadResourceString(&Tcpip::_SSocketError2)
extern DELPHI_PACKAGE System::ResourceString _STimeout;
#define Tcpip_STimeout System::LoadResourceString(&Tcpip::_STimeout)
extern DELPHI_PACKAGE System::ResourceString _SUnknownSockError;
#define Tcpip_SUnknownSockError System::LoadResourceString(&Tcpip::_SUnknownSockError)
extern DELPHI_PACKAGE System::ResourceString _SHttpError;
#define Tcpip_SHttpError System::LoadResourceString(&Tcpip::_SHttpError)
extern DELPHI_PACKAGE System::ResourceString _SRedirectLimitError;
#define Tcpip_SRedirectLimitError System::LoadResourceString(&Tcpip::_SRedirectLimitError)
extern DELPHI_PACKAGE void __fastcall Register(void);
}	/* namespace Tcpip */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_TCPIP)
using namespace Tcpip;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// TcpipHPP
