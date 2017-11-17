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

// ModelUIManager
struct ModelUIManager_t2068242546;
// System.String
struct String_t;
// ModelUIManager/LoadHighUiModelComplete
struct LoadHighUiModelComplete_t3509429131;
// UnityEngine.Transform
struct Transform_t3275118058;
// UITexture
struct UITexture_t2537039969;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// ModelUIManager/UIModelInfo
struct UIModelInfo_t2926380586;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_ModelUIManager_LoadHighUiModelCo3509429131.h"
#include "AssemblyU2DCSharp_UITexture2537039969.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "AssemblyU2DCSharp_ModelUIManager_UIModelInfo2926380586.h"

// System.Void ModelUIManager::.ctor()
extern "C"  void ModelUIManager__ctor_m1582256567 (ModelUIManager_t2068242546 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ModelUIManager::.cctor()
extern "C"  void ModelUIManager__cctor_m2512683940 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ModelUIManager::Clear()
extern "C"  void ModelUIManager_Clear_m3277494200 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ModelUIManager::ClearModels()
extern "C"  void ModelUIManager_ClearModels_m2422208518 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ModelUIManager::CreateModel(System.String,System.String,ModelUIManager/LoadHighUiModelComplete)
extern "C"  void ModelUIManager_CreateModel_m3495460693 (Il2CppObject * __this /* static, unused */, String_t* ___modelId0, String_t* ___path1, LoadHighUiModelComplete_t3509429131 * ___call2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ModelUIManager::CreatePlayerModel(System.String,System.String,ModelUIManager/LoadHighUiModelComplete)
extern "C"  void ModelUIManager_CreatePlayerModel_m1105246916 (Il2CppObject * __this /* static, unused */, String_t* ___modelId0, String_t* ___path1, LoadHighUiModelComplete_t3509429131 * ___call2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform ModelUIManager::CreateModelBgPlane(UITexture,UnityEngine.Transform,System.Int32)
extern "C"  Transform_t3275118058 * ModelUIManager_CreateModelBgPlane_m3024870846 (Il2CppObject * __this /* static, unused */, UITexture_t2537039969 * ___uiTex0, Transform_t3275118058 * ___parent1, int32_t ___layer2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ModelUIManager::AddLight(UnityEngine.GameObject,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void ModelUIManager_AddLight_m4193559998 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___root0, Vector3_t2243707580  ___pos1, Vector3_t2243707580  ___rot2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ModelUIManager::ChangeShader(UnityEngine.GameObject,System.String,System.String,System.String)
extern "C"  void ModelUIManager_ChangeShader_m453762130 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___role0, String_t* ___strShaderPath1, String_t* ___strPrefix2, String_t* ___tag3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ModelUIManager::AttachModel(UnityEngine.GameObject,UnityEngine.GameObject)
extern "C"  void ModelUIManager_AttachModel_m335186131 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___oGo0, GameObject_t1756533147 * ___oChild1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ModelUIManager::SetLight(ModelUIManager/UIModelInfo,System.Boolean,System.Single,System.Single,System.Single,System.Single)
extern "C"  void ModelUIManager_SetLight_m1517901846 (Il2CppObject * __this /* static, unused */, UIModelInfo_t2926380586 * ___uInfo0, bool ___bLight1, float ___fIntensity2, float ___fPosX3, float ___fPosY4, float ___fPosZ5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ModelUIManager::ClearAll()
extern "C"  void ModelUIManager_ClearAll_m2817774783 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ModelUIManager::DestroryUIModel(ModelUIManager/UIModelInfo,System.Boolean)
extern "C"  void ModelUIManager_DestroryUIModel_m3983056521 (Il2CppObject * __this /* static, unused */, UIModelInfo_t2926380586 * ___uInfo0, bool ___isCached1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ModelUIManager::SetLayer(UnityEngine.GameObject,System.Int32)
extern "C"  void ModelUIManager_SetLayer_m3095302763 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___go0, int32_t ___layer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
