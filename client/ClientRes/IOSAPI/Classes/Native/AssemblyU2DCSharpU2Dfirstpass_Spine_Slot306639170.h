﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Spine.SlotData
struct SlotData_t1921619346;
// Spine.Bone
struct Bone_t4151268332;
// Spine.Attachment
struct Attachment_t2584075367;
// Spine.ExposedList`1<System.Single>
struct ExposedList_1_t1133411872;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Slot
struct  Slot_t306639170  : public Il2CppObject
{
public:
	// Spine.SlotData Spine.Slot::data
	SlotData_t1921619346 * ___data_0;
	// Spine.Bone Spine.Slot::bone
	Bone_t4151268332 * ___bone_1;
	// System.Single Spine.Slot::r
	float ___r_2;
	// System.Single Spine.Slot::g
	float ___g_3;
	// System.Single Spine.Slot::b
	float ___b_4;
	// System.Single Spine.Slot::a
	float ___a_5;
	// System.Single Spine.Slot::r2
	float ___r2_6;
	// System.Single Spine.Slot::g2
	float ___g2_7;
	// System.Single Spine.Slot::b2
	float ___b2_8;
	// System.Boolean Spine.Slot::hasSecondColor
	bool ___hasSecondColor_9;
	// Spine.Attachment Spine.Slot::attachment
	Attachment_t2584075367 * ___attachment_10;
	// System.Single Spine.Slot::attachmentTime
	float ___attachmentTime_11;
	// Spine.ExposedList`1<System.Single> Spine.Slot::attachmentVertices
	ExposedList_1_t1133411872 * ___attachmentVertices_12;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(Slot_t306639170, ___data_0)); }
	inline SlotData_t1921619346 * get_data_0() const { return ___data_0; }
	inline SlotData_t1921619346 ** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(SlotData_t1921619346 * value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier(&___data_0, value);
	}

	inline static int32_t get_offset_of_bone_1() { return static_cast<int32_t>(offsetof(Slot_t306639170, ___bone_1)); }
	inline Bone_t4151268332 * get_bone_1() const { return ___bone_1; }
	inline Bone_t4151268332 ** get_address_of_bone_1() { return &___bone_1; }
	inline void set_bone_1(Bone_t4151268332 * value)
	{
		___bone_1 = value;
		Il2CppCodeGenWriteBarrier(&___bone_1, value);
	}

	inline static int32_t get_offset_of_r_2() { return static_cast<int32_t>(offsetof(Slot_t306639170, ___r_2)); }
	inline float get_r_2() const { return ___r_2; }
	inline float* get_address_of_r_2() { return &___r_2; }
	inline void set_r_2(float value)
	{
		___r_2 = value;
	}

	inline static int32_t get_offset_of_g_3() { return static_cast<int32_t>(offsetof(Slot_t306639170, ___g_3)); }
	inline float get_g_3() const { return ___g_3; }
	inline float* get_address_of_g_3() { return &___g_3; }
	inline void set_g_3(float value)
	{
		___g_3 = value;
	}

	inline static int32_t get_offset_of_b_4() { return static_cast<int32_t>(offsetof(Slot_t306639170, ___b_4)); }
	inline float get_b_4() const { return ___b_4; }
	inline float* get_address_of_b_4() { return &___b_4; }
	inline void set_b_4(float value)
	{
		___b_4 = value;
	}

	inline static int32_t get_offset_of_a_5() { return static_cast<int32_t>(offsetof(Slot_t306639170, ___a_5)); }
	inline float get_a_5() const { return ___a_5; }
	inline float* get_address_of_a_5() { return &___a_5; }
	inline void set_a_5(float value)
	{
		___a_5 = value;
	}

	inline static int32_t get_offset_of_r2_6() { return static_cast<int32_t>(offsetof(Slot_t306639170, ___r2_6)); }
	inline float get_r2_6() const { return ___r2_6; }
	inline float* get_address_of_r2_6() { return &___r2_6; }
	inline void set_r2_6(float value)
	{
		___r2_6 = value;
	}

	inline static int32_t get_offset_of_g2_7() { return static_cast<int32_t>(offsetof(Slot_t306639170, ___g2_7)); }
	inline float get_g2_7() const { return ___g2_7; }
	inline float* get_address_of_g2_7() { return &___g2_7; }
	inline void set_g2_7(float value)
	{
		___g2_7 = value;
	}

	inline static int32_t get_offset_of_b2_8() { return static_cast<int32_t>(offsetof(Slot_t306639170, ___b2_8)); }
	inline float get_b2_8() const { return ___b2_8; }
	inline float* get_address_of_b2_8() { return &___b2_8; }
	inline void set_b2_8(float value)
	{
		___b2_8 = value;
	}

	inline static int32_t get_offset_of_hasSecondColor_9() { return static_cast<int32_t>(offsetof(Slot_t306639170, ___hasSecondColor_9)); }
	inline bool get_hasSecondColor_9() const { return ___hasSecondColor_9; }
	inline bool* get_address_of_hasSecondColor_9() { return &___hasSecondColor_9; }
	inline void set_hasSecondColor_9(bool value)
	{
		___hasSecondColor_9 = value;
	}

	inline static int32_t get_offset_of_attachment_10() { return static_cast<int32_t>(offsetof(Slot_t306639170, ___attachment_10)); }
	inline Attachment_t2584075367 * get_attachment_10() const { return ___attachment_10; }
	inline Attachment_t2584075367 ** get_address_of_attachment_10() { return &___attachment_10; }
	inline void set_attachment_10(Attachment_t2584075367 * value)
	{
		___attachment_10 = value;
		Il2CppCodeGenWriteBarrier(&___attachment_10, value);
	}

	inline static int32_t get_offset_of_attachmentTime_11() { return static_cast<int32_t>(offsetof(Slot_t306639170, ___attachmentTime_11)); }
	inline float get_attachmentTime_11() const { return ___attachmentTime_11; }
	inline float* get_address_of_attachmentTime_11() { return &___attachmentTime_11; }
	inline void set_attachmentTime_11(float value)
	{
		___attachmentTime_11 = value;
	}

	inline static int32_t get_offset_of_attachmentVertices_12() { return static_cast<int32_t>(offsetof(Slot_t306639170, ___attachmentVertices_12)); }
	inline ExposedList_1_t1133411872 * get_attachmentVertices_12() const { return ___attachmentVertices_12; }
	inline ExposedList_1_t1133411872 ** get_address_of_attachmentVertices_12() { return &___attachmentVertices_12; }
	inline void set_attachmentVertices_12(ExposedList_1_t1133411872 * value)
	{
		___attachmentVertices_12 = value;
		Il2CppCodeGenWriteBarrier(&___attachmentVertices_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
