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

// ProtoBuf.Meta.CallbackSet
struct CallbackSet_t2109955613;
// ProtoBuf.Meta.MetaType
struct MetaType_t4127688095;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// ProtoBuf.Meta.TypeModel
struct TypeModel_t653695305;
// System.Exception
struct Exception_t1927440687;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ProtoBuf_Meta_MetaType4127688095.h"
#include "AssemblyU2DCSharp_ProtoBuf_Meta_TypeModel_Callback2841270245.h"
#include "AssemblyU2DCSharp_ProtoBuf_Meta_TypeModel653695305.h"
#include "mscorlib_System_Reflection_MethodInfo3330546337.h"

// System.Void ProtoBuf.Meta.CallbackSet::.ctor(ProtoBuf.Meta.MetaType)
extern "C"  void CallbackSet__ctor_m2876588645 (CallbackSet_t2109955613 * __this, MetaType_t4127688095 * ___metaType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo ProtoBuf.Meta.CallbackSet::get_Item(ProtoBuf.Meta.TypeModel/CallbackType)
extern "C"  MethodInfo_t * CallbackSet_get_Item_m3840391389 (CallbackSet_t2109955613 * __this, int32_t ___callbackType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Meta.CallbackSet::CheckCallbackParameters(ProtoBuf.Meta.TypeModel,System.Reflection.MethodInfo)
extern "C"  bool CallbackSet_CheckCallbackParameters_m3281592169 (Il2CppObject * __this /* static, unused */, TypeModel_t653695305 * ___model0, MethodInfo_t * ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo ProtoBuf.Meta.CallbackSet::SanityCheckCallback(ProtoBuf.Meta.TypeModel,System.Reflection.MethodInfo)
extern "C"  MethodInfo_t * CallbackSet_SanityCheckCallback_m1755386823 (CallbackSet_t2109955613 * __this, TypeModel_t653695305 * ___model0, MethodInfo_t * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception ProtoBuf.Meta.CallbackSet::CreateInvalidCallbackSignature(System.Reflection.MethodInfo)
extern "C"  Exception_t1927440687 * CallbackSet_CreateInvalidCallbackSignature_m4174211378 (Il2CppObject * __this /* static, unused */, MethodInfo_t * ___method0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo ProtoBuf.Meta.CallbackSet::get_BeforeSerialize()
extern "C"  MethodInfo_t * CallbackSet_get_BeforeSerialize_m2153215850 (CallbackSet_t2109955613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.CallbackSet::set_BeforeSerialize(System.Reflection.MethodInfo)
extern "C"  void CallbackSet_set_BeforeSerialize_m240412047 (CallbackSet_t2109955613 * __this, MethodInfo_t * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo ProtoBuf.Meta.CallbackSet::get_BeforeDeserialize()
extern "C"  MethodInfo_t * CallbackSet_get_BeforeDeserialize_m3797142365 (CallbackSet_t2109955613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.CallbackSet::set_BeforeDeserialize(System.Reflection.MethodInfo)
extern "C"  void CallbackSet_set_BeforeDeserialize_m2471584120 (CallbackSet_t2109955613 * __this, MethodInfo_t * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo ProtoBuf.Meta.CallbackSet::get_AfterSerialize()
extern "C"  MethodInfo_t * CallbackSet_get_AfterSerialize_m3938965573 (CallbackSet_t2109955613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.CallbackSet::set_AfterSerialize(System.Reflection.MethodInfo)
extern "C"  void CallbackSet_set_AfterSerialize_m2111455022 (CallbackSet_t2109955613 * __this, MethodInfo_t * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo ProtoBuf.Meta.CallbackSet::get_AfterDeserialize()
extern "C"  MethodInfo_t * CallbackSet_get_AfterDeserialize_m2933250164 (CallbackSet_t2109955613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.CallbackSet::set_AfterDeserialize(System.Reflection.MethodInfo)
extern "C"  void CallbackSet_set_AfterDeserialize_m1209363651 (CallbackSet_t2109955613 * __this, MethodInfo_t * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Meta.CallbackSet::get_NonTrivial()
extern "C"  bool CallbackSet_get_NonTrivial_m690962917 (CallbackSet_t2109955613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
