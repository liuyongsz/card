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

#include "AssemblyU2DCSharpU2Dfirstpass_Spine_VertexAttachme2755655897.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.PathAttachment
struct  PathAttachment_t2721492598  : public VertexAttachment_t2755655897
{
public:
	// System.Single[] Spine.PathAttachment::lengths
	SingleU5BU5D_t577127397* ___lengths_7;
	// System.Boolean Spine.PathAttachment::closed
	bool ___closed_8;
	// System.Boolean Spine.PathAttachment::constantSpeed
	bool ___constantSpeed_9;

public:
	inline static int32_t get_offset_of_lengths_7() { return static_cast<int32_t>(offsetof(PathAttachment_t2721492598, ___lengths_7)); }
	inline SingleU5BU5D_t577127397* get_lengths_7() const { return ___lengths_7; }
	inline SingleU5BU5D_t577127397** get_address_of_lengths_7() { return &___lengths_7; }
	inline void set_lengths_7(SingleU5BU5D_t577127397* value)
	{
		___lengths_7 = value;
		Il2CppCodeGenWriteBarrier(&___lengths_7, value);
	}

	inline static int32_t get_offset_of_closed_8() { return static_cast<int32_t>(offsetof(PathAttachment_t2721492598, ___closed_8)); }
	inline bool get_closed_8() const { return ___closed_8; }
	inline bool* get_address_of_closed_8() { return &___closed_8; }
	inline void set_closed_8(bool value)
	{
		___closed_8 = value;
	}

	inline static int32_t get_offset_of_constantSpeed_9() { return static_cast<int32_t>(offsetof(PathAttachment_t2721492598, ___constantSpeed_9)); }
	inline bool get_constantSpeed_9() const { return ___constantSpeed_9; }
	inline bool* get_address_of_constantSpeed_9() { return &___constantSpeed_9; }
	inline void set_constantSpeed_9(bool value)
	{
		___constantSpeed_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
