#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// TweenScale
struct TweenScale_t2697902175;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScaleBuffEffect
struct  ScaleBuffEffect_t1827937766  : public MonoBehaviour_t1158329972
{
public:
	// TweenScale ScaleBuffEffect::ts
	TweenScale_t2697902175 * ___ts_2;
	// UnityEngine.Transform ScaleBuffEffect::mTrans
	Transform_t3275118058 * ___mTrans_3;
	// System.Boolean ScaleBuffEffect::bPlaying
	bool ___bPlaying_4;

public:
	inline static int32_t get_offset_of_ts_2() { return static_cast<int32_t>(offsetof(ScaleBuffEffect_t1827937766, ___ts_2)); }
	inline TweenScale_t2697902175 * get_ts_2() const { return ___ts_2; }
	inline TweenScale_t2697902175 ** get_address_of_ts_2() { return &___ts_2; }
	inline void set_ts_2(TweenScale_t2697902175 * value)
	{
		___ts_2 = value;
		Il2CppCodeGenWriteBarrier(&___ts_2, value);
	}

	inline static int32_t get_offset_of_mTrans_3() { return static_cast<int32_t>(offsetof(ScaleBuffEffect_t1827937766, ___mTrans_3)); }
	inline Transform_t3275118058 * get_mTrans_3() const { return ___mTrans_3; }
	inline Transform_t3275118058 ** get_address_of_mTrans_3() { return &___mTrans_3; }
	inline void set_mTrans_3(Transform_t3275118058 * value)
	{
		___mTrans_3 = value;
		Il2CppCodeGenWriteBarrier(&___mTrans_3, value);
	}

	inline static int32_t get_offset_of_bPlaying_4() { return static_cast<int32_t>(offsetof(ScaleBuffEffect_t1827937766, ___bPlaying_4)); }
	inline bool get_bPlaying_4() const { return ___bPlaying_4; }
	inline bool* get_address_of_bPlaying_4() { return &___bPlaying_4; }
	inline void set_bPlaying_4(bool value)
	{
		___bPlaying_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
