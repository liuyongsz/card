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

// MathUtils
struct MathUtils_t4163796929;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// System.String[]
struct StringU5BU5D_t1642385972;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.Void MathUtils::.ctor()
extern "C"  void MathUtils__ctor_m378669622 (MathUtils_t4163796929 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MathUtils::FloatEquals(System.Single,System.Single)
extern "C"  bool MathUtils_FloatEquals_m391186159 (Il2CppObject * __this /* static, unused */, float ___a0, float ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MathUtils::FloatEquals(System.Single,System.Single,System.Single)
extern "C"  bool MathUtils_FloatEquals_m2407771472 (Il2CppObject * __this /* static, unused */, float ___a0, float ___b1, float ___offest2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MathUtils::FloatZero(System.Single)
extern "C"  bool MathUtils_FloatZero_m1082220995 (Il2CppObject * __this /* static, unused */, float ___a0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MathUtils::Distance2D(System.Single,System.Single,System.Single,System.Single)
extern "C"  float MathUtils_Distance2D_m4216746491 (Il2CppObject * __this /* static, unused */, float ___x10, float ___y11, float ___x22, float ___y23, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MathUtils::Distance2D2(System.Single,System.Single,System.Single,System.Single)
extern "C"  float MathUtils_Distance2D2_m3582327249 (Il2CppObject * __this /* static, unused */, float ___x10, float ___y11, float ___x22, float ___y23, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MathUtils::SqrMagnitude2D(System.Single,System.Single,System.Single,System.Single)
extern "C"  float MathUtils_SqrMagnitude2D_m1021900622 (Il2CppObject * __this /* static, unused */, float ___x10, float ___y11, float ___x22, float ___y23, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MathUtils::Distance2D(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  float MathUtils_Distance2D_m3953574267 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___v10, Vector3_t2243707580  ___v21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MathUtils::Distance2DLessEqual(System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C"  bool MathUtils_Distance2DLessEqual_m4122614497 (Il2CppObject * __this /* static, unused */, float ___x10, float ___y11, float ___x22, float ___y23, float ___distance4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MathUtils::Distance2DLessEqual(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  bool MathUtils_Distance2DLessEqual_m3233900385 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___pos10, Vector3_t2243707580  ___pos21, float ___distance2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MathUtils::Cube2CirIntersect(System.Single,System.Single,System.Single,UnityEngine.Vector3,System.Single)
extern "C"  bool MathUtils_Cube2CirIntersect_m3837919127 (Il2CppObject * __this /* static, unused */, float ___gridX0, float ___gridZ1, float ___halfSideLen2, Vector3_t2243707580  ___cirPosition3, float ___radius4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MathUtils::Rad2Deg(System.Single)
extern "C"  float MathUtils_Rad2Deg_m1815167754 (Il2CppObject * __this /* static, unused */, float ___rad0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MathUtils::Rad3Deg(System.Single)
extern "C"  float MathUtils_Rad3Deg_m3414111529 (Il2CppObject * __this /* static, unused */, float ___angle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MathUtils::Deg(System.Single)
extern "C"  float MathUtils_Deg_m514489969 (Il2CppObject * __this /* static, unused */, float ___deg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.String> MathUtils::ArrayDiff(System.String[],System.String[])
extern "C"  List_1_t1398341365 * MathUtils_ArrayDiff_m2718933259 (Il2CppObject * __this /* static, unused */, StringU5BU5D_t1642385972* ___a0, StringU5BU5D_t1642385972* ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 MathUtils::SpellInt(System.SByte,System.SByte,System.SByte,System.SByte)
extern "C"  uint32_t MathUtils_SpellInt_m802807654 (Il2CppObject * __this /* static, unused */, int8_t ___byteA0, int8_t ___byteB1, int8_t ___byteC2, int8_t ___byteD3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MathUtils::SplitByte(System.UInt32,System.SByte&,System.SByte&,System.SByte&,System.SByte&)
extern "C"  void MathUtils_SplitByte_m1822135762 (Il2CppObject * __this /* static, unused */, uint32_t ___uCode0, int8_t* ___sCodeA1, int8_t* ___sCodeB2, int8_t* ___sCodeC3, int8_t* ___sCodeD4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MathUtils::SplitShort(System.UInt32,System.Int16&,System.Int16&)
extern "C"  void MathUtils_SplitShort_m1745797064 (Il2CppObject * __this /* static, unused */, uint32_t ___uCode0, int16_t* ___sHighCode1, int16_t* ___sLowCode2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
