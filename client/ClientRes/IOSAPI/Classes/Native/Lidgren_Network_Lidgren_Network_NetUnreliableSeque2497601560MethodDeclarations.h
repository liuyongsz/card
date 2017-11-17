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

// Lidgren.Network.NetUnreliableSequencedReceiver
struct NetUnreliableSequencedReceiver_t2497601560;
// Lidgren.Network.NetConnection
struct NetConnection_t3331492029;
// Lidgren.Network.NetIncomingMessage
struct NetIncomingMessage_t2014089816;

#include "codegen/il2cpp-codegen.h"
#include "Lidgren_Network_Lidgren_Network_NetConnection3331492029.h"
#include "Lidgren_Network_Lidgren_Network_NetIncomingMessage2014089816.h"

// System.Void Lidgren.Network.NetUnreliableSequencedReceiver::.ctor(Lidgren.Network.NetConnection)
extern "C"  void NetUnreliableSequencedReceiver__ctor_m3415245671 (NetUnreliableSequencedReceiver_t2497601560 * __this, NetConnection_t3331492029 * ___connection0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetUnreliableSequencedReceiver::ReceiveMessage(Lidgren.Network.NetIncomingMessage)
extern "C"  void NetUnreliableSequencedReceiver_ReceiveMessage_m1400670066 (NetUnreliableSequencedReceiver_t2497601560 * __this, NetIncomingMessage_t2014089816 * ___msg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
