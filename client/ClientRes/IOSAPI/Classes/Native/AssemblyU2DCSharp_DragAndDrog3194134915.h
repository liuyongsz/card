#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DragAndDrog
struct  DragAndDrog_t3194134915  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Camera DragAndDrog::EventCamera
	Camera_t189460977 * ___EventCamera_2;
	// UnityEngine.GameObject DragAndDrog::target
	GameObject_t1756533147 * ___target_3;
	// System.Boolean DragAndDrog::AllowXMove
	bool ___AllowXMove_4;
	// System.Boolean DragAndDrog::AllowYMove
	bool ___AllowYMove_5;
	// System.Boolean DragAndDrog::AllowZMove
	bool ___AllowZMove_6;
	// System.Boolean DragAndDrog::isMouseDrag
	bool ___isMouseDrag_7;
	// UnityEngine.Vector3 DragAndDrog::screenPosition
	Vector3_t2243707580  ___screenPosition_8;
	// UnityEngine.Vector3 DragAndDrog::offset
	Vector3_t2243707580  ___offset_9;

public:
	inline static int32_t get_offset_of_EventCamera_2() { return static_cast<int32_t>(offsetof(DragAndDrog_t3194134915, ___EventCamera_2)); }
	inline Camera_t189460977 * get_EventCamera_2() const { return ___EventCamera_2; }
	inline Camera_t189460977 ** get_address_of_EventCamera_2() { return &___EventCamera_2; }
	inline void set_EventCamera_2(Camera_t189460977 * value)
	{
		___EventCamera_2 = value;
		Il2CppCodeGenWriteBarrier(&___EventCamera_2, value);
	}

	inline static int32_t get_offset_of_target_3() { return static_cast<int32_t>(offsetof(DragAndDrog_t3194134915, ___target_3)); }
	inline GameObject_t1756533147 * get_target_3() const { return ___target_3; }
	inline GameObject_t1756533147 ** get_address_of_target_3() { return &___target_3; }
	inline void set_target_3(GameObject_t1756533147 * value)
	{
		___target_3 = value;
		Il2CppCodeGenWriteBarrier(&___target_3, value);
	}

	inline static int32_t get_offset_of_AllowXMove_4() { return static_cast<int32_t>(offsetof(DragAndDrog_t3194134915, ___AllowXMove_4)); }
	inline bool get_AllowXMove_4() const { return ___AllowXMove_4; }
	inline bool* get_address_of_AllowXMove_4() { return &___AllowXMove_4; }
	inline void set_AllowXMove_4(bool value)
	{
		___AllowXMove_4 = value;
	}

	inline static int32_t get_offset_of_AllowYMove_5() { return static_cast<int32_t>(offsetof(DragAndDrog_t3194134915, ___AllowYMove_5)); }
	inline bool get_AllowYMove_5() const { return ___AllowYMove_5; }
	inline bool* get_address_of_AllowYMove_5() { return &___AllowYMove_5; }
	inline void set_AllowYMove_5(bool value)
	{
		___AllowYMove_5 = value;
	}

	inline static int32_t get_offset_of_AllowZMove_6() { return static_cast<int32_t>(offsetof(DragAndDrog_t3194134915, ___AllowZMove_6)); }
	inline bool get_AllowZMove_6() const { return ___AllowZMove_6; }
	inline bool* get_address_of_AllowZMove_6() { return &___AllowZMove_6; }
	inline void set_AllowZMove_6(bool value)
	{
		___AllowZMove_6 = value;
	}

	inline static int32_t get_offset_of_isMouseDrag_7() { return static_cast<int32_t>(offsetof(DragAndDrog_t3194134915, ___isMouseDrag_7)); }
	inline bool get_isMouseDrag_7() const { return ___isMouseDrag_7; }
	inline bool* get_address_of_isMouseDrag_7() { return &___isMouseDrag_7; }
	inline void set_isMouseDrag_7(bool value)
	{
		___isMouseDrag_7 = value;
	}

	inline static int32_t get_offset_of_screenPosition_8() { return static_cast<int32_t>(offsetof(DragAndDrog_t3194134915, ___screenPosition_8)); }
	inline Vector3_t2243707580  get_screenPosition_8() const { return ___screenPosition_8; }
	inline Vector3_t2243707580 * get_address_of_screenPosition_8() { return &___screenPosition_8; }
	inline void set_screenPosition_8(Vector3_t2243707580  value)
	{
		___screenPosition_8 = value;
	}

	inline static int32_t get_offset_of_offset_9() { return static_cast<int32_t>(offsetof(DragAndDrog_t3194134915, ___offset_9)); }
	inline Vector3_t2243707580  get_offset_9() const { return ___offset_9; }
	inline Vector3_t2243707580 * get_address_of_offset_9() { return &___offset_9; }
	inline void set_offset_9(Vector3_t2243707580  value)
	{
		___offset_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
