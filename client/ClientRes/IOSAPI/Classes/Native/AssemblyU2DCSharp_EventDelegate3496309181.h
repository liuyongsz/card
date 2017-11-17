#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t1158329972;
// System.String
struct String_t;
// EventDelegate/Callback
struct Callback_t2100910411;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EventDelegate
struct  EventDelegate_t3496309181  : public Il2CppObject
{
public:
	// UnityEngine.MonoBehaviour EventDelegate::mTarget
	MonoBehaviour_t1158329972 * ___mTarget_0;
	// System.String EventDelegate::mMethodName
	String_t* ___mMethodName_1;
	// System.Boolean EventDelegate::oneShot
	bool ___oneShot_2;
	// EventDelegate/Callback EventDelegate::mCachedCallback
	Callback_t2100910411 * ___mCachedCallback_3;
	// System.Boolean EventDelegate::mRawDelegate
	bool ___mRawDelegate_4;

public:
	inline static int32_t get_offset_of_mTarget_0() { return static_cast<int32_t>(offsetof(EventDelegate_t3496309181, ___mTarget_0)); }
	inline MonoBehaviour_t1158329972 * get_mTarget_0() const { return ___mTarget_0; }
	inline MonoBehaviour_t1158329972 ** get_address_of_mTarget_0() { return &___mTarget_0; }
	inline void set_mTarget_0(MonoBehaviour_t1158329972 * value)
	{
		___mTarget_0 = value;
		Il2CppCodeGenWriteBarrier(&___mTarget_0, value);
	}

	inline static int32_t get_offset_of_mMethodName_1() { return static_cast<int32_t>(offsetof(EventDelegate_t3496309181, ___mMethodName_1)); }
	inline String_t* get_mMethodName_1() const { return ___mMethodName_1; }
	inline String_t** get_address_of_mMethodName_1() { return &___mMethodName_1; }
	inline void set_mMethodName_1(String_t* value)
	{
		___mMethodName_1 = value;
		Il2CppCodeGenWriteBarrier(&___mMethodName_1, value);
	}

	inline static int32_t get_offset_of_oneShot_2() { return static_cast<int32_t>(offsetof(EventDelegate_t3496309181, ___oneShot_2)); }
	inline bool get_oneShot_2() const { return ___oneShot_2; }
	inline bool* get_address_of_oneShot_2() { return &___oneShot_2; }
	inline void set_oneShot_2(bool value)
	{
		___oneShot_2 = value;
	}

	inline static int32_t get_offset_of_mCachedCallback_3() { return static_cast<int32_t>(offsetof(EventDelegate_t3496309181, ___mCachedCallback_3)); }
	inline Callback_t2100910411 * get_mCachedCallback_3() const { return ___mCachedCallback_3; }
	inline Callback_t2100910411 ** get_address_of_mCachedCallback_3() { return &___mCachedCallback_3; }
	inline void set_mCachedCallback_3(Callback_t2100910411 * value)
	{
		___mCachedCallback_3 = value;
		Il2CppCodeGenWriteBarrier(&___mCachedCallback_3, value);
	}

	inline static int32_t get_offset_of_mRawDelegate_4() { return static_cast<int32_t>(offsetof(EventDelegate_t3496309181, ___mRawDelegate_4)); }
	inline bool get_mRawDelegate_4() const { return ___mRawDelegate_4; }
	inline bool* get_address_of_mRawDelegate_4() { return &___mRawDelegate_4; }
	inline void set_mRawDelegate_4(bool value)
	{
		___mRawDelegate_4 = value;
	}
};

struct EventDelegate_t3496309181_StaticFields
{
public:
	// System.Int32 EventDelegate::s_Hash
	int32_t ___s_Hash_5;

public:
	inline static int32_t get_offset_of_s_Hash_5() { return static_cast<int32_t>(offsetof(EventDelegate_t3496309181_StaticFields, ___s_Hash_5)); }
	inline int32_t get_s_Hash_5() const { return ___s_Hash_5; }
	inline int32_t* get_address_of_s_Hash_5() { return &___s_Hash_5; }
	inline void set_s_Hash_5(int32_t value)
	{
		___s_Hash_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
