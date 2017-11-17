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

// QFileUtils
struct QFileUtils_t2085889578;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.IO.DirectoryInfo
struct DirectoryInfo_t1934446453;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_IO_DirectoryInfo1934446453.h"

// System.Void QFileUtils::.ctor()
extern "C"  void QFileUtils__ctor_m2373032407 (QFileUtils_t2085889578 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean QFileUtils::Exists(System.String)
extern "C"  bool QFileUtils_Exists_m3001562525 (Il2CppObject * __this /* static, unused */, String_t* ___fileName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean QFileUtils::ExistsDir(System.String)
extern "C"  bool QFileUtils_ExistsDir_m3388094666 (Il2CppObject * __this /* static, unused */, String_t* ___dirName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean QFileUtils::CreateDir(System.String)
extern "C"  bool QFileUtils_CreateDir_m1089660694 (Il2CppObject * __this /* static, unused */, String_t* ___dirName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean QFileUtils::CreateFile(System.String)
extern "C"  bool QFileUtils_CreateFile_m794752027 (Il2CppObject * __this /* static, unused */, String_t* ___fileName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String QFileUtils::Read(System.String)
extern "C"  String_t* QFileUtils_Read_m2439502142 (Il2CppObject * __this /* static, unused */, String_t* ___fileName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] QFileUtils::ReadBinary(System.String)
extern "C"  ByteU5BU5D_t3397334013* QFileUtils_ReadBinary_m1897660578 (Il2CppObject * __this /* static, unused */, String_t* ___fileName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String QFileUtils::ReadLine(System.String)
extern "C"  String_t* QFileUtils_ReadLine_m1433531840 (Il2CppObject * __this /* static, unused */, String_t* ___fileName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean QFileUtils::Write(System.String,System.String)
extern "C"  bool QFileUtils_Write_m1299965810 (Il2CppObject * __this /* static, unused */, String_t* ___fileName0, String_t* ___content1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean QFileUtils::WriteBytes(System.String,System.Byte[])
extern "C"  bool QFileUtils_WriteBytes_m510972560 (Il2CppObject * __this /* static, unused */, String_t* ___fileName0, ByteU5BU5D_t3397334013* ___bytes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean QFileUtils::WriteLine(System.String,System.String)
extern "C"  bool QFileUtils_WriteLine_m981168056 (Il2CppObject * __this /* static, unused */, String_t* ___fileName0, String_t* ___content1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean QFileUtils::CopyDir(System.IO.DirectoryInfo,System.String)
extern "C"  bool QFileUtils_CopyDir_m3964979771 (Il2CppObject * __this /* static, unused */, DirectoryInfo_t1934446453 * ___fromDir0, String_t* ___toDir1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean QFileUtils::CopyDir(System.String,System.String)
extern "C"  bool QFileUtils_CopyDir_m2069824933 (Il2CppObject * __this /* static, unused */, String_t* ___fromDir0, String_t* ___toDir1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean QFileUtils::CopyDir(System.IO.DirectoryInfo,System.String,System.String)
extern "C"  bool QFileUtils_CopyDir_m3648832969 (Il2CppObject * __this /* static, unused */, DirectoryInfo_t1934446453 * ___fromDir0, String_t* ___toDir1, String_t* ___rootDir2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean QFileUtils::DeleteFile(System.String)
extern "C"  bool QFileUtils_DeleteFile_m3709623520 (Il2CppObject * __this /* static, unused */, String_t* ___fileName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QFileUtils::DeleteDir(System.IO.DirectoryInfo)
extern "C"  void QFileUtils_DeleteDir_m1902792977 (Il2CppObject * __this /* static, unused */, DirectoryInfo_t1934446453 * ___dir0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean QFileUtils::DeleteDir(System.String,System.Boolean)
extern "C"  bool QFileUtils_DeleteDir_m3192371404 (Il2CppObject * __this /* static, unused */, String_t* ___dir0, bool ___onlyDir1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean QFileUtils::FindFile(System.String,System.String)
extern "C"  bool QFileUtils_FindFile_m3048881448 (Il2CppObject * __this /* static, unused */, String_t* ___dir0, String_t* ___fileName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean QFileUtils::FindFile(System.IO.DirectoryInfo,System.String)
extern "C"  bool QFileUtils_FindFile_m789377540 (Il2CppObject * __this /* static, unused */, DirectoryInfo_t1934446453 * ___dir0, String_t* ___fileName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
