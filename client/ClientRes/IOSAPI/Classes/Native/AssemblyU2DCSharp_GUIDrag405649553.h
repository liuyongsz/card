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
// UnityEngine.RectTransform
struct RectTransform_t3349966182;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GUIDrag
struct  GUIDrag_t405649553  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject GUIDrag::Target
	GameObject_t1756533147 * ___Target_2;
	// UnityEngine.RectTransform GUIDrag::_mTransform
	RectTransform_t3349966182 * ____mTransform_3;
	// UnityEngine.Vector3 GUIDrag::_localPosition
	Vector3_t2243707580  ____localPosition_4;

public:
	inline static int32_t get_offset_of_Target_2() { return static_cast<int32_t>(offsetof(GUIDrag_t405649553, ___Target_2)); }
	inline GameObject_t1756533147 * get_Target_2() const { return ___Target_2; }
	inline GameObject_t1756533147 ** get_address_of_Target_2() { return &___Target_2; }
	inline void set_Target_2(GameObject_t1756533147 * value)
	{
		___Target_2 = value;
		Il2CppCodeGenWriteBarrier(&___Target_2, value);
	}

	inline static int32_t get_offset_of__mTransform_3() { return static_cast<int32_t>(offsetof(GUIDrag_t405649553, ____mTransform_3)); }
	inline RectTransform_t3349966182 * get__mTransform_3() const { return ____mTransform_3; }
	inline RectTransform_t3349966182 ** get_address_of__mTransform_3() { return &____mTransform_3; }
	inline void set__mTransform_3(RectTransform_t3349966182 * value)
	{
		____mTransform_3 = value;
		Il2CppCodeGenWriteBarrier(&____mTransform_3, value);
	}

	inline static int32_t get_offset_of__localPosition_4() { return static_cast<int32_t>(offsetof(GUIDrag_t405649553, ____localPosition_4)); }
	inline Vector3_t2243707580  get__localPosition_4() const { return ____localPosition_4; }
	inline Vector3_t2243707580 * get_address_of__localPosition_4() { return &____localPosition_4; }
	inline void set__localPosition_4(Vector3_t2243707580  value)
	{
		____localPosition_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
