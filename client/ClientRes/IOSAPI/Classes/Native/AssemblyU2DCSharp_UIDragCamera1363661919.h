#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UIDraggableCamera
struct UIDraggableCamera_t2562792962;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIDragCamera
struct  UIDragCamera_t1363661919  : public MonoBehaviour_t1158329972
{
public:
	// UIDraggableCamera UIDragCamera::draggableCamera
	UIDraggableCamera_t2562792962 * ___draggableCamera_2;

public:
	inline static int32_t get_offset_of_draggableCamera_2() { return static_cast<int32_t>(offsetof(UIDragCamera_t1363661919, ___draggableCamera_2)); }
	inline UIDraggableCamera_t2562792962 * get_draggableCamera_2() const { return ___draggableCamera_2; }
	inline UIDraggableCamera_t2562792962 ** get_address_of_draggableCamera_2() { return &___draggableCamera_2; }
	inline void set_draggableCamera_2(UIDraggableCamera_t2562792962 * value)
	{
		___draggableCamera_2 = value;
		Il2CppCodeGenWriteBarrier(&___draggableCamera_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
