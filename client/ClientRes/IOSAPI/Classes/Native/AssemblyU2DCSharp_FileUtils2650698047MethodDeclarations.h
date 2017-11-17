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

// FileUtils
struct FileUtils_t2650698047;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.IO.DirectoryInfo
struct DirectoryInfo_t1934446453;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_IO_DirectoryInfo1934446453.h"

// System.Void FileUtils::.ctor()
extern "C"  void FileUtils__ctor_m2882577334 (FileUtils_t2650698047 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FileUtils::.cctor()
extern "C"  void FileUtils__cctor_m865217653 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FileUtils::StringBuilder(System.Object[])
extern "C"  String_t* FileUtils_StringBuilder_m1496308967 (Il2CppObject * __this /* static, unused */, ObjectU5BU5D_t3614634134* ___args0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FileUtils::GetHttpReqPlus()
extern "C"  String_t* FileUtils_GetHttpReqPlus_m33304461 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FileUtils::Exists(System.String)
extern "C"  bool FileUtils_Exists_m233330540 (Il2CppObject * __this /* static, unused */, String_t* ___fileName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FileUtils::GetStringMd5(System.String)
extern "C"  String_t* FileUtils_GetStringMd5_m1373857986 (Il2CppObject * __this /* static, unused */, String_t* ___strValue0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FileUtils::GetByteMd5(System.Byte[])
extern "C"  String_t* FileUtils_GetByteMd5_m2543973776 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___bytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FileUtils::CreateDir(System.String)
extern "C"  bool FileUtils_CreateDir_m1113941879 (Il2CppObject * __this /* static, unused */, String_t* ___dirName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FileUtils::CreateFile(System.String)
extern "C"  bool FileUtils_CreateFile_m3457579126 (Il2CppObject * __this /* static, unused */, String_t* ___fileName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FileUtils::Read(System.String)
extern "C"  String_t* FileUtils_Read_m3945699263 (Il2CppObject * __this /* static, unused */, String_t* ___fileName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] FileUtils::ReadBinary(System.String)
extern "C"  ByteU5BU5D_t3397334013* FileUtils_ReadBinary_m4179025857 (Il2CppObject * __this /* static, unused */, String_t* ___fileName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FileUtils::ReadLine(System.String)
extern "C"  String_t* FileUtils_ReadLine_m444085245 (Il2CppObject * __this /* static, unused */, String_t* ___fileName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FileUtils::Write(System.String,System.String)
extern "C"  bool FileUtils_Write_m821301507 (Il2CppObject * __this /* static, unused */, String_t* ___fileName0, String_t* ___content1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FileUtils::WriteBytes(System.String,System.Byte[])
extern "C"  bool FileUtils_WriteBytes_m3172260191 (Il2CppObject * __this /* static, unused */, String_t* ___fileName0, ByteU5BU5D_t3397334013* ___bytes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FileUtils::WriteLine(System.String,System.String)
extern "C"  bool FileUtils_WriteLine_m3616441069 (Il2CppObject * __this /* static, unused */, String_t* ___fileName0, String_t* ___content1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FileUtils::CopyDir(System.IO.DirectoryInfo,System.String)
extern "C"  bool FileUtils_CopyDir_m1509421078 (Il2CppObject * __this /* static, unused */, DirectoryInfo_t1934446453 * ___fromDir0, String_t* ___toDir1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FileUtils::CopyDir(System.String,System.String)
extern "C"  bool FileUtils_CopyDir_m948572022 (Il2CppObject * __this /* static, unused */, String_t* ___fromDir0, String_t* ___toDir1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FileUtils::CopyDir(System.IO.DirectoryInfo,System.String,System.String)
extern "C"  bool FileUtils_CopyDir_m1302950722 (Il2CppObject * __this /* static, unused */, DirectoryInfo_t1934446453 * ___fromDir0, String_t* ___toDir1, String_t* ___rootDir2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FileUtils::DeleteFile(System.String)
extern "C"  bool FileUtils_DeleteFile_m2965749839 (Il2CppObject * __this /* static, unused */, String_t* ___fileName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FileUtils::DeleteDir(System.IO.DirectoryInfo)
extern "C"  void FileUtils_DeleteDir_m2323292470 (Il2CppObject * __this /* static, unused */, DirectoryInfo_t1934446453 * ___dir0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FileUtils::DeleteDir(System.String,System.Boolean)
extern "C"  bool FileUtils_DeleteDir_m1311112209 (Il2CppObject * __this /* static, unused */, String_t* ___dir0, bool ___onlyDir1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FileUtils::FindFile(System.String,System.String)
extern "C"  bool FileUtils_FindFile_m2862347165 (Il2CppObject * __this /* static, unused */, String_t* ___dir0, String_t* ___fileName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FileUtils::FindFile(System.IO.DirectoryInfo,System.String)
extern "C"  bool FileUtils_FindFile_m2938423299 (Il2CppObject * __this /* static, unused */, DirectoryInfo_t1934446453 * ___dir0, String_t* ___fileName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
