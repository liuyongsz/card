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

// Spine.Unity.SkeletonAnimator/MecanimTranslator
struct MecanimTranslator_t158962723;
// UnityEngine.Animator
struct Animator_t69676727;
// Spine.Unity.SkeletonDataAsset
struct SkeletonDataAsset_t901153269;
// Spine.Skeleton
struct Skeleton_t1387859465;
// UnityEngine.AnimationClip
struct AnimationClip_t3510324950;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Animator69676727.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_Unity_SkeletonD901153269.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_Skeleton1387859465.h"
#include "UnityEngine_UnityEngine_AnimationClip3510324950.h"

// System.Void Spine.Unity.SkeletonAnimator/MecanimTranslator::.ctor()
extern "C"  void MecanimTranslator__ctor_m2906510408 (MecanimTranslator_t158962723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Animator Spine.Unity.SkeletonAnimator/MecanimTranslator::get_Animator()
extern "C"  Animator_t69676727 * MecanimTranslator_get_Animator_m3977444881 (MecanimTranslator_t158962723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonAnimator/MecanimTranslator::Initialize(UnityEngine.Animator,Spine.Unity.SkeletonDataAsset)
extern "C"  void MecanimTranslator_Initialize_m2857920487 (MecanimTranslator_t158962723 * __this, Animator_t69676727 * ___animator0, SkeletonDataAsset_t901153269 * ___skeletonDataAsset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonAnimator/MecanimTranslator::Apply(Spine.Skeleton)
extern "C"  void MecanimTranslator_Apply_m1471411808 (MecanimTranslator_t158962723 * __this, Skeleton_t1387859465 * ___skeleton0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.Unity.SkeletonAnimator/MecanimTranslator::AnimationTime(System.Single,System.Single,System.Boolean,System.Boolean)
extern "C"  float MecanimTranslator_AnimationTime_m505685433 (Il2CppObject * __this /* static, unused */, float ___normalizedTime0, float ___clipLength1, bool ___loop2, bool ___reversed3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.Unity.SkeletonAnimator/MecanimTranslator::AnimationTime(System.Single,System.Single,System.Boolean)
extern "C"  float MecanimTranslator_AnimationTime_m2622251064 (Il2CppObject * __this /* static, unused */, float ___normalizedTime0, float ___clipLength1, bool ___reversed2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Spine.Unity.SkeletonAnimator/MecanimTranslator::NameHashCode(UnityEngine.AnimationClip)
extern "C"  int32_t MecanimTranslator_NameHashCode_m4019265561 (MecanimTranslator_t158962723 * __this, AnimationClip_t3510324950 * ___clip0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
