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

// System.Int32[]
struct Int32U5BU5D_t3030399641;
// System.String
struct String_t;
// System.Single[]
struct SingleU5BU5D_t577127397;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.Int32[] ConfigParseUtil::ParseIntArray(System.String,System.Char)
extern "C"  Int32U5BU5D_t3030399641* ConfigParseUtil_ParseIntArray_m2968292468 (Il2CppObject * __this /* static, unused */, String_t* ___str0, Il2CppChar ___spliter1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single[] ConfigParseUtil::ParseFloatArray(System.String,System.Char)
extern "C"  SingleU5BU5D_t577127397* ConfigParseUtil_ParseFloatArray_m907688797 (Il2CppObject * __this /* static, unused */, String_t* ___str0, Il2CppChar ___spliter1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 ConfigParseUtil::ParseVec3(System.String,System.Char)
extern "C"  Vector3_t2243707580  ConfigParseUtil_ParseVec3_m1511136549 (Il2CppObject * __this /* static, unused */, String_t* ___str0, Il2CppChar ___spliter1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
