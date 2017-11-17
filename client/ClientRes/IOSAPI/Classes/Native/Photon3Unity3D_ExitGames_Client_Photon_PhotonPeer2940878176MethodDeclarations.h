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

// ExitGames.Client.Photon.PhotonPeer
struct PhotonPeer_t2940878176;
// System.Type
struct Type_t;
// ExitGames.Client.Photon.IPhotonPeerListener
struct IPhotonPeerListener_t2218572769;
// ExitGames.Client.Photon.TrafficStatsGameLevel
struct TrafficStatsGameLevel_t2470135126;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t2064209302;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_DebugLevel980888449.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_PeerStateVa1383826784.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_ConnectionP3211808698.h"
#include "mscorlib_System_String2029220233.h"

// System.Void ExitGames.Client.Photon.PhotonPeer::set_SocketImplementation(System.Type)
extern "C"  void PhotonPeer_set_SocketImplementation_m3428411983 (PhotonPeer_t2940878176 * __this, Type_t * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_DebugOut(ExitGames.Client.Photon.DebugLevel)
extern "C"  void PhotonPeer_set_DebugOut_m1337241191 (PhotonPeer_t2940878176 * __this, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.DebugLevel ExitGames.Client.Photon.PhotonPeer::get_DebugOut()
extern "C"  uint8_t PhotonPeer_get_DebugOut_m4124403036 (PhotonPeer_t2940878176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.IPhotonPeerListener ExitGames.Client.Photon.PhotonPeer::get_Listener()
extern "C"  Il2CppObject * PhotonPeer_get_Listener_m3927833165 (PhotonPeer_t2940878176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_Listener(ExitGames.Client.Photon.IPhotonPeerListener)
extern "C"  void PhotonPeer_set_Listener_m862200510 (PhotonPeer_t2940878176 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::get_TrafficStatsEnabled()
extern "C"  bool PhotonPeer_get_TrafficStatsEnabled_m3105775826 (PhotonPeer_t2940878176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.TrafficStatsGameLevel ExitGames.Client.Photon.PhotonPeer::get_TrafficStatsGameLevel()
extern "C"  TrafficStatsGameLevel_t2470135126 * PhotonPeer_get_TrafficStatsGameLevel_m2654042022 (PhotonPeer_t2940878176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_QuickResendAttempts(System.Byte)
extern "C"  void PhotonPeer_set_QuickResendAttempts_m1074766316 (PhotonPeer_t2940878176 * __this, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.PeerStateValue ExitGames.Client.Photon.PhotonPeer::get_PeerState()
extern "C"  uint8_t PhotonPeer_get_PeerState_m4074614519 (PhotonPeer_t2940878176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_SentCountAllowance(System.Int32)
extern "C"  void PhotonPeer_set_SentCountAllowance_m92251949 (PhotonPeer_t2940878176 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_TimePingInterval(System.Int32)
extern "C"  void PhotonPeer_set_TimePingInterval_m2448407098 (PhotonPeer_t2940878176 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.ConnectionProtocol ExitGames.Client.Photon.PhotonPeer::get_UsedProtocol()
extern "C"  uint8_t PhotonPeer_get_UsedProtocol_m231967813 (PhotonPeer_t2940878176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::get_IsEncryptionAvailable()
extern "C"  bool PhotonPeer_get_IsEncryptionAvailable_m3287582627 (PhotonPeer_t2940878176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::.ctor(ExitGames.Client.Photon.ConnectionProtocol)
extern "C"  void PhotonPeer__ctor_m2356993366 (PhotonPeer_t2940878176 * __this, uint8_t ___protocolType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::.ctor(ExitGames.Client.Photon.IPhotonPeerListener,ExitGames.Client.Photon.ConnectionProtocol)
extern "C"  void PhotonPeer__ctor_m476077861 (PhotonPeer_t2940878176 * __this, Il2CppObject * ___listener0, uint8_t ___protocolType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::Connect(System.String,System.String)
extern "C"  bool PhotonPeer_Connect_m3702473380 (PhotonPeer_t2940878176 * __this, String_t* ___serverAddress0, String_t* ___applicationName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::Disconnect()
extern "C"  void PhotonPeer_Disconnect_m4059782688 (PhotonPeer_t2940878176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::StopThread()
extern "C"  void PhotonPeer_StopThread_m2861658798 (PhotonPeer_t2940878176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::EstablishEncryption()
extern "C"  bool PhotonPeer_EstablishEncryption_m3353380338 (PhotonPeer_t2940878176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::Service()
extern "C"  void PhotonPeer_Service_m103679735 (PhotonPeer_t2940878176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::SendOutgoingCommands()
extern "C"  bool PhotonPeer_SendOutgoingCommands_m2005647136 (PhotonPeer_t2940878176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::SendAcksOnly()
extern "C"  bool PhotonPeer_SendAcksOnly_m2937989668 (PhotonPeer_t2940878176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::DispatchIncomingCommands()
extern "C"  bool PhotonPeer_DispatchIncomingCommands_m728564398 (PhotonPeer_t2940878176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::OpCustom(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,System.Boolean)
extern "C"  bool PhotonPeer_OpCustom_m1130973640 (PhotonPeer_t2940878176 * __this, uint8_t ___customOpCode0, Dictionary_2_t2064209302 * ___customOpParameters1, bool ___sendReliable2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::OpCustom(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,System.Boolean,System.Byte)
extern "C"  bool PhotonPeer_OpCustom_m3597456661 (PhotonPeer_t2940878176 * __this, uint8_t ___customOpCode0, Dictionary_2_t2064209302 * ___customOpParameters1, bool ___sendReliable2, uint8_t ___channelId3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::OpCustom(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,System.Boolean,System.Byte,System.Boolean)
extern "C"  bool PhotonPeer_OpCustom_m3606292792 (PhotonPeer_t2940878176 * __this, uint8_t ___customOpCode0, Dictionary_2_t2064209302 * ___customOpParameters1, bool ___sendReliable2, uint8_t ___channelId3, bool ___encrypt4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
