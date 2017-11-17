#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t2644239190;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LoopWeather
struct  LoopWeather_t3379078138  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Transform> LoopWeather::snowplan
	List_1_t2644239190 * ___snowplan_2;
	// UnityEngine.Vector3 LoopWeather::centerPos
	Vector3_t2243707580  ___centerPos_4;
	// UnityEngine.Vector3 LoopWeather::lastVec3
	Vector3_t2243707580  ___lastVec3_5;
	// UnityEngine.Vector2 LoopWeather::weight
	Vector2_t2243707579  ___weight_6;
	// System.Single LoopWeather::verticalSpeed
	float ___verticalSpeed_7;
	// System.Single LoopWeather::horizontalSpeed
	float ___horizontalSpeed_8;
	// System.Int32 LoopWeather::m_curX
	int32_t ___m_curX_9;
	// System.Int32 LoopWeather::m_curY
	int32_t ___m_curY_10;
	// System.Int32 LoopWeather::m_lastX
	int32_t ___m_lastX_11;
	// System.Int32 LoopWeather::m_lastY
	int32_t ___m_lastY_12;
	// System.Int32 LoopWeather::m_indexX
	int32_t ___m_indexX_13;
	// System.Int32 LoopWeather::m_indexY
	int32_t ___m_indexY_14;

public:
	inline static int32_t get_offset_of_snowplan_2() { return static_cast<int32_t>(offsetof(LoopWeather_t3379078138, ___snowplan_2)); }
	inline List_1_t2644239190 * get_snowplan_2() const { return ___snowplan_2; }
	inline List_1_t2644239190 ** get_address_of_snowplan_2() { return &___snowplan_2; }
	inline void set_snowplan_2(List_1_t2644239190 * value)
	{
		___snowplan_2 = value;
		Il2CppCodeGenWriteBarrier(&___snowplan_2, value);
	}

	inline static int32_t get_offset_of_centerPos_4() { return static_cast<int32_t>(offsetof(LoopWeather_t3379078138, ___centerPos_4)); }
	inline Vector3_t2243707580  get_centerPos_4() const { return ___centerPos_4; }
	inline Vector3_t2243707580 * get_address_of_centerPos_4() { return &___centerPos_4; }
	inline void set_centerPos_4(Vector3_t2243707580  value)
	{
		___centerPos_4 = value;
	}

	inline static int32_t get_offset_of_lastVec3_5() { return static_cast<int32_t>(offsetof(LoopWeather_t3379078138, ___lastVec3_5)); }
	inline Vector3_t2243707580  get_lastVec3_5() const { return ___lastVec3_5; }
	inline Vector3_t2243707580 * get_address_of_lastVec3_5() { return &___lastVec3_5; }
	inline void set_lastVec3_5(Vector3_t2243707580  value)
	{
		___lastVec3_5 = value;
	}

	inline static int32_t get_offset_of_weight_6() { return static_cast<int32_t>(offsetof(LoopWeather_t3379078138, ___weight_6)); }
	inline Vector2_t2243707579  get_weight_6() const { return ___weight_6; }
	inline Vector2_t2243707579 * get_address_of_weight_6() { return &___weight_6; }
	inline void set_weight_6(Vector2_t2243707579  value)
	{
		___weight_6 = value;
	}

	inline static int32_t get_offset_of_verticalSpeed_7() { return static_cast<int32_t>(offsetof(LoopWeather_t3379078138, ___verticalSpeed_7)); }
	inline float get_verticalSpeed_7() const { return ___verticalSpeed_7; }
	inline float* get_address_of_verticalSpeed_7() { return &___verticalSpeed_7; }
	inline void set_verticalSpeed_7(float value)
	{
		___verticalSpeed_7 = value;
	}

	inline static int32_t get_offset_of_horizontalSpeed_8() { return static_cast<int32_t>(offsetof(LoopWeather_t3379078138, ___horizontalSpeed_8)); }
	inline float get_horizontalSpeed_8() const { return ___horizontalSpeed_8; }
	inline float* get_address_of_horizontalSpeed_8() { return &___horizontalSpeed_8; }
	inline void set_horizontalSpeed_8(float value)
	{
		___horizontalSpeed_8 = value;
	}

	inline static int32_t get_offset_of_m_curX_9() { return static_cast<int32_t>(offsetof(LoopWeather_t3379078138, ___m_curX_9)); }
	inline int32_t get_m_curX_9() const { return ___m_curX_9; }
	inline int32_t* get_address_of_m_curX_9() { return &___m_curX_9; }
	inline void set_m_curX_9(int32_t value)
	{
		___m_curX_9 = value;
	}

	inline static int32_t get_offset_of_m_curY_10() { return static_cast<int32_t>(offsetof(LoopWeather_t3379078138, ___m_curY_10)); }
	inline int32_t get_m_curY_10() const { return ___m_curY_10; }
	inline int32_t* get_address_of_m_curY_10() { return &___m_curY_10; }
	inline void set_m_curY_10(int32_t value)
	{
		___m_curY_10 = value;
	}

	inline static int32_t get_offset_of_m_lastX_11() { return static_cast<int32_t>(offsetof(LoopWeather_t3379078138, ___m_lastX_11)); }
	inline int32_t get_m_lastX_11() const { return ___m_lastX_11; }
	inline int32_t* get_address_of_m_lastX_11() { return &___m_lastX_11; }
	inline void set_m_lastX_11(int32_t value)
	{
		___m_lastX_11 = value;
	}

	inline static int32_t get_offset_of_m_lastY_12() { return static_cast<int32_t>(offsetof(LoopWeather_t3379078138, ___m_lastY_12)); }
	inline int32_t get_m_lastY_12() const { return ___m_lastY_12; }
	inline int32_t* get_address_of_m_lastY_12() { return &___m_lastY_12; }
	inline void set_m_lastY_12(int32_t value)
	{
		___m_lastY_12 = value;
	}

	inline static int32_t get_offset_of_m_indexX_13() { return static_cast<int32_t>(offsetof(LoopWeather_t3379078138, ___m_indexX_13)); }
	inline int32_t get_m_indexX_13() const { return ___m_indexX_13; }
	inline int32_t* get_address_of_m_indexX_13() { return &___m_indexX_13; }
	inline void set_m_indexX_13(int32_t value)
	{
		___m_indexX_13 = value;
	}

	inline static int32_t get_offset_of_m_indexY_14() { return static_cast<int32_t>(offsetof(LoopWeather_t3379078138, ___m_indexY_14)); }
	inline int32_t get_m_indexY_14() const { return ___m_indexY_14; }
	inline int32_t* get_address_of_m_indexY_14() { return &___m_indexY_14; }
	inline void set_m_indexY_14(int32_t value)
	{
		___m_indexY_14 = value;
	}
};

struct LoopWeather_t3379078138_StaticFields
{
public:
	// UnityEngine.Transform LoopWeather::m_target
	Transform_t3275118058 * ___m_target_3;

public:
	inline static int32_t get_offset_of_m_target_3() { return static_cast<int32_t>(offsetof(LoopWeather_t3379078138_StaticFields, ___m_target_3)); }
	inline Transform_t3275118058 * get_m_target_3() const { return ___m_target_3; }
	inline Transform_t3275118058 ** get_address_of_m_target_3() { return &___m_target_3; }
	inline void set_m_target_3(Transform_t3275118058 * value)
	{
		___m_target_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_target_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
