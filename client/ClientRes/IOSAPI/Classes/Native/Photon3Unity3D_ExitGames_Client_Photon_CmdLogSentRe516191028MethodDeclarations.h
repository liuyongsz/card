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

// ExitGames.Client.Photon.CmdLogSentReliable
struct CmdLogSentReliable_t516191028;
// ExitGames.Client.Photon.NCommand
struct NCommand_t2133614299;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_NCommand2133614299.h"

// System.Void ExitGames.Client.Photon.CmdLogSentReliable::.ctor(ExitGames.Client.Photon.NCommand,System.Int32,System.Int32,System.Int32,System.Boolean)
extern "C"  void CmdLogSentReliable__ctor_m547086947 (CmdLogSentReliable_t516191028 * __this, NCommand_t2133614299 * ___command0, int32_t ___timeInt1, int32_t ___rtt2, int32_t ___variance3, bool ___triggeredTimeout4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.CmdLogSentReliable::ToString()
extern "C"  String_t* CmdLogSentReliable_ToString_m2776864547 (CmdLogSentReliable_t516191028 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
