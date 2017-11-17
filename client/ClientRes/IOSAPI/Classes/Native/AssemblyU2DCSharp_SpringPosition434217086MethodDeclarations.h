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

// SpringPosition
struct SpringPosition_t434217086;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.Void SpringPosition::.ctor()
extern "C"  void SpringPosition__ctor_m343929495 (SpringPosition_t434217086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpringPosition::Start()
extern "C"  void SpringPosition_Start_m3586769419 (SpringPosition_t434217086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpringPosition::Update()
extern "C"  void SpringPosition_Update_m67858152 (SpringPosition_t434217086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpringPosition::NotifyListeners()
extern "C"  void SpringPosition_NotifyListeners_m1315767173 (SpringPosition_t434217086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SpringPosition SpringPosition::Begin(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C"  SpringPosition_t434217086 * SpringPosition_Begin_m2925710007 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___go0, Vector3_t2243707580  ___pos1, float ___strength2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpringPosition::ResetToBegining()
extern "C"  void SpringPosition_ResetToBegining_m1227907608 (SpringPosition_t434217086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
