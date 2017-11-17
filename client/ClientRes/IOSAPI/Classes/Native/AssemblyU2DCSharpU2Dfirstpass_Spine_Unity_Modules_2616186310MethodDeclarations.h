#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Spine.AtlasRegion
struct AtlasRegion_t3803683715;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.Shader
struct Shader_t2430389951;
// Spine.AtlasPage
struct AtlasPage_t1041509742;
// UnityEngine.Sprite
struct Sprite_t309593783;
// Spine.Skin
struct Skin_t730126667;
// System.String
struct String_t;
// Spine.Attachment
struct Attachment_t2584075367;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Texture2D3542995729.h"
#include "UnityEngine_UnityEngine_Material193706927.h"
#include "UnityEngine_UnityEngine_Shader2430389951.h"
#include "UnityEngine_UnityEngine_TextureFormat1386130234.h"
#include "UnityEngine_UnityEngine_Sprite309593783.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_AtlasPage1041509742.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_Skin730126667.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_AtlasRegion3803683715.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_Attachment2584075367.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"

// System.Void Spine.Unity.Modules.AttachmentTools.SpriteAtlasRegionExtensions::.cctor()
extern "C"  void SpriteAtlasRegionExtensions__cctor_m3766721863 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.AtlasRegion Spine.Unity.Modules.AttachmentTools.SpriteAtlasRegionExtensions::ToAtlasRegion(UnityEngine.Texture2D,UnityEngine.Material,System.Single)
extern "C"  AtlasRegion_t3803683715 * SpriteAtlasRegionExtensions_ToAtlasRegion_m1953272608 (Il2CppObject * __this /* static, unused */, Texture2D_t3542995729 * ___t0, Material_t193706927 * ___materialPropertySource1, float ___scale2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.AtlasRegion Spine.Unity.Modules.AttachmentTools.SpriteAtlasRegionExtensions::ToAtlasRegion(UnityEngine.Texture2D,UnityEngine.Shader,System.Single,UnityEngine.Material)
extern "C"  AtlasRegion_t3803683715 * SpriteAtlasRegionExtensions_ToAtlasRegion_m3275045056 (Il2CppObject * __this /* static, unused */, Texture2D_t3542995729 * ___t0, Shader_t2430389951 * ___shader1, float ___scale2, Material_t193706927 * ___materialPropertySource3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.AtlasRegion Spine.Unity.Modules.AttachmentTools.SpriteAtlasRegionExtensions::ToAtlasRegionPMAClone(UnityEngine.Texture2D,UnityEngine.Material,UnityEngine.TextureFormat,System.Boolean)
extern "C"  AtlasRegion_t3803683715 * SpriteAtlasRegionExtensions_ToAtlasRegionPMAClone_m3558603678 (Il2CppObject * __this /* static, unused */, Texture2D_t3542995729 * ___t0, Material_t193706927 * ___materialPropertySource1, int32_t ___textureFormat2, bool ___mipmaps3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.AtlasRegion Spine.Unity.Modules.AttachmentTools.SpriteAtlasRegionExtensions::ToAtlasRegionPMAClone(UnityEngine.Texture2D,UnityEngine.Shader,UnityEngine.TextureFormat,System.Boolean,UnityEngine.Material)
extern "C"  AtlasRegion_t3803683715 * SpriteAtlasRegionExtensions_ToAtlasRegionPMAClone_m966668090 (Il2CppObject * __this /* static, unused */, Texture2D_t3542995729 * ___t0, Shader_t2430389951 * ___shader1, int32_t ___textureFormat2, bool ___mipmaps3, Material_t193706927 * ___materialPropertySource4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.AtlasPage Spine.Unity.Modules.AttachmentTools.SpriteAtlasRegionExtensions::ToSpineAtlasPage(UnityEngine.Material)
extern "C"  AtlasPage_t1041509742 * SpriteAtlasRegionExtensions_ToSpineAtlasPage_m3309446636 (Il2CppObject * __this /* static, unused */, Material_t193706927 * ___m0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.AtlasRegion Spine.Unity.Modules.AttachmentTools.SpriteAtlasRegionExtensions::ToAtlasRegion(UnityEngine.Sprite,Spine.AtlasPage)
extern "C"  AtlasRegion_t3803683715 * SpriteAtlasRegionExtensions_ToAtlasRegion_m855914532 (Il2CppObject * __this /* static, unused */, Sprite_t309593783 * ___s0, AtlasPage_t1041509742 * ___page1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.AtlasRegion Spine.Unity.Modules.AttachmentTools.SpriteAtlasRegionExtensions::ToAtlasRegion(UnityEngine.Sprite,UnityEngine.Material)
extern "C"  AtlasRegion_t3803683715 * SpriteAtlasRegionExtensions_ToAtlasRegion_m612142553 (Il2CppObject * __this /* static, unused */, Sprite_t309593783 * ___s0, Material_t193706927 * ___material1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.AtlasRegion Spine.Unity.Modules.AttachmentTools.SpriteAtlasRegionExtensions::ToAtlasRegionPMAClone(UnityEngine.Sprite,UnityEngine.Shader,UnityEngine.TextureFormat,System.Boolean,UnityEngine.Material)
extern "C"  AtlasRegion_t3803683715 * SpriteAtlasRegionExtensions_ToAtlasRegionPMAClone_m2042533910 (Il2CppObject * __this /* static, unused */, Sprite_t309593783 * ___s0, Shader_t2430389951 * ___shader1, int32_t ___textureFormat2, bool ___mipmaps3, Material_t193706927 * ___materialPropertySource4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.AtlasRegion Spine.Unity.Modules.AttachmentTools.SpriteAtlasRegionExtensions::ToAtlasRegionPMAClone(UnityEngine.Sprite,UnityEngine.Material,UnityEngine.TextureFormat,System.Boolean)
extern "C"  AtlasRegion_t3803683715 * SpriteAtlasRegionExtensions_ToAtlasRegionPMAClone_m177889982 (Il2CppObject * __this /* static, unused */, Sprite_t309593783 * ___s0, Material_t193706927 * ___materialPropertySource1, int32_t ___textureFormat2, bool ___mipmaps3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.AtlasRegion Spine.Unity.Modules.AttachmentTools.SpriteAtlasRegionExtensions::ToAtlasRegion(UnityEngine.Sprite,System.Boolean)
extern "C"  AtlasRegion_t3803683715 * SpriteAtlasRegionExtensions_ToAtlasRegion_m1540450198 (Il2CppObject * __this /* static, unused */, Sprite_t309593783 * ___s0, bool ___isolatedTexture1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Skin Spine.Unity.Modules.AttachmentTools.SpriteAtlasRegionExtensions::GetRepackedSkin(Spine.Skin,System.String,UnityEngine.Material,UnityEngine.Material&,UnityEngine.Texture2D&,System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
extern "C"  Skin_t730126667 * SpriteAtlasRegionExtensions_GetRepackedSkin_m2143419537 (Il2CppObject * __this /* static, unused */, Skin_t730126667 * ___o0, String_t* ___newName1, Material_t193706927 * ___materialPropertySource2, Material_t193706927 ** ___m3, Texture2D_t3542995729 ** ___t4, int32_t ___maxAtlasSize5, int32_t ___padding6, int32_t ___textureFormat7, bool ___mipmaps8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Skin Spine.Unity.Modules.AttachmentTools.SpriteAtlasRegionExtensions::GetRepackedSkin(Spine.Skin,System.String,UnityEngine.Shader,UnityEngine.Material&,UnityEngine.Texture2D&,System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,UnityEngine.Material)
extern "C"  Skin_t730126667 * SpriteAtlasRegionExtensions_GetRepackedSkin_m1683611751 (Il2CppObject * __this /* static, unused */, Skin_t730126667 * ___o0, String_t* ___newName1, Shader_t2430389951 * ___shader2, Material_t193706927 ** ___m3, Texture2D_t3542995729 ** ___t4, int32_t ___maxAtlasSize5, int32_t ___padding6, int32_t ___textureFormat7, bool ___mipmaps8, Material_t193706927 * ___materialPropertySource9, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite Spine.Unity.Modules.AttachmentTools.SpriteAtlasRegionExtensions::ToSprite(Spine.AtlasRegion,System.Single)
extern "C"  Sprite_t309593783 * SpriteAtlasRegionExtensions_ToSprite_m3547381602 (Il2CppObject * __this /* static, unused */, AtlasRegion_t3803683715 * ___ar0, float ___pixelsPerUnit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.AttachmentTools.SpriteAtlasRegionExtensions::ClearCache()
extern "C"  void SpriteAtlasRegionExtensions_ClearCache_m1584379205 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D Spine.Unity.Modules.AttachmentTools.SpriteAtlasRegionExtensions::ToTexture(Spine.AtlasRegion,System.Boolean,UnityEngine.TextureFormat,System.Boolean)
extern "C"  Texture2D_t3542995729 * SpriteAtlasRegionExtensions_ToTexture_m2684419046 (Il2CppObject * __this /* static, unused */, AtlasRegion_t3803683715 * ___ar0, bool ___applyImmediately1, int32_t ___textureFormat2, bool ___mipmaps3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D Spine.Unity.Modules.AttachmentTools.SpriteAtlasRegionExtensions::ToTexture(UnityEngine.Sprite,System.Boolean,UnityEngine.TextureFormat,System.Boolean)
extern "C"  Texture2D_t3542995729 * SpriteAtlasRegionExtensions_ToTexture_m2688855642 (Il2CppObject * __this /* static, unused */, Sprite_t309593783 * ___s0, bool ___applyImmediately1, int32_t ___textureFormat2, bool ___mipmaps3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D Spine.Unity.Modules.AttachmentTools.SpriteAtlasRegionExtensions::GetClone(UnityEngine.Texture2D,System.Boolean,UnityEngine.TextureFormat,System.Boolean)
extern "C"  Texture2D_t3542995729 * SpriteAtlasRegionExtensions_GetClone_m3665290317 (Il2CppObject * __this /* static, unused */, Texture2D_t3542995729 * ___t0, bool ___applyImmediately1, int32_t ___textureFormat2, bool ___mipmaps3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Spine.Unity.Modules.AttachmentTools.SpriteAtlasRegionExtensions::IsRenderable(Spine.Attachment)
extern "C"  bool SpriteAtlasRegionExtensions_IsRenderable_m3714593016 (Il2CppObject * __this /* static, unused */, Attachment_t2584075367 * ___a0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Spine.Unity.Modules.AttachmentTools.SpriteAtlasRegionExtensions::SpineUnityFlipRect(UnityEngine.Rect,System.Int32)
extern "C"  Rect_t3681755626  SpriteAtlasRegionExtensions_SpineUnityFlipRect_m1412682687 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___rect0, int32_t ___textureHeight1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Spine.Unity.Modules.AttachmentTools.SpriteAtlasRegionExtensions::GetUnityRect(Spine.AtlasRegion)
extern "C"  Rect_t3681755626  SpriteAtlasRegionExtensions_GetUnityRect_m2132151701 (Il2CppObject * __this /* static, unused */, AtlasRegion_t3803683715 * ___region0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Spine.Unity.Modules.AttachmentTools.SpriteAtlasRegionExtensions::GetUnityRect(Spine.AtlasRegion,System.Int32)
extern "C"  Rect_t3681755626  SpriteAtlasRegionExtensions_GetUnityRect_m3289627608 (Il2CppObject * __this /* static, unused */, AtlasRegion_t3803683715 * ___region0, int32_t ___textureHeight1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Spine.Unity.Modules.AttachmentTools.SpriteAtlasRegionExtensions::GetSpineAtlasRect(Spine.AtlasRegion,System.Boolean)
extern "C"  Rect_t3681755626  SpriteAtlasRegionExtensions_GetSpineAtlasRect_m3581889531 (Il2CppObject * __this /* static, unused */, AtlasRegion_t3803683715 * ___region0, bool ___includeRotate1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Spine.Unity.Modules.AttachmentTools.SpriteAtlasRegionExtensions::UVRectToTextureRect(UnityEngine.Rect,System.Int32,System.Int32)
extern "C"  Rect_t3681755626  SpriteAtlasRegionExtensions_UVRectToTextureRect_m1362382706 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___uvRect0, int32_t ___texWidth1, int32_t ___texHeight2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Spine.Unity.Modules.AttachmentTools.SpriteAtlasRegionExtensions::TextureRectToUVRect(UnityEngine.Rect,System.Int32,System.Int32)
extern "C"  Rect_t3681755626  SpriteAtlasRegionExtensions_TextureRectToUVRect_m3102119026 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___textureRect0, int32_t ___texWidth1, int32_t ___texHeight2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.AtlasRegion Spine.Unity.Modules.AttachmentTools.SpriteAtlasRegionExtensions::UVRectToAtlasRegion(UnityEngine.Rect,System.String,Spine.AtlasPage,System.Single,System.Single,System.Boolean)
extern "C"  AtlasRegion_t3803683715 * SpriteAtlasRegionExtensions_UVRectToAtlasRegion_m3214328429 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___uvRect0, String_t* ___name1, AtlasPage_t1041509742 * ___page2, float ___offsetX3, float ___offsetY4, bool ___rotate5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.AtlasRegion Spine.Unity.Modules.AttachmentTools.SpriteAtlasRegionExtensions::GetAtlasRegion(Spine.Attachment)
extern "C"  AtlasRegion_t3803683715 * SpriteAtlasRegionExtensions_GetAtlasRegion_m2727880764 (Il2CppObject * __this /* static, unused */, Attachment_t2584075367 * ___a0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D Spine.Unity.Modules.AttachmentTools.SpriteAtlasRegionExtensions::GetMainTexture(Spine.AtlasRegion)
extern "C"  Texture2D_t3542995729 * SpriteAtlasRegionExtensions_GetMainTexture_m4166613435 (Il2CppObject * __this /* static, unused */, AtlasRegion_t3803683715 * ___region0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.AttachmentTools.SpriteAtlasRegionExtensions::ApplyPMA(UnityEngine.Texture2D,System.Boolean)
extern "C"  void SpriteAtlasRegionExtensions_ApplyPMA_m2261457501 (Il2CppObject * __this /* static, unused */, Texture2D_t3542995729 * ___texture0, bool ___applyImmediately1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.Unity.Modules.AttachmentTools.SpriteAtlasRegionExtensions::InverseLerp(System.Single,System.Single,System.Single)
extern "C"  float SpriteAtlasRegionExtensions_InverseLerp_m2514839578 (Il2CppObject * __this /* static, unused */, float ___a0, float ___b1, float ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
