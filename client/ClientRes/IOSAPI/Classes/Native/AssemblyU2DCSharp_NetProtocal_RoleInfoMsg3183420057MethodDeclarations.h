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

// NetProtocal.RoleInfoMsg
struct RoleInfoMsg_t3183420057;
// ProtoBuf.IExtension
struct IExtension_t1221360786;
// System.String
struct String_t;
// NetProtocal.FightCardsMsg
struct FightCardsMsg_t1539797984;
// System.Collections.Generic.List`1<NetProtocal.FightHeroMsg>
struct List_1_t398529845;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_NetProtocal_FightCardsMsg1539797984.h"

// System.Void NetProtocal.RoleInfoMsg::.ctor()
extern "C"  void RoleInfoMsg__ctor_m4184476281 (RoleInfoMsg_t3183420057 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.IExtension NetProtocal.RoleInfoMsg::ProtoBuf.IExtensible.GetExtensionObject(System.Boolean)
extern "C"  Il2CppObject * RoleInfoMsg_ProtoBuf_IExtensible_GetExtensionObject_m3964571443 (RoleInfoMsg_t3183420057 * __this, bool ___createIfMissing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NetProtocal.RoleInfoMsg::get_pid()
extern "C"  int32_t RoleInfoMsg_get_pid_m555565187 (RoleInfoMsg_t3183420057 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetProtocal.RoleInfoMsg::set_pid(System.Int32)
extern "C"  void RoleInfoMsg_set_pid_m2244568346 (RoleInfoMsg_t3183420057 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NetProtocal.RoleInfoMsg::get_name()
extern "C"  String_t* RoleInfoMsg_get_name_m587809812 (RoleInfoMsg_t3183420057 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetProtocal.RoleInfoMsg::set_name(System.String)
extern "C"  void RoleInfoMsg_set_name_m1025083505 (RoleInfoMsg_t3183420057 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NetProtocal.RoleInfoMsg::get_arcaneNum()
extern "C"  int32_t RoleInfoMsg_get_arcaneNum_m2195429034 (RoleInfoMsg_t3183420057 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetProtocal.RoleInfoMsg::set_arcaneNum(System.Int32)
extern "C"  void RoleInfoMsg_set_arcaneNum_m3754808649 (RoleInfoMsg_t3183420057 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NetProtocal.RoleInfoMsg::get_fatigueTime()
extern "C"  int32_t RoleInfoMsg_get_fatigueTime_m2687597372 (RoleInfoMsg_t3183420057 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetProtocal.RoleInfoMsg::set_fatigueTime(System.Int32)
extern "C"  void RoleInfoMsg_set_fatigueTime_m4151623845 (RoleInfoMsg_t3183420057 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// NetProtocal.FightCardsMsg NetProtocal.RoleInfoMsg::get_cards()
extern "C"  FightCardsMsg_t1539797984 * RoleInfoMsg_get_cards_m2113292379 (RoleInfoMsg_t3183420057 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetProtocal.RoleInfoMsg::set_cards(NetProtocal.FightCardsMsg)
extern "C"  void RoleInfoMsg_set_cards_m990600378 (RoleInfoMsg_t3183420057 * __this, FightCardsMsg_t1539797984 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<NetProtocal.FightHeroMsg> NetProtocal.RoleInfoMsg::get_heros()
extern "C"  List_1_t398529845 * RoleInfoMsg_get_heros_m3646898748 (RoleInfoMsg_t3183420057 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
