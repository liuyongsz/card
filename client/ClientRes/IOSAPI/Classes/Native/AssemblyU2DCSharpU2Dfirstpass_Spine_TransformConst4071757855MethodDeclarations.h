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

// Spine.TransformConstraint
struct TransformConstraint_t4071757855;
// Spine.TransformConstraintData
struct TransformConstraintData_t3710849647;
// Spine.Skeleton
struct Skeleton_t1387859465;
// Spine.ExposedList`1<Spine.Bone>
struct ExposedList_1_t3208170272;
// Spine.Bone
struct Bone_t4151268332;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_TransformConst3710849647.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_Skeleton1387859465.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_Bone4151268332.h"

// System.Void Spine.TransformConstraint::.ctor(Spine.TransformConstraintData,Spine.Skeleton)
extern "C"  void TransformConstraint__ctor_m3130407335 (TransformConstraint_t4071757855 * __this, TransformConstraintData_t3710849647 * ___data0, Skeleton_t1387859465 * ___skeleton1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.TransformConstraintData Spine.TransformConstraint::get_Data()
extern "C"  TransformConstraintData_t3710849647 * TransformConstraint_get_Data_m2747796615 (TransformConstraint_t4071757855 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Spine.TransformConstraint::get_Order()
extern "C"  int32_t TransformConstraint_get_Order_m3479555618 (TransformConstraint_t4071757855 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.ExposedList`1<Spine.Bone> Spine.TransformConstraint::get_Bones()
extern "C"  ExposedList_1_t3208170272 * TransformConstraint_get_Bones_m2802324719 (TransformConstraint_t4071757855 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Bone Spine.TransformConstraint::get_Target()
extern "C"  Bone_t4151268332 * TransformConstraint_get_Target_m3933957521 (TransformConstraint_t4071757855 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TransformConstraint::set_Target(Spine.Bone)
extern "C"  void TransformConstraint_set_Target_m3463068668 (TransformConstraint_t4071757855 * __this, Bone_t4151268332 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.TransformConstraint::get_RotateMix()
extern "C"  float TransformConstraint_get_RotateMix_m2686610689 (TransformConstraint_t4071757855 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TransformConstraint::set_RotateMix(System.Single)
extern "C"  void TransformConstraint_set_RotateMix_m3739232312 (TransformConstraint_t4071757855 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.TransformConstraint::get_TranslateMix()
extern "C"  float TransformConstraint_get_TranslateMix_m69644788 (TransformConstraint_t4071757855 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TransformConstraint::set_TranslateMix(System.Single)
extern "C"  void TransformConstraint_set_TranslateMix_m3312383461 (TransformConstraint_t4071757855 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.TransformConstraint::get_ScaleMix()
extern "C"  float TransformConstraint_get_ScaleMix_m2323657904 (TransformConstraint_t4071757855 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TransformConstraint::set_ScaleMix(System.Single)
extern "C"  void TransformConstraint_set_ScaleMix_m3602004083 (TransformConstraint_t4071757855 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.TransformConstraint::get_ShearMix()
extern "C"  float TransformConstraint_get_ShearMix_m3509821877 (TransformConstraint_t4071757855 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TransformConstraint::set_ShearMix(System.Single)
extern "C"  void TransformConstraint_set_ShearMix_m4034674692 (TransformConstraint_t4071757855 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TransformConstraint::Apply()
extern "C"  void TransformConstraint_Apply_m2731398687 (TransformConstraint_t4071757855 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TransformConstraint::Update()
extern "C"  void TransformConstraint_Update_m3323167906 (TransformConstraint_t4071757855 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TransformConstraint::ApplyAbsoluteWorld()
extern "C"  void TransformConstraint_ApplyAbsoluteWorld_m775245616 (TransformConstraint_t4071757855 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TransformConstraint::ApplyRelativeWorld()
extern "C"  void TransformConstraint_ApplyRelativeWorld_m3374589233 (TransformConstraint_t4071757855 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TransformConstraint::ApplyAbsoluteLocal()
extern "C"  void TransformConstraint_ApplyAbsoluteLocal_m3356222157 (TransformConstraint_t4071757855 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TransformConstraint::ApplyRelativeLocal()
extern "C"  void TransformConstraint_ApplyRelativeLocal_m3072924676 (TransformConstraint_t4071757855 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Spine.TransformConstraint::ToString()
extern "C"  String_t* TransformConstraint_ToString_m172524460 (TransformConstraint_t4071757855 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
