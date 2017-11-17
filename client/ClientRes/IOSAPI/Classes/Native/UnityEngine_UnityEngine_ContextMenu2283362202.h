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

#include "mscorlib_System_Attribute542643598.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ContextMenu
struct  ContextMenu_t2283362202  : public Attribute_t542643598
{
public:
	// System.String UnityEngine.ContextMenu::m_ItemName
	String_t* ___m_ItemName_0;

public:
	inline static int32_t get_offset_of_m_ItemName_0() { return static_cast<int32_t>(offsetof(ContextMenu_t2283362202, ___m_ItemName_0)); }
	inline String_t* get_m_ItemName_0() const { return ___m_ItemName_0; }
	inline String_t** get_address_of_m_ItemName_0() { return &___m_ItemName_0; }
	inline void set_m_ItemName_0(String_t* value)
	{
		___m_ItemName_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_ItemName_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
