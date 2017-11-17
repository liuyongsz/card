#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Bezier
struct  Bezier_t2878762569  : public Il2CppObject
{
public:
	// UnityEngine.Vector3 Bezier::p0
	Vector3_t2243707580  ___p0_0;
	// UnityEngine.Vector3 Bezier::p1
	Vector3_t2243707580  ___p1_1;
	// UnityEngine.Vector3 Bezier::p2
	Vector3_t2243707580  ___p2_2;
	// UnityEngine.Vector3 Bezier::p3
	Vector3_t2243707580  ___p3_3;
	// UnityEngine.Vector3 Bezier::b0
	Vector3_t2243707580  ___b0_4;
	// UnityEngine.Vector3 Bezier::b1
	Vector3_t2243707580  ___b1_5;
	// UnityEngine.Vector3 Bezier::b2
	Vector3_t2243707580  ___b2_6;
	// UnityEngine.Vector3 Bezier::b3
	Vector3_t2243707580  ___b3_7;
	// System.Single Bezier::Ax
	float ___Ax_8;
	// System.Single Bezier::Ay
	float ___Ay_9;
	// System.Single Bezier::Az
	float ___Az_10;
	// System.Single Bezier::Bx
	float ___Bx_11;
	// System.Single Bezier::By
	float ___By_12;
	// System.Single Bezier::Bz
	float ___Bz_13;
	// System.Single Bezier::Cx
	float ___Cx_14;
	// System.Single Bezier::Cy
	float ___Cy_15;
	// System.Single Bezier::Cz
	float ___Cz_16;
	// System.Single Bezier::m_totalTime
	float ___m_totalTime_17;
	// System.Single Bezier::m_currentTime
	float ___m_currentTime_18;

public:
	inline static int32_t get_offset_of_p0_0() { return static_cast<int32_t>(offsetof(Bezier_t2878762569, ___p0_0)); }
	inline Vector3_t2243707580  get_p0_0() const { return ___p0_0; }
	inline Vector3_t2243707580 * get_address_of_p0_0() { return &___p0_0; }
	inline void set_p0_0(Vector3_t2243707580  value)
	{
		___p0_0 = value;
	}

	inline static int32_t get_offset_of_p1_1() { return static_cast<int32_t>(offsetof(Bezier_t2878762569, ___p1_1)); }
	inline Vector3_t2243707580  get_p1_1() const { return ___p1_1; }
	inline Vector3_t2243707580 * get_address_of_p1_1() { return &___p1_1; }
	inline void set_p1_1(Vector3_t2243707580  value)
	{
		___p1_1 = value;
	}

	inline static int32_t get_offset_of_p2_2() { return static_cast<int32_t>(offsetof(Bezier_t2878762569, ___p2_2)); }
	inline Vector3_t2243707580  get_p2_2() const { return ___p2_2; }
	inline Vector3_t2243707580 * get_address_of_p2_2() { return &___p2_2; }
	inline void set_p2_2(Vector3_t2243707580  value)
	{
		___p2_2 = value;
	}

	inline static int32_t get_offset_of_p3_3() { return static_cast<int32_t>(offsetof(Bezier_t2878762569, ___p3_3)); }
	inline Vector3_t2243707580  get_p3_3() const { return ___p3_3; }
	inline Vector3_t2243707580 * get_address_of_p3_3() { return &___p3_3; }
	inline void set_p3_3(Vector3_t2243707580  value)
	{
		___p3_3 = value;
	}

	inline static int32_t get_offset_of_b0_4() { return static_cast<int32_t>(offsetof(Bezier_t2878762569, ___b0_4)); }
	inline Vector3_t2243707580  get_b0_4() const { return ___b0_4; }
	inline Vector3_t2243707580 * get_address_of_b0_4() { return &___b0_4; }
	inline void set_b0_4(Vector3_t2243707580  value)
	{
		___b0_4 = value;
	}

	inline static int32_t get_offset_of_b1_5() { return static_cast<int32_t>(offsetof(Bezier_t2878762569, ___b1_5)); }
	inline Vector3_t2243707580  get_b1_5() const { return ___b1_5; }
	inline Vector3_t2243707580 * get_address_of_b1_5() { return &___b1_5; }
	inline void set_b1_5(Vector3_t2243707580  value)
	{
		___b1_5 = value;
	}

	inline static int32_t get_offset_of_b2_6() { return static_cast<int32_t>(offsetof(Bezier_t2878762569, ___b2_6)); }
	inline Vector3_t2243707580  get_b2_6() const { return ___b2_6; }
	inline Vector3_t2243707580 * get_address_of_b2_6() { return &___b2_6; }
	inline void set_b2_6(Vector3_t2243707580  value)
	{
		___b2_6 = value;
	}

	inline static int32_t get_offset_of_b3_7() { return static_cast<int32_t>(offsetof(Bezier_t2878762569, ___b3_7)); }
	inline Vector3_t2243707580  get_b3_7() const { return ___b3_7; }
	inline Vector3_t2243707580 * get_address_of_b3_7() { return &___b3_7; }
	inline void set_b3_7(Vector3_t2243707580  value)
	{
		___b3_7 = value;
	}

	inline static int32_t get_offset_of_Ax_8() { return static_cast<int32_t>(offsetof(Bezier_t2878762569, ___Ax_8)); }
	inline float get_Ax_8() const { return ___Ax_8; }
	inline float* get_address_of_Ax_8() { return &___Ax_8; }
	inline void set_Ax_8(float value)
	{
		___Ax_8 = value;
	}

	inline static int32_t get_offset_of_Ay_9() { return static_cast<int32_t>(offsetof(Bezier_t2878762569, ___Ay_9)); }
	inline float get_Ay_9() const { return ___Ay_9; }
	inline float* get_address_of_Ay_9() { return &___Ay_9; }
	inline void set_Ay_9(float value)
	{
		___Ay_9 = value;
	}

	inline static int32_t get_offset_of_Az_10() { return static_cast<int32_t>(offsetof(Bezier_t2878762569, ___Az_10)); }
	inline float get_Az_10() const { return ___Az_10; }
	inline float* get_address_of_Az_10() { return &___Az_10; }
	inline void set_Az_10(float value)
	{
		___Az_10 = value;
	}

	inline static int32_t get_offset_of_Bx_11() { return static_cast<int32_t>(offsetof(Bezier_t2878762569, ___Bx_11)); }
	inline float get_Bx_11() const { return ___Bx_11; }
	inline float* get_address_of_Bx_11() { return &___Bx_11; }
	inline void set_Bx_11(float value)
	{
		___Bx_11 = value;
	}

	inline static int32_t get_offset_of_By_12() { return static_cast<int32_t>(offsetof(Bezier_t2878762569, ___By_12)); }
	inline float get_By_12() const { return ___By_12; }
	inline float* get_address_of_By_12() { return &___By_12; }
	inline void set_By_12(float value)
	{
		___By_12 = value;
	}

	inline static int32_t get_offset_of_Bz_13() { return static_cast<int32_t>(offsetof(Bezier_t2878762569, ___Bz_13)); }
	inline float get_Bz_13() const { return ___Bz_13; }
	inline float* get_address_of_Bz_13() { return &___Bz_13; }
	inline void set_Bz_13(float value)
	{
		___Bz_13 = value;
	}

	inline static int32_t get_offset_of_Cx_14() { return static_cast<int32_t>(offsetof(Bezier_t2878762569, ___Cx_14)); }
	inline float get_Cx_14() const { return ___Cx_14; }
	inline float* get_address_of_Cx_14() { return &___Cx_14; }
	inline void set_Cx_14(float value)
	{
		___Cx_14 = value;
	}

	inline static int32_t get_offset_of_Cy_15() { return static_cast<int32_t>(offsetof(Bezier_t2878762569, ___Cy_15)); }
	inline float get_Cy_15() const { return ___Cy_15; }
	inline float* get_address_of_Cy_15() { return &___Cy_15; }
	inline void set_Cy_15(float value)
	{
		___Cy_15 = value;
	}

	inline static int32_t get_offset_of_Cz_16() { return static_cast<int32_t>(offsetof(Bezier_t2878762569, ___Cz_16)); }
	inline float get_Cz_16() const { return ___Cz_16; }
	inline float* get_address_of_Cz_16() { return &___Cz_16; }
	inline void set_Cz_16(float value)
	{
		___Cz_16 = value;
	}

	inline static int32_t get_offset_of_m_totalTime_17() { return static_cast<int32_t>(offsetof(Bezier_t2878762569, ___m_totalTime_17)); }
	inline float get_m_totalTime_17() const { return ___m_totalTime_17; }
	inline float* get_address_of_m_totalTime_17() { return &___m_totalTime_17; }
	inline void set_m_totalTime_17(float value)
	{
		___m_totalTime_17 = value;
	}

	inline static int32_t get_offset_of_m_currentTime_18() { return static_cast<int32_t>(offsetof(Bezier_t2878762569, ___m_currentTime_18)); }
	inline float get_m_currentTime_18() const { return ___m_currentTime_18; }
	inline float* get_address_of_m_currentTime_18() { return &___m_currentTime_18; }
	inline void set_m_currentTime_18(float value)
	{
		___m_currentTime_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
