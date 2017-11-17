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

// FightProxy
struct FightProxy_t2028432302;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void FightProxy::.ctor()
extern "C"  void FightProxy__ctor_m4153489799 (FightProxy_t2028432302 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FightProxy::SendMatchFight(System.Int32)
extern "C"  void FightProxy_SendMatchFight_m425431617 (FightProxy_t2028432302 * __this, int32_t ___selectTeamId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FightProxy::SendReplaceCardReq(System.Boolean)
extern "C"  void FightProxy_SendReplaceCardReq_m2666063412 (FightProxy_t2028432302 * __this, bool ___replace0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FightProxy::SendRoomLoading(System.Int32)
extern "C"  void FightProxy_SendRoomLoading_m2044277747 (FightProxy_t2028432302 * __this, int32_t ___per0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FightProxy::OnRec_RoomStartMsg(System.Object)
extern "C"  void FightProxy_OnRec_RoomStartMsg_m1846843617 (FightProxy_t2028432302 * __this, Il2CppObject * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FightProxy::OnRec_RoomLoadMsg(System.Object)
extern "C"  void FightProxy_OnRec_RoomLoadMsg_m2027705003 (FightProxy_t2028432302 * __this, Il2CppObject * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FightProxy::OnRec_RoomInfoMsg(System.Object)
extern "C"  void FightProxy_OnRec_RoomInfoMsg_m419290891 (FightProxy_t2028432302 * __this, Il2CppObject * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FightProxy::OnRec_RoomStateMsg(System.Object)
extern "C"  void FightProxy_OnRec_RoomStateMsg_m3039912198 (FightProxy_t2028432302 * __this, Il2CppObject * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FightProxy::OnRec_FightCardsMsg(System.Object)
extern "C"  void FightProxy_OnRec_FightCardsMsg_m392068745 (FightProxy_t2028432302 * __this, Il2CppObject * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FightProxy::OnRec_StartRoundMsg(System.Object)
extern "C"  void FightProxy_OnRec_StartRoundMsg_m3740072022 (FightProxy_t2028432302 * __this, Il2CppObject * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FightProxy::OnRec_OverRoundMsg(System.Object)
extern "C"  void FightProxy_OnRec_OverRoundMsg_m2844877944 (FightProxy_t2028432302 * __this, Il2CppObject * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
