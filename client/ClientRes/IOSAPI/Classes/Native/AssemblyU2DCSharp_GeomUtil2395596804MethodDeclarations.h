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

// GeomUtil
struct GeomUtil_t2395596804;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"

// System.Void GeomUtil::.ctor()
extern "C"  void GeomUtil__ctor_m2596035855 (GeomUtil_t2395596804 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 GeomUtil::Slerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t2243707580  GeomUtil_Slerp_m2813713974 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___mStart0, Vector3_t2243707580  ___mEnd1, float ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GeomUtil::CalGravityAirTimer(System.Single)
extern "C"  float GeomUtil_CalGravityAirTimer_m1238688377 (Il2CppObject * __this /* static, unused */, float ___v0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GeomUtil::IsLeft(UnityEngine.Transform,UnityEngine.Vector3)
extern "C"  bool GeomUtil_IsLeft_m834889986 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___org0, Vector3_t2243707580  ___targetPos1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GeomUtil::SmoothLookAt(UnityEngine.Transform,UnityEngine.Vector3,System.Boolean,System.Single)
extern "C"  void GeomUtil_SmoothLookAt_m3076468527 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___self0, Vector3_t2243707580  ___target1, bool ___smooth2, float ___damping3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 GeomUtil::RotationMatrix(UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t2243707580  GeomUtil_RotationMatrix_m3722896880 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___v0, float ___angle1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GeomUtil::InSector(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single)
extern "C"  bool GeomUtil_InSector_m1175564026 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___org0, Vector3_t2243707580  ___target1, float ___angle2, float ___rad3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GeomUtil::PointinTriangle(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  bool GeomUtil_PointinTriangle_m668167126 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___A0, Vector3_t2243707580  ___B1, Vector3_t2243707580  ___C2, Vector3_t2243707580  ___P3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GeomUtil::MatchGetCross(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  float GeomUtil_MatchGetCross_m1552264747 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___p10, Vector3_t2243707580  ___p21, Vector3_t2243707580  ___p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GeomUtil::IsPointInMatrix(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  bool GeomUtil_IsPointInMatrix_m3508410810 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___p10, Vector3_t2243707580  ___p21, Vector3_t2243707580  ___p32, Vector3_t2243707580  ___p43, Vector3_t2243707580  ___p4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GeomUtil::DistanceOfPointToVector(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  float GeomUtil_DistanceOfPointToVector_m1569515076 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___starPoint0, Vector3_t2243707580  ___endPoint1, Vector3_t2243707580  ___point2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
