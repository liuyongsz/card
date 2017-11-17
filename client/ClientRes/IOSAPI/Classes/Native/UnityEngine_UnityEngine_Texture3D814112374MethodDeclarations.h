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

// UnityEngine.Texture3D
struct Texture3D_t814112374;
// UnityEngine.Color[]
struct ColorU5BU5D_t672350442;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_TextureFormat1386130234.h"
#include "UnityEngine_UnityEngine_Texture3D814112374.h"

// System.Void UnityEngine.Texture3D::.ctor(System.Int32,System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
extern "C"  void Texture3D__ctor_m3177496444 (Texture3D_t814112374 * __this, int32_t ___width0, int32_t ___height1, int32_t ___depth2, int32_t ___format3, bool ___mipmap4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture3D::SetPixels(UnityEngine.Color[],System.Int32)
extern "C"  void Texture3D_SetPixels_m2346154517 (Texture3D_t814112374 * __this, ColorU5BU5D_t672350442* ___colors0, int32_t ___miplevel1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture3D::SetPixels(UnityEngine.Color[])
extern "C"  void Texture3D_SetPixels_m946476760 (Texture3D_t814112374 * __this, ColorU5BU5D_t672350442* ___colors0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture3D::Apply(System.Boolean,System.Boolean)
extern "C"  void Texture3D_Apply_m415103973 (Texture3D_t814112374 * __this, bool ___updateMipmaps0, bool ___makeNoLongerReadable1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture3D::Apply()
extern "C"  void Texture3D_Apply_m1438724325 (Texture3D_t814112374 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture3D::Internal_Create(UnityEngine.Texture3D,System.Int32,System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
extern "C"  void Texture3D_Internal_Create_m3763382815 (Il2CppObject * __this /* static, unused */, Texture3D_t814112374 * ___mono0, int32_t ___width1, int32_t ___height2, int32_t ___depth3, int32_t ___format4, bool ___mipmap5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
