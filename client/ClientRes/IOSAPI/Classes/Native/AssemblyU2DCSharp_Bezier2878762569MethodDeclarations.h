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

// Bezier
struct Bezier_t2878762569;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1172311765;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.Void Bezier::.ctor(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void Bezier__ctor_m1148960172 (Bezier_t2878762569 * __this, Vector3_t2243707580  ___v00, Vector3_t2243707580  ___v11, Vector3_t2243707580  ___v22, Vector3_t2243707580  ___v33, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bezier::Start()
extern "C"  void Bezier_Start_m504932374 (Bezier_t2878762569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bezier::Clear()
extern "C"  void Bezier_Clear_m2081919333 (Bezier_t2878762569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bezier::SetPoint(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void Bezier_SetPoint_m3849402968 (Bezier_t2878762569 * __this, Vector3_t2243707580  ___v00, Vector3_t2243707580  ___v11, Vector3_t2243707580  ___v22, Vector3_t2243707580  ___v33, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bezier::SetTotalTime(System.Single)
extern "C"  void Bezier_SetTotalTime_m3528516528 (Bezier_t2878762569 * __this, float ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Bezier::get_TotalTime()
extern "C"  float Bezier_get_TotalTime_m1051963768 (Bezier_t2878762569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bezier::set_TotalTime(System.Single)
extern "C"  void Bezier_set_TotalTime_m1465165795 (Bezier_t2878762569 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bezier::FixedUpdate()
extern "C"  void Bezier_FixedUpdate_m3947752927 (Bezier_t2878762569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Bezier::GetPointAtTime(System.Single)
extern "C"  Vector3_t2243707580  Bezier_GetPointAtTime_m2495404689 (Bezier_t2878762569 * __this, float ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bezier::SetConstant()
extern "C"  void Bezier_SetConstant_m2351504626 (Bezier_t2878762569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bezier::CheckConstant()
extern "C"  void Bezier_CheckConstant_m760478954 (Bezier_t2878762569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] Bezier::GetBeizerList(System.Int32)
extern "C"  Vector3U5BU5D_t1172311765* Bezier_GetBeizerList_m260481760 (Bezier_t2878762569 * __this, int32_t ___segmentNum0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
