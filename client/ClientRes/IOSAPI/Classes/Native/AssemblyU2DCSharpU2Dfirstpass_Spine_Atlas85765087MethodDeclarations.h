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

// Spine.Atlas
struct Atlas_t85765087;
// System.IO.TextReader
struct TextReader_t1561828458;
// System.String
struct String_t;
// Spine.TextureLoader
struct TextureLoader_t2199164816;
// System.Collections.Generic.List`1<Spine.AtlasPage>
struct List_1_t410630874;
// System.Collections.Generic.List`1<Spine.AtlasRegion>
struct List_1_t3172804847;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Collections.Generic.IEnumerator`1<Spine.AtlasRegion>
struct IEnumerator_1_t1279207542;
// System.String[]
struct StringU5BU5D_t1642385972;
// Spine.AtlasRegion
struct AtlasRegion_t3803683715;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_TextReader1561828458.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Spine.Atlas::.ctor(System.IO.TextReader,System.String,Spine.TextureLoader)
extern "C"  void Atlas__ctor_m1199431313 (Atlas_t85765087 * __this, TextReader_t1561828458 * ___reader0, String_t* ___dir1, Il2CppObject * ___textureLoader2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Atlas::.ctor(System.Collections.Generic.List`1<Spine.AtlasPage>,System.Collections.Generic.List`1<Spine.AtlasRegion>)
extern "C"  void Atlas__ctor_m1532570738 (Atlas_t85765087 * __this, List_1_t410630874 * ___pages0, List_1_t3172804847 * ___regions1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Spine.Atlas::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * Atlas_System_Collections_IEnumerable_GetEnumerator_m3350457362 (Atlas_t85765087 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<Spine.AtlasRegion> Spine.Atlas::GetEnumerator()
extern "C"  Il2CppObject* Atlas_GetEnumerator_m2179289497 (Atlas_t85765087 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Atlas::Load(System.IO.TextReader,System.String,Spine.TextureLoader)
extern "C"  void Atlas_Load_m1597386127 (Atlas_t85765087 * __this, TextReader_t1561828458 * ___reader0, String_t* ___imagesDir1, Il2CppObject * ___textureLoader2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Spine.Atlas::ReadValue(System.IO.TextReader)
extern "C"  String_t* Atlas_ReadValue_m1801941968 (Il2CppObject * __this /* static, unused */, TextReader_t1561828458 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Spine.Atlas::ReadTuple(System.IO.TextReader,System.String[])
extern "C"  int32_t Atlas_ReadTuple_m2464377600 (Il2CppObject * __this /* static, unused */, TextReader_t1561828458 * ___reader0, StringU5BU5D_t1642385972* ___tuple1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Atlas::FlipV()
extern "C"  void Atlas_FlipV_m849384084 (Atlas_t85765087 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.AtlasRegion Spine.Atlas::FindRegion(System.String)
extern "C"  AtlasRegion_t3803683715 * Atlas_FindRegion_m2942590329 (Atlas_t85765087 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Atlas::Dispose()
extern "C"  void Atlas_Dispose_m4071125014 (Atlas_t85765087 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
