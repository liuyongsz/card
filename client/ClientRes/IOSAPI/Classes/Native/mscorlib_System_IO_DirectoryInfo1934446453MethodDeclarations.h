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

// System.IO.DirectoryInfo
struct DirectoryInfo_t1934446453;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
// System.IO.FileInfo[]
struct FileInfoU5BU5D_t3273047115;
// System.IO.DirectoryInfo[]
struct DirectoryInfoU5BU5D_t4088202008;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"

// System.Void System.IO.DirectoryInfo::.ctor(System.String)
extern "C"  void DirectoryInfo__ctor_m3750996792 (DirectoryInfo_t1934446453 * __this, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.DirectoryInfo::.ctor(System.String,System.Boolean)
extern "C"  void DirectoryInfo__ctor_m404287517 (DirectoryInfo_t1934446453 * __this, String_t* ___path0, bool ___simpleOriginalPath1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.DirectoryInfo::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void DirectoryInfo__ctor_m2666043091 (DirectoryInfo_t1934446453 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.DirectoryInfo::Initialize()
extern "C"  void DirectoryInfo_Initialize_m2216118894 (DirectoryInfo_t1934446453 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.DirectoryInfo::get_Exists()
extern "C"  bool DirectoryInfo_get_Exists_m3635270941 (DirectoryInfo_t1934446453 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.DirectoryInfo::get_Name()
extern "C"  String_t* DirectoryInfo_get_Name_m2851423899 (DirectoryInfo_t1934446453 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.DirectoryInfo System.IO.DirectoryInfo::get_Parent()
extern "C"  DirectoryInfo_t1934446453 * DirectoryInfo_get_Parent_m1198766078 (DirectoryInfo_t1934446453 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.DirectoryInfo::Create()
extern "C"  void DirectoryInfo_Create_m1327646140 (DirectoryInfo_t1934446453 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.FileInfo[] System.IO.DirectoryInfo::GetFiles()
extern "C"  FileInfoU5BU5D_t3273047115* DirectoryInfo_GetFiles_m1525494597 (DirectoryInfo_t1934446453 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.FileInfo[] System.IO.DirectoryInfo::GetFiles(System.String)
extern "C"  FileInfoU5BU5D_t3273047115* DirectoryInfo_GetFiles_m1986791687 (DirectoryInfo_t1934446453 * __this, String_t* ___searchPattern0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.DirectoryInfo[] System.IO.DirectoryInfo::GetDirectories()
extern "C"  DirectoryInfoU5BU5D_t4088202008* DirectoryInfo_GetDirectories_m2867217084 (DirectoryInfo_t1934446453 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.DirectoryInfo[] System.IO.DirectoryInfo::GetDirectories(System.String)
extern "C"  DirectoryInfoU5BU5D_t4088202008* DirectoryInfo_GetDirectories_m3177775514 (DirectoryInfo_t1934446453 * __this, String_t* ___searchPattern0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.DirectoryInfo::Delete()
extern "C"  void DirectoryInfo_Delete_m3400658985 (DirectoryInfo_t1934446453 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.DirectoryInfo::Delete(System.Boolean)
extern "C"  void DirectoryInfo_Delete_m1027965814 (DirectoryInfo_t1934446453 * __this, bool ___recursive0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.DirectoryInfo::ToString()
extern "C"  String_t* DirectoryInfo_ToString_m4208086799 (DirectoryInfo_t1934446453 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
