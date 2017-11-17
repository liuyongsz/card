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

// System.Type
struct Type_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object
struct Il2CppObject;
// LitJson.JsonReader
struct JsonReader_t1077921503;
// LitJson.IJsonWrapper
struct IJsonWrapper_t3045908096;
// LitJson.WrapperFactory
struct WrapperFactory_t2219329745;
// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>
struct IDictionary_2_t2850733530;
// LitJson.ImporterFunc
struct ImporterFunc_t2977850894;
// LitJson.JsonWriter
struct JsonWriter_t1927598499;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"
#include "ls_client_tools_LitJson_JsonReader1077921503.h"
#include "ls_client_tools_LitJson_WrapperFactory2219329745.h"
#include "ls_client_tools_LitJson_ImporterFunc2977850894.h"
#include "mscorlib_System_Object2689449295.h"
#include "ls_client_tools_LitJson_JsonWriter1927598499.h"

// System.Void LitJson.JsonMapper::.cctor()
extern "C"  void JsonMapper__cctor_m4145923041 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::AddArrayMetadata(System.Type)
extern "C"  void JsonMapper_AddArrayMetadata_m2574504774 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::AddObjectMetadata(System.Type)
extern "C"  void JsonMapper_AddObjectMetadata_m3310698528 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo LitJson.JsonMapper::GetConvOp(System.Type,System.Type)
extern "C"  MethodInfo_t * JsonMapper_GetConvOp_m2960212315 (Il2CppObject * __this /* static, unused */, Type_t * ___t10, Type_t * ___t21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::ReadValue(System.Type,LitJson.JsonReader)
extern "C"  Il2CppObject * JsonMapper_ReadValue_m3240318023 (Il2CppObject * __this /* static, unused */, Type_t * ___inst_type0, JsonReader_t1077921503 * ___reader1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.IJsonWrapper LitJson.JsonMapper::ReadValue(LitJson.WrapperFactory,LitJson.JsonReader)
extern "C"  Il2CppObject * JsonMapper_ReadValue_m1403409959 (Il2CppObject * __this /* static, unused */, WrapperFactory_t2219329745 * ___factory0, JsonReader_t1077921503 * ___reader1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::ReadSkip(LitJson.JsonReader)
extern "C"  void JsonMapper_ReadSkip_m4184117775 (Il2CppObject * __this /* static, unused */, JsonReader_t1077921503 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::RegisterBaseExporters()
extern "C"  void JsonMapper_RegisterBaseExporters_m1814446708 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::RegisterBaseImporters()
extern "C"  void JsonMapper_RegisterBaseImporters_m2641945975 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::RegisterImporter(System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>,System.Type,System.Type,LitJson.ImporterFunc)
extern "C"  void JsonMapper_RegisterImporter_m4158237593 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___table0, Type_t * ___json_type1, Type_t * ___value_type2, ImporterFunc_t2977850894 * ___importer3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.IJsonWrapper LitJson.JsonMapper::ToWrapper(LitJson.WrapperFactory,LitJson.JsonReader)
extern "C"  Il2CppObject * JsonMapper_ToWrapper_m2584781878 (Il2CppObject * __this /* static, unused */, WrapperFactory_t2219329745 * ___factory0, JsonReader_t1077921503 * ___reader1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.IJsonWrapper LitJson.JsonMapper::<ReadSkip>b__0()
extern "C"  Il2CppObject * JsonMapper_U3CReadSkipU3Eb__0_m463213503 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>b__2(System.Object,LitJson.JsonWriter)
extern "C"  void JsonMapper_U3CRegisterBaseExportersU3Eb__2_m4096441732 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, JsonWriter_t1927598499 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>b__3(System.Object,LitJson.JsonWriter)
extern "C"  void JsonMapper_U3CRegisterBaseExportersU3Eb__3_m2603093539 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, JsonWriter_t1927598499 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>b__4(System.Object,LitJson.JsonWriter)
extern "C"  void JsonMapper_U3CRegisterBaseExportersU3Eb__4_m1946444230 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, JsonWriter_t1927598499 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>b__5(System.Object,LitJson.JsonWriter)
extern "C"  void JsonMapper_U3CRegisterBaseExportersU3Eb__5_m735751525 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, JsonWriter_t1927598499 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>b__6(System.Object,LitJson.JsonWriter)
extern "C"  void JsonMapper_U3CRegisterBaseExportersU3Eb__6_m735960840 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, JsonWriter_t1927598499 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>b__7(System.Object,LitJson.JsonWriter)
extern "C"  void JsonMapper_U3CRegisterBaseExportersU3Eb__7_m3537579943 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, JsonWriter_t1927598499 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>b__8(System.Object,LitJson.JsonWriter)
extern "C"  void JsonMapper_U3CRegisterBaseExportersU3Eb__8_m3933027658 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, JsonWriter_t1927598499 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>b__9(System.Object,LitJson.JsonWriter)
extern "C"  void JsonMapper_U3CRegisterBaseExportersU3Eb__9_m2722334953 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, JsonWriter_t1927598499 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>b__a(System.Object,LitJson.JsonWriter)
extern "C"  void JsonMapper_U3CRegisterBaseExportersU3Eb__a_m3559252881 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, JsonWriter_t1927598499 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>b__14(System.Object)
extern "C"  Il2CppObject * JsonMapper_U3CRegisterBaseImportersU3Eb__14_m3502650513 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>b__15(System.Object)
extern "C"  Il2CppObject * JsonMapper_U3CRegisterBaseImportersU3Eb__15_m2855262476 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>b__16(System.Object)
extern "C"  Il2CppObject * JsonMapper_U3CRegisterBaseImportersU3Eb__16_m1289774363 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>b__17(System.Object)
extern "C"  Il2CppObject * JsonMapper_U3CRegisterBaseImportersU3Eb__17_m4660630 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>b__18(System.Object)
extern "C"  Il2CppObject * JsonMapper_U3CRegisterBaseImportersU3Eb__18_m3229264213 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>b__19(System.Object)
extern "C"  Il2CppObject * JsonMapper_U3CRegisterBaseImportersU3Eb__19_m2581876176 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>b__1a(System.Object)
extern "C"  Il2CppObject * JsonMapper_U3CRegisterBaseImportersU3Eb__1a_m2341747720 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>b__1b(System.Object)
extern "C"  Il2CppObject * JsonMapper_U3CRegisterBaseImportersU3Eb__1b_m2554121495 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>b__1c(System.Object)
extern "C"  Il2CppObject * JsonMapper_U3CRegisterBaseImportersU3Eb__1c_m128871570 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>b__1d(System.Object)
extern "C"  Il2CppObject * JsonMapper_U3CRegisterBaseImportersU3Eb__1d_m2636742049 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>b__1e(System.Object)
extern "C"  Il2CppObject * JsonMapper_U3CRegisterBaseImportersU3Eb__1e_m3868733724 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>b__1f(System.Object)
extern "C"  Il2CppObject * JsonMapper_U3CRegisterBaseImportersU3Eb__1f_m4081107499 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
