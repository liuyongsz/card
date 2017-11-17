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

// ExitGames.Client.Photon.NCommand
struct NCommand_t2133614299;
// ExitGames.Client.Photon.EnetPeer
struct EnetPeer_t2873400856;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_EnetPeer2873400856.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_NCommand2133614299.h"

// System.Void ExitGames.Client.Photon.NCommand::.ctor(ExitGames.Client.Photon.EnetPeer,System.Byte,System.Byte[],System.Byte)
extern "C"  void NCommand__ctor_m1219899358 (NCommand_t2133614299 * __this, EnetPeer_t2873400856 * ___peer0, uint8_t ___commandType1, ByteU5BU5D_t3397334013* ___payload2, uint8_t ___channel3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.NCommand ExitGames.Client.Photon.NCommand::CreateAck(ExitGames.Client.Photon.EnetPeer,ExitGames.Client.Photon.NCommand,System.Int32)
extern "C"  NCommand_t2133614299 * NCommand_CreateAck_m3869832512 (Il2CppObject * __this /* static, unused */, EnetPeer_t2873400856 * ___peer0, NCommand_t2133614299 * ___commandToAck1, int32_t ___sentTime2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.NCommand::.ctor(ExitGames.Client.Photon.EnetPeer,System.Byte[],System.Int32&)
extern "C"  void NCommand__ctor_m3173013695 (NCommand_t2133614299 * __this, EnetPeer_t2873400856 * ___peer0, ByteU5BU5D_t3397334013* ___inBuff1, int32_t* ___readingOffset2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ExitGames.Client.Photon.NCommand::Serialize()
extern "C"  ByteU5BU5D_t3397334013* NCommand_Serialize_m2594895725 (NCommand_t2133614299 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.NCommand::CompareTo(ExitGames.Client.Photon.NCommand)
extern "C"  int32_t NCommand_CompareTo_m598799226 (NCommand_t2133614299 * __this, NCommand_t2133614299 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.NCommand::ToString()
extern "C"  String_t* NCommand_ToString_m2674836546 (NCommand_t2133614299 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
