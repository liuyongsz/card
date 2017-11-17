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

// ExitGames.Client.Photon.IPhotonSocket
struct IPhotonSocket_t429031990;
// ExitGames.Client.Photon.IPhotonPeerListener
struct IPhotonPeerListener_t2218572769;
// System.String
struct String_t;
// ExitGames.Client.Photon.PeerBase
struct PeerBase_t822653733;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Net.IPAddress
struct IPAddress_t1399971723;

#include "codegen/il2cpp-codegen.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_ConnectionP3211808698.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_PhotonSocke2406574302.h"
#include "mscorlib_System_String2029220233.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_PeerBase822653733.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_DebugLevel980888449.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_StatusCode2706638303.h"

// ExitGames.Client.Photon.IPhotonPeerListener ExitGames.Client.Photon.IPhotonSocket::get_Listener()
extern "C"  Il2CppObject * IPhotonSocket_get_Listener_m3236180259 (IPhotonSocket_t429031990 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.ConnectionProtocol ExitGames.Client.Photon.IPhotonSocket::get_Protocol()
extern "C"  uint8_t IPhotonSocket_get_Protocol_m789921250 (IPhotonSocket_t429031990 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.IPhotonSocket::set_Protocol(ExitGames.Client.Photon.ConnectionProtocol)
extern "C"  void IPhotonSocket_set_Protocol_m1133394827 (IPhotonSocket_t429031990 * __this, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.PhotonSocketState ExitGames.Client.Photon.IPhotonSocket::get_State()
extern "C"  int32_t IPhotonSocket_get_State_m120976845 (IPhotonSocket_t429031990 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.IPhotonSocket::set_State(ExitGames.Client.Photon.PhotonSocketState)
extern "C"  void IPhotonSocket_set_State_m3090965262 (IPhotonSocket_t429031990 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.IPhotonSocket::get_ServerAddress()
extern "C"  String_t* IPhotonSocket_get_ServerAddress_m61984067 (IPhotonSocket_t429031990 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.IPhotonSocket::set_ServerAddress(System.String)
extern "C"  void IPhotonSocket_set_ServerAddress_m4070965872 (IPhotonSocket_t429031990 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.IPhotonSocket::get_ServerPort()
extern "C"  int32_t IPhotonSocket_get_ServerPort_m1262085555 (IPhotonSocket_t429031990 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.IPhotonSocket::set_ServerPort(System.Int32)
extern "C"  void IPhotonSocket_set_ServerPort_m2336430786 (IPhotonSocket_t429031990 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.IPhotonSocket::get_Connected()
extern "C"  bool IPhotonSocket_get_Connected_m3239442760 (IPhotonSocket_t429031990 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.IPhotonSocket::get_MTU()
extern "C"  int32_t IPhotonSocket_get_MTU_m903859255 (IPhotonSocket_t429031990 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.IPhotonSocket::.ctor(ExitGames.Client.Photon.PeerBase)
extern "C"  void IPhotonSocket__ctor_m879339055 (IPhotonSocket_t429031990 * __this, PeerBase_t822653733 * ___peerBase0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.IPhotonSocket::Connect()
extern "C"  bool IPhotonSocket_Connect_m2512589978 (IPhotonSocket_t429031990 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.IPhotonSocket::HandleReceivedDatagram(System.Byte[],System.Int32,System.Boolean)
extern "C"  void IPhotonSocket_HandleReceivedDatagram_m4127817837 (IPhotonSocket_t429031990 * __this, ByteU5BU5D_t3397334013* ___inBuffer0, int32_t ___length1, bool ___willBeReused2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.IPhotonSocket::ReportDebugOfLevel(ExitGames.Client.Photon.DebugLevel)
extern "C"  bool IPhotonSocket_ReportDebugOfLevel_m3133053487 (IPhotonSocket_t429031990 * __this, uint8_t ___levelOfMessage0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.IPhotonSocket::EnqueueDebugReturn(ExitGames.Client.Photon.DebugLevel,System.String)
extern "C"  void IPhotonSocket_EnqueueDebugReturn_m291324038 (IPhotonSocket_t429031990 * __this, uint8_t ___debugLevel0, String_t* ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.IPhotonSocket::HandleException(ExitGames.Client.Photon.StatusCode)
extern "C"  void IPhotonSocket_HandleException_m1416820696 (IPhotonSocket_t429031990 * __this, int32_t ___statusCode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.IPhotonSocket::TryParseAddress(System.String,System.String&,System.UInt16&)
extern "C"  bool IPhotonSocket_TryParseAddress_m2492531928 (IPhotonSocket_t429031990 * __this, String_t* ___addressAndPort0, String_t** ___address1, uint16_t* ___port2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress ExitGames.Client.Photon.IPhotonSocket::GetIpAddress(System.String)
extern "C"  IPAddress_t1399971723 * IPhotonSocket_GetIpAddress_m2214205149 (Il2CppObject * __this /* static, unused */, String_t* ___serverIp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.IPhotonSocket::<HandleException>b__7()
extern "C"  void IPhotonSocket_U3CHandleExceptionU3Eb__7_m2098361934 (IPhotonSocket_t429031990 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
