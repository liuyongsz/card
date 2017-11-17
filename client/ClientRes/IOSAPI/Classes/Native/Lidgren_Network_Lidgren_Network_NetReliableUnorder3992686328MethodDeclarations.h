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

// Lidgren.Network.NetReliableUnorderedReceiver
struct NetReliableUnorderedReceiver_t3992686328;
// Lidgren.Network.NetConnection
struct NetConnection_t3331492029;
// Lidgren.Network.NetIncomingMessage
struct NetIncomingMessage_t2014089816;

#include "codegen/il2cpp-codegen.h"
#include "Lidgren_Network_Lidgren_Network_NetConnection3331492029.h"
#include "Lidgren_Network_Lidgren_Network_NetIncomingMessage2014089816.h"

// System.Void Lidgren.Network.NetReliableUnorderedReceiver::.ctor(Lidgren.Network.NetConnection,System.Int32)
extern "C"  void NetReliableUnorderedReceiver__ctor_m1507047812 (NetReliableUnorderedReceiver_t3992686328 * __this, NetConnection_t3331492029 * ___connection0, int32_t ___windowSize1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetReliableUnorderedReceiver::AdvanceWindow()
extern "C"  void NetReliableUnorderedReceiver_AdvanceWindow_m832664157 (NetReliableUnorderedReceiver_t3992686328 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetReliableUnorderedReceiver::ReceiveMessage(Lidgren.Network.NetIncomingMessage)
extern "C"  void NetReliableUnorderedReceiver_ReceiveMessage_m3956639720 (NetReliableUnorderedReceiver_t3992686328 * __this, NetIncomingMessage_t2014089816 * ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
