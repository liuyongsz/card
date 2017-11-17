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

// ProtoBuf.Extensible
struct Extensible_t597730409;
// ProtoBuf.IExtension
struct IExtension_t1221360786;
// ProtoBuf.Meta.TypeModel
struct TypeModel_t653695305;
// System.Type
struct Type_t;
// ProtoBuf.IExtensible
struct IExtensible_t151450440;
// System.Object
struct Il2CppObject;
// System.Collections.IEnumerable
struct IEnumerable_t2911409499;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ProtoBuf_Meta_TypeModel653695305.h"
#include "mscorlib_System_Type1303803226.h"
#include "AssemblyU2DCSharp_ProtoBuf_DataFormat1866125683.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void ProtoBuf.Extensible::.ctor()
extern "C"  void Extensible__ctor_m2867554237 (Extensible_t597730409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.IExtension ProtoBuf.Extensible::ProtoBuf.IExtensible.GetExtensionObject(System.Boolean)
extern "C"  Il2CppObject * Extensible_ProtoBuf_IExtensible_GetExtensionObject_m2221972139 (Extensible_t597730409 * __this, bool ___createIfMissing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.IExtension ProtoBuf.Extensible::GetExtensionObject(System.Boolean)
extern "C"  Il2CppObject * Extensible_GetExtensionObject_m2599438250 (Extensible_t597730409 * __this, bool ___createIfMissing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.IExtension ProtoBuf.Extensible::GetExtensionObject(ProtoBuf.IExtension&,System.Boolean)
extern "C"  Il2CppObject * Extensible_GetExtensionObject_m2607840689 (Il2CppObject * __this /* static, unused */, Il2CppObject ** ___extensionObject0, bool ___createIfMissing1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Extensible::TryGetValue(ProtoBuf.Meta.TypeModel,System.Type,ProtoBuf.IExtensible,System.Int32,ProtoBuf.DataFormat,System.Boolean,System.Object&)
extern "C"  bool Extensible_TryGetValue_m1529778458 (Il2CppObject * __this /* static, unused */, TypeModel_t653695305 * ___model0, Type_t * ___type1, Il2CppObject * ___instance2, int32_t ___tag3, int32_t ___format4, bool ___allowDefinedTag5, Il2CppObject ** ___value6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerable ProtoBuf.Extensible::GetValues(ProtoBuf.Meta.TypeModel,System.Type,ProtoBuf.IExtensible,System.Int32,ProtoBuf.DataFormat)
extern "C"  Il2CppObject * Extensible_GetValues_m608067773 (Il2CppObject * __this /* static, unused */, TypeModel_t653695305 * ___model0, Type_t * ___type1, Il2CppObject * ___instance2, int32_t ___tag3, int32_t ___format4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Extensible::AppendValue(ProtoBuf.Meta.TypeModel,ProtoBuf.IExtensible,System.Int32,ProtoBuf.DataFormat,System.Object)
extern "C"  void Extensible_AppendValue_m1044070495 (Il2CppObject * __this /* static, unused */, TypeModel_t653695305 * ___model0, Il2CppObject * ___instance1, int32_t ___tag2, int32_t ___format3, Il2CppObject * ___value4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
