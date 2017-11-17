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

// UnityEngine.Camera
struct Camera_t189460977;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "UnityEngine_UnityEngine_Camera189460977.h"

// System.Void UnityEngine.GL::Vertex3(System.Single,System.Single,System.Single)
extern "C"  void GL_Vertex3_m3998822656 (Il2CppObject * __this /* static, unused */, float ___x0, float ___y1, float ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::TexCoord2(System.Single,System.Single)
extern "C"  void GL_TexCoord2_m86781742 (Il2CppObject * __this /* static, unused */, float ___x0, float ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::MultiTexCoord2(System.Int32,System.Single,System.Single)
extern "C"  void GL_MultiTexCoord2_m1762705660 (Il2CppObject * __this /* static, unused */, int32_t ___unit0, float ___x1, float ___y2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::BeginInternal(System.Int32)
extern "C"  void GL_BeginInternal_m1538792559 (Il2CppObject * __this /* static, unused */, int32_t ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::Begin(System.Int32)
extern "C"  void GL_Begin_m3874173032 (Il2CppObject * __this /* static, unused */, int32_t ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::End()
extern "C"  void GL_End_m2374230645 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::LoadOrtho()
extern "C"  void GL_LoadOrtho_m3764403102 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::LoadProjectionMatrix(UnityEngine.Matrix4x4)
extern "C"  void GL_LoadProjectionMatrix_m2842415498 (Il2CppObject * __this /* static, unused */, Matrix4x4_t2933234003  ___mat0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::INTERNAL_CALL_LoadProjectionMatrix(UnityEngine.Matrix4x4&)
extern "C"  void GL_INTERNAL_CALL_LoadProjectionMatrix_m427563369 (Il2CppObject * __this /* static, unused */, Matrix4x4_t2933234003 * ___mat0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::LoadIdentity()
extern "C"  void GL_LoadIdentity_m2076463132 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::PushMatrix()
extern "C"  void GL_PushMatrix_m1979053131 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::PopMatrix()
extern "C"  void GL_PopMatrix_m856033754 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.GL::GetGPUProjectionMatrix(UnityEngine.Matrix4x4,System.Boolean)
extern "C"  Matrix4x4_t2933234003  GL_GetGPUProjectionMatrix_m3559361256 (Il2CppObject * __this /* static, unused */, Matrix4x4_t2933234003  ___proj0, bool ___renderIntoTexture1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::INTERNAL_CALL_GetGPUProjectionMatrix(UnityEngine.Matrix4x4&,System.Boolean,UnityEngine.Matrix4x4&)
extern "C"  void GL_INTERNAL_CALL_GetGPUProjectionMatrix_m1814292684 (Il2CppObject * __this /* static, unused */, Matrix4x4_t2933234003 * ___proj0, bool ___renderIntoTexture1, Matrix4x4_t2933234003 * ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::Clear(System.Boolean,System.Boolean,UnityEngine.Color)
extern "C"  void GL_Clear_m154870981 (Il2CppObject * __this /* static, unused */, bool ___clearDepth0, bool ___clearColor1, Color_t2020392075  ___backgroundColor2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::Clear(System.Boolean,System.Boolean,UnityEngine.Color,System.Single)
extern "C"  void GL_Clear_m2110364678 (Il2CppObject * __this /* static, unused */, bool ___clearDepth0, bool ___clearColor1, Color_t2020392075  ___backgroundColor2, float ___depth3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::Internal_Clear(System.Boolean,System.Boolean,UnityEngine.Color,System.Single)
extern "C"  void GL_Internal_Clear_m3348289810 (Il2CppObject * __this /* static, unused */, bool ___clearDepth0, bool ___clearColor1, Color_t2020392075  ___backgroundColor2, float ___depth3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::INTERNAL_CALL_Internal_Clear(System.Boolean,System.Boolean,UnityEngine.Color&,System.Single)
extern "C"  void GL_INTERNAL_CALL_Internal_Clear_m1893090931 (Il2CppObject * __this /* static, unused */, bool ___clearDepth0, bool ___clearColor1, Color_t2020392075 * ___backgroundColor2, float ___depth3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::ClearWithSkybox(System.Boolean,UnityEngine.Camera)
extern "C"  void GL_ClearWithSkybox_m1456702260 (Il2CppObject * __this /* static, unused */, bool ___clearDepth0, Camera_t189460977 * ___camera1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
