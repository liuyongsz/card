#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<Spine.AtlasRegion,UnityEngine.Texture2D>
struct Dictionary_2_t953362029;
// System.Collections.Generic.List`1<UnityEngine.Texture2D>
struct List_1_t2912116861;

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_TextureFormat1386130234.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.Modules.AttachmentTools.SpriteAtlasRegionExtensions
struct  SpriteAtlasRegionExtensions_t2616186310  : public Il2CppObject
{
public:

public:
};

struct SpriteAtlasRegionExtensions_t2616186310_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<Spine.AtlasRegion,UnityEngine.Texture2D> Spine.Unity.Modules.AttachmentTools.SpriteAtlasRegionExtensions::CachedRegionTextures
	Dictionary_2_t953362029 * ___CachedRegionTextures_3;
	// System.Collections.Generic.List`1<UnityEngine.Texture2D> Spine.Unity.Modules.AttachmentTools.SpriteAtlasRegionExtensions::CachedRegionTexturesList
	List_1_t2912116861 * ___CachedRegionTexturesList_4;

public:
	inline static int32_t get_offset_of_CachedRegionTextures_3() { return static_cast<int32_t>(offsetof(SpriteAtlasRegionExtensions_t2616186310_StaticFields, ___CachedRegionTextures_3)); }
	inline Dictionary_2_t953362029 * get_CachedRegionTextures_3() const { return ___CachedRegionTextures_3; }
	inline Dictionary_2_t953362029 ** get_address_of_CachedRegionTextures_3() { return &___CachedRegionTextures_3; }
	inline void set_CachedRegionTextures_3(Dictionary_2_t953362029 * value)
	{
		___CachedRegionTextures_3 = value;
		Il2CppCodeGenWriteBarrier(&___CachedRegionTextures_3, value);
	}

	inline static int32_t get_offset_of_CachedRegionTexturesList_4() { return static_cast<int32_t>(offsetof(SpriteAtlasRegionExtensions_t2616186310_StaticFields, ___CachedRegionTexturesList_4)); }
	inline List_1_t2912116861 * get_CachedRegionTexturesList_4() const { return ___CachedRegionTexturesList_4; }
	inline List_1_t2912116861 ** get_address_of_CachedRegionTexturesList_4() { return &___CachedRegionTexturesList_4; }
	inline void set_CachedRegionTexturesList_4(List_1_t2912116861 * value)
	{
		___CachedRegionTexturesList_4 = value;
		Il2CppCodeGenWriteBarrier(&___CachedRegionTexturesList_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
