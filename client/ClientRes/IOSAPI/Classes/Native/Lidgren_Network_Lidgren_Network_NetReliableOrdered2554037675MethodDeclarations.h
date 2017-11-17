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

// Lidgren.Network.NetReliableOrderedReceiver
struct NetReliableOrderedReceiver_t2554037675;
// Lidgren.Network.NetConnection
struct NetConnection_t3331492029;
// Lidgren.Network.NetIncomingMessage
struct NetIncomingMessage_t2014089816;

#include "codegen/il2cpp-codegen.h"
#include "Lidgren_Network_Lidgren_Network_NetConnection3331492029.h"
#include "Lidgren_Network_Lidgren_Network_NetIncomingMessage2014089816.h"

// System.Void Lidgren.Network.NetReliableOrderedReceiver::.ctor(Lidgren.Network.NetConnection,System.Int32)
extern "C"  void NetReliableOrderedReceiver__ctor_m3553848617 (NetReliableOrderedReceiver_t2554037675 * __this, NetConnection_t3331492029 * ___connection0, int32_t ___windowSize1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetReliableOrderedReceiver::AdvanceWindow()
extern "C"  void NetReliableOrderedReceiver_AdvanceWindow_m2797762522 (NetReliableOrderedReceiver_t2554037675 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetReliableOrderedReceiver::ReceiveMessage(Lidgren.Network.NetIncomingMessage)
extern "C"  void NetReliableOrderedReceiver_ReceiveMessage_m3222467075 (NetReliableOrderedReceiver_t2554037675 * __this, NetIncomingMessage_t2014089816 * ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
