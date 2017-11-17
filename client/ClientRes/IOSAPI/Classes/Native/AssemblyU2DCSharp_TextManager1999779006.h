#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;
// UnityEngine.Events.UnityAction
struct UnityAction_t4025899511;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TextManager
struct  TextManager_t1999779006  : public Il2CppObject
{
public:

public:
};

struct TextManager_t1999779006_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.String> TextManager::mNameStringDict
	Dictionary_2_t3943999495 * ___mNameStringDict_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> TextManager::mUIStringDict
	Dictionary_2_t3943999495 * ___mUIStringDict_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> TextManager::mPropsStringDict
	Dictionary_2_t3943999495 * ___mPropsStringDict_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> TextManager::mSystemStringDict
	Dictionary_2_t3943999495 * ___mSystemStringDict_3;
	// UnityEngine.Events.UnityAction TextManager::m_callBack
	UnityAction_t4025899511 * ___m_callBack_4;
	// System.Int32 TextManager::totalNum
	int32_t ___totalNum_5;
	// System.Boolean TextManager::Inited
	bool ___Inited_6;

public:
	inline static int32_t get_offset_of_mNameStringDict_0() { return static_cast<int32_t>(offsetof(TextManager_t1999779006_StaticFields, ___mNameStringDict_0)); }
	inline Dictionary_2_t3943999495 * get_mNameStringDict_0() const { return ___mNameStringDict_0; }
	inline Dictionary_2_t3943999495 ** get_address_of_mNameStringDict_0() { return &___mNameStringDict_0; }
	inline void set_mNameStringDict_0(Dictionary_2_t3943999495 * value)
	{
		___mNameStringDict_0 = value;
		Il2CppCodeGenWriteBarrier(&___mNameStringDict_0, value);
	}

	inline static int32_t get_offset_of_mUIStringDict_1() { return static_cast<int32_t>(offsetof(TextManager_t1999779006_StaticFields, ___mUIStringDict_1)); }
	inline Dictionary_2_t3943999495 * get_mUIStringDict_1() const { return ___mUIStringDict_1; }
	inline Dictionary_2_t3943999495 ** get_address_of_mUIStringDict_1() { return &___mUIStringDict_1; }
	inline void set_mUIStringDict_1(Dictionary_2_t3943999495 * value)
	{
		___mUIStringDict_1 = value;
		Il2CppCodeGenWriteBarrier(&___mUIStringDict_1, value);
	}

	inline static int32_t get_offset_of_mPropsStringDict_2() { return static_cast<int32_t>(offsetof(TextManager_t1999779006_StaticFields, ___mPropsStringDict_2)); }
	inline Dictionary_2_t3943999495 * get_mPropsStringDict_2() const { return ___mPropsStringDict_2; }
	inline Dictionary_2_t3943999495 ** get_address_of_mPropsStringDict_2() { return &___mPropsStringDict_2; }
	inline void set_mPropsStringDict_2(Dictionary_2_t3943999495 * value)
	{
		___mPropsStringDict_2 = value;
		Il2CppCodeGenWriteBarrier(&___mPropsStringDict_2, value);
	}

	inline static int32_t get_offset_of_mSystemStringDict_3() { return static_cast<int32_t>(offsetof(TextManager_t1999779006_StaticFields, ___mSystemStringDict_3)); }
	inline Dictionary_2_t3943999495 * get_mSystemStringDict_3() const { return ___mSystemStringDict_3; }
	inline Dictionary_2_t3943999495 ** get_address_of_mSystemStringDict_3() { return &___mSystemStringDict_3; }
	inline void set_mSystemStringDict_3(Dictionary_2_t3943999495 * value)
	{
		___mSystemStringDict_3 = value;
		Il2CppCodeGenWriteBarrier(&___mSystemStringDict_3, value);
	}

	inline static int32_t get_offset_of_m_callBack_4() { return static_cast<int32_t>(offsetof(TextManager_t1999779006_StaticFields, ___m_callBack_4)); }
	inline UnityAction_t4025899511 * get_m_callBack_4() const { return ___m_callBack_4; }
	inline UnityAction_t4025899511 ** get_address_of_m_callBack_4() { return &___m_callBack_4; }
	inline void set_m_callBack_4(UnityAction_t4025899511 * value)
	{
		___m_callBack_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_callBack_4, value);
	}

	inline static int32_t get_offset_of_totalNum_5() { return static_cast<int32_t>(offsetof(TextManager_t1999779006_StaticFields, ___totalNum_5)); }
	inline int32_t get_totalNum_5() const { return ___totalNum_5; }
	inline int32_t* get_address_of_totalNum_5() { return &___totalNum_5; }
	inline void set_totalNum_5(int32_t value)
	{
		___totalNum_5 = value;
	}

	inline static int32_t get_offset_of_Inited_6() { return static_cast<int32_t>(offsetof(TextManager_t1999779006_StaticFields, ___Inited_6)); }
	inline bool get_Inited_6() const { return ___Inited_6; }
	inline bool* get_address_of_Inited_6() { return &___Inited_6; }
	inline void set_Inited_6(bool value)
	{
		___Inited_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
