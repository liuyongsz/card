#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Material
struct Material_t193706927;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MapLine
struct  MapLine_t2638020860  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Vector3 MapLine::startPos
	Vector3_t2243707580  ___startPos_2;
	// UnityEngine.Vector3 MapLine::endPos
	Vector3_t2243707580  ___endPos_3;
	// UnityEngine.Vector3 MapLine::rotation
	Vector3_t2243707580  ___rotation_4;
	// UnityEngine.Material MapLine::material
	Material_t193706927 * ___material_5;
	// System.Boolean MapLine::isMove
	bool ___isMove_6;
	// UnityEngine.Vector2 MapLine::moveDir
	Vector2_t2243707579  ___moveDir_7;
	// UnityEngine.Vector2 MapLine::resetOffset
	Vector2_t2243707579  ___resetOffset_8;

public:
	inline static int32_t get_offset_of_startPos_2() { return static_cast<int32_t>(offsetof(MapLine_t2638020860, ___startPos_2)); }
	inline Vector3_t2243707580  get_startPos_2() const { return ___startPos_2; }
	inline Vector3_t2243707580 * get_address_of_startPos_2() { return &___startPos_2; }
	inline void set_startPos_2(Vector3_t2243707580  value)
	{
		___startPos_2 = value;
	}

	inline static int32_t get_offset_of_endPos_3() { return static_cast<int32_t>(offsetof(MapLine_t2638020860, ___endPos_3)); }
	inline Vector3_t2243707580  get_endPos_3() const { return ___endPos_3; }
	inline Vector3_t2243707580 * get_address_of_endPos_3() { return &___endPos_3; }
	inline void set_endPos_3(Vector3_t2243707580  value)
	{
		___endPos_3 = value;
	}

	inline static int32_t get_offset_of_rotation_4() { return static_cast<int32_t>(offsetof(MapLine_t2638020860, ___rotation_4)); }
	inline Vector3_t2243707580  get_rotation_4() const { return ___rotation_4; }
	inline Vector3_t2243707580 * get_address_of_rotation_4() { return &___rotation_4; }
	inline void set_rotation_4(Vector3_t2243707580  value)
	{
		___rotation_4 = value;
	}

	inline static int32_t get_offset_of_material_5() { return static_cast<int32_t>(offsetof(MapLine_t2638020860, ___material_5)); }
	inline Material_t193706927 * get_material_5() const { return ___material_5; }
	inline Material_t193706927 ** get_address_of_material_5() { return &___material_5; }
	inline void set_material_5(Material_t193706927 * value)
	{
		___material_5 = value;
		Il2CppCodeGenWriteBarrier(&___material_5, value);
	}

	inline static int32_t get_offset_of_isMove_6() { return static_cast<int32_t>(offsetof(MapLine_t2638020860, ___isMove_6)); }
	inline bool get_isMove_6() const { return ___isMove_6; }
	inline bool* get_address_of_isMove_6() { return &___isMove_6; }
	inline void set_isMove_6(bool value)
	{
		___isMove_6 = value;
	}

	inline static int32_t get_offset_of_moveDir_7() { return static_cast<int32_t>(offsetof(MapLine_t2638020860, ___moveDir_7)); }
	inline Vector2_t2243707579  get_moveDir_7() const { return ___moveDir_7; }
	inline Vector2_t2243707579 * get_address_of_moveDir_7() { return &___moveDir_7; }
	inline void set_moveDir_7(Vector2_t2243707579  value)
	{
		___moveDir_7 = value;
	}

	inline static int32_t get_offset_of_resetOffset_8() { return static_cast<int32_t>(offsetof(MapLine_t2638020860, ___resetOffset_8)); }
	inline Vector2_t2243707579  get_resetOffset_8() const { return ___resetOffset_8; }
	inline Vector2_t2243707579 * get_address_of_resetOffset_8() { return &___resetOffset_8; }
	inline void set_resetOffset_8(Vector2_t2243707579  value)
	{
		___resetOffset_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
