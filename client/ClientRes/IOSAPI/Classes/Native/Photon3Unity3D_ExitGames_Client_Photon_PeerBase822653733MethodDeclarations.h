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

// ExitGames.Client.Photon.PeerBase
struct PeerBase_t822653733;
// System.String
struct String_t;
// ExitGames.Client.Photon.IPhotonPeerListener
struct IPhotonPeerListener_t2218572769;
// ExitGames.Client.Photon.NetworkSimulationSet
struct NetworkSimulationSet_t2323123337;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t2064209302;
// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_t3648537128;
// ExitGames.Client.Photon.PeerBase/MyAction
struct MyAction_t1657508700;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_OperationRe3648537128.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_PeerBase_My1657508700.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_DebugLevel980888449.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_StatusCode2706638303.h"

// System.Boolean ExitGames.Client.Photon.PeerBase::get_TrafficStatsEnabled()
extern "C"  bool PeerBase_get_TrafficStatsEnabled_m3371541005 (PeerBase_t822653733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.PeerBase::get_ServerAddress()
extern "C"  String_t* PeerBase_get_ServerAddress_m1999311996 (PeerBase_t822653733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::set_ServerAddress(System.String)
extern "C"  void PeerBase_set_ServerAddress_m1769843693 (PeerBase_t822653733 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.IPhotonPeerListener ExitGames.Client.Photon.PeerBase::get_Listener()
extern "C"  Il2CppObject * PeerBase_get_Listener_m434840224 (PeerBase_t822653733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::set_Listener(ExitGames.Client.Photon.IPhotonPeerListener)
extern "C"  void PeerBase_set_Listener_m3807723281 (PeerBase_t822653733 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte ExitGames.Client.Photon.PeerBase::get_QuickResendAttempts()
extern "C"  uint8_t PeerBase_get_QuickResendAttempts_m954690856 (PeerBase_t822653733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::set_QuickResendAttempts(System.Byte)
extern "C"  void PeerBase_set_QuickResendAttempts_m2581405137 (PeerBase_t822653733 * __this, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.NetworkSimulationSet ExitGames.Client.Photon.PeerBase::get_NetworkSimulationSettings()
extern "C"  NetworkSimulationSet_t2323123337 * PeerBase_get_NetworkSimulationSettings_m1641683380 (PeerBase_t822653733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::CommandLogResize()
extern "C"  void PeerBase_CommandLogResize_m3839318344 (PeerBase_t822653733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::CommandLogInit()
extern "C"  void PeerBase_CommandLogInit_m3347985146 (PeerBase_t822653733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::InitOnce()
extern "C"  void PeerBase_InitOnce_m3063915750 (PeerBase_t822653733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PeerBase::EnqueueOperation(System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,System.Byte,System.Boolean,System.Byte,System.Boolean)
extern "C"  bool PeerBase_EnqueueOperation_m3212509590 (PeerBase_t822653733 * __this, Dictionary_2_t2064209302 * ___parameters0, uint8_t ___opCode1, bool ___sendReliable2, uint8_t ___channelId3, bool ___encrypted4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PeerBase::SendAcksOnly()
extern "C"  bool PeerBase_SendAcksOnly_m1473352543 (PeerBase_t822653733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::InitCallback()
extern "C"  void PeerBase_InitCallback_m2650248812 (PeerBase_t822653733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PeerBase::get_IsSendingOnlyAcks()
extern "C"  bool PeerBase_get_IsSendingOnlyAcks_m841613004 (PeerBase_t822653733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PeerBase::ExchangeKeysForEncryption()
extern "C"  bool PeerBase_ExchangeKeysForEncryption_m1965048812 (PeerBase_t822653733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::DeriveSharedKey(ExitGames.Client.Photon.OperationResponse)
extern "C"  void PeerBase_DeriveSharedKey_m295878150 (PeerBase_t822653733 * __this, OperationResponse_t3648537128 * ___operationResponse0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::EnqueueActionForDispatch(ExitGames.Client.Photon.PeerBase/MyAction)
extern "C"  void PeerBase_EnqueueActionForDispatch_m4070531746 (PeerBase_t822653733 * __this, MyAction_t1657508700 * ___action0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::EnqueueDebugReturn(ExitGames.Client.Photon.DebugLevel,System.String)
extern "C"  void PeerBase_EnqueueDebugReturn_m2000903833 (PeerBase_t822653733 * __this, uint8_t ___level0, String_t* ___debugReturn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::EnqueueStatusCallback(ExitGames.Client.Photon.StatusCode)
extern "C"  void PeerBase_EnqueueStatusCallback_m2520519967 (PeerBase_t822653733 * __this, int32_t ___statusValue0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::InitPeerBase()
extern "C"  void PeerBase_InitPeerBase_m4016381414 (PeerBase_t822653733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PeerBase::DeserializeMessageAndCallback(System.Byte[])
extern "C"  bool PeerBase_DeserializeMessageAndCallback_m2142834512 (PeerBase_t822653733 * __this, ByteU5BU5D_t3397334013* ___inBuff0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::SendNetworkSimulated(ExitGames.Client.Photon.PeerBase/MyAction)
extern "C"  void PeerBase_SendNetworkSimulated_m4275030151 (PeerBase_t822653733 * __this, MyAction_t1657508700 * ___sendAction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::ReceiveNetworkSimulated(ExitGames.Client.Photon.PeerBase/MyAction)
extern "C"  void PeerBase_ReceiveNetworkSimulated_m3185670942 (PeerBase_t822653733 * __this, MyAction_t1657508700 * ___receiveAction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::NetworkSimRun()
extern "C"  void PeerBase_NetworkSimRun_m1829264845 (PeerBase_t822653733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::UpdateRoundTripTimeAndVariance(System.Int32)
extern "C"  void PeerBase_UpdateRoundTripTimeAndVariance_m2179966203 (PeerBase_t822653733 * __this, int32_t ___lastRoundtripTime0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::.ctor()
extern "C"  void PeerBase__ctor_m756255873 (PeerBase_t822653733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::.cctor()
extern "C"  void PeerBase__cctor_m1635336880 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
