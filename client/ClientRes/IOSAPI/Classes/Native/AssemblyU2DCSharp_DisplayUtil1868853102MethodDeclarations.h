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

// DisplayUtil
struct DisplayUtil_t1868853102;
// UnityEngine.Animation
struct Animation_t2068071072;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.UI.Image
struct Image_t2042527209;
// UITexture
struct UITexture_t2537039969;
// UISprite
struct UISprite_t603616735;
// UnityEngine.UI.RawImage
struct RawImage_t2749640213;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t1158329972;
// UnityEngine.Camera
struct Camera_t189460977;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Animation2068071072.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_WrapMode255797857.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UI_UnityEngine_UI_Image2042527209.h"
#include "AssemblyU2DCSharp_UITexture2537039969.h"
#include "AssemblyU2DCSharp_UISprite603616735.h"
#include "UnityEngine_UI_UnityEngine_UI_RawImage2749640213.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Camera189460977.h"

// System.Void DisplayUtil::.ctor()
extern "C"  void DisplayUtil__ctor_m1551268241 (DisplayUtil_t1868853102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DisplayUtil::Play(UnityEngine.Animation,System.String,UnityEngine.WrapMode,System.Single)
extern "C"  void DisplayUtil_Play_m153274247 (Il2CppObject * __this /* static, unused */, Animation_t2068071072 * ___ani0, String_t* ___aniName1, int32_t ___type2, float ___acc3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String DisplayUtil::CurrentAnimationName(UnityEngine.Animation)
extern "C"  String_t* DisplayUtil_CurrentAnimationName_m2599375341 (Il2CppObject * __this /* static, unused */, Animation_t2068071072 * ___ani0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DisplayUtil::SetGrayFiter(UnityEngine.GameObject,System.Boolean)
extern "C"  void DisplayUtil_SetGrayFiter_m100138181 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___target0, bool ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DisplayUtil::SetGrayFiter(UnityEngine.UI.Image,System.Boolean)
extern "C"  void DisplayUtil_SetGrayFiter_m3405918891 (Il2CppObject * __this /* static, unused */, Image_t2042527209 * ___target0, bool ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DisplayUtil::SetGrayFiter(UITexture,System.Boolean)
extern "C"  void DisplayUtil_SetGrayFiter_m266111540 (Il2CppObject * __this /* static, unused */, UITexture_t2537039969 * ___target0, bool ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DisplayUtil::SetGrayFiter(UISprite,System.Boolean)
extern "C"  void DisplayUtil_SetGrayFiter_m3007143368 (Il2CppObject * __this /* static, unused */, UISprite_t603616735 * ___target0, bool ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DisplayUtil::SetGrayFiter(UnityEngine.UI.RawImage,System.Boolean)
extern "C"  void DisplayUtil_SetGrayFiter_m1668617623 (Il2CppObject * __this /* static, unused */, RawImage_t2749640213 * ___target0, bool ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DisplayUtil::CheckClickedUI()
extern "C"  bool DisplayUtil_CheckClickedUI_m128184208 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DisplayUtil::removeChild(UnityEngine.GameObject)
extern "C"  void DisplayUtil_removeChild_m2945806629 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___child0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DisplayUtil::addChild(UnityEngine.GameObject,UnityEngine.GameObject)
extern "C"  void DisplayUtil_addChild_m2341901120 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___pan0, GameObject_t1756533147 * ___target1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DisplayUtil::RemoveChildren(UnityEngine.Transform)
extern "C"  void DisplayUtil_RemoveChildren_m4015040891 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___trans0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DisplayUtil::RemoveChildren(UnityEngine.GameObject)
extern "C"  void DisplayUtil_RemoveChildren_m1931154444 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___go0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DisplayUtil::RemoveChildren(UnityEngine.MonoBehaviour)
extern "C"  void DisplayUtil_RemoveChildren_m2578959689 (Il2CppObject * __this /* static, unused */, MonoBehaviour_t1158329972 * ___compenont0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform DisplayUtil::SearchHierarchyForBone(UnityEngine.Transform,System.String)
extern "C"  Transform_t3275118058 * DisplayUtil_SearchHierarchyForBone_m846934852 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___current0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DisplayUtil::IsVisible(UnityEngine.Vector3,UnityEngine.Camera)
extern "C"  bool DisplayUtil_IsVisible_m3164413732 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___testPoint0, Camera_t189460977 * ___camera1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DisplayUtil::ResetSkinedMeshShader(UnityEngine.Transform,System.Boolean)
extern "C"  void DisplayUtil_ResetSkinedMeshShader_m2651776354 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___target0, bool ___isChild1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DisplayUtil::ResetMeshShader(UnityEngine.Transform,System.Boolean)
extern "C"  void DisplayUtil_ResetMeshShader_m3571027218 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___target0, bool ___isChild1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
