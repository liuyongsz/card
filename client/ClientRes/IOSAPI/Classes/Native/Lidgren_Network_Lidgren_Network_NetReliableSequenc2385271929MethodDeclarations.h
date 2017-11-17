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

// Lidgren.Network.NetReliableSequencedReceiver
struct NetReliableSequencedReceiver_t2385271929;
// Lidgren.Network.NetConnection
struct NetConnection_t3331492029;
// Lidgren.Network.NetIncomingMessage
struct NetIncomingMessage_t2014089816;

#include "codegen/il2cpp-codegen.h"
#include "Lidgren_Network_Lidgren_Network_NetConnection3331492029.h"
#include "Lidgren_Network_Lidgren_Network_NetIncomingMessage2014089816.h"

// System.Void Lidgren.Network.NetReliableSequencedReceiver::.ctor(Lidgren.Network.NetConnection,System.Int32)
extern "C"  void NetReliableSequencedReceiver__ctor_m408695305 (NetReliableSequencedReceiver_t2385271929 * __this, NetConnection_t3331492029 * ___connection0, int32_t ___windowSize1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetReliableSequencedReceiver::AdvanceWindow()
extern "C"  void NetReliableSequencedReceiver_AdvanceWindow_m2796465932 (NetReliableSequencedReceiver_t2385271929 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetReliableSequencedReceiver::ReceiveMessage(Lidgren.Network.NetIncomingMessage)
extern "C"  void NetReliableSequencedReceiver_ReceiveMessage_m2961521515 (NetReliableSequencedReceiver_t2385271929 * __this, NetIncomingMessage_t2014089816 * ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
