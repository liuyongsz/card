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

// ExitGames.Client.Photon.Chat.ChatPeer
struct ChatPeer_t3121459608;
// ExitGames.Client.Photon.IPhotonPeerListener
struct IPhotonPeerListener_t2218572769;
// System.String
struct String_t;
// ExitGames.Client.Photon.Chat.AuthenticationValues
struct AuthenticationValues_t1914595372;

#include "codegen/il2cpp-codegen.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_ConnectionP3211808698.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_ExitGames_Client_Photon_Chat_Aut1914595372.h"

// System.Void ExitGames.Client.Photon.Chat.ChatPeer::.ctor(ExitGames.Client.Photon.IPhotonPeerListener,ExitGames.Client.Photon.ConnectionProtocol)
extern "C"  void ChatPeer__ctor_m965724994 (ChatPeer_t3121459608 * __this, Il2CppObject * ___listener0, uint8_t ___protocol1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatPeer::.cctor()
extern "C"  void ChatPeer__cctor_m56867182 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Chat.ChatPeer::get_NameServerAddress()
extern "C"  String_t* ChatPeer_get_NameServerAddress_m2582095007 (ChatPeer_t3121459608 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatPeer::get_IsProtocolSecure()
extern "C"  bool ChatPeer_get_IsProtocolSecure_m416850433 (ChatPeer_t3121459608 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Chat.ChatPeer::GetNameServerAddress()
extern "C"  String_t* ChatPeer_GetNameServerAddress_m3631042692 (ChatPeer_t3121459608 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatPeer::Connect()
extern "C"  bool ChatPeer_Connect_m1302357705 (ChatPeer_t3121459608 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatPeer::AuthenticateOnNameServer(System.String,System.String,System.String,ExitGames.Client.Photon.Chat.AuthenticationValues)
extern "C"  bool ChatPeer_AuthenticateOnNameServer_m3069096899 (ChatPeer_t3121459608 * __this, String_t* ___appId0, String_t* ___appVersion1, String_t* ___region2, AuthenticationValues_t1914595372 * ___authValues3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
