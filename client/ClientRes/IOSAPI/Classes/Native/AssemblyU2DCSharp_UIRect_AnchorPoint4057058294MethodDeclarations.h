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

// UIRect/AnchorPoint
struct AnchorPoint_t4057058294;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1172311765;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"

// System.Void UIRect/AnchorPoint::.ctor()
extern "C"  void AnchorPoint__ctor_m900805405 (AnchorPoint_t4057058294 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect/AnchorPoint::.ctor(System.Single)
extern "C"  void AnchorPoint__ctor_m2264735902 (AnchorPoint_t4057058294 * __this, float ___relative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect/AnchorPoint::Set(System.Single,System.Single)
extern "C"  void AnchorPoint_Set_m589392719 (AnchorPoint_t4057058294 * __this, float ___relative0, float ___absolute1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect/AnchorPoint::SetToNearest(System.Single,System.Single,System.Single)
extern "C"  void AnchorPoint_SetToNearest_m2851296319 (AnchorPoint_t4057058294 * __this, float ___abs00, float ___abs11, float ___abs22, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect/AnchorPoint::SetToNearest(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C"  void AnchorPoint_SetToNearest_m2699789130 (AnchorPoint_t4057058294 * __this, float ___rel00, float ___rel11, float ___rel22, float ___abs03, float ___abs14, float ___abs25, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect/AnchorPoint::SetHorizontal(UnityEngine.Transform,System.Single)
extern "C"  void AnchorPoint_SetHorizontal_m3575214515 (AnchorPoint_t4057058294 * __this, Transform_t3275118058 * ___parent0, float ___localPos1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect/AnchorPoint::SetVertical(UnityEngine.Transform,System.Single)
extern "C"  void AnchorPoint_SetVertical_m3286489459 (AnchorPoint_t4057058294 * __this, Transform_t3275118058 * ___parent0, float ___localPos1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UIRect/AnchorPoint::GetSides(UnityEngine.Transform)
extern "C"  Vector3U5BU5D_t1172311765* AnchorPoint_GetSides_m2242848644 (AnchorPoint_t4057058294 * __this, Transform_t3275118058 * ___relativeTo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
