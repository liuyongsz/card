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

// LitJson.JsonReader
struct JsonReader_t1077921503;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.IO.TextReader
struct TextReader_t1561828458;
// System.Int32[]
struct Int32U5BU5D_t3030399641;

#include "codegen/il2cpp-codegen.h"
#include "ls_client_tools_LitJson_JsonToken2852816099.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_IO_TextReader1561828458.h"
#include "ls_client_tools_LitJson_ParserToken1554180950.h"

// System.Boolean LitJson.JsonReader::get_SkipNonMembers()
extern "C"  bool JsonReader_get_SkipNonMembers_m2729146150 (JsonReader_t1077921503 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonToken LitJson.JsonReader::get_Token()
extern "C"  int32_t JsonReader_get_Token_m30552965 (JsonReader_t1077921503 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonReader::get_Value()
extern "C"  Il2CppObject * JsonReader_get_Value_m2040455667 (JsonReader_t1077921503 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::.cctor()
extern "C"  void JsonReader__cctor_m3612257755 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::.ctor(System.String)
extern "C"  void JsonReader__ctor_m1282415798 (JsonReader_t1077921503 * __this, String_t* ___json_text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::.ctor(System.IO.TextReader,System.Boolean)
extern "C"  void JsonReader__ctor_m877511010 (JsonReader_t1077921503 * __this, TextReader_t1561828458 * ___reader0, bool ___owned1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::PopulateParseTable()
extern "C"  void JsonReader_PopulateParseTable_m243557177 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::TableAddCol(LitJson.ParserToken,System.Int32,System.Int32[])
extern "C"  void JsonReader_TableAddCol_m2397222598 (Il2CppObject * __this /* static, unused */, int32_t ___row0, int32_t ___col1, Int32U5BU5D_t3030399641* ___symbols2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::TableAddRow(LitJson.ParserToken)
extern "C"  void JsonReader_TableAddRow_m1503154698 (Il2CppObject * __this /* static, unused */, int32_t ___rule0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::ProcessNumber(System.String)
extern "C"  void JsonReader_ProcessNumber_m1790065002 (JsonReader_t1077921503 * __this, String_t* ___number0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::ProcessSymbol()
extern "C"  void JsonReader_ProcessSymbol_m4115648277 (JsonReader_t1077921503 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonReader::ReadToken()
extern "C"  bool JsonReader_ReadToken_m2208030001 (JsonReader_t1077921503 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::Close()
extern "C"  void JsonReader_Close_m2729962664 (JsonReader_t1077921503 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonReader::Read()
extern "C"  bool JsonReader_Read_m584198470 (JsonReader_t1077921503 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
