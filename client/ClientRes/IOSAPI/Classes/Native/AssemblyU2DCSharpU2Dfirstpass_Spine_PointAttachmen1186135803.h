#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "AssemblyU2DCSharpU2Dfirstpass_Spine_Attachment2584075367.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.PointAttachment
struct  PointAttachment_t1186135803  : public Attachment_t2584075367
{
public:
	// System.Single Spine.PointAttachment::x
	float ___x_1;
	// System.Single Spine.PointAttachment::y
	float ___y_2;
	// System.Single Spine.PointAttachment::rotation
	float ___rotation_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(PointAttachment_t1186135803, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(PointAttachment_t1186135803, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_rotation_3() { return static_cast<int32_t>(offsetof(PointAttachment_t1186135803, ___rotation_3)); }
	inline float get_rotation_3() const { return ___rotation_3; }
	inline float* get_address_of_rotation_3() { return &___rotation_3; }
	inline void set_rotation_3(float value)
	{
		___rotation_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
