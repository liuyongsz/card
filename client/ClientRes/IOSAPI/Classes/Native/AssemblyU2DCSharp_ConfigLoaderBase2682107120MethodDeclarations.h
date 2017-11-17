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

// ConfigLoaderBase
struct ConfigLoaderBase_t2682107120;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.FieldInfo>
struct Dictionary_2_t2169819412;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_FieldInfo255040150.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Type1303803226.h"

// System.Void ConfigLoaderBase::.ctor()
extern "C"  void ConfigLoaderBase__ctor_m367057357 (ConfigLoaderBase_t2682107120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ConfigLoaderBase::get_IsLoaded()
extern "C"  bool ConfigLoaderBase_get_IsLoaded_m1487217745 (ConfigLoaderBase_t2682107120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConfigLoaderBase::Load()
extern "C"  void ConfigLoaderBase_Load_m274655915 (ConfigLoaderBase_t2682107120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConfigLoaderBase::Unload()
extern "C"  void ConfigLoaderBase_Unload_m2642383732 (ConfigLoaderBase_t2682107120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConfigLoaderBase::SetField(System.Reflection.FieldInfo,System.Object,System.String)
extern "C"  void ConfigLoaderBase_SetField_m2186238151 (ConfigLoaderBase_t2682107120 * __this, FieldInfo_t * ___field0, Il2CppObject * ___obj1, String_t* ___strVal2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.FieldInfo> ConfigLoaderBase::GetFields(System.Type)
extern "C"  Dictionary_2_t2169819412 * ConfigLoaderBase_GetFields_m2398877033 (ConfigLoaderBase_t2682107120 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
