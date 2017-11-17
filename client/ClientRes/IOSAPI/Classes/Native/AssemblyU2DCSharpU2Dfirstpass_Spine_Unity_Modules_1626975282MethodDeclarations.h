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

// Spine.Attachment
struct Attachment_t2584075367;
// Spine.RegionAttachment
struct RegionAttachment_t3278399543;
// Spine.ClippingAttachment
struct ClippingAttachment_t2377737933;
// Spine.PointAttachment
struct PointAttachment_t1186135803;
// Spine.BoundingBoxAttachment
struct BoundingBoxAttachment_t1898929740;
// Spine.MeshAttachment
struct MeshAttachment_t1666512816;
// Spine.PathAttachment
struct PathAttachment_t2721492598;
// Spine.VertexAttachment
struct VertexAttachment_t2755655897;
// System.String
struct String_t;
// Spine.AtlasRegion
struct AtlasRegion_t3803683715;
// UnityEngine.Sprite
struct Sprite_t309593783;
// UnityEngine.Shader
struct Shader_t2430389951;
// UnityEngine.Material
struct Material_t193706927;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_Attachment2584075367.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_RegionAttachme3278399543.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_ClippingAttach2377737933.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_PointAttachmen1186135803.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_BoundingBoxAtt1898929740.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_MeshAttachment1666512816.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_PathAttachment2721492598.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_VertexAttachme2755655897.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_AtlasRegion3803683715.h"
#include "UnityEngine_UnityEngine_Sprite309593783.h"
#include "UnityEngine_UnityEngine_Shader2430389951.h"
#include "UnityEngine_UnityEngine_Material193706927.h"

// Spine.Attachment Spine.Unity.Modules.AttachmentTools.AttachmentCloneExtensions::GetClone(Spine.Attachment,System.Boolean)
extern "C"  Attachment_t2584075367 * AttachmentCloneExtensions_GetClone_m2391297717 (Il2CppObject * __this /* static, unused */, Attachment_t2584075367 * ___o0, bool ___cloneMeshesAsLinked1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.RegionAttachment Spine.Unity.Modules.AttachmentTools.AttachmentCloneExtensions::GetClone(Spine.RegionAttachment)
extern "C"  RegionAttachment_t3278399543 * AttachmentCloneExtensions_GetClone_m191177754 (Il2CppObject * __this /* static, unused */, RegionAttachment_t3278399543 * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.ClippingAttachment Spine.Unity.Modules.AttachmentTools.AttachmentCloneExtensions::GetClone(Spine.ClippingAttachment)
extern "C"  ClippingAttachment_t2377737933 * AttachmentCloneExtensions_GetClone_m2169051802 (Il2CppObject * __this /* static, unused */, ClippingAttachment_t2377737933 * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.PointAttachment Spine.Unity.Modules.AttachmentTools.AttachmentCloneExtensions::GetClone(Spine.PointAttachment)
extern "C"  PointAttachment_t1186135803 * AttachmentCloneExtensions_GetClone_m2661219130 (Il2CppObject * __this /* static, unused */, PointAttachment_t1186135803 * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.BoundingBoxAttachment Spine.Unity.Modules.AttachmentTools.AttachmentCloneExtensions::GetClone(Spine.BoundingBoxAttachment)
extern "C"  BoundingBoxAttachment_t1898929740 * AttachmentCloneExtensions_GetClone_m515046650 (Il2CppObject * __this /* static, unused */, BoundingBoxAttachment_t1898929740 * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.MeshAttachment Spine.Unity.Modules.AttachmentTools.AttachmentCloneExtensions::GetLinkedClone(Spine.MeshAttachment,System.Boolean)
extern "C"  MeshAttachment_t1666512816 * AttachmentCloneExtensions_GetLinkedClone_m2323502558 (Il2CppObject * __this /* static, unused */, MeshAttachment_t1666512816 * ___o0, bool ___inheritDeform1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.MeshAttachment Spine.Unity.Modules.AttachmentTools.AttachmentCloneExtensions::GetClone(Spine.MeshAttachment)
extern "C"  MeshAttachment_t1666512816 * AttachmentCloneExtensions_GetClone_m113132088 (Il2CppObject * __this /* static, unused */, MeshAttachment_t1666512816 * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.PathAttachment Spine.Unity.Modules.AttachmentTools.AttachmentCloneExtensions::GetClone(Spine.PathAttachment)
extern "C"  PathAttachment_t2721492598 * AttachmentCloneExtensions_GetClone_m1430994568 (Il2CppObject * __this /* static, unused */, PathAttachment_t2721492598 * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.AttachmentTools.AttachmentCloneExtensions::CloneVertexAttachment(Spine.VertexAttachment,Spine.VertexAttachment)
extern "C"  void AttachmentCloneExtensions_CloneVertexAttachment_m1627851284 (Il2CppObject * __this /* static, unused */, VertexAttachment_t2755655897 * ___src0, VertexAttachment_t2755655897 * ___dest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.MeshAttachment Spine.Unity.Modules.AttachmentTools.AttachmentCloneExtensions::GetLinkedMesh(Spine.MeshAttachment,System.String,Spine.AtlasRegion,System.Boolean)
extern "C"  MeshAttachment_t1666512816 * AttachmentCloneExtensions_GetLinkedMesh_m416993312 (Il2CppObject * __this /* static, unused */, MeshAttachment_t1666512816 * ___o0, String_t* ___newLinkedMeshName1, AtlasRegion_t3803683715 * ___region2, bool ___inheritDeform3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.MeshAttachment Spine.Unity.Modules.AttachmentTools.AttachmentCloneExtensions::GetLinkedMesh(Spine.MeshAttachment,UnityEngine.Sprite,UnityEngine.Shader,System.Boolean,UnityEngine.Material)
extern "C"  MeshAttachment_t1666512816 * AttachmentCloneExtensions_GetLinkedMesh_m667590038 (Il2CppObject * __this /* static, unused */, MeshAttachment_t1666512816 * ___o0, Sprite_t309593783 * ___sprite1, Shader_t2430389951 * ___shader2, bool ___inheritDeform3, Material_t193706927 * ___materialPropertySource4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.MeshAttachment Spine.Unity.Modules.AttachmentTools.AttachmentCloneExtensions::GetLinkedMesh(Spine.MeshAttachment,UnityEngine.Sprite,UnityEngine.Material,System.Boolean)
extern "C"  MeshAttachment_t1666512816 * AttachmentCloneExtensions_GetLinkedMesh_m2216371890 (Il2CppObject * __this /* static, unused */, MeshAttachment_t1666512816 * ___o0, Sprite_t309593783 * ___sprite1, Material_t193706927 * ___materialPropertySource2, bool ___inheritDeform3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Attachment Spine.Unity.Modules.AttachmentTools.AttachmentCloneExtensions::GetRemappedClone(Spine.Attachment,UnityEngine.Sprite,UnityEngine.Material,System.Boolean,System.Boolean,System.Boolean)
extern "C"  Attachment_t2584075367 * AttachmentCloneExtensions_GetRemappedClone_m3218827621 (Il2CppObject * __this /* static, unused */, Attachment_t2584075367 * ___o0, Sprite_t309593783 * ___sprite1, Material_t193706927 * ___sourceMaterial2, bool ___premultiplyAlpha3, bool ___cloneMeshAsLinked4, bool ___useOriginalRegionSize5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Attachment Spine.Unity.Modules.AttachmentTools.AttachmentCloneExtensions::GetRemappedClone(Spine.Attachment,Spine.AtlasRegion,System.Boolean,System.Boolean,System.Single)
extern "C"  Attachment_t2584075367 * AttachmentCloneExtensions_GetRemappedClone_m3105116561 (Il2CppObject * __this /* static, unused */, Attachment_t2584075367 * ___o0, AtlasRegion_t3803683715 * ___atlasRegion1, bool ___cloneMeshAsLinked2, bool ___useOriginalRegionSize3, float ___scale4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
