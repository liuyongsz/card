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

// AttachmentPoint
struct AttachmentPoint_t2972122063;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"

// System.Void AttachmentPoint::.ctor()
extern "C"  void AttachmentPoint__ctor_m1291322064 (AttachmentPoint_t2972122063 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AttachmentPoint::Attach(UnityEngine.GameObject,UnityEngine.GameObject,System.Boolean,System.Int32)
extern "C"  bool AttachmentPoint_Attach_m2241152435 (AttachmentPoint_t2972122063 * __this, GameObject_t1756533147 * ___root0, GameObject_t1756533147 * ___go1, bool ___isWeaponSub2, int32_t ___weaponType3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AttachmentPoint::AttachEffect(UnityEngine.GameObject)
extern "C"  bool AttachmentPoint_AttachEffect_m656190878 (AttachmentPoint_t2972122063 * __this, GameObject_t1756533147 * ___go0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
