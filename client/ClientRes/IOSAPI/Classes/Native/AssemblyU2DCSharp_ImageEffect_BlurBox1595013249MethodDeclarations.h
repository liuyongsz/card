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

// ImageEffect_BlurBox
struct ImageEffect_BlurBox_t1595013249;
// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.RenderTexture
struct RenderTexture_t2666733923;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RenderTexture2666733923.h"

// System.Void ImageEffect_BlurBox::.ctor()
extern "C"  void ImageEffect_BlurBox__ctor_m2561998452 (ImageEffect_BlurBox_t1595013249 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material ImageEffect_BlurBox::get_material()
extern "C"  Material_t193706927 * ImageEffect_BlurBox_get_material_m3514807365 (ImageEffect_BlurBox_t1595013249 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ImageEffect_BlurBox::Start()
extern "C"  void ImageEffect_BlurBox_Start_m393012828 (ImageEffect_BlurBox_t1595013249 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ImageEffect_BlurBox::FourTapCone(UnityEngine.RenderTexture,UnityEngine.RenderTexture,System.Int32)
extern "C"  void ImageEffect_BlurBox_FourTapCone_m279425077 (ImageEffect_BlurBox_t1595013249 * __this, RenderTexture_t2666733923 * ___source0, RenderTexture_t2666733923 * ___dest1, int32_t ___iteration2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ImageEffect_BlurBox::DownSample4x(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void ImageEffect_BlurBox_DownSample4x_m636405658 (ImageEffect_BlurBox_t1595013249 * __this, RenderTexture_t2666733923 * ___source0, RenderTexture_t2666733923 * ___dest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ImageEffect_BlurBox::LateUpdate()
extern "C"  void ImageEffect_BlurBox_LateUpdate_m618793853 (ImageEffect_BlurBox_t1595013249 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ImageEffect_BlurBox::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void ImageEffect_BlurBox_OnRenderImage_m2239144980 (ImageEffect_BlurBox_t1595013249 * __this, RenderTexture_t2666733923 * ___sourceTexture0, RenderTexture_t2666733923 * ___destTexture1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ImageEffect_BlurBox::Update()
extern "C"  void ImageEffect_BlurBox_Update_m3747914625 (ImageEffect_BlurBox_t1595013249 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ImageEffect_BlurBox::OnDisable()
extern "C"  void ImageEffect_BlurBox_OnDisable_m1207152837 (ImageEffect_BlurBox_t1595013249 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
