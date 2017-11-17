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

// LoopWeather
struct LoopWeather_t3379078138;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.Void LoopWeather::.ctor()
extern "C"  void LoopWeather__ctor_m549493775 (LoopWeather_t3379078138 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoopWeather::Start()
extern "C"  void LoopWeather_Start_m4000709291 (LoopWeather_t3379078138 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoopWeather::SetTarget(UnityEngine.Transform)
extern "C"  void LoopWeather_SetTarget_m3240770743 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoopWeather::Update()
extern "C"  void LoopWeather_Update_m825987908 (LoopWeather_t3379078138 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoopWeather::FixedUpdate()
extern "C"  void LoopWeather_FixedUpdate_m1666224926 (LoopWeather_t3379078138 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoopWeather::CalculatePosition_X(UnityEngine.Vector2&,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void LoopWeather_CalculatePosition_X_m762423131 (LoopWeather_t3379078138 * __this, Vector2_t2243707579 * ___distance0, Vector3_t2243707580  ___tpos1, Vector3_t2243707580  ___lastpos2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoopWeather::CalculatePosition_Y(UnityEngine.Vector2&,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void LoopWeather_CalculatePosition_Y_m2734129750 (LoopWeather_t3379078138 * __this, Vector2_t2243707579 * ___distance0, Vector3_t2243707580  ___tpos1, Vector3_t2243707580  ___lastpos2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 LoopWeather::GetPosition(UnityEngine.Vector2,UnityEngine.Vector3)
extern "C"  Vector3_t2243707580  LoopWeather_GetPosition_m4282345379 (LoopWeather_t3379078138 * __this, Vector2_t2243707579  ___distance0, Vector3_t2243707580  ___selfPos1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
