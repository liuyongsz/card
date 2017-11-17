#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// live2d.PhysicsHair/PhysicsPoint
struct PhysicsPoint_t4050200549;
// System.Collections.Generic.List`1<live2d.PhysicsHair/IPhysicsSrc>
struct List_1_t1880655014;
// System.Collections.Generic.List`1<live2d.PhysicsHair/IPhysicsTarget>
struct List_1_t1737414661;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// live2d.PhysicsHair
struct  PhysicsHair_t1240400373  : public Il2CppObject
{
public:
	// live2d.PhysicsHair/PhysicsPoint live2d.PhysicsHair::p1
	PhysicsPoint_t4050200549 * ___p1_0;
	// live2d.PhysicsHair/PhysicsPoint live2d.PhysicsHair::p2
	PhysicsPoint_t4050200549 * ___p2_1;
	// System.Single live2d.PhysicsHair::baseLengthM
	float ___baseLengthM_2;
	// System.Single live2d.PhysicsHair::gravityAngleDeg
	float ___gravityAngleDeg_3;
	// System.Single live2d.PhysicsHair::airResistance
	float ___airResistance_4;
	// System.Single live2d.PhysicsHair::angleP1toP2Deg
	float ___angleP1toP2Deg_5;
	// System.Single live2d.PhysicsHair::last_angleP1toP2Deg
	float ___last_angleP1toP2Deg_6;
	// System.Single live2d.PhysicsHair::angleP1toP2Deg_v
	float ___angleP1toP2Deg_v_7;
	// System.Int64 live2d.PhysicsHair::startTime
	int64_t ___startTime_8;
	// System.Int64 live2d.PhysicsHair::lastTime
	int64_t ___lastTime_9;
	// System.Collections.Generic.List`1<live2d.PhysicsHair/IPhysicsSrc> live2d.PhysicsHair::srcList
	List_1_t1880655014 * ___srcList_10;
	// System.Collections.Generic.List`1<live2d.PhysicsHair/IPhysicsTarget> live2d.PhysicsHair::targetList
	List_1_t1737414661 * ___targetList_11;

public:
	inline static int32_t get_offset_of_p1_0() { return static_cast<int32_t>(offsetof(PhysicsHair_t1240400373, ___p1_0)); }
	inline PhysicsPoint_t4050200549 * get_p1_0() const { return ___p1_0; }
	inline PhysicsPoint_t4050200549 ** get_address_of_p1_0() { return &___p1_0; }
	inline void set_p1_0(PhysicsPoint_t4050200549 * value)
	{
		___p1_0 = value;
		Il2CppCodeGenWriteBarrier(&___p1_0, value);
	}

	inline static int32_t get_offset_of_p2_1() { return static_cast<int32_t>(offsetof(PhysicsHair_t1240400373, ___p2_1)); }
	inline PhysicsPoint_t4050200549 * get_p2_1() const { return ___p2_1; }
	inline PhysicsPoint_t4050200549 ** get_address_of_p2_1() { return &___p2_1; }
	inline void set_p2_1(PhysicsPoint_t4050200549 * value)
	{
		___p2_1 = value;
		Il2CppCodeGenWriteBarrier(&___p2_1, value);
	}

	inline static int32_t get_offset_of_baseLengthM_2() { return static_cast<int32_t>(offsetof(PhysicsHair_t1240400373, ___baseLengthM_2)); }
	inline float get_baseLengthM_2() const { return ___baseLengthM_2; }
	inline float* get_address_of_baseLengthM_2() { return &___baseLengthM_2; }
	inline void set_baseLengthM_2(float value)
	{
		___baseLengthM_2 = value;
	}

	inline static int32_t get_offset_of_gravityAngleDeg_3() { return static_cast<int32_t>(offsetof(PhysicsHair_t1240400373, ___gravityAngleDeg_3)); }
	inline float get_gravityAngleDeg_3() const { return ___gravityAngleDeg_3; }
	inline float* get_address_of_gravityAngleDeg_3() { return &___gravityAngleDeg_3; }
	inline void set_gravityAngleDeg_3(float value)
	{
		___gravityAngleDeg_3 = value;
	}

	inline static int32_t get_offset_of_airResistance_4() { return static_cast<int32_t>(offsetof(PhysicsHair_t1240400373, ___airResistance_4)); }
	inline float get_airResistance_4() const { return ___airResistance_4; }
	inline float* get_address_of_airResistance_4() { return &___airResistance_4; }
	inline void set_airResistance_4(float value)
	{
		___airResistance_4 = value;
	}

	inline static int32_t get_offset_of_angleP1toP2Deg_5() { return static_cast<int32_t>(offsetof(PhysicsHair_t1240400373, ___angleP1toP2Deg_5)); }
	inline float get_angleP1toP2Deg_5() const { return ___angleP1toP2Deg_5; }
	inline float* get_address_of_angleP1toP2Deg_5() { return &___angleP1toP2Deg_5; }
	inline void set_angleP1toP2Deg_5(float value)
	{
		___angleP1toP2Deg_5 = value;
	}

	inline static int32_t get_offset_of_last_angleP1toP2Deg_6() { return static_cast<int32_t>(offsetof(PhysicsHair_t1240400373, ___last_angleP1toP2Deg_6)); }
	inline float get_last_angleP1toP2Deg_6() const { return ___last_angleP1toP2Deg_6; }
	inline float* get_address_of_last_angleP1toP2Deg_6() { return &___last_angleP1toP2Deg_6; }
	inline void set_last_angleP1toP2Deg_6(float value)
	{
		___last_angleP1toP2Deg_6 = value;
	}

	inline static int32_t get_offset_of_angleP1toP2Deg_v_7() { return static_cast<int32_t>(offsetof(PhysicsHair_t1240400373, ___angleP1toP2Deg_v_7)); }
	inline float get_angleP1toP2Deg_v_7() const { return ___angleP1toP2Deg_v_7; }
	inline float* get_address_of_angleP1toP2Deg_v_7() { return &___angleP1toP2Deg_v_7; }
	inline void set_angleP1toP2Deg_v_7(float value)
	{
		___angleP1toP2Deg_v_7 = value;
	}

	inline static int32_t get_offset_of_startTime_8() { return static_cast<int32_t>(offsetof(PhysicsHair_t1240400373, ___startTime_8)); }
	inline int64_t get_startTime_8() const { return ___startTime_8; }
	inline int64_t* get_address_of_startTime_8() { return &___startTime_8; }
	inline void set_startTime_8(int64_t value)
	{
		___startTime_8 = value;
	}

	inline static int32_t get_offset_of_lastTime_9() { return static_cast<int32_t>(offsetof(PhysicsHair_t1240400373, ___lastTime_9)); }
	inline int64_t get_lastTime_9() const { return ___lastTime_9; }
	inline int64_t* get_address_of_lastTime_9() { return &___lastTime_9; }
	inline void set_lastTime_9(int64_t value)
	{
		___lastTime_9 = value;
	}

	inline static int32_t get_offset_of_srcList_10() { return static_cast<int32_t>(offsetof(PhysicsHair_t1240400373, ___srcList_10)); }
	inline List_1_t1880655014 * get_srcList_10() const { return ___srcList_10; }
	inline List_1_t1880655014 ** get_address_of_srcList_10() { return &___srcList_10; }
	inline void set_srcList_10(List_1_t1880655014 * value)
	{
		___srcList_10 = value;
		Il2CppCodeGenWriteBarrier(&___srcList_10, value);
	}

	inline static int32_t get_offset_of_targetList_11() { return static_cast<int32_t>(offsetof(PhysicsHair_t1240400373, ___targetList_11)); }
	inline List_1_t1737414661 * get_targetList_11() const { return ___targetList_11; }
	inline List_1_t1737414661 ** get_address_of_targetList_11() { return &___targetList_11; }
	inline void set_targetList_11(List_1_t1737414661 * value)
	{
		___targetList_11 = value;
		Il2CppCodeGenWriteBarrier(&___targetList_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
