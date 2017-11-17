#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;
// UIEventListener/VoidDelegate
struct VoidDelegate_t3787195170;
// UIEventListener/BoolDelegate
struct BoolDelegate_t2797443340;
// UIEventListener/FloatDelegate
struct FloatDelegate_t1603297664;
// UIEventListener/VectorDelegate
struct VectorDelegate_t3730950941;
// UIEventListener/ObjectDelegate
struct ObjectDelegate_t2995362177;
// UIEventListener/KeyCodeDelegate
struct KeyCodeDelegate_t3739953428;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIEventListener
struct  UIEventListener_t3982099366  : public MonoBehaviour_t1158329972
{
public:
	// System.Object UIEventListener::parameter
	Il2CppObject * ___parameter_2;
	// UIEventListener/VoidDelegate UIEventListener::onSubmit
	VoidDelegate_t3787195170 * ___onSubmit_3;
	// UIEventListener/VoidDelegate UIEventListener::onClick
	VoidDelegate_t3787195170 * ___onClick_4;
	// UIEventListener/VoidDelegate UIEventListener::onDoubleClick
	VoidDelegate_t3787195170 * ___onDoubleClick_5;
	// UIEventListener/BoolDelegate UIEventListener::onHover
	BoolDelegate_t2797443340 * ___onHover_6;
	// UIEventListener/BoolDelegate UIEventListener::onPress
	BoolDelegate_t2797443340 * ___onPress_7;
	// UIEventListener/BoolDelegate UIEventListener::onSelect
	BoolDelegate_t2797443340 * ___onSelect_8;
	// UIEventListener/FloatDelegate UIEventListener::onScroll
	FloatDelegate_t1603297664 * ___onScroll_9;
	// UIEventListener/VectorDelegate UIEventListener::onDrag
	VectorDelegate_t3730950941 * ___onDrag_10;
	// UIEventListener/ObjectDelegate UIEventListener::onDrop
	ObjectDelegate_t2995362177 * ___onDrop_11;
	// UIEventListener/KeyCodeDelegate UIEventListener::onKey
	KeyCodeDelegate_t3739953428 * ___onKey_12;

public:
	inline static int32_t get_offset_of_parameter_2() { return static_cast<int32_t>(offsetof(UIEventListener_t3982099366, ___parameter_2)); }
	inline Il2CppObject * get_parameter_2() const { return ___parameter_2; }
	inline Il2CppObject ** get_address_of_parameter_2() { return &___parameter_2; }
	inline void set_parameter_2(Il2CppObject * value)
	{
		___parameter_2 = value;
		Il2CppCodeGenWriteBarrier(&___parameter_2, value);
	}

	inline static int32_t get_offset_of_onSubmit_3() { return static_cast<int32_t>(offsetof(UIEventListener_t3982099366, ___onSubmit_3)); }
	inline VoidDelegate_t3787195170 * get_onSubmit_3() const { return ___onSubmit_3; }
	inline VoidDelegate_t3787195170 ** get_address_of_onSubmit_3() { return &___onSubmit_3; }
	inline void set_onSubmit_3(VoidDelegate_t3787195170 * value)
	{
		___onSubmit_3 = value;
		Il2CppCodeGenWriteBarrier(&___onSubmit_3, value);
	}

	inline static int32_t get_offset_of_onClick_4() { return static_cast<int32_t>(offsetof(UIEventListener_t3982099366, ___onClick_4)); }
	inline VoidDelegate_t3787195170 * get_onClick_4() const { return ___onClick_4; }
	inline VoidDelegate_t3787195170 ** get_address_of_onClick_4() { return &___onClick_4; }
	inline void set_onClick_4(VoidDelegate_t3787195170 * value)
	{
		___onClick_4 = value;
		Il2CppCodeGenWriteBarrier(&___onClick_4, value);
	}

	inline static int32_t get_offset_of_onDoubleClick_5() { return static_cast<int32_t>(offsetof(UIEventListener_t3982099366, ___onDoubleClick_5)); }
	inline VoidDelegate_t3787195170 * get_onDoubleClick_5() const { return ___onDoubleClick_5; }
	inline VoidDelegate_t3787195170 ** get_address_of_onDoubleClick_5() { return &___onDoubleClick_5; }
	inline void set_onDoubleClick_5(VoidDelegate_t3787195170 * value)
	{
		___onDoubleClick_5 = value;
		Il2CppCodeGenWriteBarrier(&___onDoubleClick_5, value);
	}

	inline static int32_t get_offset_of_onHover_6() { return static_cast<int32_t>(offsetof(UIEventListener_t3982099366, ___onHover_6)); }
	inline BoolDelegate_t2797443340 * get_onHover_6() const { return ___onHover_6; }
	inline BoolDelegate_t2797443340 ** get_address_of_onHover_6() { return &___onHover_6; }
	inline void set_onHover_6(BoolDelegate_t2797443340 * value)
	{
		___onHover_6 = value;
		Il2CppCodeGenWriteBarrier(&___onHover_6, value);
	}

	inline static int32_t get_offset_of_onPress_7() { return static_cast<int32_t>(offsetof(UIEventListener_t3982099366, ___onPress_7)); }
	inline BoolDelegate_t2797443340 * get_onPress_7() const { return ___onPress_7; }
	inline BoolDelegate_t2797443340 ** get_address_of_onPress_7() { return &___onPress_7; }
	inline void set_onPress_7(BoolDelegate_t2797443340 * value)
	{
		___onPress_7 = value;
		Il2CppCodeGenWriteBarrier(&___onPress_7, value);
	}

	inline static int32_t get_offset_of_onSelect_8() { return static_cast<int32_t>(offsetof(UIEventListener_t3982099366, ___onSelect_8)); }
	inline BoolDelegate_t2797443340 * get_onSelect_8() const { return ___onSelect_8; }
	inline BoolDelegate_t2797443340 ** get_address_of_onSelect_8() { return &___onSelect_8; }
	inline void set_onSelect_8(BoolDelegate_t2797443340 * value)
	{
		___onSelect_8 = value;
		Il2CppCodeGenWriteBarrier(&___onSelect_8, value);
	}

	inline static int32_t get_offset_of_onScroll_9() { return static_cast<int32_t>(offsetof(UIEventListener_t3982099366, ___onScroll_9)); }
	inline FloatDelegate_t1603297664 * get_onScroll_9() const { return ___onScroll_9; }
	inline FloatDelegate_t1603297664 ** get_address_of_onScroll_9() { return &___onScroll_9; }
	inline void set_onScroll_9(FloatDelegate_t1603297664 * value)
	{
		___onScroll_9 = value;
		Il2CppCodeGenWriteBarrier(&___onScroll_9, value);
	}

	inline static int32_t get_offset_of_onDrag_10() { return static_cast<int32_t>(offsetof(UIEventListener_t3982099366, ___onDrag_10)); }
	inline VectorDelegate_t3730950941 * get_onDrag_10() const { return ___onDrag_10; }
	inline VectorDelegate_t3730950941 ** get_address_of_onDrag_10() { return &___onDrag_10; }
	inline void set_onDrag_10(VectorDelegate_t3730950941 * value)
	{
		___onDrag_10 = value;
		Il2CppCodeGenWriteBarrier(&___onDrag_10, value);
	}

	inline static int32_t get_offset_of_onDrop_11() { return static_cast<int32_t>(offsetof(UIEventListener_t3982099366, ___onDrop_11)); }
	inline ObjectDelegate_t2995362177 * get_onDrop_11() const { return ___onDrop_11; }
	inline ObjectDelegate_t2995362177 ** get_address_of_onDrop_11() { return &___onDrop_11; }
	inline void set_onDrop_11(ObjectDelegate_t2995362177 * value)
	{
		___onDrop_11 = value;
		Il2CppCodeGenWriteBarrier(&___onDrop_11, value);
	}

	inline static int32_t get_offset_of_onKey_12() { return static_cast<int32_t>(offsetof(UIEventListener_t3982099366, ___onKey_12)); }
	inline KeyCodeDelegate_t3739953428 * get_onKey_12() const { return ___onKey_12; }
	inline KeyCodeDelegate_t3739953428 ** get_address_of_onKey_12() { return &___onKey_12; }
	inline void set_onKey_12(KeyCodeDelegate_t3739953428 * value)
	{
		___onKey_12 = value;
		Il2CppCodeGenWriteBarrier(&___onKey_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
