#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Spine.SlotData
struct SlotData_t1921619346;

#include "AssemblyU2DCSharpU2Dfirstpass_Spine_VertexAttachme2755655897.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.ClippingAttachment
struct  ClippingAttachment_t2377737933  : public VertexAttachment_t2755655897
{
public:
	// Spine.SlotData Spine.ClippingAttachment::endSlot
	SlotData_t1921619346 * ___endSlot_7;

public:
	inline static int32_t get_offset_of_endSlot_7() { return static_cast<int32_t>(offsetof(ClippingAttachment_t2377737933, ___endSlot_7)); }
	inline SlotData_t1921619346 * get_endSlot_7() const { return ___endSlot_7; }
	inline SlotData_t1921619346 ** get_address_of_endSlot_7() { return &___endSlot_7; }
	inline void set_endSlot_7(SlotData_t1921619346 * value)
	{
		___endSlot_7 = value;
		Il2CppCodeGenWriteBarrier(&___endSlot_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
