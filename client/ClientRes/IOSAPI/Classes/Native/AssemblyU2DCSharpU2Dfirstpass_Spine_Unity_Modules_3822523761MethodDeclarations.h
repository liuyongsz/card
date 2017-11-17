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

// Spine.Unity.Modules.SlotBlendModes
struct SlotBlendModes_t3822523761;
// System.Collections.Generic.Dictionary`2<Spine.Unity.Modules.SlotBlendModes/MaterialTexturePair,UnityEngine.Material>
struct Dictionary_2_t1385650963;
// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Material193706927.h"
#include "UnityEngine_UnityEngine_Texture2D3542995729.h"

// System.Void Spine.Unity.Modules.SlotBlendModes::.ctor()
extern "C"  void SlotBlendModes__ctor_m1761794109 (SlotBlendModes_t3822523761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<Spine.Unity.Modules.SlotBlendModes/MaterialTexturePair,UnityEngine.Material> Spine.Unity.Modules.SlotBlendModes::get_MaterialTable()
extern "C"  Dictionary_2_t1385650963 * SlotBlendModes_get_MaterialTable_m493427490 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material Spine.Unity.Modules.SlotBlendModes::GetMaterialFor(UnityEngine.Material,UnityEngine.Texture2D)
extern "C"  Material_t193706927 * SlotBlendModes_GetMaterialFor_m3079376528 (Il2CppObject * __this /* static, unused */, Material_t193706927 * ___materialSource0, Texture2D_t3542995729 * ___texture1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Spine.Unity.Modules.SlotBlendModes::get_Applied()
extern "C"  bool SlotBlendModes_get_Applied_m997442357 (SlotBlendModes_t3822523761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.SlotBlendModes::set_Applied(System.Boolean)
extern "C"  void SlotBlendModes_set_Applied_m1514728532 (SlotBlendModes_t3822523761 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.SlotBlendModes::Start()
extern "C"  void SlotBlendModes_Start_m76020045 (SlotBlendModes_t3822523761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.SlotBlendModes::OnDestroy()
extern "C"  void SlotBlendModes_OnDestroy_m2057745578 (SlotBlendModes_t3822523761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.SlotBlendModes::Apply()
extern "C"  void SlotBlendModes_Apply_m3615800973 (SlotBlendModes_t3822523761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.SlotBlendModes::Remove()
extern "C"  void SlotBlendModes_Remove_m2923886823 (SlotBlendModes_t3822523761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.SlotBlendModes::GetTexture()
extern "C"  void SlotBlendModes_GetTexture_m524035152 (SlotBlendModes_t3822523761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
