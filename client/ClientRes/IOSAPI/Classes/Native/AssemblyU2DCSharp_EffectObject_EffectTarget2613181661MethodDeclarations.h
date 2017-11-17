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

// UnityEngine.Transform
struct Transform_t3275118058;
// System.String
struct String_t;
// EffectObject/EffectTarget
struct EffectTarget_t2613181661;
struct EffectTarget_t2613181661_marshaled_pinvoke;
struct EffectTarget_t2613181661_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_EffectObject_EffectTarget2613181661.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

// System.Void EffectObject/EffectTarget::Clear()
extern "C"  void EffectTarget_Clear_m3474307841 (EffectTarget_t2613181661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EffectObject/EffectTarget::SetTransform(UnityEngine.Transform,System.String)
extern "C"  void EffectTarget_SetTransform_m2568344947 (EffectTarget_t2613181661 * __this, Transform_t3275118058 * ___root0, String_t* ___bp1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EffectObject/EffectTarget::SetPosition(UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  void EffectTarget_SetPosition_m3369539125 (EffectTarget_t2613181661 * __this, Vector3_t2243707580  ___position0, Quaternion_t4030073918  ___rotation1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 EffectObject/EffectTarget::TransformPoint(UnityEngine.Vector3)
extern "C"  Vector3_t2243707580  EffectTarget_TransformPoint_m82111371 (EffectTarget_t2613181661 * __this, Vector3_t2243707580  ___point0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion EffectObject/EffectTarget::TransformRotation(UnityEngine.Quaternion)
extern "C"  Quaternion_t4030073918  EffectTarget_TransformRotation_m3341857579 (EffectTarget_t2613181661 * __this, Quaternion_t4030073918  ___localRotation0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 EffectObject/EffectTarget::TransformScale(UnityEngine.Vector3)
extern "C"  Vector3_t2243707580  EffectTarget_TransformScale_m3546248831 (EffectTarget_t2613181661 * __this, Vector3_t2243707580  ___localScale0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EffectObject/EffectTarget::IsValid()
extern "C"  bool EffectTarget_IsValid_m2700574918 (EffectTarget_t2613181661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct EffectTarget_t2613181661;
struct EffectTarget_t2613181661_marshaled_pinvoke;

extern "C" void EffectTarget_t2613181661_marshal_pinvoke(const EffectTarget_t2613181661& unmarshaled, EffectTarget_t2613181661_marshaled_pinvoke& marshaled);
extern "C" void EffectTarget_t2613181661_marshal_pinvoke_back(const EffectTarget_t2613181661_marshaled_pinvoke& marshaled, EffectTarget_t2613181661& unmarshaled);
extern "C" void EffectTarget_t2613181661_marshal_pinvoke_cleanup(EffectTarget_t2613181661_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct EffectTarget_t2613181661;
struct EffectTarget_t2613181661_marshaled_com;

extern "C" void EffectTarget_t2613181661_marshal_com(const EffectTarget_t2613181661& unmarshaled, EffectTarget_t2613181661_marshaled_com& marshaled);
extern "C" void EffectTarget_t2613181661_marshal_com_back(const EffectTarget_t2613181661_marshaled_com& marshaled, EffectTarget_t2613181661& unmarshaled);
extern "C" void EffectTarget_t2613181661_marshal_com_cleanup(EffectTarget_t2613181661_marshaled_com& marshaled);
