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

// ExitGames.Client.Photon.TPeer
struct TPeer_t393296942;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t2064209302;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_t3648537128;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_PeerBase_Eg3215798507.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_OperationRe3648537128.h"

// System.Void ExitGames.Client.Photon.TPeer::.ctor()
extern "C"  void TPeer__ctor_m981872684 (TPeer_t393296942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TPeer::InitPeerBase()
extern "C"  void TPeer_InitPeerBase_m979720733 (TPeer_t393296942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.TPeer::Connect(System.String,System.String)
extern "C"  bool TPeer_Connect_m3119387828 (TPeer_t393296942 * __this, String_t* ___serverAddress0, String_t* ___appID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TPeer::Disconnect()
extern "C"  void TPeer_Disconnect_m4199843944 (TPeer_t393296942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TPeer::StopConnection()
extern "C"  void TPeer_StopConnection_m4220391978 (TPeer_t393296942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TPeer::FetchServerTimestamp()
extern "C"  void TPeer_FetchServerTimestamp_m512881219 (TPeer_t393296942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TPeer::EnqueueInit()
extern "C"  void TPeer_EnqueueInit_m1276967260 (TPeer_t393296942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.TPeer::DispatchIncomingCommands()
extern "C"  bool TPeer_DispatchIncomingCommands_m3142774790 (TPeer_t393296942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.TPeer::SendOutgoingCommands()
extern "C"  bool TPeer_SendOutgoingCommands_m3175040680 (TPeer_t393296942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.TPeer::SendAcksOnly()
extern "C"  bool TPeer_SendAcksOnly_m1720623284 (TPeer_t393296942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.TPeer::EnqueueOperation(System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,System.Byte,System.Boolean,System.Byte,System.Boolean,ExitGames.Client.Photon.PeerBase/EgMessageType)
extern "C"  bool TPeer_EnqueueOperation_m1790820536 (TPeer_t393296942 * __this, Dictionary_2_t2064209302 * ___parameters0, uint8_t ___opCode1, bool ___sendReliable2, uint8_t ___channelId3, bool ___encrypt4, uint8_t ___messageType5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ExitGames.Client.Photon.TPeer::SerializeOperationToMessage(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,ExitGames.Client.Photon.PeerBase/EgMessageType,System.Boolean)
extern "C"  ByteU5BU5D_t3397334013* TPeer_SerializeOperationToMessage_m1725736428 (TPeer_t393296942 * __this, uint8_t ___opc0, Dictionary_2_t2064209302 * ___parameters1, uint8_t ___messageType2, bool ___encrypt3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.TPeer::EnqueueMessageAsPayload(System.Boolean,System.Byte[],System.Byte)
extern "C"  bool TPeer_EnqueueMessageAsPayload_m823252664 (TPeer_t393296942 * __this, bool ___sendReliable0, ByteU5BU5D_t3397334013* ___opMessage1, uint8_t ___channelId2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TPeer::SendPing()
extern "C"  void TPeer_SendPing_m1833532712 (TPeer_t393296942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TPeer::SendData(System.Byte[])
extern "C"  void TPeer_SendData_m3443713739 (TPeer_t393296942 * __this, ByteU5BU5D_t3397334013* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TPeer::ReceiveIncomingCommands(System.Byte[],System.Int32)
extern "C"  void TPeer_ReceiveIncomingCommands_m3518990743 (TPeer_t393296942 * __this, ByteU5BU5D_t3397334013* ___inbuff0, int32_t ___dataLength1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TPeer::ReadPingResult(System.Byte[])
extern "C"  void TPeer_ReadPingResult_m2562374626 (TPeer_t393296942 * __this, ByteU5BU5D_t3397334013* ___inbuff0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TPeer::ReadPingResult(ExitGames.Client.Photon.OperationResponse)
extern "C"  void TPeer_ReadPingResult_m4238454621 (TPeer_t393296942 * __this, OperationResponse_t3648537128 * ___operationResponse0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TPeer::.cctor()
extern "C"  void TPeer__cctor_m296228811 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
