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

// live2d.Live2DModelUnity
struct Live2DModelUnity_t3366005376;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// System.IO.Stream
struct Stream_t3255436806;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// live2d.　　 　
struct U3000U3000U20U3000_t4204317150;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"
#include "UnityEngine_UnityEngine_Texture2D3542995729.h"
#include "mscorlib_System_IO_Stream3255436806.h"

// System.Void live2d.Live2DModelUnity::.ctor()
extern "C"  void Live2DModelUnity__ctor_m2995379412 (Live2DModelUnity_t3366005376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void live2d.Live2DModelUnity::setMatrix(UnityEngine.Matrix4x4)
extern "C"  void Live2DModelUnity_setMatrix_m3854669243 (Live2DModelUnity_t3366005376 * __this, Matrix4x4_t2933234003  ___mat0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void live2d.Live2DModelUnity::update()
extern "C"  void Live2DModelUnity_update_m980311895 (Live2DModelUnity_t3366005376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void live2d.Live2DModelUnity::draw()
extern "C"  void Live2DModelUnity_draw_m1237956616 (Live2DModelUnity_t3366005376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void live2d.Live2DModelUnity::setTexture(System.Int32,UnityEngine.Texture2D)
extern "C"  void Live2DModelUnity_setTexture_m2150166964 (Live2DModelUnity_t3366005376 * __this, int32_t ___textureNo0, Texture2D_t3542995729 * ___texture1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// live2d.Live2DModelUnity live2d.Live2DModelUnity::loadModel(System.IO.Stream)
extern "C"  Live2DModelUnity_t3366005376 * Live2DModelUnity_loadModel_m378197041 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___bin0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// live2d.Live2DModelUnity live2d.Live2DModelUnity::loadModel(System.Byte[])
extern "C"  Live2DModelUnity_t3366005376 * Live2DModelUnity_loadModel_m2077219825 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___bin0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// live2d.　　 　 live2d.Live2DModelUnity:: ()
extern "C"  U3000U3000U20U3000_t4204317150 * Live2DModelUnity_U20_m1325369147 (Live2DModelUnity_t3366005376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void live2d.Live2DModelUnity::setCulling(System.Boolean)
extern "C"  void Live2DModelUnity_setCulling_m1504672997 (Live2DModelUnity_t3366005376 * __this, bool ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 live2d.Live2DModelUnity::getRenderMode()
extern "C"  int32_t Live2DModelUnity_getRenderMode_m3150080383 (Live2DModelUnity_t3366005376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void live2d.Live2DModelUnity::.cctor()
extern "C"  void Live2DModelUnity__cctor_m2950620665 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
