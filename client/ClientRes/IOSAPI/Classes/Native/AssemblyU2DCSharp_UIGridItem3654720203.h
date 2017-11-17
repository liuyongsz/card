#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.MonoBehaviour[]
struct MonoBehaviourU5BU5D_t3035069757;
// UnityEngine.Transform
struct Transform_t3275118058;
// System.Object
struct Il2CppObject;
// UIGrid
struct UIGrid_t2420180906;
// UIGridItem/VoidDelegate
struct VoidDelegate_t3415302975;
// UIGridItem/BoolDelegate
struct BoolDelegate_t1329225677;
// UIGridItem/FloatDelegate
struct FloatDelegate_t530526327;
// UIGridItem/VectorDelegate
struct VectorDelegate_t3541586702;
// UIGridItem/ObjectDelegate
struct ObjectDelegate_t111507530;
// UIGridItem/KeyCodeDelegate
struct KeyCodeDelegate_t3358343497;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIGridItem
struct  UIGridItem_t3654720203  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.MonoBehaviour[] UIGridItem::mScripts
	MonoBehaviourU5BU5D_t3035069757* ___mScripts_2;
	// UnityEngine.Transform UIGridItem::SelectedItem
	Transform_t3275118058 * ___SelectedItem_3;
	// System.Boolean UIGridItem::Locked
	bool ___Locked_4;
	// System.Object UIGridItem::oData
	Il2CppObject * ___oData_5;
	// System.Int32 UIGridItem::miCurIndex
	int32_t ___miCurIndex_6;
	// UIGrid UIGridItem::Owner
	UIGrid_t2420180906 * ___Owner_7;
	// System.Boolean UIGridItem::m_selected
	bool ___m_selected_8;
	// System.Object UIGridItem::parameter
	Il2CppObject * ___parameter_9;
	// UIGridItem/VoidDelegate UIGridItem::onSubmit
	VoidDelegate_t3415302975 * ___onSubmit_10;
	// UIGridItem/VoidDelegate UIGridItem::onClick
	VoidDelegate_t3415302975 * ___onClick_11;
	// UIGridItem/VoidDelegate UIGridItem::onDoubleClick
	VoidDelegate_t3415302975 * ___onDoubleClick_12;
	// UIGridItem/BoolDelegate UIGridItem::onHover
	BoolDelegate_t1329225677 * ___onHover_13;
	// UIGridItem/BoolDelegate UIGridItem::onPress
	BoolDelegate_t1329225677 * ___onPress_14;
	// UIGridItem/BoolDelegate UIGridItem::onSelect
	BoolDelegate_t1329225677 * ___onSelect_15;
	// UIGridItem/FloatDelegate UIGridItem::onScroll
	FloatDelegate_t530526327 * ___onScroll_16;
	// UIGridItem/VectorDelegate UIGridItem::onDrag
	VectorDelegate_t3541586702 * ___onDrag_17;
	// UIGridItem/ObjectDelegate UIGridItem::onDrop
	ObjectDelegate_t111507530 * ___onDrop_18;
	// UIGridItem/KeyCodeDelegate UIGridItem::onKey
	KeyCodeDelegate_t3358343497 * ___onKey_19;

public:
	inline static int32_t get_offset_of_mScripts_2() { return static_cast<int32_t>(offsetof(UIGridItem_t3654720203, ___mScripts_2)); }
	inline MonoBehaviourU5BU5D_t3035069757* get_mScripts_2() const { return ___mScripts_2; }
	inline MonoBehaviourU5BU5D_t3035069757** get_address_of_mScripts_2() { return &___mScripts_2; }
	inline void set_mScripts_2(MonoBehaviourU5BU5D_t3035069757* value)
	{
		___mScripts_2 = value;
		Il2CppCodeGenWriteBarrier(&___mScripts_2, value);
	}

	inline static int32_t get_offset_of_SelectedItem_3() { return static_cast<int32_t>(offsetof(UIGridItem_t3654720203, ___SelectedItem_3)); }
	inline Transform_t3275118058 * get_SelectedItem_3() const { return ___SelectedItem_3; }
	inline Transform_t3275118058 ** get_address_of_SelectedItem_3() { return &___SelectedItem_3; }
	inline void set_SelectedItem_3(Transform_t3275118058 * value)
	{
		___SelectedItem_3 = value;
		Il2CppCodeGenWriteBarrier(&___SelectedItem_3, value);
	}

	inline static int32_t get_offset_of_Locked_4() { return static_cast<int32_t>(offsetof(UIGridItem_t3654720203, ___Locked_4)); }
	inline bool get_Locked_4() const { return ___Locked_4; }
	inline bool* get_address_of_Locked_4() { return &___Locked_4; }
	inline void set_Locked_4(bool value)
	{
		___Locked_4 = value;
	}

	inline static int32_t get_offset_of_oData_5() { return static_cast<int32_t>(offsetof(UIGridItem_t3654720203, ___oData_5)); }
	inline Il2CppObject * get_oData_5() const { return ___oData_5; }
	inline Il2CppObject ** get_address_of_oData_5() { return &___oData_5; }
	inline void set_oData_5(Il2CppObject * value)
	{
		___oData_5 = value;
		Il2CppCodeGenWriteBarrier(&___oData_5, value);
	}

	inline static int32_t get_offset_of_miCurIndex_6() { return static_cast<int32_t>(offsetof(UIGridItem_t3654720203, ___miCurIndex_6)); }
	inline int32_t get_miCurIndex_6() const { return ___miCurIndex_6; }
	inline int32_t* get_address_of_miCurIndex_6() { return &___miCurIndex_6; }
	inline void set_miCurIndex_6(int32_t value)
	{
		___miCurIndex_6 = value;
	}

	inline static int32_t get_offset_of_Owner_7() { return static_cast<int32_t>(offsetof(UIGridItem_t3654720203, ___Owner_7)); }
	inline UIGrid_t2420180906 * get_Owner_7() const { return ___Owner_7; }
	inline UIGrid_t2420180906 ** get_address_of_Owner_7() { return &___Owner_7; }
	inline void set_Owner_7(UIGrid_t2420180906 * value)
	{
		___Owner_7 = value;
		Il2CppCodeGenWriteBarrier(&___Owner_7, value);
	}

	inline static int32_t get_offset_of_m_selected_8() { return static_cast<int32_t>(offsetof(UIGridItem_t3654720203, ___m_selected_8)); }
	inline bool get_m_selected_8() const { return ___m_selected_8; }
	inline bool* get_address_of_m_selected_8() { return &___m_selected_8; }
	inline void set_m_selected_8(bool value)
	{
		___m_selected_8 = value;
	}

	inline static int32_t get_offset_of_parameter_9() { return static_cast<int32_t>(offsetof(UIGridItem_t3654720203, ___parameter_9)); }
	inline Il2CppObject * get_parameter_9() const { return ___parameter_9; }
	inline Il2CppObject ** get_address_of_parameter_9() { return &___parameter_9; }
	inline void set_parameter_9(Il2CppObject * value)
	{
		___parameter_9 = value;
		Il2CppCodeGenWriteBarrier(&___parameter_9, value);
	}

	inline static int32_t get_offset_of_onSubmit_10() { return static_cast<int32_t>(offsetof(UIGridItem_t3654720203, ___onSubmit_10)); }
	inline VoidDelegate_t3415302975 * get_onSubmit_10() const { return ___onSubmit_10; }
	inline VoidDelegate_t3415302975 ** get_address_of_onSubmit_10() { return &___onSubmit_10; }
	inline void set_onSubmit_10(VoidDelegate_t3415302975 * value)
	{
		___onSubmit_10 = value;
		Il2CppCodeGenWriteBarrier(&___onSubmit_10, value);
	}

	inline static int32_t get_offset_of_onClick_11() { return static_cast<int32_t>(offsetof(UIGridItem_t3654720203, ___onClick_11)); }
	inline VoidDelegate_t3415302975 * get_onClick_11() const { return ___onClick_11; }
	inline VoidDelegate_t3415302975 ** get_address_of_onClick_11() { return &___onClick_11; }
	inline void set_onClick_11(VoidDelegate_t3415302975 * value)
	{
		___onClick_11 = value;
		Il2CppCodeGenWriteBarrier(&___onClick_11, value);
	}

	inline static int32_t get_offset_of_onDoubleClick_12() { return static_cast<int32_t>(offsetof(UIGridItem_t3654720203, ___onDoubleClick_12)); }
	inline VoidDelegate_t3415302975 * get_onDoubleClick_12() const { return ___onDoubleClick_12; }
	inline VoidDelegate_t3415302975 ** get_address_of_onDoubleClick_12() { return &___onDoubleClick_12; }
	inline void set_onDoubleClick_12(VoidDelegate_t3415302975 * value)
	{
		___onDoubleClick_12 = value;
		Il2CppCodeGenWriteBarrier(&___onDoubleClick_12, value);
	}

	inline static int32_t get_offset_of_onHover_13() { return static_cast<int32_t>(offsetof(UIGridItem_t3654720203, ___onHover_13)); }
	inline BoolDelegate_t1329225677 * get_onHover_13() const { return ___onHover_13; }
	inline BoolDelegate_t1329225677 ** get_address_of_onHover_13() { return &___onHover_13; }
	inline void set_onHover_13(BoolDelegate_t1329225677 * value)
	{
		___onHover_13 = value;
		Il2CppCodeGenWriteBarrier(&___onHover_13, value);
	}

	inline static int32_t get_offset_of_onPress_14() { return static_cast<int32_t>(offsetof(UIGridItem_t3654720203, ___onPress_14)); }
	inline BoolDelegate_t1329225677 * get_onPress_14() const { return ___onPress_14; }
	inline BoolDelegate_t1329225677 ** get_address_of_onPress_14() { return &___onPress_14; }
	inline void set_onPress_14(BoolDelegate_t1329225677 * value)
	{
		___onPress_14 = value;
		Il2CppCodeGenWriteBarrier(&___onPress_14, value);
	}

	inline static int32_t get_offset_of_onSelect_15() { return static_cast<int32_t>(offsetof(UIGridItem_t3654720203, ___onSelect_15)); }
	inline BoolDelegate_t1329225677 * get_onSelect_15() const { return ___onSelect_15; }
	inline BoolDelegate_t1329225677 ** get_address_of_onSelect_15() { return &___onSelect_15; }
	inline void set_onSelect_15(BoolDelegate_t1329225677 * value)
	{
		___onSelect_15 = value;
		Il2CppCodeGenWriteBarrier(&___onSelect_15, value);
	}

	inline static int32_t get_offset_of_onScroll_16() { return static_cast<int32_t>(offsetof(UIGridItem_t3654720203, ___onScroll_16)); }
	inline FloatDelegate_t530526327 * get_onScroll_16() const { return ___onScroll_16; }
	inline FloatDelegate_t530526327 ** get_address_of_onScroll_16() { return &___onScroll_16; }
	inline void set_onScroll_16(FloatDelegate_t530526327 * value)
	{
		___onScroll_16 = value;
		Il2CppCodeGenWriteBarrier(&___onScroll_16, value);
	}

	inline static int32_t get_offset_of_onDrag_17() { return static_cast<int32_t>(offsetof(UIGridItem_t3654720203, ___onDrag_17)); }
	inline VectorDelegate_t3541586702 * get_onDrag_17() const { return ___onDrag_17; }
	inline VectorDelegate_t3541586702 ** get_address_of_onDrag_17() { return &___onDrag_17; }
	inline void set_onDrag_17(VectorDelegate_t3541586702 * value)
	{
		___onDrag_17 = value;
		Il2CppCodeGenWriteBarrier(&___onDrag_17, value);
	}

	inline static int32_t get_offset_of_onDrop_18() { return static_cast<int32_t>(offsetof(UIGridItem_t3654720203, ___onDrop_18)); }
	inline ObjectDelegate_t111507530 * get_onDrop_18() const { return ___onDrop_18; }
	inline ObjectDelegate_t111507530 ** get_address_of_onDrop_18() { return &___onDrop_18; }
	inline void set_onDrop_18(ObjectDelegate_t111507530 * value)
	{
		___onDrop_18 = value;
		Il2CppCodeGenWriteBarrier(&___onDrop_18, value);
	}

	inline static int32_t get_offset_of_onKey_19() { return static_cast<int32_t>(offsetof(UIGridItem_t3654720203, ___onKey_19)); }
	inline KeyCodeDelegate_t3358343497 * get_onKey_19() const { return ___onKey_19; }
	inline KeyCodeDelegate_t3358343497 ** get_address_of_onKey_19() { return &___onKey_19; }
	inline void set_onKey_19(KeyCodeDelegate_t3358343497 * value)
	{
		___onKey_19 = value;
		Il2CppCodeGenWriteBarrier(&___onKey_19, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
