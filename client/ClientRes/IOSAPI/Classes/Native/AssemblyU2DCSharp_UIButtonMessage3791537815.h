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
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_UIButtonMessage_Trigger610760934.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIButtonMessage
struct  UIButtonMessage_t3791537815  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject UIButtonMessage::target
	GameObject_t1756533147 * ___target_2;
	// System.String UIButtonMessage::functionName
	String_t* ___functionName_3;
	// UIButtonMessage/Trigger UIButtonMessage::trigger
	int32_t ___trigger_4;
	// System.Boolean UIButtonMessage::includeChildren
	bool ___includeChildren_5;
	// System.Boolean UIButtonMessage::mStarted
	bool ___mStarted_6;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(UIButtonMessage_t3791537815, ___target_2)); }
	inline GameObject_t1756533147 * get_target_2() const { return ___target_2; }
	inline GameObject_t1756533147 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(GameObject_t1756533147 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier(&___target_2, value);
	}

	inline static int32_t get_offset_of_functionName_3() { return static_cast<int32_t>(offsetof(UIButtonMessage_t3791537815, ___functionName_3)); }
	inline String_t* get_functionName_3() const { return ___functionName_3; }
	inline String_t** get_address_of_functionName_3() { return &___functionName_3; }
	inline void set_functionName_3(String_t* value)
	{
		___functionName_3 = value;
		Il2CppCodeGenWriteBarrier(&___functionName_3, value);
	}

	inline static int32_t get_offset_of_trigger_4() { return static_cast<int32_t>(offsetof(UIButtonMessage_t3791537815, ___trigger_4)); }
	inline int32_t get_trigger_4() const { return ___trigger_4; }
	inline int32_t* get_address_of_trigger_4() { return &___trigger_4; }
	inline void set_trigger_4(int32_t value)
	{
		___trigger_4 = value;
	}

	inline static int32_t get_offset_of_includeChildren_5() { return static_cast<int32_t>(offsetof(UIButtonMessage_t3791537815, ___includeChildren_5)); }
	inline bool get_includeChildren_5() const { return ___includeChildren_5; }
	inline bool* get_address_of_includeChildren_5() { return &___includeChildren_5; }
	inline void set_includeChildren_5(bool value)
	{
		___includeChildren_5 = value;
	}

	inline static int32_t get_offset_of_mStarted_6() { return static_cast<int32_t>(offsetof(UIButtonMessage_t3791537815, ___mStarted_6)); }
	inline bool get_mStarted_6() const { return ___mStarted_6; }
	inline bool* get_address_of_mStarted_6() { return &___mStarted_6; }
	inline void set_mStarted_6(bool value)
	{
		___mStarted_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
