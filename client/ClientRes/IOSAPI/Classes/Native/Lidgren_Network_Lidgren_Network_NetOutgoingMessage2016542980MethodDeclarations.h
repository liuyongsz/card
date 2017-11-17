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

// Lidgren.Network.NetOutgoingMessage
struct NetOutgoingMessage_t2016542980;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void Lidgren.Network.NetOutgoingMessage::.ctor()
extern "C"  void NetOutgoingMessage__ctor_m724105531 (NetOutgoingMessage_t2016542980 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetOutgoingMessage::Reset()
extern "C"  void NetOutgoingMessage_Reset_m4185181874 (NetOutgoingMessage_t2016542980 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Lidgren.Network.NetOutgoingMessage::Encode(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t NetOutgoingMessage_Encode_m2473987076 (NetOutgoingMessage_t2016542980 * __this, ByteU5BU5D_t3397334013* ___intoBuffer0, int32_t ___ptr1, int32_t ___sequenceNumber2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Lidgren.Network.NetOutgoingMessage::GetEncodedSize()
extern "C"  int32_t NetOutgoingMessage_GetEncodedSize_m3842097810 (NetOutgoingMessage_t2016542980 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Lidgren.Network.NetOutgoingMessage::ToString()
extern "C"  String_t* NetOutgoingMessage_ToString_m1440072292 (NetOutgoingMessage_t2016542980 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
