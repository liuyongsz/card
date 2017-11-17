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

// UIDragObject
struct UIDragObject_t1520449903;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// System.Void UIDragObject::.ctor()
extern "C"  void UIDragObject__ctor_m3608537702 (UIDragObject_t1520449903 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UIDragObject::get_dragMovement()
extern "C"  Vector3_t2243707580  UIDragObject_get_dragMovement_m3117703440 (UIDragObject_t1520449903 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDragObject::set_dragMovement(UnityEngine.Vector3)
extern "C"  void UIDragObject_set_dragMovement_m1841926601 (UIDragObject_t1520449903 * __this, Vector3_t2243707580  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDragObject::OnEnable()
extern "C"  void UIDragObject_OnEnable_m3977359386 (UIDragObject_t1520449903 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDragObject::OnDisable()
extern "C"  void UIDragObject_OnDisable_m3607306111 (UIDragObject_t1520449903 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDragObject::FindPanel()
extern "C"  void UIDragObject_FindPanel_m3462415313 (UIDragObject_t1520449903 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDragObject::UpdateBounds()
extern "C"  void UIDragObject_UpdateBounds_m2034235792 (UIDragObject_t1520449903 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDragObject::OnPress(System.Boolean)
extern "C"  void UIDragObject_OnPress_m1996798103 (UIDragObject_t1520449903 * __this, bool ___pressed0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDragObject::OnDrag(UnityEngine.Vector2)
extern "C"  void UIDragObject_OnDrag_m4199514087 (UIDragObject_t1520449903 * __this, Vector2_t2243707579  ___delta0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDragObject::Move(UnityEngine.Vector3)
extern "C"  void UIDragObject_Move_m3766296838 (UIDragObject_t1520449903 * __this, Vector3_t2243707580  ___worldDelta0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDragObject::LateUpdate()
extern "C"  void UIDragObject_LateUpdate_m3118227427 (UIDragObject_t1520449903 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDragObject::CancelMovement()
extern "C"  void UIDragObject_CancelMovement_m1341325895 (UIDragObject_t1520449903 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDragObject::CancelSpring()
extern "C"  void UIDragObject_CancelSpring_m3708092301 (UIDragObject_t1520449903 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDragObject::OnScroll(System.Single)
extern "C"  void UIDragObject_OnScroll_m4215017207 (UIDragObject_t1520449903 * __this, float ___delta0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
