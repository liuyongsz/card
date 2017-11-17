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

// ExitGames.Client.Photon.SocketTcp
struct SocketTcp_t447931986;
// ExitGames.Client.Photon.PeerBase
struct PeerBase_t822653733;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_PeerBase822653733.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_PhotonSocke3428191965.h"

// System.Void ExitGames.Client.Photon.SocketTcp::.ctor(ExitGames.Client.Photon.PeerBase)
extern "C"  void SocketTcp__ctor_m2687211195 (SocketTcp_t447931986 * __this, PeerBase_t822653733 * ___npeer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.SocketTcp::Dispose()
extern "C"  void SocketTcp_Dispose_m2104049783 (SocketTcp_t447931986 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.SocketTcp::Connect()
extern "C"  bool SocketTcp_Connect_m1201015870 (SocketTcp_t447931986 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.SocketTcp::Disconnect()
extern "C"  bool SocketTcp_Disconnect_m4131027756 (SocketTcp_t447931986 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.PhotonSocketError ExitGames.Client.Photon.SocketTcp::Send(System.Byte[],System.Int32)
extern "C"  int32_t SocketTcp_Send_m258164932 (SocketTcp_t447931986 * __this, ByteU5BU5D_t3397334013* ___data0, int32_t ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.SocketTcp::DnsAndConnect()
extern "C"  void SocketTcp_DnsAndConnect_m876528458 (SocketTcp_t447931986 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.SocketTcp::ReceiveLoop()
extern "C"  void SocketTcp_ReceiveLoop_m3141660739 (SocketTcp_t447931986 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
