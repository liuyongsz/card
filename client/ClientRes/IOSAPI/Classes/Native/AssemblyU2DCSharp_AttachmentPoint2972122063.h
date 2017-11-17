#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_AttachmentPoint_Slot1540046502.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AttachmentPoint
struct  AttachmentPoint_t2972122063  : public MonoBehaviour_t1158329972
{
public:
	// AttachmentPoint/Slot AttachmentPoint::slot
	int32_t ___slot_2;
	// UnityEngine.GameObject AttachmentPoint::mChild
	GameObject_t1756533147 * ___mChild_3;
	// UnityEngine.GameObject AttachmentPoint::mChildSub
	GameObject_t1756533147 * ___mChildSub_4;

public:
	inline static int32_t get_offset_of_slot_2() { return static_cast<int32_t>(offsetof(AttachmentPoint_t2972122063, ___slot_2)); }
	inline int32_t get_slot_2() const { return ___slot_2; }
	inline int32_t* get_address_of_slot_2() { return &___slot_2; }
	inline void set_slot_2(int32_t value)
	{
		___slot_2 = value;
	}

	inline static int32_t get_offset_of_mChild_3() { return static_cast<int32_t>(offsetof(AttachmentPoint_t2972122063, ___mChild_3)); }
	inline GameObject_t1756533147 * get_mChild_3() const { return ___mChild_3; }
	inline GameObject_t1756533147 ** get_address_of_mChild_3() { return &___mChild_3; }
	inline void set_mChild_3(GameObject_t1756533147 * value)
	{
		___mChild_3 = value;
		Il2CppCodeGenWriteBarrier(&___mChild_3, value);
	}

	inline static int32_t get_offset_of_mChildSub_4() { return static_cast<int32_t>(offsetof(AttachmentPoint_t2972122063, ___mChildSub_4)); }
	inline GameObject_t1756533147 * get_mChildSub_4() const { return ___mChildSub_4; }
	inline GameObject_t1756533147 ** get_address_of_mChildSub_4() { return &___mChildSub_4; }
	inline void set_mChildSub_4(GameObject_t1756533147 * value)
	{
		___mChildSub_4 = value;
		Il2CppCodeGenWriteBarrier(&___mChildSub_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
