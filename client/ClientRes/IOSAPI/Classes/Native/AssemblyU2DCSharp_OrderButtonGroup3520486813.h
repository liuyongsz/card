#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`1<System.String>
struct Action_1_t1831019615;
// System.Collections.Generic.List`1<OrderButton>
struct List_1_t3669079008;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.BoxCollider
struct BoxCollider_t22920061;
// UnityEngine.Camera
struct Camera_t189460977;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_OrderMode3252651463.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OrderButtonGroup
struct  OrderButtonGroup_t3520486813  : public MonoBehaviour_t1158329972
{
public:
	// System.Action`1<System.String> OrderButtonGroup::callback
	Action_1_t1831019615 * ___callback_2;
	// OrderMode OrderButtonGroup::mode
	int32_t ___mode_3;
	// System.Single OrderButtonGroup::offest
	float ___offest_4;
	// System.Boolean OrderButtonGroup::bInit
	bool ___bInit_5;
	// UnityEngine.Vector3 OrderButtonGroup::point
	Vector3_t2243707580  ___point_6;
	// UnityEngine.Vector3 OrderButtonGroup::size
	Vector3_t2243707580  ___size_7;
	// System.Int32 OrderButtonGroup::len
	int32_t ___len_8;
	// System.Collections.Generic.List`1<OrderButton> OrderButtonGroup::orders
	List_1_t3669079008 * ___orders_9;
	// UnityEngine.GameObject OrderButtonGroup::root
	GameObject_t1756533147 * ___root_10;
	// UnityEngine.GameObject OrderButtonGroup::rotationObj
	GameObject_t1756533147 * ___rotationObj_11;
	// UnityEngine.BoxCollider OrderButtonGroup::col
	BoxCollider_t22920061 * ___col_12;
	// System.Boolean OrderButtonGroup::bShow
	bool ___bShow_13;
	// UnityEngine.Vector3 OrderButtonGroup::rotation
	Vector3_t2243707580  ___rotation_14;
	// UnityEngine.Camera OrderButtonGroup::uiCamera
	Camera_t189460977 * ___uiCamera_15;

public:
	inline static int32_t get_offset_of_callback_2() { return static_cast<int32_t>(offsetof(OrderButtonGroup_t3520486813, ___callback_2)); }
	inline Action_1_t1831019615 * get_callback_2() const { return ___callback_2; }
	inline Action_1_t1831019615 ** get_address_of_callback_2() { return &___callback_2; }
	inline void set_callback_2(Action_1_t1831019615 * value)
	{
		___callback_2 = value;
		Il2CppCodeGenWriteBarrier(&___callback_2, value);
	}

	inline static int32_t get_offset_of_mode_3() { return static_cast<int32_t>(offsetof(OrderButtonGroup_t3520486813, ___mode_3)); }
	inline int32_t get_mode_3() const { return ___mode_3; }
	inline int32_t* get_address_of_mode_3() { return &___mode_3; }
	inline void set_mode_3(int32_t value)
	{
		___mode_3 = value;
	}

	inline static int32_t get_offset_of_offest_4() { return static_cast<int32_t>(offsetof(OrderButtonGroup_t3520486813, ___offest_4)); }
	inline float get_offest_4() const { return ___offest_4; }
	inline float* get_address_of_offest_4() { return &___offest_4; }
	inline void set_offest_4(float value)
	{
		___offest_4 = value;
	}

	inline static int32_t get_offset_of_bInit_5() { return static_cast<int32_t>(offsetof(OrderButtonGroup_t3520486813, ___bInit_5)); }
	inline bool get_bInit_5() const { return ___bInit_5; }
	inline bool* get_address_of_bInit_5() { return &___bInit_5; }
	inline void set_bInit_5(bool value)
	{
		___bInit_5 = value;
	}

	inline static int32_t get_offset_of_point_6() { return static_cast<int32_t>(offsetof(OrderButtonGroup_t3520486813, ___point_6)); }
	inline Vector3_t2243707580  get_point_6() const { return ___point_6; }
	inline Vector3_t2243707580 * get_address_of_point_6() { return &___point_6; }
	inline void set_point_6(Vector3_t2243707580  value)
	{
		___point_6 = value;
	}

	inline static int32_t get_offset_of_size_7() { return static_cast<int32_t>(offsetof(OrderButtonGroup_t3520486813, ___size_7)); }
	inline Vector3_t2243707580  get_size_7() const { return ___size_7; }
	inline Vector3_t2243707580 * get_address_of_size_7() { return &___size_7; }
	inline void set_size_7(Vector3_t2243707580  value)
	{
		___size_7 = value;
	}

	inline static int32_t get_offset_of_len_8() { return static_cast<int32_t>(offsetof(OrderButtonGroup_t3520486813, ___len_8)); }
	inline int32_t get_len_8() const { return ___len_8; }
	inline int32_t* get_address_of_len_8() { return &___len_8; }
	inline void set_len_8(int32_t value)
	{
		___len_8 = value;
	}

	inline static int32_t get_offset_of_orders_9() { return static_cast<int32_t>(offsetof(OrderButtonGroup_t3520486813, ___orders_9)); }
	inline List_1_t3669079008 * get_orders_9() const { return ___orders_9; }
	inline List_1_t3669079008 ** get_address_of_orders_9() { return &___orders_9; }
	inline void set_orders_9(List_1_t3669079008 * value)
	{
		___orders_9 = value;
		Il2CppCodeGenWriteBarrier(&___orders_9, value);
	}

	inline static int32_t get_offset_of_root_10() { return static_cast<int32_t>(offsetof(OrderButtonGroup_t3520486813, ___root_10)); }
	inline GameObject_t1756533147 * get_root_10() const { return ___root_10; }
	inline GameObject_t1756533147 ** get_address_of_root_10() { return &___root_10; }
	inline void set_root_10(GameObject_t1756533147 * value)
	{
		___root_10 = value;
		Il2CppCodeGenWriteBarrier(&___root_10, value);
	}

	inline static int32_t get_offset_of_rotationObj_11() { return static_cast<int32_t>(offsetof(OrderButtonGroup_t3520486813, ___rotationObj_11)); }
	inline GameObject_t1756533147 * get_rotationObj_11() const { return ___rotationObj_11; }
	inline GameObject_t1756533147 ** get_address_of_rotationObj_11() { return &___rotationObj_11; }
	inline void set_rotationObj_11(GameObject_t1756533147 * value)
	{
		___rotationObj_11 = value;
		Il2CppCodeGenWriteBarrier(&___rotationObj_11, value);
	}

	inline static int32_t get_offset_of_col_12() { return static_cast<int32_t>(offsetof(OrderButtonGroup_t3520486813, ___col_12)); }
	inline BoxCollider_t22920061 * get_col_12() const { return ___col_12; }
	inline BoxCollider_t22920061 ** get_address_of_col_12() { return &___col_12; }
	inline void set_col_12(BoxCollider_t22920061 * value)
	{
		___col_12 = value;
		Il2CppCodeGenWriteBarrier(&___col_12, value);
	}

	inline static int32_t get_offset_of_bShow_13() { return static_cast<int32_t>(offsetof(OrderButtonGroup_t3520486813, ___bShow_13)); }
	inline bool get_bShow_13() const { return ___bShow_13; }
	inline bool* get_address_of_bShow_13() { return &___bShow_13; }
	inline void set_bShow_13(bool value)
	{
		___bShow_13 = value;
	}

	inline static int32_t get_offset_of_rotation_14() { return static_cast<int32_t>(offsetof(OrderButtonGroup_t3520486813, ___rotation_14)); }
	inline Vector3_t2243707580  get_rotation_14() const { return ___rotation_14; }
	inline Vector3_t2243707580 * get_address_of_rotation_14() { return &___rotation_14; }
	inline void set_rotation_14(Vector3_t2243707580  value)
	{
		___rotation_14 = value;
	}

	inline static int32_t get_offset_of_uiCamera_15() { return static_cast<int32_t>(offsetof(OrderButtonGroup_t3520486813, ___uiCamera_15)); }
	inline Camera_t189460977 * get_uiCamera_15() const { return ___uiCamera_15; }
	inline Camera_t189460977 ** get_address_of_uiCamera_15() { return &___uiCamera_15; }
	inline void set_uiCamera_15(Camera_t189460977 * value)
	{
		___uiCamera_15 = value;
		Il2CppCodeGenWriteBarrier(&___uiCamera_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
