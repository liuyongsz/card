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

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIForwardEvents
struct  UIForwardEvents_t1807908878  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject UIForwardEvents::target
	GameObject_t1756533147 * ___target_2;
	// System.Boolean UIForwardEvents::onHover
	bool ___onHover_3;
	// System.Boolean UIForwardEvents::onPress
	bool ___onPress_4;
	// System.Boolean UIForwardEvents::onClick
	bool ___onClick_5;
	// System.Boolean UIForwardEvents::onDoubleClick
	bool ___onDoubleClick_6;
	// System.Boolean UIForwardEvents::onSelect
	bool ___onSelect_7;
	// System.Boolean UIForwardEvents::onDrag
	bool ___onDrag_8;
	// System.Boolean UIForwardEvents::onDrop
	bool ___onDrop_9;
	// System.Boolean UIForwardEvents::onSubmit
	bool ___onSubmit_10;
	// System.Boolean UIForwardEvents::onScroll
	bool ___onScroll_11;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(UIForwardEvents_t1807908878, ___target_2)); }
	inline GameObject_t1756533147 * get_target_2() const { return ___target_2; }
	inline GameObject_t1756533147 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(GameObject_t1756533147 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier(&___target_2, value);
	}

	inline static int32_t get_offset_of_onHover_3() { return static_cast<int32_t>(offsetof(UIForwardEvents_t1807908878, ___onHover_3)); }
	inline bool get_onHover_3() const { return ___onHover_3; }
	inline bool* get_address_of_onHover_3() { return &___onHover_3; }
	inline void set_onHover_3(bool value)
	{
		___onHover_3 = value;
	}

	inline static int32_t get_offset_of_onPress_4() { return static_cast<int32_t>(offsetof(UIForwardEvents_t1807908878, ___onPress_4)); }
	inline bool get_onPress_4() const { return ___onPress_4; }
	inline bool* get_address_of_onPress_4() { return &___onPress_4; }
	inline void set_onPress_4(bool value)
	{
		___onPress_4 = value;
	}

	inline static int32_t get_offset_of_onClick_5() { return static_cast<int32_t>(offsetof(UIForwardEvents_t1807908878, ___onClick_5)); }
	inline bool get_onClick_5() const { return ___onClick_5; }
	inline bool* get_address_of_onClick_5() { return &___onClick_5; }
	inline void set_onClick_5(bool value)
	{
		___onClick_5 = value;
	}

	inline static int32_t get_offset_of_onDoubleClick_6() { return static_cast<int32_t>(offsetof(UIForwardEvents_t1807908878, ___onDoubleClick_6)); }
	inline bool get_onDoubleClick_6() const { return ___onDoubleClick_6; }
	inline bool* get_address_of_onDoubleClick_6() { return &___onDoubleClick_6; }
	inline void set_onDoubleClick_6(bool value)
	{
		___onDoubleClick_6 = value;
	}

	inline static int32_t get_offset_of_onSelect_7() { return static_cast<int32_t>(offsetof(UIForwardEvents_t1807908878, ___onSelect_7)); }
	inline bool get_onSelect_7() const { return ___onSelect_7; }
	inline bool* get_address_of_onSelect_7() { return &___onSelect_7; }
	inline void set_onSelect_7(bool value)
	{
		___onSelect_7 = value;
	}

	inline static int32_t get_offset_of_onDrag_8() { return static_cast<int32_t>(offsetof(UIForwardEvents_t1807908878, ___onDrag_8)); }
	inline bool get_onDrag_8() const { return ___onDrag_8; }
	inline bool* get_address_of_onDrag_8() { return &___onDrag_8; }
	inline void set_onDrag_8(bool value)
	{
		___onDrag_8 = value;
	}

	inline static int32_t get_offset_of_onDrop_9() { return static_cast<int32_t>(offsetof(UIForwardEvents_t1807908878, ___onDrop_9)); }
	inline bool get_onDrop_9() const { return ___onDrop_9; }
	inline bool* get_address_of_onDrop_9() { return &___onDrop_9; }
	inline void set_onDrop_9(bool value)
	{
		___onDrop_9 = value;
	}

	inline static int32_t get_offset_of_onSubmit_10() { return static_cast<int32_t>(offsetof(UIForwardEvents_t1807908878, ___onSubmit_10)); }
	inline bool get_onSubmit_10() const { return ___onSubmit_10; }
	inline bool* get_address_of_onSubmit_10() { return &___onSubmit_10; }
	inline void set_onSubmit_10(bool value)
	{
		___onSubmit_10 = value;
	}

	inline static int32_t get_offset_of_onScroll_11() { return static_cast<int32_t>(offsetof(UIForwardEvents_t1807908878, ___onScroll_11)); }
	inline bool get_onScroll_11() const { return ___onScroll_11; }
	inline bool* get_address_of_onScroll_11() { return &___onScroll_11; }
	inline void set_onScroll_11(bool value)
	{
		___onScroll_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
