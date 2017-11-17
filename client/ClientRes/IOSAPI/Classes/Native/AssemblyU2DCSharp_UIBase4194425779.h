#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object[]
struct ObjectU5BU5D_t3614634134;
// ItfBase
struct ItfBase_t1931363608;
// PanelCompleteHandler
struct PanelCompleteHandler_t2826171645;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIBase
struct  UIBase_t4194425779  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean UIBase::ismaxDepth
	bool ___ismaxDepth_2;
	// System.Object[] UIBase::m_data
	ObjectU5BU5D_t3614634134* ___m_data_3;
	// ItfBase UIBase::m_luacode
	Il2CppObject * ___m_luacode_4;
	// PanelCompleteHandler UIBase::m_handler
	PanelCompleteHandler_t2826171645 * ___m_handler_5;
	// System.Boolean UIBase::m_nocshape
	bool ___m_nocshape_6;
	// System.Int32 UIBase::m_setDepth
	int32_t ___m_setDepth_7;

public:
	inline static int32_t get_offset_of_ismaxDepth_2() { return static_cast<int32_t>(offsetof(UIBase_t4194425779, ___ismaxDepth_2)); }
	inline bool get_ismaxDepth_2() const { return ___ismaxDepth_2; }
	inline bool* get_address_of_ismaxDepth_2() { return &___ismaxDepth_2; }
	inline void set_ismaxDepth_2(bool value)
	{
		___ismaxDepth_2 = value;
	}

	inline static int32_t get_offset_of_m_data_3() { return static_cast<int32_t>(offsetof(UIBase_t4194425779, ___m_data_3)); }
	inline ObjectU5BU5D_t3614634134* get_m_data_3() const { return ___m_data_3; }
	inline ObjectU5BU5D_t3614634134** get_address_of_m_data_3() { return &___m_data_3; }
	inline void set_m_data_3(ObjectU5BU5D_t3614634134* value)
	{
		___m_data_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_data_3, value);
	}

	inline static int32_t get_offset_of_m_luacode_4() { return static_cast<int32_t>(offsetof(UIBase_t4194425779, ___m_luacode_4)); }
	inline Il2CppObject * get_m_luacode_4() const { return ___m_luacode_4; }
	inline Il2CppObject ** get_address_of_m_luacode_4() { return &___m_luacode_4; }
	inline void set_m_luacode_4(Il2CppObject * value)
	{
		___m_luacode_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_luacode_4, value);
	}

	inline static int32_t get_offset_of_m_handler_5() { return static_cast<int32_t>(offsetof(UIBase_t4194425779, ___m_handler_5)); }
	inline PanelCompleteHandler_t2826171645 * get_m_handler_5() const { return ___m_handler_5; }
	inline PanelCompleteHandler_t2826171645 ** get_address_of_m_handler_5() { return &___m_handler_5; }
	inline void set_m_handler_5(PanelCompleteHandler_t2826171645 * value)
	{
		___m_handler_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_handler_5, value);
	}

	inline static int32_t get_offset_of_m_nocshape_6() { return static_cast<int32_t>(offsetof(UIBase_t4194425779, ___m_nocshape_6)); }
	inline bool get_m_nocshape_6() const { return ___m_nocshape_6; }
	inline bool* get_address_of_m_nocshape_6() { return &___m_nocshape_6; }
	inline void set_m_nocshape_6(bool value)
	{
		___m_nocshape_6 = value;
	}

	inline static int32_t get_offset_of_m_setDepth_7() { return static_cast<int32_t>(offsetof(UIBase_t4194425779, ___m_setDepth_7)); }
	inline int32_t get_m_setDepth_7() const { return ___m_setDepth_7; }
	inline int32_t* get_address_of_m_setDepth_7() { return &___m_setDepth_7; }
	inline void set_m_setDepth_7(int32_t value)
	{
		___m_setDepth_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
