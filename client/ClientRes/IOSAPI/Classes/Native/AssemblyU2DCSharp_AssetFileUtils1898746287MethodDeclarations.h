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

// AssetFileUtils
struct AssetFileUtils_t1898746287;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void AssetFileUtils::.ctor()
extern "C"  void AssetFileUtils__ctor_m1670974766 (AssetFileUtils_t1898746287 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AssetFileUtils::DeleteAsset(System.String)
extern "C"  bool AssetFileUtils_DeleteAsset_m1445004985 (Il2CppObject * __this /* static, unused */, String_t* ___strFilePath0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AssetFileUtils::WriteLocalAsset(System.String,System.Byte[])
extern "C"  bool AssetFileUtils_WriteLocalAsset_m2594008511 (Il2CppObject * __this /* static, unused */, String_t* ___strPath0, ByteU5BU5D_t3397334013* ___bytes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AssetFileUtils::WriteFile(System.String,System.Object)
extern "C"  void AssetFileUtils_WriteFile_m3992899681 (Il2CppObject * __this /* static, unused */, String_t* ___filePath0, Il2CppObject * ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
