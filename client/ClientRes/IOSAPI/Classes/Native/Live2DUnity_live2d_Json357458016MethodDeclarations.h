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

// live2d.Json
struct Json_t357458016;
// System.Char[]
struct CharU5BU5D_t1328083999;
// live2d.Value
struct Value_t2003474955;
// System.String
struct String_t;
// System.Int32[]
struct Int32U5BU5D_t3030399641;

#include "codegen/il2cpp-codegen.h"

// System.Void live2d.Json::.ctor(System.Char[])
extern "C"  void Json__ctor_m1281750323 (Json_t357458016 * __this, CharU5BU5D_t1328083999* ___jsonBytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// live2d.Value live2d.Json::parse()
extern "C"  Value_t2003474955 * Json_parse_m4069922985 (Json_t357458016 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// live2d.Value live2d.Json::parseFromBytes(System.Char[])
extern "C"  Value_t2003474955 * Json_parseFromBytes_m305709055 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___jsonBytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String live2d.Json::　 (System.Char[],System.Int32,System.Int32,System.Int32[])
extern "C"  String_t* Json_U3000U20_m2285379701 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___U200, int32_t ___U30001, int32_t ___U3000U202, Int32U5BU5D_t3030399641* ___U3000U30003, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// live2d.Value live2d.Json::　(System.Char[],System.Int32,System.Int32,System.Int32[])
extern "C"  Value_t2003474955 * Json_U3000_m258832790 (Json_t357458016 * __this, CharU5BU5D_t1328083999* ___U200, int32_t ___U30001, int32_t ___U3000U202, Int32U5BU5D_t3030399641* ___U3000U30003, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// live2d.Value live2d.Json:: (System.Char[],System.Int32,System.Int32,System.Int32[])
extern "C"  Value_t2003474955 * Json_U20_m2869286902 (Json_t357458016 * __this, CharU5BU5D_t1328083999* ___U200, int32_t ___U30001, int32_t ___U3000U202, Int32U5BU5D_t3030399641* ___U3000U30003, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double live2d.Json::strToDouble(System.Char[],System.Int32,System.Int32,System.Int32[])
extern "C"  double Json_strToDouble_m1456134604 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___str0, int32_t ___len1, int32_t ___pos2, Int32U5BU5D_t3030399641* ___ret_endpos3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// live2d.Value live2d.Json::　　(System.Char[],System.Int32,System.Int32,System.Int32[])
extern "C"  Value_t2003474955 * Json_U3000U3000_m1451110884 (Json_t357458016 * __this, CharU5BU5D_t1328083999* ___U200, int32_t ___U30001, int32_t ___U3000U202, Int32U5BU5D_t3030399641* ___U3000U30003, const MethodInfo* method) IL2CPP_METHOD_ATTR;
