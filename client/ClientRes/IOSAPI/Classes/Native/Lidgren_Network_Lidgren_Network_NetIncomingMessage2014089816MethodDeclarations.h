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

// Lidgren.Network.NetIncomingMessage
struct NetIncomingMessage_t2014089816;
// Lidgren.Network.NetConnection
struct NetConnection_t3331492029;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Lidgren_Network_Lidgren_Network_NetIncomingMessage4279120760.h"

// Lidgren.Network.NetIncomingMessageType Lidgren.Network.NetIncomingMessage::get_MessageType()
extern "C"  int32_t NetIncomingMessage_get_MessageType_m1134653489 (NetIncomingMessage_t2014089816 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Lidgren.Network.NetConnection Lidgren.Network.NetIncomingMessage::get_SenderConnection()
extern "C"  NetConnection_t3331492029 * NetIncomingMessage_get_SenderConnection_m102869984 (NetIncomingMessage_t2014089816 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetIncomingMessage::.ctor(Lidgren.Network.NetIncomingMessageType)
extern "C"  void NetIncomingMessage__ctor_m2874845560 (NetIncomingMessage_t2014089816 * __this, int32_t ___tp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetIncomingMessage::Reset()
extern "C"  void NetIncomingMessage_Reset_m2284406032 (NetIncomingMessage_t2014089816 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Lidgren.Network.NetIncomingMessage::ToString()
extern "C"  String_t* NetIncomingMessage_ToString_m4237620030 (NetIncomingMessage_t2014089816 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
