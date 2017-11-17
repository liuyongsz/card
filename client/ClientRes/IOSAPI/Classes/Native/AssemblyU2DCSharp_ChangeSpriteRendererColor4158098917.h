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
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1209076198;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ChangeSpriteRendererColor
struct  ChangeSpriteRendererColor_t4158098917  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Color ChangeSpriteRendererColor::color
	Color_t2020392075  ___color_2;
	// UnityEngine.GameObject ChangeSpriteRendererColor::mSpriteObject
	GameObject_t1756533147 * ___mSpriteObject_3;
	// UnityEngine.SpriteRenderer ChangeSpriteRendererColor::mRender
	SpriteRenderer_t1209076198 * ___mRender_4;

public:
	inline static int32_t get_offset_of_color_2() { return static_cast<int32_t>(offsetof(ChangeSpriteRendererColor_t4158098917, ___color_2)); }
	inline Color_t2020392075  get_color_2() const { return ___color_2; }
	inline Color_t2020392075 * get_address_of_color_2() { return &___color_2; }
	inline void set_color_2(Color_t2020392075  value)
	{
		___color_2 = value;
	}

	inline static int32_t get_offset_of_mSpriteObject_3() { return static_cast<int32_t>(offsetof(ChangeSpriteRendererColor_t4158098917, ___mSpriteObject_3)); }
	inline GameObject_t1756533147 * get_mSpriteObject_3() const { return ___mSpriteObject_3; }
	inline GameObject_t1756533147 ** get_address_of_mSpriteObject_3() { return &___mSpriteObject_3; }
	inline void set_mSpriteObject_3(GameObject_t1756533147 * value)
	{
		___mSpriteObject_3 = value;
		Il2CppCodeGenWriteBarrier(&___mSpriteObject_3, value);
	}

	inline static int32_t get_offset_of_mRender_4() { return static_cast<int32_t>(offsetof(ChangeSpriteRendererColor_t4158098917, ___mRender_4)); }
	inline SpriteRenderer_t1209076198 * get_mRender_4() const { return ___mRender_4; }
	inline SpriteRenderer_t1209076198 ** get_address_of_mRender_4() { return &___mRender_4; }
	inline void set_mRender_4(SpriteRenderer_t1209076198 * value)
	{
		___mRender_4 = value;
		Il2CppCodeGenWriteBarrier(&___mRender_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
