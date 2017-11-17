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

// Lidgren.Network.NetUnreliableUnorderedReceiver
struct NetUnreliableUnorderedReceiver_t3541921227;
// Lidgren.Network.NetConnection
struct NetConnection_t3331492029;
// Lidgren.Network.NetIncomingMessage
struct NetIncomingMessage_t2014089816;

#include "codegen/il2cpp-codegen.h"
#include "Lidgren_Network_Lidgren_Network_NetConnection3331492029.h"
#include "Lidgren_Network_Lidgren_Network_NetIncomingMessage2014089816.h"

// System.Void Lidgren.Network.NetUnreliableUnorderedReceiver::.ctor(Lidgren.Network.NetConnection)
extern "C"  void NetUnreliableUnorderedReceiver__ctor_m3560667024 (NetUnreliableUnorderedReceiver_t3541921227 * __this, NetConnection_t3331492029 * ___connection0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetUnreliableUnorderedReceiver::ReceiveMessage(Lidgren.Network.NetIncomingMessage)
extern "C"  void NetUnreliableUnorderedReceiver_ReceiveMessage_m3586422051 (NetUnreliableUnorderedReceiver_t3541921227 * __this, NetIncomingMessage_t2014089816 * ___msg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
