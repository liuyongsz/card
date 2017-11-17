#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// DynamicAddNum/OnFinished
struct OnFinished_t2864884206;
// UILabel
struct UILabel_t1795115428;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DynamicAddNum
struct  DynamicAddNum_t4241722276  : public MonoBehaviour_t1158329972
{
public:
	// DynamicAddNum/OnFinished DynamicAddNum::onFinished
	OnFinished_t2864884206 * ___onFinished_2;
	// UILabel DynamicAddNum::m_label
	UILabel_t1795115428 * ___m_label_3;
	// System.Single DynamicAddNum::startNum
	float ___startNum_4;
	// System.Single DynamicAddNum::endNum
	float ___endNum_5;
	// System.Int32 DynamicAddNum::m_curIntNum
	int32_t ___m_curIntNum_6;
	// System.Single DynamicAddNum::m_curNum
	float ___m_curNum_7;
	// System.Single DynamicAddNum::m_delta
	float ___m_delta_8;
	// System.Single DynamicAddNum::m_duration
	float ___m_duration_9;

public:
	inline static int32_t get_offset_of_onFinished_2() { return static_cast<int32_t>(offsetof(DynamicAddNum_t4241722276, ___onFinished_2)); }
	inline OnFinished_t2864884206 * get_onFinished_2() const { return ___onFinished_2; }
	inline OnFinished_t2864884206 ** get_address_of_onFinished_2() { return &___onFinished_2; }
	inline void set_onFinished_2(OnFinished_t2864884206 * value)
	{
		___onFinished_2 = value;
		Il2CppCodeGenWriteBarrier(&___onFinished_2, value);
	}

	inline static int32_t get_offset_of_m_label_3() { return static_cast<int32_t>(offsetof(DynamicAddNum_t4241722276, ___m_label_3)); }
	inline UILabel_t1795115428 * get_m_label_3() const { return ___m_label_3; }
	inline UILabel_t1795115428 ** get_address_of_m_label_3() { return &___m_label_3; }
	inline void set_m_label_3(UILabel_t1795115428 * value)
	{
		___m_label_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_label_3, value);
	}

	inline static int32_t get_offset_of_startNum_4() { return static_cast<int32_t>(offsetof(DynamicAddNum_t4241722276, ___startNum_4)); }
	inline float get_startNum_4() const { return ___startNum_4; }
	inline float* get_address_of_startNum_4() { return &___startNum_4; }
	inline void set_startNum_4(float value)
	{
		___startNum_4 = value;
	}

	inline static int32_t get_offset_of_endNum_5() { return static_cast<int32_t>(offsetof(DynamicAddNum_t4241722276, ___endNum_5)); }
	inline float get_endNum_5() const { return ___endNum_5; }
	inline float* get_address_of_endNum_5() { return &___endNum_5; }
	inline void set_endNum_5(float value)
	{
		___endNum_5 = value;
	}

	inline static int32_t get_offset_of_m_curIntNum_6() { return static_cast<int32_t>(offsetof(DynamicAddNum_t4241722276, ___m_curIntNum_6)); }
	inline int32_t get_m_curIntNum_6() const { return ___m_curIntNum_6; }
	inline int32_t* get_address_of_m_curIntNum_6() { return &___m_curIntNum_6; }
	inline void set_m_curIntNum_6(int32_t value)
	{
		___m_curIntNum_6 = value;
	}

	inline static int32_t get_offset_of_m_curNum_7() { return static_cast<int32_t>(offsetof(DynamicAddNum_t4241722276, ___m_curNum_7)); }
	inline float get_m_curNum_7() const { return ___m_curNum_7; }
	inline float* get_address_of_m_curNum_7() { return &___m_curNum_7; }
	inline void set_m_curNum_7(float value)
	{
		___m_curNum_7 = value;
	}

	inline static int32_t get_offset_of_m_delta_8() { return static_cast<int32_t>(offsetof(DynamicAddNum_t4241722276, ___m_delta_8)); }
	inline float get_m_delta_8() const { return ___m_delta_8; }
	inline float* get_address_of_m_delta_8() { return &___m_delta_8; }
	inline void set_m_delta_8(float value)
	{
		___m_delta_8 = value;
	}

	inline static int32_t get_offset_of_m_duration_9() { return static_cast<int32_t>(offsetof(DynamicAddNum_t4241722276, ___m_duration_9)); }
	inline float get_m_duration_9() const { return ___m_duration_9; }
	inline float* get_address_of_m_duration_9() { return &___m_duration_9; }
	inline void set_m_duration_9(float value)
	{
		___m_duration_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
