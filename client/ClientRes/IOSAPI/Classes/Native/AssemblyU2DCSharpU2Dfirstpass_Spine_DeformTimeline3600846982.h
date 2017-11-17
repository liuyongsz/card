#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Single[]
struct SingleU5BU5D_t577127397;
// System.Single[][]
struct SingleU5BU5DU5BU5D_t2115305192;
// Spine.VertexAttachment
struct VertexAttachment_t2755655897;

#include "AssemblyU2DCSharpU2Dfirstpass_Spine_CurveTimeline835389450.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.DeformTimeline
struct  DeformTimeline_t3600846982  : public CurveTimeline_t835389450
{
public:
	// System.Int32 Spine.DeformTimeline::slotIndex
	int32_t ___slotIndex_6;
	// System.Single[] Spine.DeformTimeline::frames
	SingleU5BU5D_t577127397* ___frames_7;
	// System.Single[][] Spine.DeformTimeline::frameVertices
	SingleU5BU5DU5BU5D_t2115305192* ___frameVertices_8;
	// Spine.VertexAttachment Spine.DeformTimeline::attachment
	VertexAttachment_t2755655897 * ___attachment_9;

public:
	inline static int32_t get_offset_of_slotIndex_6() { return static_cast<int32_t>(offsetof(DeformTimeline_t3600846982, ___slotIndex_6)); }
	inline int32_t get_slotIndex_6() const { return ___slotIndex_6; }
	inline int32_t* get_address_of_slotIndex_6() { return &___slotIndex_6; }
	inline void set_slotIndex_6(int32_t value)
	{
		___slotIndex_6 = value;
	}

	inline static int32_t get_offset_of_frames_7() { return static_cast<int32_t>(offsetof(DeformTimeline_t3600846982, ___frames_7)); }
	inline SingleU5BU5D_t577127397* get_frames_7() const { return ___frames_7; }
	inline SingleU5BU5D_t577127397** get_address_of_frames_7() { return &___frames_7; }
	inline void set_frames_7(SingleU5BU5D_t577127397* value)
	{
		___frames_7 = value;
		Il2CppCodeGenWriteBarrier(&___frames_7, value);
	}

	inline static int32_t get_offset_of_frameVertices_8() { return static_cast<int32_t>(offsetof(DeformTimeline_t3600846982, ___frameVertices_8)); }
	inline SingleU5BU5DU5BU5D_t2115305192* get_frameVertices_8() const { return ___frameVertices_8; }
	inline SingleU5BU5DU5BU5D_t2115305192** get_address_of_frameVertices_8() { return &___frameVertices_8; }
	inline void set_frameVertices_8(SingleU5BU5DU5BU5D_t2115305192* value)
	{
		___frameVertices_8 = value;
		Il2CppCodeGenWriteBarrier(&___frameVertices_8, value);
	}

	inline static int32_t get_offset_of_attachment_9() { return static_cast<int32_t>(offsetof(DeformTimeline_t3600846982, ___attachment_9)); }
	inline VertexAttachment_t2755655897 * get_attachment_9() const { return ___attachment_9; }
	inline VertexAttachment_t2755655897 ** get_address_of_attachment_9() { return &___attachment_9; }
	inline void set_attachment_9(VertexAttachment_t2755655897 * value)
	{
		___attachment_9 = value;
		Il2CppCodeGenWriteBarrier(&___attachment_9, value);
	}
};

struct DeformTimeline_t3600846982_StaticFields
{
public:
	// System.Single[] Spine.DeformTimeline::zeros
	SingleU5BU5D_t577127397* ___zeros_5;

public:
	inline static int32_t get_offset_of_zeros_5() { return static_cast<int32_t>(offsetof(DeformTimeline_t3600846982_StaticFields, ___zeros_5)); }
	inline SingleU5BU5D_t577127397* get_zeros_5() const { return ___zeros_5; }
	inline SingleU5BU5D_t577127397** get_address_of_zeros_5() { return &___zeros_5; }
	inline void set_zeros_5(SingleU5BU5D_t577127397* value)
	{
		___zeros_5 = value;
		Il2CppCodeGenWriteBarrier(&___zeros_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
