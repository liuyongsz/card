#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnhanceItem
struct  EnhanceItem_t1489569341  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 EnhanceItem::curveOffSetIndex
	int32_t ___curveOffSetIndex_2;
	// System.Int32 EnhanceItem::curRealIndex
	int32_t ___curRealIndex_3;
	// System.Single EnhanceItem::dCurveCenterOffset
	float ___dCurveCenterOffset_4;
	// UnityEngine.Transform EnhanceItem::mTrs
	Transform_t3275118058 * ___mTrs_5;

public:
	inline static int32_t get_offset_of_curveOffSetIndex_2() { return static_cast<int32_t>(offsetof(EnhanceItem_t1489569341, ___curveOffSetIndex_2)); }
	inline int32_t get_curveOffSetIndex_2() const { return ___curveOffSetIndex_2; }
	inline int32_t* get_address_of_curveOffSetIndex_2() { return &___curveOffSetIndex_2; }
	inline void set_curveOffSetIndex_2(int32_t value)
	{
		___curveOffSetIndex_2 = value;
	}

	inline static int32_t get_offset_of_curRealIndex_3() { return static_cast<int32_t>(offsetof(EnhanceItem_t1489569341, ___curRealIndex_3)); }
	inline int32_t get_curRealIndex_3() const { return ___curRealIndex_3; }
	inline int32_t* get_address_of_curRealIndex_3() { return &___curRealIndex_3; }
	inline void set_curRealIndex_3(int32_t value)
	{
		___curRealIndex_3 = value;
	}

	inline static int32_t get_offset_of_dCurveCenterOffset_4() { return static_cast<int32_t>(offsetof(EnhanceItem_t1489569341, ___dCurveCenterOffset_4)); }
	inline float get_dCurveCenterOffset_4() const { return ___dCurveCenterOffset_4; }
	inline float* get_address_of_dCurveCenterOffset_4() { return &___dCurveCenterOffset_4; }
	inline void set_dCurveCenterOffset_4(float value)
	{
		___dCurveCenterOffset_4 = value;
	}

	inline static int32_t get_offset_of_mTrs_5() { return static_cast<int32_t>(offsetof(EnhanceItem_t1489569341, ___mTrs_5)); }
	inline Transform_t3275118058 * get_mTrs_5() const { return ___mTrs_5; }
	inline Transform_t3275118058 ** get_address_of_mTrs_5() { return &___mTrs_5; }
	inline void set_mTrs_5(Transform_t3275118058 * value)
	{
		___mTrs_5 = value;
		Il2CppCodeGenWriteBarrier(&___mTrs_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
