#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"
#include "Live2DUnity_live2d_EyeBlinkMotion_EYE_STATE1739428511.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// live2d.EyeBlinkMotion
struct  EyeBlinkMotion_t1361528585  : public Il2CppObject
{
public:
	// System.Int64 live2d.EyeBlinkMotion::nextBlinkTime
	int64_t ___nextBlinkTime_0;
	// System.Int64 live2d.EyeBlinkMotion::stateStartTime
	int64_t ___stateStartTime_1;
	// live2d.EyeBlinkMotion/EYE_STATE live2d.EyeBlinkMotion::eyeState
	int32_t ___eyeState_2;
	// System.Boolean live2d.EyeBlinkMotion::closeIfZero
	bool ___closeIfZero_3;
	// System.String live2d.EyeBlinkMotion::eyeID_L
	String_t* ___eyeID_L_4;
	// System.String live2d.EyeBlinkMotion::eyeID_R
	String_t* ___eyeID_R_5;
	// System.Int32 live2d.EyeBlinkMotion::blinkIntervalMsec
	int32_t ___blinkIntervalMsec_6;
	// System.Int32 live2d.EyeBlinkMotion::closingMotionMsec
	int32_t ___closingMotionMsec_7;
	// System.Int32 live2d.EyeBlinkMotion::closedMotionMsec
	int32_t ___closedMotionMsec_8;
	// System.Int32 live2d.EyeBlinkMotion::openingMotionMsec
	int32_t ___openingMotionMsec_9;

public:
	inline static int32_t get_offset_of_nextBlinkTime_0() { return static_cast<int32_t>(offsetof(EyeBlinkMotion_t1361528585, ___nextBlinkTime_0)); }
	inline int64_t get_nextBlinkTime_0() const { return ___nextBlinkTime_0; }
	inline int64_t* get_address_of_nextBlinkTime_0() { return &___nextBlinkTime_0; }
	inline void set_nextBlinkTime_0(int64_t value)
	{
		___nextBlinkTime_0 = value;
	}

	inline static int32_t get_offset_of_stateStartTime_1() { return static_cast<int32_t>(offsetof(EyeBlinkMotion_t1361528585, ___stateStartTime_1)); }
	inline int64_t get_stateStartTime_1() const { return ___stateStartTime_1; }
	inline int64_t* get_address_of_stateStartTime_1() { return &___stateStartTime_1; }
	inline void set_stateStartTime_1(int64_t value)
	{
		___stateStartTime_1 = value;
	}

	inline static int32_t get_offset_of_eyeState_2() { return static_cast<int32_t>(offsetof(EyeBlinkMotion_t1361528585, ___eyeState_2)); }
	inline int32_t get_eyeState_2() const { return ___eyeState_2; }
	inline int32_t* get_address_of_eyeState_2() { return &___eyeState_2; }
	inline void set_eyeState_2(int32_t value)
	{
		___eyeState_2 = value;
	}

	inline static int32_t get_offset_of_closeIfZero_3() { return static_cast<int32_t>(offsetof(EyeBlinkMotion_t1361528585, ___closeIfZero_3)); }
	inline bool get_closeIfZero_3() const { return ___closeIfZero_3; }
	inline bool* get_address_of_closeIfZero_3() { return &___closeIfZero_3; }
	inline void set_closeIfZero_3(bool value)
	{
		___closeIfZero_3 = value;
	}

	inline static int32_t get_offset_of_eyeID_L_4() { return static_cast<int32_t>(offsetof(EyeBlinkMotion_t1361528585, ___eyeID_L_4)); }
	inline String_t* get_eyeID_L_4() const { return ___eyeID_L_4; }
	inline String_t** get_address_of_eyeID_L_4() { return &___eyeID_L_4; }
	inline void set_eyeID_L_4(String_t* value)
	{
		___eyeID_L_4 = value;
		Il2CppCodeGenWriteBarrier(&___eyeID_L_4, value);
	}

	inline static int32_t get_offset_of_eyeID_R_5() { return static_cast<int32_t>(offsetof(EyeBlinkMotion_t1361528585, ___eyeID_R_5)); }
	inline String_t* get_eyeID_R_5() const { return ___eyeID_R_5; }
	inline String_t** get_address_of_eyeID_R_5() { return &___eyeID_R_5; }
	inline void set_eyeID_R_5(String_t* value)
	{
		___eyeID_R_5 = value;
		Il2CppCodeGenWriteBarrier(&___eyeID_R_5, value);
	}

	inline static int32_t get_offset_of_blinkIntervalMsec_6() { return static_cast<int32_t>(offsetof(EyeBlinkMotion_t1361528585, ___blinkIntervalMsec_6)); }
	inline int32_t get_blinkIntervalMsec_6() const { return ___blinkIntervalMsec_6; }
	inline int32_t* get_address_of_blinkIntervalMsec_6() { return &___blinkIntervalMsec_6; }
	inline void set_blinkIntervalMsec_6(int32_t value)
	{
		___blinkIntervalMsec_6 = value;
	}

	inline static int32_t get_offset_of_closingMotionMsec_7() { return static_cast<int32_t>(offsetof(EyeBlinkMotion_t1361528585, ___closingMotionMsec_7)); }
	inline int32_t get_closingMotionMsec_7() const { return ___closingMotionMsec_7; }
	inline int32_t* get_address_of_closingMotionMsec_7() { return &___closingMotionMsec_7; }
	inline void set_closingMotionMsec_7(int32_t value)
	{
		___closingMotionMsec_7 = value;
	}

	inline static int32_t get_offset_of_closedMotionMsec_8() { return static_cast<int32_t>(offsetof(EyeBlinkMotion_t1361528585, ___closedMotionMsec_8)); }
	inline int32_t get_closedMotionMsec_8() const { return ___closedMotionMsec_8; }
	inline int32_t* get_address_of_closedMotionMsec_8() { return &___closedMotionMsec_8; }
	inline void set_closedMotionMsec_8(int32_t value)
	{
		___closedMotionMsec_8 = value;
	}

	inline static int32_t get_offset_of_openingMotionMsec_9() { return static_cast<int32_t>(offsetof(EyeBlinkMotion_t1361528585, ___openingMotionMsec_9)); }
	inline int32_t get_openingMotionMsec_9() const { return ___openingMotionMsec_9; }
	inline int32_t* get_address_of_openingMotionMsec_9() { return &___openingMotionMsec_9; }
	inline void set_openingMotionMsec_9(int32_t value)
	{
		___openingMotionMsec_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
