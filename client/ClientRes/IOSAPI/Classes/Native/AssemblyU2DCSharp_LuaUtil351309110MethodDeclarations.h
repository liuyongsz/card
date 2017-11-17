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

// LuaUtil
struct LuaUtil_t351309110;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"

// System.Void LuaUtil::.ctor()
extern "C"  void LuaUtil__ctor_m1071138207 (LuaUtil_t351309110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuaUtil::.cctor()
extern "C"  void LuaUtil__cctor_m249114404 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LuaUtil::Int(System.Object)
extern "C"  int32_t LuaUtil_Int_m3092793866 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LuaUtil::Float(System.Object)
extern "C"  float LuaUtil_Float_m3930736363 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 LuaUtil::Long(System.Object)
extern "C"  int64_t LuaUtil_Long_m625724918 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LuaUtil::Random(System.Int32,System.Int32)
extern "C"  int32_t LuaUtil_Random_m2735506644 (Il2CppObject * __this /* static, unused */, int32_t ___min0, int32_t ___max1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LuaUtil::Random(System.Single,System.Single)
extern "C"  float LuaUtil_Random_m2554137222 (Il2CppObject * __this /* static, unused */, float ___min0, float ___max1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LuaUtil::Uid(System.String)
extern "C"  String_t* LuaUtil_Uid_m1263694392 (Il2CppObject * __this /* static, unused */, String_t* ___uid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 LuaUtil::GetTime()
extern "C"  int64_t LuaUtil_GetTime_m1048108285 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LuaUtil::get_DataPath()
extern "C"  String_t* LuaUtil_get_DataPath_m858893136 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LuaUtil::get_LoadingPath()
extern "C"  String_t* LuaUtil_get_LoadingPath_m614732124 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LuaUtil::AppContentPath()
extern "C"  String_t* LuaUtil_AppContentPath_m2026773083 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject LuaUtil::Child(UnityEngine.GameObject,System.String)
extern "C"  GameObject_t1756533147 * LuaUtil_Child_m33776604 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___go0, String_t* ___subnode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject LuaUtil::Child(UnityEngine.Transform,System.String)
extern "C"  GameObject_t1756533147 * LuaUtil_Child_m2596366935 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___go0, String_t* ___subnode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject LuaUtil::Peer(UnityEngine.GameObject,System.String)
extern "C"  GameObject_t1756533147 * LuaUtil_Peer_m1037456844 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___go0, String_t* ___subnode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject LuaUtil::Peer(UnityEngine.Transform,System.String)
extern "C"  GameObject_t1756533147 * LuaUtil_Peer_m216418843 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___go0, String_t* ___subnode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LuaUtil::md5(System.String)
extern "C"  String_t* LuaUtil_md5_m1099186242 (Il2CppObject * __this /* static, unused */, String_t* ___source0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LuaUtil::md5file(System.String)
extern "C"  String_t* LuaUtil_md5file_m1900709848 (Il2CppObject * __this /* static, unused */, String_t* ___file0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LuaUtil::GetRelativePath()
extern "C"  String_t* LuaUtil_GetRelativePath_m493673169 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuaUtil::ClearChild(UnityEngine.Transform)
extern "C"  void LuaUtil_ClearChild_m253605827 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___go0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LuaUtil::GetFileText(System.String)
extern "C"  String_t* LuaUtil_GetFileText_m46941869 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LuaUtil::get_NetAvailable()
extern "C"  bool LuaUtil_get_NetAvailable_m1132739248 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LuaUtil::get_IsWifi()
extern "C"  bool LuaUtil_get_IsWifi_m1143006209 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuaUtil::Log(System.String)
extern "C"  void LuaUtil_Log_m374992289 (Il2CppObject * __this /* static, unused */, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuaUtil::LogWarning(System.String)
extern "C"  void LuaUtil_LogWarning_m2195108255 (Il2CppObject * __this /* static, unused */, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuaUtil::LogError(System.String)
extern "C"  void LuaUtil_LogError_m887618941 (Il2CppObject * __this /* static, unused */, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
