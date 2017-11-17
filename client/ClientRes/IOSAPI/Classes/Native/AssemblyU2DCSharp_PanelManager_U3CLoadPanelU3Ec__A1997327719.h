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
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// UIBase
struct UIBase_t4194425779;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PanelManager/<LoadPanel>c__AnonStorey1B`1<System.Object>
struct  U3CLoadPanelU3Ec__AnonStorey1B_1_t1997327719  : public Il2CppObject
{
public:
	// System.String PanelManager/<LoadPanel>c__AnonStorey1B`1::uiName
	String_t* ___uiName_0;
	// System.Boolean PanelManager/<LoadPanel>c__AnonStorey1B`1::ismaxDepth
	bool ___ismaxDepth_1;
	// System.Object[] PanelManager/<LoadPanel>c__AnonStorey1B`1::args
	ObjectU5BU5D_t3614634134* ___args_2;
	// UIBase PanelManager/<LoadPanel>c__AnonStorey1B`1::ui
	UIBase_t4194425779 * ___ui_3;

public:
	inline static int32_t get_offset_of_uiName_0() { return static_cast<int32_t>(offsetof(U3CLoadPanelU3Ec__AnonStorey1B_1_t1997327719, ___uiName_0)); }
	inline String_t* get_uiName_0() const { return ___uiName_0; }
	inline String_t** get_address_of_uiName_0() { return &___uiName_0; }
	inline void set_uiName_0(String_t* value)
	{
		___uiName_0 = value;
		Il2CppCodeGenWriteBarrier(&___uiName_0, value);
	}

	inline static int32_t get_offset_of_ismaxDepth_1() { return static_cast<int32_t>(offsetof(U3CLoadPanelU3Ec__AnonStorey1B_1_t1997327719, ___ismaxDepth_1)); }
	inline bool get_ismaxDepth_1() const { return ___ismaxDepth_1; }
	inline bool* get_address_of_ismaxDepth_1() { return &___ismaxDepth_1; }
	inline void set_ismaxDepth_1(bool value)
	{
		___ismaxDepth_1 = value;
	}

	inline static int32_t get_offset_of_args_2() { return static_cast<int32_t>(offsetof(U3CLoadPanelU3Ec__AnonStorey1B_1_t1997327719, ___args_2)); }
	inline ObjectU5BU5D_t3614634134* get_args_2() const { return ___args_2; }
	inline ObjectU5BU5D_t3614634134** get_address_of_args_2() { return &___args_2; }
	inline void set_args_2(ObjectU5BU5D_t3614634134* value)
	{
		___args_2 = value;
		Il2CppCodeGenWriteBarrier(&___args_2, value);
	}

	inline static int32_t get_offset_of_ui_3() { return static_cast<int32_t>(offsetof(U3CLoadPanelU3Ec__AnonStorey1B_1_t1997327719, ___ui_3)); }
	inline UIBase_t4194425779 * get_ui_3() const { return ___ui_3; }
	inline UIBase_t4194425779 ** get_address_of_ui_3() { return &___ui_3; }
	inline void set_ui_3(UIBase_t4194425779 * value)
	{
		___ui_3 = value;
		Il2CppCodeGenWriteBarrier(&___ui_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
