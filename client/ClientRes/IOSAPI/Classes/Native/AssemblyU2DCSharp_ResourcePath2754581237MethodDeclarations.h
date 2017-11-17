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

// ResourcePath
struct ResourcePath_t2754581237;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void ResourcePath::.ctor()
extern "C"  void ResourcePath__ctor_m1031299990 (ResourcePath_t2754581237 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ResourcePath::.cctor()
extern "C"  void ResourcePath__cctor_m516014151 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ResourcePath::URL(System.String)
extern "C"  String_t* ResourcePath_URL_m3802771670 (Il2CppObject * __this /* static, unused */, String_t* ___fileName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ResourcePath::ReLocatePath(System.String)
extern "C"  String_t* ResourcePath_ReLocatePath_m505803441 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ResourcePath::GetBaseURL()
extern "C"  String_t* ResourcePath_GetBaseURL_m666540817 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ResourcePath::GetLocalConfigPath()
extern "C"  String_t* ResourcePath_GetLocalConfigPath_m2206922101 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ResourcePath::GetLocalImgPath()
extern "C"  String_t* ResourcePath_GetLocalImgPath_m2651486924 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
