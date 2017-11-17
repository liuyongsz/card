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

// Spine.PointAttachment
struct PointAttachment_t1186135803;
// System.String
struct String_t;
// Spine.Bone
struct Bone_t4151268332;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_Bone4151268332.h"

// System.Void Spine.PointAttachment::.ctor(System.String)
extern "C"  void PointAttachment__ctor_m2014794021 (PointAttachment_t1186135803 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.PointAttachment::get_X()
extern "C"  float PointAttachment_get_X_m1594169406 (PointAttachment_t1186135803 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.PointAttachment::set_X(System.Single)
extern "C"  void PointAttachment_set_X_m3132030699 (PointAttachment_t1186135803 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.PointAttachment::get_Y()
extern "C"  float PointAttachment_get_Y_m48288441 (PointAttachment_t1186135803 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.PointAttachment::set_Y(System.Single)
extern "C"  void PointAttachment_set_Y_m3767298160 (PointAttachment_t1186135803 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.PointAttachment::get_Rotation()
extern "C"  float PointAttachment_get_Rotation_m1512150610 (PointAttachment_t1186135803 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.PointAttachment::set_Rotation(System.Single)
extern "C"  void PointAttachment_set_Rotation_m1980724595 (PointAttachment_t1186135803 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.PointAttachment::ComputeWorldPosition(Spine.Bone,System.Single&,System.Single&)
extern "C"  void PointAttachment_ComputeWorldPosition_m4025542870 (PointAttachment_t1186135803 * __this, Bone_t4151268332 * ___bone0, float* ___ox1, float* ___oy2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.PointAttachment::ComputeWorldRotation(Spine.Bone)
extern "C"  float PointAttachment_ComputeWorldRotation_m2115165559 (PointAttachment_t1186135803 * __this, Bone_t4151268332 * ___bone0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
