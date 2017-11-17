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
// System.Object
struct Il2CppObject;
// System.Collections.Hashtable
struct Hashtable_t909839986;
// System.Object[]
struct ObjectU5BU5D_t3614634134;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.XPath.Tokenizer
struct  Tokenizer_t2998805977  : public Il2CppObject
{
public:
	// System.String Mono.Xml.XPath.Tokenizer::m_rgchInput
	String_t* ___m_rgchInput_0;
	// System.Int32 Mono.Xml.XPath.Tokenizer::m_ich
	int32_t ___m_ich_1;
	// System.Int32 Mono.Xml.XPath.Tokenizer::m_cch
	int32_t ___m_cch_2;
	// System.Int32 Mono.Xml.XPath.Tokenizer::m_iToken
	int32_t ___m_iToken_3;
	// System.Int32 Mono.Xml.XPath.Tokenizer::m_iTokenPrev
	int32_t ___m_iTokenPrev_4;
	// System.Object Mono.Xml.XPath.Tokenizer::m_objToken
	Il2CppObject * ___m_objToken_5;
	// System.Boolean Mono.Xml.XPath.Tokenizer::m_fPrevWasOperator
	bool ___m_fPrevWasOperator_6;
	// System.Boolean Mono.Xml.XPath.Tokenizer::m_fThisIsOperator
	bool ___m_fThisIsOperator_7;

public:
	inline static int32_t get_offset_of_m_rgchInput_0() { return static_cast<int32_t>(offsetof(Tokenizer_t2998805977, ___m_rgchInput_0)); }
	inline String_t* get_m_rgchInput_0() const { return ___m_rgchInput_0; }
	inline String_t** get_address_of_m_rgchInput_0() { return &___m_rgchInput_0; }
	inline void set_m_rgchInput_0(String_t* value)
	{
		___m_rgchInput_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_rgchInput_0, value);
	}

	inline static int32_t get_offset_of_m_ich_1() { return static_cast<int32_t>(offsetof(Tokenizer_t2998805977, ___m_ich_1)); }
	inline int32_t get_m_ich_1() const { return ___m_ich_1; }
	inline int32_t* get_address_of_m_ich_1() { return &___m_ich_1; }
	inline void set_m_ich_1(int32_t value)
	{
		___m_ich_1 = value;
	}

	inline static int32_t get_offset_of_m_cch_2() { return static_cast<int32_t>(offsetof(Tokenizer_t2998805977, ___m_cch_2)); }
	inline int32_t get_m_cch_2() const { return ___m_cch_2; }
	inline int32_t* get_address_of_m_cch_2() { return &___m_cch_2; }
	inline void set_m_cch_2(int32_t value)
	{
		___m_cch_2 = value;
	}

	inline static int32_t get_offset_of_m_iToken_3() { return static_cast<int32_t>(offsetof(Tokenizer_t2998805977, ___m_iToken_3)); }
	inline int32_t get_m_iToken_3() const { return ___m_iToken_3; }
	inline int32_t* get_address_of_m_iToken_3() { return &___m_iToken_3; }
	inline void set_m_iToken_3(int32_t value)
	{
		___m_iToken_3 = value;
	}

	inline static int32_t get_offset_of_m_iTokenPrev_4() { return static_cast<int32_t>(offsetof(Tokenizer_t2998805977, ___m_iTokenPrev_4)); }
	inline int32_t get_m_iTokenPrev_4() const { return ___m_iTokenPrev_4; }
	inline int32_t* get_address_of_m_iTokenPrev_4() { return &___m_iTokenPrev_4; }
	inline void set_m_iTokenPrev_4(int32_t value)
	{
		___m_iTokenPrev_4 = value;
	}

	inline static int32_t get_offset_of_m_objToken_5() { return static_cast<int32_t>(offsetof(Tokenizer_t2998805977, ___m_objToken_5)); }
	inline Il2CppObject * get_m_objToken_5() const { return ___m_objToken_5; }
	inline Il2CppObject ** get_address_of_m_objToken_5() { return &___m_objToken_5; }
	inline void set_m_objToken_5(Il2CppObject * value)
	{
		___m_objToken_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_objToken_5, value);
	}

	inline static int32_t get_offset_of_m_fPrevWasOperator_6() { return static_cast<int32_t>(offsetof(Tokenizer_t2998805977, ___m_fPrevWasOperator_6)); }
	inline bool get_m_fPrevWasOperator_6() const { return ___m_fPrevWasOperator_6; }
	inline bool* get_address_of_m_fPrevWasOperator_6() { return &___m_fPrevWasOperator_6; }
	inline void set_m_fPrevWasOperator_6(bool value)
	{
		___m_fPrevWasOperator_6 = value;
	}

	inline static int32_t get_offset_of_m_fThisIsOperator_7() { return static_cast<int32_t>(offsetof(Tokenizer_t2998805977, ___m_fThisIsOperator_7)); }
	inline bool get_m_fThisIsOperator_7() const { return ___m_fThisIsOperator_7; }
	inline bool* get_address_of_m_fThisIsOperator_7() { return &___m_fThisIsOperator_7; }
	inline void set_m_fThisIsOperator_7(bool value)
	{
		___m_fThisIsOperator_7 = value;
	}
};

struct Tokenizer_t2998805977_StaticFields
{
public:
	// System.Collections.Hashtable Mono.Xml.XPath.Tokenizer::s_mapTokens
	Hashtable_t909839986 * ___s_mapTokens_8;
	// System.Object[] Mono.Xml.XPath.Tokenizer::s_rgTokenMap
	ObjectU5BU5D_t3614634134* ___s_rgTokenMap_9;

public:
	inline static int32_t get_offset_of_s_mapTokens_8() { return static_cast<int32_t>(offsetof(Tokenizer_t2998805977_StaticFields, ___s_mapTokens_8)); }
	inline Hashtable_t909839986 * get_s_mapTokens_8() const { return ___s_mapTokens_8; }
	inline Hashtable_t909839986 ** get_address_of_s_mapTokens_8() { return &___s_mapTokens_8; }
	inline void set_s_mapTokens_8(Hashtable_t909839986 * value)
	{
		___s_mapTokens_8 = value;
		Il2CppCodeGenWriteBarrier(&___s_mapTokens_8, value);
	}

	inline static int32_t get_offset_of_s_rgTokenMap_9() { return static_cast<int32_t>(offsetof(Tokenizer_t2998805977_StaticFields, ___s_rgTokenMap_9)); }
	inline ObjectU5BU5D_t3614634134* get_s_rgTokenMap_9() const { return ___s_rgTokenMap_9; }
	inline ObjectU5BU5D_t3614634134** get_address_of_s_rgTokenMap_9() { return &___s_rgTokenMap_9; }
	inline void set_s_rgTokenMap_9(ObjectU5BU5D_t3614634134* value)
	{
		___s_rgTokenMap_9 = value;
		Il2CppCodeGenWriteBarrier(&___s_rgTokenMap_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
