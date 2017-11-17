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

// HighlightingSystem.Highlighter/RendererCache
struct RendererCache_t2038398092;
// UnityEngine.Renderer
struct Renderer_t257310565;
// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.Rendering.CommandBuffer
struct CommandBuffer_t1204166949;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Renderer257310565.h"
#include "UnityEngine_UnityEngine_Material193706927.h"
#include "UnityEngine_UnityEngine_Rendering_CommandBuffer1204166949.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

// System.Void HighlightingSystem.Highlighter/RendererCache::.ctor(UnityEngine.Renderer,UnityEngine.Material,System.Single,System.Single)
extern "C"  void RendererCache__ctor_m2933588445 (RendererCache_t2038398092 * __this, Renderer_t257310565 * ___r0, Material_t193706927 * ___sharedOpaqueMaterial1, float ___zTest2, float ___stencilRef3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean HighlightingSystem.Highlighter/RendererCache::get_visible()
extern "C"  bool RendererCache_get_visible_m3727343986 (RendererCache_t2038398092 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter/RendererCache::set_visible(System.Boolean)
extern "C"  void RendererCache_set_visible_m519248187 (RendererCache_t2038398092 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean HighlightingSystem.Highlighter/RendererCache::UpdateVisibility()
extern "C"  bool RendererCache_UpdateVisibility_m1888136006 (RendererCache_t2038398092 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean HighlightingSystem.Highlighter/RendererCache::FillBuffer(UnityEngine.Rendering.CommandBuffer&)
extern "C"  bool RendererCache_FillBuffer_m1815312322 (RendererCache_t2038398092 * __this, CommandBuffer_t1204166949 ** ___buffer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter/RendererCache::SetColorForTransparent(UnityEngine.Color)
extern "C"  void RendererCache_SetColorForTransparent_m2756942547 (RendererCache_t2038398092 * __this, Color_t2020392075  ___clr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter/RendererCache::SetZTestForTransparent(System.Single)
extern "C"  void RendererCache_SetZTestForTransparent_m2478678293 (RendererCache_t2038398092 * __this, float ___zTest0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter/RendererCache::SetStencilRefForTransparent(System.Single)
extern "C"  void RendererCache_SetStencilRefForTransparent_m3008979376 (RendererCache_t2038398092 * __this, float ___stencilRef0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean HighlightingSystem.Highlighter/RendererCache::IsVisible()
extern "C"  bool RendererCache_IsVisible_m4117320999 (RendererCache_t2038398092 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean HighlightingSystem.Highlighter/RendererCache::IsDestroyed()
extern "C"  bool RendererCache_IsDestroyed_m3764385276 (RendererCache_t2038398092 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
