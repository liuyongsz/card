#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Spine.ExposedList`1<Spine.Unity.SubmeshInstruction>
struct ExposedList_1_t2002718615;
// Spine.ExposedList`1<Spine.Attachment>
struct ExposedList_1_t1640977307;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.SkeletonRendererInstruction
struct  SkeletonRendererInstruction_t1881716398  : public Il2CppObject
{
public:
	// System.Boolean Spine.Unity.SkeletonRendererInstruction::immutableTriangles
	bool ___immutableTriangles_0;
	// Spine.ExposedList`1<Spine.Unity.SubmeshInstruction> Spine.Unity.SkeletonRendererInstruction::submeshInstructions
	ExposedList_1_t2002718615 * ___submeshInstructions_1;
	// System.Boolean Spine.Unity.SkeletonRendererInstruction::hasActiveClipping
	bool ___hasActiveClipping_2;
	// System.Int32 Spine.Unity.SkeletonRendererInstruction::rawVertexCount
	int32_t ___rawVertexCount_3;
	// Spine.ExposedList`1<Spine.Attachment> Spine.Unity.SkeletonRendererInstruction::attachments
	ExposedList_1_t1640977307 * ___attachments_4;

public:
	inline static int32_t get_offset_of_immutableTriangles_0() { return static_cast<int32_t>(offsetof(SkeletonRendererInstruction_t1881716398, ___immutableTriangles_0)); }
	inline bool get_immutableTriangles_0() const { return ___immutableTriangles_0; }
	inline bool* get_address_of_immutableTriangles_0() { return &___immutableTriangles_0; }
	inline void set_immutableTriangles_0(bool value)
	{
		___immutableTriangles_0 = value;
	}

	inline static int32_t get_offset_of_submeshInstructions_1() { return static_cast<int32_t>(offsetof(SkeletonRendererInstruction_t1881716398, ___submeshInstructions_1)); }
	inline ExposedList_1_t2002718615 * get_submeshInstructions_1() const { return ___submeshInstructions_1; }
	inline ExposedList_1_t2002718615 ** get_address_of_submeshInstructions_1() { return &___submeshInstructions_1; }
	inline void set_submeshInstructions_1(ExposedList_1_t2002718615 * value)
	{
		___submeshInstructions_1 = value;
		Il2CppCodeGenWriteBarrier(&___submeshInstructions_1, value);
	}

	inline static int32_t get_offset_of_hasActiveClipping_2() { return static_cast<int32_t>(offsetof(SkeletonRendererInstruction_t1881716398, ___hasActiveClipping_2)); }
	inline bool get_hasActiveClipping_2() const { return ___hasActiveClipping_2; }
	inline bool* get_address_of_hasActiveClipping_2() { return &___hasActiveClipping_2; }
	inline void set_hasActiveClipping_2(bool value)
	{
		___hasActiveClipping_2 = value;
	}

	inline static int32_t get_offset_of_rawVertexCount_3() { return static_cast<int32_t>(offsetof(SkeletonRendererInstruction_t1881716398, ___rawVertexCount_3)); }
	inline int32_t get_rawVertexCount_3() const { return ___rawVertexCount_3; }
	inline int32_t* get_address_of_rawVertexCount_3() { return &___rawVertexCount_3; }
	inline void set_rawVertexCount_3(int32_t value)
	{
		___rawVertexCount_3 = value;
	}

	inline static int32_t get_offset_of_attachments_4() { return static_cast<int32_t>(offsetof(SkeletonRendererInstruction_t1881716398, ___attachments_4)); }
	inline ExposedList_1_t1640977307 * get_attachments_4() const { return ___attachments_4; }
	inline ExposedList_1_t1640977307 ** get_address_of_attachments_4() { return &___attachments_4; }
	inline void set_attachments_4(ExposedList_1_t1640977307 * value)
	{
		___attachments_4 = value;
		Il2CppCodeGenWriteBarrier(&___attachments_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
