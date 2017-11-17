#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AnimationClip>>
struct Dictionary_2_t137962551;
// System.String
struct String_t;
// AnimationProxy/AnimationInfo[]
struct AnimationInfoU5BU5D_t3655978878;
// AnimationProxy/AnimationInfo
struct AnimationInfo_t2163354247;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;
// UnityEngine.Animation
struct Animation_t2068071072;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AnimationClip>
struct Dictionary_2_t1130136916;
// AnimationProxy/CallLoadAsset
struct CallLoadAsset_t304683267;
// System.Collections.Generic.List`1<System.Object[]>
struct List_1_t2983755266;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AnimationProxy
struct  AnimationProxy_t128404306  : public MonoBehaviour_t1158329972
{
public:
	// AnimationProxy/AnimationInfo[] AnimationProxy::mAnimations
	AnimationInfoU5BU5D_t3655978878* ___mAnimations_5;
	// AnimationProxy/AnimationInfo AnimationProxy::mMainClip
	AnimationInfo_t2163354247 * ___mMainClip_6;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> AnimationProxy::mAnimationMaps
	Dictionary_2_t3943999495 * ___mAnimationMaps_7;
	// UnityEngine.Animation AnimationProxy::mAnimation
	Animation_t2068071072 * ___mAnimation_8;
	// System.Collections.Generic.List`1<System.String> AnimationProxy::mActionControlList
	List_1_t1398341365 * ___mActionControlList_9;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AnimationClip> AnimationProxy::mActionLoadedDict
	Dictionary_2_t1130136916 * ___mActionLoadedDict_10;
	// System.String AnimationProxy::lastAnimName
	String_t* ___lastAnimName_11;
	// System.Single AnimationProxy::lastAnimSpeed
	float ___lastAnimSpeed_12;
	// System.Int32 AnimationProxy::weaponType
	int32_t ___weaponType_13;
	// System.Collections.Generic.List`1<System.Object[]> AnimationProxy::mActionWaitQueue
	List_1_t2983755266 * ___mActionWaitQueue_15;

public:
	inline static int32_t get_offset_of_mAnimations_5() { return static_cast<int32_t>(offsetof(AnimationProxy_t128404306, ___mAnimations_5)); }
	inline AnimationInfoU5BU5D_t3655978878* get_mAnimations_5() const { return ___mAnimations_5; }
	inline AnimationInfoU5BU5D_t3655978878** get_address_of_mAnimations_5() { return &___mAnimations_5; }
	inline void set_mAnimations_5(AnimationInfoU5BU5D_t3655978878* value)
	{
		___mAnimations_5 = value;
		Il2CppCodeGenWriteBarrier(&___mAnimations_5, value);
	}

	inline static int32_t get_offset_of_mMainClip_6() { return static_cast<int32_t>(offsetof(AnimationProxy_t128404306, ___mMainClip_6)); }
	inline AnimationInfo_t2163354247 * get_mMainClip_6() const { return ___mMainClip_6; }
	inline AnimationInfo_t2163354247 ** get_address_of_mMainClip_6() { return &___mMainClip_6; }
	inline void set_mMainClip_6(AnimationInfo_t2163354247 * value)
	{
		___mMainClip_6 = value;
		Il2CppCodeGenWriteBarrier(&___mMainClip_6, value);
	}

	inline static int32_t get_offset_of_mAnimationMaps_7() { return static_cast<int32_t>(offsetof(AnimationProxy_t128404306, ___mAnimationMaps_7)); }
	inline Dictionary_2_t3943999495 * get_mAnimationMaps_7() const { return ___mAnimationMaps_7; }
	inline Dictionary_2_t3943999495 ** get_address_of_mAnimationMaps_7() { return &___mAnimationMaps_7; }
	inline void set_mAnimationMaps_7(Dictionary_2_t3943999495 * value)
	{
		___mAnimationMaps_7 = value;
		Il2CppCodeGenWriteBarrier(&___mAnimationMaps_7, value);
	}

	inline static int32_t get_offset_of_mAnimation_8() { return static_cast<int32_t>(offsetof(AnimationProxy_t128404306, ___mAnimation_8)); }
	inline Animation_t2068071072 * get_mAnimation_8() const { return ___mAnimation_8; }
	inline Animation_t2068071072 ** get_address_of_mAnimation_8() { return &___mAnimation_8; }
	inline void set_mAnimation_8(Animation_t2068071072 * value)
	{
		___mAnimation_8 = value;
		Il2CppCodeGenWriteBarrier(&___mAnimation_8, value);
	}

	inline static int32_t get_offset_of_mActionControlList_9() { return static_cast<int32_t>(offsetof(AnimationProxy_t128404306, ___mActionControlList_9)); }
	inline List_1_t1398341365 * get_mActionControlList_9() const { return ___mActionControlList_9; }
	inline List_1_t1398341365 ** get_address_of_mActionControlList_9() { return &___mActionControlList_9; }
	inline void set_mActionControlList_9(List_1_t1398341365 * value)
	{
		___mActionControlList_9 = value;
		Il2CppCodeGenWriteBarrier(&___mActionControlList_9, value);
	}

	inline static int32_t get_offset_of_mActionLoadedDict_10() { return static_cast<int32_t>(offsetof(AnimationProxy_t128404306, ___mActionLoadedDict_10)); }
	inline Dictionary_2_t1130136916 * get_mActionLoadedDict_10() const { return ___mActionLoadedDict_10; }
	inline Dictionary_2_t1130136916 ** get_address_of_mActionLoadedDict_10() { return &___mActionLoadedDict_10; }
	inline void set_mActionLoadedDict_10(Dictionary_2_t1130136916 * value)
	{
		___mActionLoadedDict_10 = value;
		Il2CppCodeGenWriteBarrier(&___mActionLoadedDict_10, value);
	}

	inline static int32_t get_offset_of_lastAnimName_11() { return static_cast<int32_t>(offsetof(AnimationProxy_t128404306, ___lastAnimName_11)); }
	inline String_t* get_lastAnimName_11() const { return ___lastAnimName_11; }
	inline String_t** get_address_of_lastAnimName_11() { return &___lastAnimName_11; }
	inline void set_lastAnimName_11(String_t* value)
	{
		___lastAnimName_11 = value;
		Il2CppCodeGenWriteBarrier(&___lastAnimName_11, value);
	}

	inline static int32_t get_offset_of_lastAnimSpeed_12() { return static_cast<int32_t>(offsetof(AnimationProxy_t128404306, ___lastAnimSpeed_12)); }
	inline float get_lastAnimSpeed_12() const { return ___lastAnimSpeed_12; }
	inline float* get_address_of_lastAnimSpeed_12() { return &___lastAnimSpeed_12; }
	inline void set_lastAnimSpeed_12(float value)
	{
		___lastAnimSpeed_12 = value;
	}

	inline static int32_t get_offset_of_weaponType_13() { return static_cast<int32_t>(offsetof(AnimationProxy_t128404306, ___weaponType_13)); }
	inline int32_t get_weaponType_13() const { return ___weaponType_13; }
	inline int32_t* get_address_of_weaponType_13() { return &___weaponType_13; }
	inline void set_weaponType_13(int32_t value)
	{
		___weaponType_13 = value;
	}

	inline static int32_t get_offset_of_mActionWaitQueue_15() { return static_cast<int32_t>(offsetof(AnimationProxy_t128404306, ___mActionWaitQueue_15)); }
	inline List_1_t2983755266 * get_mActionWaitQueue_15() const { return ___mActionWaitQueue_15; }
	inline List_1_t2983755266 ** get_address_of_mActionWaitQueue_15() { return &___mActionWaitQueue_15; }
	inline void set_mActionWaitQueue_15(List_1_t2983755266 * value)
	{
		___mActionWaitQueue_15 = value;
		Il2CppCodeGenWriteBarrier(&___mActionWaitQueue_15, value);
	}
};

struct AnimationProxy_t128404306_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AnimationClip>> AnimationProxy::CacheDic
	Dictionary_2_t137962551 * ___CacheDic_3;
	// System.String AnimationProxy::CacheDicModel
	String_t* ___CacheDicModel_4;
	// AnimationProxy/CallLoadAsset AnimationProxy::monLoadAsset
	CallLoadAsset_t304683267 * ___monLoadAsset_14;

public:
	inline static int32_t get_offset_of_CacheDic_3() { return static_cast<int32_t>(offsetof(AnimationProxy_t128404306_StaticFields, ___CacheDic_3)); }
	inline Dictionary_2_t137962551 * get_CacheDic_3() const { return ___CacheDic_3; }
	inline Dictionary_2_t137962551 ** get_address_of_CacheDic_3() { return &___CacheDic_3; }
	inline void set_CacheDic_3(Dictionary_2_t137962551 * value)
	{
		___CacheDic_3 = value;
		Il2CppCodeGenWriteBarrier(&___CacheDic_3, value);
	}

	inline static int32_t get_offset_of_CacheDicModel_4() { return static_cast<int32_t>(offsetof(AnimationProxy_t128404306_StaticFields, ___CacheDicModel_4)); }
	inline String_t* get_CacheDicModel_4() const { return ___CacheDicModel_4; }
	inline String_t** get_address_of_CacheDicModel_4() { return &___CacheDicModel_4; }
	inline void set_CacheDicModel_4(String_t* value)
	{
		___CacheDicModel_4 = value;
		Il2CppCodeGenWriteBarrier(&___CacheDicModel_4, value);
	}

	inline static int32_t get_offset_of_monLoadAsset_14() { return static_cast<int32_t>(offsetof(AnimationProxy_t128404306_StaticFields, ___monLoadAsset_14)); }
	inline CallLoadAsset_t304683267 * get_monLoadAsset_14() const { return ___monLoadAsset_14; }
	inline CallLoadAsset_t304683267 ** get_address_of_monLoadAsset_14() { return &___monLoadAsset_14; }
	inline void set_monLoadAsset_14(CallLoadAsset_t304683267 * value)
	{
		___monLoadAsset_14 = value;
		Il2CppCodeGenWriteBarrier(&___monLoadAsset_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
