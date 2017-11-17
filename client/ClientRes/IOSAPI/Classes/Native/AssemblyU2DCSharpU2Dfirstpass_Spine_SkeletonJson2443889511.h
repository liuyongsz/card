﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Spine.AttachmentLoader
struct AttachmentLoader_t459554434;
// System.Collections.Generic.List`1<Spine.SkeletonJson/LinkedMesh>
struct List_1_t2874830457;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.SkeletonJson
struct  SkeletonJson_t2443889511  : public Il2CppObject
{
public:
	// Spine.AttachmentLoader Spine.SkeletonJson::attachmentLoader
	Il2CppObject * ___attachmentLoader_0;
	// System.Collections.Generic.List`1<Spine.SkeletonJson/LinkedMesh> Spine.SkeletonJson::linkedMeshes
	List_1_t2874830457 * ___linkedMeshes_1;
	// System.Single Spine.SkeletonJson::<Scale>k__BackingField
	float ___U3CScaleU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_attachmentLoader_0() { return static_cast<int32_t>(offsetof(SkeletonJson_t2443889511, ___attachmentLoader_0)); }
	inline Il2CppObject * get_attachmentLoader_0() const { return ___attachmentLoader_0; }
	inline Il2CppObject ** get_address_of_attachmentLoader_0() { return &___attachmentLoader_0; }
	inline void set_attachmentLoader_0(Il2CppObject * value)
	{
		___attachmentLoader_0 = value;
		Il2CppCodeGenWriteBarrier(&___attachmentLoader_0, value);
	}

	inline static int32_t get_offset_of_linkedMeshes_1() { return static_cast<int32_t>(offsetof(SkeletonJson_t2443889511, ___linkedMeshes_1)); }
	inline List_1_t2874830457 * get_linkedMeshes_1() const { return ___linkedMeshes_1; }
	inline List_1_t2874830457 ** get_address_of_linkedMeshes_1() { return &___linkedMeshes_1; }
	inline void set_linkedMeshes_1(List_1_t2874830457 * value)
	{
		___linkedMeshes_1 = value;
		Il2CppCodeGenWriteBarrier(&___linkedMeshes_1, value);
	}

	inline static int32_t get_offset_of_U3CScaleU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SkeletonJson_t2443889511, ___U3CScaleU3Ek__BackingField_2)); }
	inline float get_U3CScaleU3Ek__BackingField_2() const { return ___U3CScaleU3Ek__BackingField_2; }
	inline float* get_address_of_U3CScaleU3Ek__BackingField_2() { return &___U3CScaleU3Ek__BackingField_2; }
	inline void set_U3CScaleU3Ek__BackingField_2(float value)
	{
		___U3CScaleU3Ek__BackingField_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
