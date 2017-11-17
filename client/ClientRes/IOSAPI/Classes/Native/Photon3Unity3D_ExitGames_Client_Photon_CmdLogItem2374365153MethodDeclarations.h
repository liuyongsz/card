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

// ExitGames.Client.Photon.CmdLogItem
struct CmdLogItem_t2374365153;
// ExitGames.Client.Photon.NCommand
struct NCommand_t2133614299;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_NCommand2133614299.h"

// System.Void ExitGames.Client.Photon.CmdLogItem::.ctor()
extern "C"  void CmdLogItem__ctor_m82047333 (CmdLogItem_t2374365153 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.CmdLogItem::.ctor(ExitGames.Client.Photon.NCommand,System.Int32,System.Int32,System.Int32)
extern "C"  void CmdLogItem__ctor_m3834970233 (CmdLogItem_t2374365153 * __this, NCommand_t2133614299 * ___command0, int32_t ___timeInt1, int32_t ___rtt2, int32_t ___variance3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.CmdLogItem::ToString()
extern "C"  String_t* CmdLogItem_ToString_m2892111404 (CmdLogItem_t2374365153 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
