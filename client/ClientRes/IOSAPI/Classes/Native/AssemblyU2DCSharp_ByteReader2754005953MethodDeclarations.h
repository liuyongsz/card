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

// ByteReader
struct ByteReader_t2754005953;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// UnityEngine.TextAsset
struct TextAsset_t3973159845;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;
// BetterList`1<System.String>
struct BetterList_1_t2249608875;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_TextAsset3973159845.h"

// System.Void ByteReader::.ctor(System.Byte[])
extern "C"  void ByteReader__ctor_m3656615303 (ByteReader_t2754005953 * __this, ByteU5BU5D_t3397334013* ___bytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ByteReader::.ctor(UnityEngine.TextAsset)
extern "C"  void ByteReader__ctor_m2429270034 (ByteReader_t2754005953 * __this, TextAsset_t3973159845 * ___asset0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ByteReader::.cctor()
extern "C"  void ByteReader__cctor_m2037738899 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ByteReader::get_canRead()
extern "C"  bool ByteReader_get_canRead_m3900717963 (ByteReader_t2754005953 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ByteReader::ReadLine(System.Byte[],System.Int32,System.Int32)
extern "C"  String_t* ByteReader_ReadLine_m1871758886 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___start1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ByteReader::ReadLine()
extern "C"  String_t* ByteReader_ReadLine_m3267484541 (ByteReader_t2754005953 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ByteReader::ReadLine(System.Boolean)
extern "C"  String_t* ByteReader_ReadLine_m1129531756 (ByteReader_t2754005953 * __this, bool ___skipEmptyLines0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> ByteReader::ReadDictionary()
extern "C"  Dictionary_2_t3943999495 * ByteReader_ReadDictionary_m3110959320 (ByteReader_t2754005953 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BetterList`1<System.String> ByteReader::ReadCSV()
extern "C"  BetterList_1_t2249608875 * ByteReader_ReadCSV_m2109224118 (ByteReader_t2754005953 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
