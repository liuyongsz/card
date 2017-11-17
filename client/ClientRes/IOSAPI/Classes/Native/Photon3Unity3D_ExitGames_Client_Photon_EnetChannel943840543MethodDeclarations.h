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

// ExitGames.Client.Photon.EnetChannel
struct EnetChannel_t943840543;
// ExitGames.Client.Photon.NCommand
struct NCommand_t2133614299;

#include "codegen/il2cpp-codegen.h"

// System.Void ExitGames.Client.Photon.EnetChannel::.ctor(System.Byte,System.Int32)
extern "C"  void EnetChannel__ctor_m1039488995 (EnetChannel_t943840543 * __this, uint8_t ___channelNumber0, int32_t ___commandBufferSize1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.EnetChannel::ContainsUnreliableSequenceNumber(System.Int32)
extern "C"  bool EnetChannel_ContainsUnreliableSequenceNumber_m973575894 (EnetChannel_t943840543 * __this, int32_t ___unreliableSequenceNumber0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.EnetChannel::ContainsReliableSequenceNumber(System.Int32)
extern "C"  bool EnetChannel_ContainsReliableSequenceNumber_m2806074273 (EnetChannel_t943840543 * __this, int32_t ___reliableSequenceNumber0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.NCommand ExitGames.Client.Photon.EnetChannel::FetchReliableSequenceNumber(System.Int32)
extern "C"  NCommand_t2133614299 * EnetChannel_FetchReliableSequenceNumber_m1138949662 (EnetChannel_t943840543 * __this, int32_t ___reliableSequenceNumber0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EnetChannel::clearAll()
extern "C"  void EnetChannel_clearAll_m2887431995 (EnetChannel_t943840543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
