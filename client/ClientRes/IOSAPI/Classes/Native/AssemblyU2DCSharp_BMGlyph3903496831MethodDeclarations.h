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

// BMGlyph
struct BMGlyph_t3903496831;

#include "codegen/il2cpp-codegen.h"

// System.Void BMGlyph::.ctor()
extern "C"  void BMGlyph__ctor_m15133368 (BMGlyph_t3903496831 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BMGlyph::GetKerning(System.Int32)
extern "C"  int32_t BMGlyph_GetKerning_m3951738365 (BMGlyph_t3903496831 * __this, int32_t ___previousChar0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BMGlyph::SetKerning(System.Int32,System.Int32)
extern "C"  void BMGlyph_SetKerning_m4141866306 (BMGlyph_t3903496831 * __this, int32_t ___previousChar0, int32_t ___amount1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BMGlyph::Trim(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void BMGlyph_Trim_m2061641832 (BMGlyph_t3903496831 * __this, int32_t ___xMin0, int32_t ___yMin1, int32_t ___xMax2, int32_t ___yMax3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
