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

#include "AssemblyU2DCSharpU2Dfirstpass_Spine_CurveTimeline835389450.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.TwoColorTimeline
struct  TwoColorTimeline_t424347280  : public CurveTimeline_t835389450
{
public:
	// System.Single[] Spine.TwoColorTimeline::frames
	SingleU5BU5D_t577127397* ___frames_21;
	// System.Int32 Spine.TwoColorTimeline::slotIndex
	int32_t ___slotIndex_22;

public:
	inline static int32_t get_offset_of_frames_21() { return static_cast<int32_t>(offsetof(TwoColorTimeline_t424347280, ___frames_21)); }
	inline SingleU5BU5D_t577127397* get_frames_21() const { return ___frames_21; }
	inline SingleU5BU5D_t577127397** get_address_of_frames_21() { return &___frames_21; }
	inline void set_frames_21(SingleU5BU5D_t577127397* value)
	{
		___frames_21 = value;
		Il2CppCodeGenWriteBarrier(&___frames_21, value);
	}

	inline static int32_t get_offset_of_slotIndex_22() { return static_cast<int32_t>(offsetof(TwoColorTimeline_t424347280, ___slotIndex_22)); }
	inline int32_t get_slotIndex_22() const { return ___slotIndex_22; }
	inline int32_t* get_address_of_slotIndex_22() { return &___slotIndex_22; }
	inline void set_slotIndex_22(int32_t value)
	{
		___slotIndex_22 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
