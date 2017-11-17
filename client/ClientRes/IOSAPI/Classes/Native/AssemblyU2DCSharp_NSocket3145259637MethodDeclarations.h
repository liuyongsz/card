#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// NSocket
struct NSocket_t3145259637;
// System.Net.Sockets.Socket
struct Socket_t3821512045;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.IO.MemoryStream
struct MemoryStream_t743994179;
// System.IO.Stream
struct Stream_t3255436806;
// NetData
struct NetData_t1634960601;
// System.IAsyncResult
struct IAsyncResult_t1999651008;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_NetProtocal_Request1913412249.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_IO_MemoryStream743994179.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "AssemblyU2DCSharp_NetData1634960601.h"

// System.Void NSocket::.ctor()
extern "C"  void NSocket__ctor_m2386204290 (NSocket_t3145259637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NSocket::.cctor()
extern "C"  void NSocket__cctor_m3852172071 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NSocket::get_Waitflag()
extern "C"  bool NSocket_get_Waitflag_m3699112164 (NSocket_t3145259637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NSocket::set_Waitflag(System.Boolean)
extern "C"  void NSocket_set_Waitflag_m4015233421 (NSocket_t3145259637 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NSocket::AddWaitMsgCorrelation(System.Int32)
extern "C"  void NSocket_AddWaitMsgCorrelation_m3682335170 (NSocket_t3145259637 * __this, int32_t ___correlationid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NSocket::DelWaitMsgCorrelation(System.Int32)
extern "C"  void NSocket_DelWaitMsgCorrelation_m1029130308 (NSocket_t3145259637 * __this, int32_t ___correlationid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NSocket::ResetWaitMsg()
extern "C"  void NSocket_ResetWaitMsg_m2837645867 (NSocket_t3145259637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.Socket NSocket::get_Socket()
extern "C"  Socket_t3821512045 * NSocket_get_Socket_m2668404908 (NSocket_t3145259637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NSocket::SetServerTime(System.Single)
extern "C"  void NSocket_SetServerTime_m2752592107 (NSocket_t3145259637 * __this, float ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NSocket::GetServerTime()
extern "C"  float NSocket_GetServerTime_m2000442238 (NSocket_t3145259637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NSocket::Destroy()
extern "C"  void NSocket_Destroy_m3596568112 (NSocket_t3145259637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NSocket::Finalize()
extern "C"  void NSocket_Finalize_m1962641322 (NSocket_t3145259637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// NSocket NSocket::GetInstance()
extern "C"  NSocket_t3145259637 * NSocket_GetInstance_m482973807 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NSocket::ReConnect()
extern "C"  void NSocket_ReConnect_m3070284769 (NSocket_t3145259637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NSocket::Send(NetProtocal.Request,System.Int32,System.Byte[],System.Int32)
extern "C"  bool NSocket_Send_m3653325103 (NSocket_t3145259637 * __this, int32_t ___cmd0, int32_t ___correlationid1, ByteU5BU5D_t3397334013* ___data2, int32_t ___len3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NSocket::AddToSendQueue(System.Int32,NetProtocal.Request,System.Byte[],System.Int32)
extern "C"  void NSocket_AddToSendQueue_m3432695420 (NSocket_t3145259637 * __this, int32_t ___correlationid0, int32_t ___cmdtype1, ByteU5BU5D_t3397334013* ___data2, int32_t ___len3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 NSocket::GetTimeStamp(System.Boolean)
extern "C"  int64_t NSocket_GetTimeStamp_m1736400224 (Il2CppObject * __this /* static, unused */, bool ___is130, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NSocket::SendData(NetProtocal.Request,System.Object)
extern "C"  void NSocket_SendData_m4031289308 (NSocket_t3145259637 * __this, int32_t ___cmd0, Il2CppObject * ___obj1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NSocket::StarConnect()
extern "C"  void NSocket_StarConnect_m3634092640 (NSocket_t3145259637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NSocket::SetIpAddress(System.String,System.Int32)
extern "C"  void NSocket_SetIpAddress_m2358545206 (NSocket_t3145259637 * __this, String_t* ___ip0, int32_t ___port1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NSocket::ConnectServer()
extern "C"  void NSocket_ConnectServer_m1102005251 (NSocket_t3145259637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NSocket::IsConnected()
extern "C"  bool NSocket_IsConnected_m1736131817 (NSocket_t3145259637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NSocket::ReadInt(System.IO.MemoryStream)
extern "C"  int32_t NSocket_ReadInt_m1777544737 (NSocket_t3145259637 * __this, MemoryStream_t743994179 * ___ms0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NSocket::ClearStream(System.IO.Stream)
extern "C"  void NSocket_ClearStream_m2727734952 (NSocket_t3145259637 * __this, Stream_t3255436806 * ___ms0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NSocket::OnReceive(System.Byte[],System.Int32)
extern "C"  void NSocket_OnReceive_m2483346642 (NSocket_t3145259637 * __this, ByteU5BU5D_t3397334013* ___bytes0, int32_t ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NSocket::OnReceivedMessage(System.Object)
extern "C"  void NSocket_OnReceivedMessage_m2435183739 (NSocket_t3145259637 * __this, Il2CppObject * ___ms0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NSocket::Update()
extern "C"  void NSocket_Update_m470980157 (NSocket_t3145259637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NSocket::PraseData(NetData)
extern "C"  void NSocket_PraseData_m646145866 (NSocket_t3145259637 * __this, NetData_t1634960601 * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 NSocket::RemainingBytes()
extern "C"  int64_t NSocket_RemainingBytes_m1567422446 (NSocket_t3145259637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NSocket::ConnectCallback(System.IAsyncResult)
extern "C"  void NSocket_ConnectCallback_m654120704 (NSocket_t3145259637 * __this, Il2CppObject * ___asyncConnect0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NSocket::ReceiveSocket()
extern "C"  void NSocket_ReceiveSocket_m3967386198 (NSocket_t3145259637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NSocket::Closed()
extern "C"  void NSocket_Closed_m3963770936 (NSocket_t3145259637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
