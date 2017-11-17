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
// Spine.Attachment
struct Attachment_t2584075367;
// Spine.RegionAttachment
struct RegionAttachment_t3278399543;
// Spine.MeshAttachment
struct MeshAttachment_t1666512816;
// UnityEngine.Sprite
struct Sprite_t309593783;
// UnityEngine.Material
struct Material_t193706927;
// Spine.AtlasPage
struct AtlasPage_t1041509742;
// UnityEngine.Shader
struct Shader_t2430389951;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_Attachment2584075367.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_RegionAttachme3278399543.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_MeshAttachment1666512816.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_AtlasRegion3803683715.h"
#include "UnityEngine_UnityEngine_Sprite309593783.h"
#include "UnityEngine_UnityEngine_Material193706927.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_AtlasPage1041509742.h"
#include "UnityEngine_UnityEngine_Shader2430389951.h"
#include "UnityEngine_UnityEngine_TextureFormat1386130234.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// Spine.AtlasRegion Spine.Unity.Modules.AttachmentTools.AttachmentRegionExtensions::GetRegion(Spine.Attachment)
extern "C"  AtlasRegion_t3803683715 * AttachmentRegionExtensions_GetRegion_m3923581316 (Il2CppObject * __this /* static, unused */, Attachment_t2584075367 * ___attachment0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.AtlasRegion Spine.Unity.Modules.AttachmentTools.AttachmentRegionExtensions::GetRegion(Spine.RegionAttachment)
extern "C"  AtlasRegion_t3803683715 * AttachmentRegionExtensions_GetRegion_m3987225120 (Il2CppObject * __this /* static, unused */, RegionAttachment_t3278399543 * ___regionAttachment0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.AtlasRegion Spine.Unity.Modules.AttachmentTools.AttachmentRegionExtensions::GetRegion(Spine.MeshAttachment)
extern "C"  AtlasRegion_t3803683715 * AttachmentRegionExtensions_GetRegion_m271631087 (Il2CppObject * __this /* static, unused */, MeshAttachment_t1666512816 * ___meshAttachment0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.AttachmentTools.AttachmentRegionExtensions::SetRegion(Spine.Attachment,Spine.AtlasRegion,System.Boolean)
extern "C"  void AttachmentRegionExtensions_SetRegion_m2102317530 (Il2CppObject * __this /* static, unused */, Attachment_t2584075367 * ___attachment0, AtlasRegion_t3803683715 * ___region1, bool ___updateOffset2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.AttachmentTools.AttachmentRegionExtensions::SetRegion(Spine.RegionAttachment,Spine.AtlasRegion,System.Boolean)
extern "C"  void AttachmentRegionExtensions_SetRegion_m2762856302 (Il2CppObject * __this /* static, unused */, RegionAttachment_t3278399543 * ___attachment0, AtlasRegion_t3803683715 * ___region1, bool ___updateOffset2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.AttachmentTools.AttachmentRegionExtensions::SetRegion(Spine.MeshAttachment,Spine.AtlasRegion,System.Boolean)
extern "C"  void AttachmentRegionExtensions_SetRegion_m3871390759 (Il2CppObject * __this /* static, unused */, MeshAttachment_t1666512816 * ___attachment0, AtlasRegion_t3803683715 * ___region1, bool ___updateUVs2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.RegionAttachment Spine.Unity.Modules.AttachmentTools.AttachmentRegionExtensions::ToRegionAttachment(UnityEngine.Sprite,UnityEngine.Material)
extern "C"  RegionAttachment_t3278399543 * AttachmentRegionExtensions_ToRegionAttachment_m2736131764 (Il2CppObject * __this /* static, unused */, Sprite_t309593783 * ___sprite0, Material_t193706927 * ___material1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.RegionAttachment Spine.Unity.Modules.AttachmentTools.AttachmentRegionExtensions::ToRegionAttachment(UnityEngine.Sprite,Spine.AtlasPage)
extern "C"  RegionAttachment_t3278399543 * AttachmentRegionExtensions_ToRegionAttachment_m460493997 (Il2CppObject * __this /* static, unused */, Sprite_t309593783 * ___sprite0, AtlasPage_t1041509742 * ___page1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.RegionAttachment Spine.Unity.Modules.AttachmentTools.AttachmentRegionExtensions::ToRegionAttachmentPMAClone(UnityEngine.Sprite,UnityEngine.Shader,UnityEngine.TextureFormat,System.Boolean,UnityEngine.Material)
extern "C"  RegionAttachment_t3278399543 * AttachmentRegionExtensions_ToRegionAttachmentPMAClone_m901083031 (Il2CppObject * __this /* static, unused */, Sprite_t309593783 * ___sprite0, Shader_t2430389951 * ___shader1, int32_t ___textureFormat2, bool ___mipmaps3, Material_t193706927 * ___materialPropertySource4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.RegionAttachment Spine.Unity.Modules.AttachmentTools.AttachmentRegionExtensions::ToRegionAttachmentPMAClone(UnityEngine.Sprite,UnityEngine.Material,UnityEngine.TextureFormat,System.Boolean)
extern "C"  RegionAttachment_t3278399543 * AttachmentRegionExtensions_ToRegionAttachmentPMAClone_m4121058069 (Il2CppObject * __this /* static, unused */, Sprite_t309593783 * ___sprite0, Material_t193706927 * ___materialPropertySource1, int32_t ___textureFormat2, bool ___mipmaps3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.RegionAttachment Spine.Unity.Modules.AttachmentTools.AttachmentRegionExtensions::ToRegionAttachment(Spine.AtlasRegion,System.String,System.Single)
extern "C"  RegionAttachment_t3278399543 * AttachmentRegionExtensions_ToRegionAttachment_m3298671159 (Il2CppObject * __this /* static, unused */, AtlasRegion_t3803683715 * ___region0, String_t* ___attachmentName1, float ___scale2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.AttachmentTools.AttachmentRegionExtensions::SetScale(Spine.RegionAttachment,UnityEngine.Vector2)
extern "C"  void AttachmentRegionExtensions_SetScale_m1102139803 (Il2CppObject * __this /* static, unused */, RegionAttachment_t3278399543 * ___regionAttachment0, Vector2_t2243707579  ___scale1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.AttachmentTools.AttachmentRegionExtensions::SetScale(Spine.RegionAttachment,System.Single,System.Single)
extern "C"  void AttachmentRegionExtensions_SetScale_m4195971031 (Il2CppObject * __this /* static, unused */, RegionAttachment_t3278399543 * ___regionAttachment0, float ___x1, float ___y2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.AttachmentTools.AttachmentRegionExtensions::SetPositionOffset(Spine.RegionAttachment,UnityEngine.Vector2)
extern "C"  void AttachmentRegionExtensions_SetPositionOffset_m406014983 (Il2CppObject * __this /* static, unused */, RegionAttachment_t3278399543 * ___regionAttachment0, Vector2_t2243707579  ___offset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.AttachmentTools.AttachmentRegionExtensions::SetPositionOffset(Spine.RegionAttachment,System.Single,System.Single)
extern "C"  void AttachmentRegionExtensions_SetPositionOffset_m110548891 (Il2CppObject * __this /* static, unused */, RegionAttachment_t3278399543 * ___regionAttachment0, float ___x1, float ___y2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.AttachmentTools.AttachmentRegionExtensions::SetRotation(Spine.RegionAttachment,System.Single)
extern "C"  void AttachmentRegionExtensions_SetRotation_m1198189212 (Il2CppObject * __this /* static, unused */, RegionAttachment_t3278399543 * ___regionAttachment0, float ___rotation1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
