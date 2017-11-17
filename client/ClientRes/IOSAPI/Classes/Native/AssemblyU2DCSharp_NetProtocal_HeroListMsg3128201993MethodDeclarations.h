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

// NetProtocal.HeroListMsg
struct HeroListMsg_t3128201993;
// ProtoBuf.IExtension
struct IExtension_t1221360786;
// System.String
struct String_t;
// System.Collections.Generic.List`1<NetProtocal.HeroInfo>
struct List_1_t3026393148;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void NetProtocal.HeroListMsg::.ctor()
extern "C"  void HeroListMsg__ctor_m3683632129 (HeroListMsg_t3128201993 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.IExtension NetProtocal.HeroListMsg::ProtoBuf.IExtensible.GetExtensionObject(System.Boolean)
extern "C"  Il2CppObject * HeroListMsg_ProtoBuf_IExtensible_GetExtensionObject_m3228186203 (HeroListMsg_t3128201993 * __this, bool ___createIfMissing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NetProtocal.HeroListMsg::get_id()
extern "C"  int32_t HeroListMsg_get_id_m1685972427 (HeroListMsg_t3128201993 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetProtocal.HeroListMsg::set_id(System.Int32)
extern "C"  void HeroListMsg_set_id_m582043340 (HeroListMsg_t3128201993 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NetProtocal.HeroListMsg::get_teamName()
extern "C"  String_t* HeroListMsg_get_teamName_m3295311883 (HeroListMsg_t3128201993 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetProtocal.HeroListMsg::set_teamName(System.String)
extern "C"  void HeroListMsg_set_teamName_m1679638904 (HeroListMsg_t3128201993 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<NetProtocal.HeroInfo> NetProtocal.HeroListMsg::get_heroList()
extern "C"  List_1_t3026393148 * HeroListMsg_get_heroList_m3822956344 (HeroListMsg_t3128201993 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
