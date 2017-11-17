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
// UnityEngine.Camera
struct Camera_t189460977;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnhanceScrollViewDragController
struct  EnhanceScrollViewDragController_t1105618240  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Vector2 EnhanceScrollViewDragController::lastPosition
	Vector2_t2243707579  ___lastPosition_2;
	// UnityEngine.Vector2 EnhanceScrollViewDragController::cachedPosition
	Vector2_t2243707579  ___cachedPosition_3;
	// UnityEngine.GameObject EnhanceScrollViewDragController::dragTarget
	GameObject_t1756533147 * ___dragTarget_4;
	// UnityEngine.Camera EnhanceScrollViewDragController::targetCamera
	Camera_t189460977 * ___targetCamera_5;
	// System.Int32 EnhanceScrollViewDragController::rayCastMask
	int32_t ___rayCastMask_6;
	// System.Boolean EnhanceScrollViewDragController::dragStart
	bool ___dragStart_7;

public:
	inline static int32_t get_offset_of_lastPosition_2() { return static_cast<int32_t>(offsetof(EnhanceScrollViewDragController_t1105618240, ___lastPosition_2)); }
	inline Vector2_t2243707579  get_lastPosition_2() const { return ___lastPosition_2; }
	inline Vector2_t2243707579 * get_address_of_lastPosition_2() { return &___lastPosition_2; }
	inline void set_lastPosition_2(Vector2_t2243707579  value)
	{
		___lastPosition_2 = value;
	}

	inline static int32_t get_offset_of_cachedPosition_3() { return static_cast<int32_t>(offsetof(EnhanceScrollViewDragController_t1105618240, ___cachedPosition_3)); }
	inline Vector2_t2243707579  get_cachedPosition_3() const { return ___cachedPosition_3; }
	inline Vector2_t2243707579 * get_address_of_cachedPosition_3() { return &___cachedPosition_3; }
	inline void set_cachedPosition_3(Vector2_t2243707579  value)
	{
		___cachedPosition_3 = value;
	}

	inline static int32_t get_offset_of_dragTarget_4() { return static_cast<int32_t>(offsetof(EnhanceScrollViewDragController_t1105618240, ___dragTarget_4)); }
	inline GameObject_t1756533147 * get_dragTarget_4() const { return ___dragTarget_4; }
	inline GameObject_t1756533147 ** get_address_of_dragTarget_4() { return &___dragTarget_4; }
	inline void set_dragTarget_4(GameObject_t1756533147 * value)
	{
		___dragTarget_4 = value;
		Il2CppCodeGenWriteBarrier(&___dragTarget_4, value);
	}

	inline static int32_t get_offset_of_targetCamera_5() { return static_cast<int32_t>(offsetof(EnhanceScrollViewDragController_t1105618240, ___targetCamera_5)); }
	inline Camera_t189460977 * get_targetCamera_5() const { return ___targetCamera_5; }
	inline Camera_t189460977 ** get_address_of_targetCamera_5() { return &___targetCamera_5; }
	inline void set_targetCamera_5(Camera_t189460977 * value)
	{
		___targetCamera_5 = value;
		Il2CppCodeGenWriteBarrier(&___targetCamera_5, value);
	}

	inline static int32_t get_offset_of_rayCastMask_6() { return static_cast<int32_t>(offsetof(EnhanceScrollViewDragController_t1105618240, ___rayCastMask_6)); }
	inline int32_t get_rayCastMask_6() const { return ___rayCastMask_6; }
	inline int32_t* get_address_of_rayCastMask_6() { return &___rayCastMask_6; }
	inline void set_rayCastMask_6(int32_t value)
	{
		___rayCastMask_6 = value;
	}

	inline static int32_t get_offset_of_dragStart_7() { return static_cast<int32_t>(offsetof(EnhanceScrollViewDragController_t1105618240, ___dragStart_7)); }
	inline bool get_dragStart_7() const { return ___dragStart_7; }
	inline bool* get_address_of_dragStart_7() { return &___dragStart_7; }
	inline void set_dragStart_7(bool value)
	{
		___dragStart_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
