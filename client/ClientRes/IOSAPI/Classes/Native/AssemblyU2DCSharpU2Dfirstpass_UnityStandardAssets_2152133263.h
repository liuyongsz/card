#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.Material>
struct List_1_t3857795355;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.PostEffectsBase
struct  PostEffectsBase_t2152133263  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::supportHDRTextures
	bool ___supportHDRTextures_2;
	// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::supportDX11
	bool ___supportDX11_3;
	// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::isSupported
	bool ___isSupported_4;
	// System.Collections.Generic.List`1<UnityEngine.Material> UnityStandardAssets.ImageEffects.PostEffectsBase::createdMaterials
	List_1_t3857795355 * ___createdMaterials_5;

public:
	inline static int32_t get_offset_of_supportHDRTextures_2() { return static_cast<int32_t>(offsetof(PostEffectsBase_t2152133263, ___supportHDRTextures_2)); }
	inline bool get_supportHDRTextures_2() const { return ___supportHDRTextures_2; }
	inline bool* get_address_of_supportHDRTextures_2() { return &___supportHDRTextures_2; }
	inline void set_supportHDRTextures_2(bool value)
	{
		___supportHDRTextures_2 = value;
	}

	inline static int32_t get_offset_of_supportDX11_3() { return static_cast<int32_t>(offsetof(PostEffectsBase_t2152133263, ___supportDX11_3)); }
	inline bool get_supportDX11_3() const { return ___supportDX11_3; }
	inline bool* get_address_of_supportDX11_3() { return &___supportDX11_3; }
	inline void set_supportDX11_3(bool value)
	{
		___supportDX11_3 = value;
	}

	inline static int32_t get_offset_of_isSupported_4() { return static_cast<int32_t>(offsetof(PostEffectsBase_t2152133263, ___isSupported_4)); }
	inline bool get_isSupported_4() const { return ___isSupported_4; }
	inline bool* get_address_of_isSupported_4() { return &___isSupported_4; }
	inline void set_isSupported_4(bool value)
	{
		___isSupported_4 = value;
	}

	inline static int32_t get_offset_of_createdMaterials_5() { return static_cast<int32_t>(offsetof(PostEffectsBase_t2152133263, ___createdMaterials_5)); }
	inline List_1_t3857795355 * get_createdMaterials_5() const { return ___createdMaterials_5; }
	inline List_1_t3857795355 ** get_address_of_createdMaterials_5() { return &___createdMaterials_5; }
	inline void set_createdMaterials_5(List_1_t3857795355 * value)
	{
		___createdMaterials_5 = value;
		Il2CppCodeGenWriteBarrier(&___createdMaterials_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
