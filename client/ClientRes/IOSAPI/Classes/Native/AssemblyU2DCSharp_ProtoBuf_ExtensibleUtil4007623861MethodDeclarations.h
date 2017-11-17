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

// System.Collections.IEnumerable
struct IEnumerable_t2911409499;
// ProtoBuf.Meta.TypeModel
struct TypeModel_t653695305;
// System.Type
struct Type_t;
// ProtoBuf.IExtensible
struct IExtensible_t151450440;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ProtoBuf_Meta_TypeModel653695305.h"
#include "mscorlib_System_Type1303803226.h"
#include "AssemblyU2DCSharp_ProtoBuf_DataFormat1866125683.h"
#include "mscorlib_System_Object2689449295.h"

// System.Collections.IEnumerable ProtoBuf.ExtensibleUtil::GetExtendedValues(ProtoBuf.Meta.TypeModel,System.Type,ProtoBuf.IExtensible,System.Int32,ProtoBuf.DataFormat,System.Boolean,System.Boolean)
extern "C"  Il2CppObject * ExtensibleUtil_GetExtendedValues_m478699616 (Il2CppObject * __this /* static, unused */, TypeModel_t653695305 * ___model0, Type_t * ___type1, Il2CppObject * ___instance2, int32_t ___tag3, int32_t ___format4, bool ___singleton5, bool ___allowDefinedTag6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ExtensibleUtil::AppendExtendValue(ProtoBuf.Meta.TypeModel,ProtoBuf.IExtensible,System.Int32,ProtoBuf.DataFormat,System.Object)
extern "C"  void ExtensibleUtil_AppendExtendValue_m4007972877 (Il2CppObject * __this /* static, unused */, TypeModel_t653695305 * ___model0, Il2CppObject * ___instance1, int32_t ___tag2, int32_t ___format3, Il2CppObject * ___value4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
