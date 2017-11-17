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
// UnityEngine.BoxCollider
struct BoxCollider_t22920061;
// NetProtocal.RoomInfoMsg
struct RoomInfoMsg_t1078239938;

#include "AssemblyU2DCSharp_UIMediator_1_gen2213256638.h"
#include "AssemblyU2DCSharp_E_VSPanelSide3037800852.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VSPanelMediator
struct  VSPanelMediator_t2894334302  : public UIMediator_1_t2213256638
{
public:
	// System.String VSPanelMediator::mKeyLoadingPerKey
	String_t* ___mKeyLoadingPerKey_18;
	// UnityEngine.BoxCollider VSPanelMediator::mBox
	BoxCollider_t22920061 * ___mBox_19;
	// System.Single VSPanelMediator::timerCnt
	float ___timerCnt_20;
	// System.Single VSPanelMediator::mToValueA
	float ___mToValueA_21;
	// System.Single VSPanelMediator::mToValueB
	float ___mToValueB_22;
	// System.Boolean VSPanelMediator::mIsTest
	bool ___mIsTest_23;
	// System.Boolean VSPanelMediator::mOtherLoadingComplete
	bool ___mOtherLoadingComplete_24;
	// System.Boolean VSPanelMediator::mLoadingMapComplete
	bool ___mLoadingMapComplete_25;
	// System.Boolean VSPanelMediator::mStopSendLodingPer
	bool ___mStopSendLodingPer_26;
	// NetProtocal.RoomInfoMsg VSPanelMediator::msg
	RoomInfoMsg_t1078239938 * ___msg_27;

public:
	inline static int32_t get_offset_of_mKeyLoadingPerKey_18() { return static_cast<int32_t>(offsetof(VSPanelMediator_t2894334302, ___mKeyLoadingPerKey_18)); }
	inline String_t* get_mKeyLoadingPerKey_18() const { return ___mKeyLoadingPerKey_18; }
	inline String_t** get_address_of_mKeyLoadingPerKey_18() { return &___mKeyLoadingPerKey_18; }
	inline void set_mKeyLoadingPerKey_18(String_t* value)
	{
		___mKeyLoadingPerKey_18 = value;
		Il2CppCodeGenWriteBarrier(&___mKeyLoadingPerKey_18, value);
	}

	inline static int32_t get_offset_of_mBox_19() { return static_cast<int32_t>(offsetof(VSPanelMediator_t2894334302, ___mBox_19)); }
	inline BoxCollider_t22920061 * get_mBox_19() const { return ___mBox_19; }
	inline BoxCollider_t22920061 ** get_address_of_mBox_19() { return &___mBox_19; }
	inline void set_mBox_19(BoxCollider_t22920061 * value)
	{
		___mBox_19 = value;
		Il2CppCodeGenWriteBarrier(&___mBox_19, value);
	}

	inline static int32_t get_offset_of_timerCnt_20() { return static_cast<int32_t>(offsetof(VSPanelMediator_t2894334302, ___timerCnt_20)); }
	inline float get_timerCnt_20() const { return ___timerCnt_20; }
	inline float* get_address_of_timerCnt_20() { return &___timerCnt_20; }
	inline void set_timerCnt_20(float value)
	{
		___timerCnt_20 = value;
	}

	inline static int32_t get_offset_of_mToValueA_21() { return static_cast<int32_t>(offsetof(VSPanelMediator_t2894334302, ___mToValueA_21)); }
	inline float get_mToValueA_21() const { return ___mToValueA_21; }
	inline float* get_address_of_mToValueA_21() { return &___mToValueA_21; }
	inline void set_mToValueA_21(float value)
	{
		___mToValueA_21 = value;
	}

	inline static int32_t get_offset_of_mToValueB_22() { return static_cast<int32_t>(offsetof(VSPanelMediator_t2894334302, ___mToValueB_22)); }
	inline float get_mToValueB_22() const { return ___mToValueB_22; }
	inline float* get_address_of_mToValueB_22() { return &___mToValueB_22; }
	inline void set_mToValueB_22(float value)
	{
		___mToValueB_22 = value;
	}

	inline static int32_t get_offset_of_mIsTest_23() { return static_cast<int32_t>(offsetof(VSPanelMediator_t2894334302, ___mIsTest_23)); }
	inline bool get_mIsTest_23() const { return ___mIsTest_23; }
	inline bool* get_address_of_mIsTest_23() { return &___mIsTest_23; }
	inline void set_mIsTest_23(bool value)
	{
		___mIsTest_23 = value;
	}

	inline static int32_t get_offset_of_mOtherLoadingComplete_24() { return static_cast<int32_t>(offsetof(VSPanelMediator_t2894334302, ___mOtherLoadingComplete_24)); }
	inline bool get_mOtherLoadingComplete_24() const { return ___mOtherLoadingComplete_24; }
	inline bool* get_address_of_mOtherLoadingComplete_24() { return &___mOtherLoadingComplete_24; }
	inline void set_mOtherLoadingComplete_24(bool value)
	{
		___mOtherLoadingComplete_24 = value;
	}

	inline static int32_t get_offset_of_mLoadingMapComplete_25() { return static_cast<int32_t>(offsetof(VSPanelMediator_t2894334302, ___mLoadingMapComplete_25)); }
	inline bool get_mLoadingMapComplete_25() const { return ___mLoadingMapComplete_25; }
	inline bool* get_address_of_mLoadingMapComplete_25() { return &___mLoadingMapComplete_25; }
	inline void set_mLoadingMapComplete_25(bool value)
	{
		___mLoadingMapComplete_25 = value;
	}

	inline static int32_t get_offset_of_mStopSendLodingPer_26() { return static_cast<int32_t>(offsetof(VSPanelMediator_t2894334302, ___mStopSendLodingPer_26)); }
	inline bool get_mStopSendLodingPer_26() const { return ___mStopSendLodingPer_26; }
	inline bool* get_address_of_mStopSendLodingPer_26() { return &___mStopSendLodingPer_26; }
	inline void set_mStopSendLodingPer_26(bool value)
	{
		___mStopSendLodingPer_26 = value;
	}

	inline static int32_t get_offset_of_msg_27() { return static_cast<int32_t>(offsetof(VSPanelMediator_t2894334302, ___msg_27)); }
	inline RoomInfoMsg_t1078239938 * get_msg_27() const { return ___msg_27; }
	inline RoomInfoMsg_t1078239938 ** get_address_of_msg_27() { return &___msg_27; }
	inline void set_msg_27(RoomInfoMsg_t1078239938 * value)
	{
		___msg_27 = value;
		Il2CppCodeGenWriteBarrier(&___msg_27, value);
	}
};

struct VSPanelMediator_t2894334302_StaticFields
{
public:
	// E_VSPanelSide VSPanelMediator::IsTeamA
	int32_t ___IsTeamA_28;

public:
	inline static int32_t get_offset_of_IsTeamA_28() { return static_cast<int32_t>(offsetof(VSPanelMediator_t2894334302_StaticFields, ___IsTeamA_28)); }
	inline int32_t get_IsTeamA_28() const { return ___IsTeamA_28; }
	inline int32_t* get_address_of_IsTeamA_28() { return &___IsTeamA_28; }
	inline void set_IsTeamA_28(int32_t value)
	{
		___IsTeamA_28 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
