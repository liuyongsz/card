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

// System.Xml.XmlInputStream
struct XmlInputStream_t2650744719;
// System.IO.Stream
struct Stream_t3255436806;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Text.Encoding
struct Encoding_t663144255;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "mscorlib_System_IO_SeekOrigin2475945306.h"

// System.Void System.Xml.XmlInputStream::.ctor(System.IO.Stream)
extern "C"  void XmlInputStream__ctor_m1121285645 (XmlInputStream_t2650744719 * __this, Stream_t3255436806 * ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlInputStream::.cctor()
extern "C"  void XmlInputStream__cctor_m678858417 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlInputStream::GetStringFromBytes(System.Byte[],System.Int32,System.Int32)
extern "C"  String_t* XmlInputStream_GetStringFromBytes_m1358836798 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___bytes0, int32_t ___index1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlInputStream::Initialize(System.IO.Stream)
extern "C"  void XmlInputStream_Initialize_m630070605 (XmlInputStream_t2650744719 * __this, Stream_t3255436806 * ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlInputStream::ReadByteSpecial()
extern "C"  int32_t XmlInputStream_ReadByteSpecial_m2112221997 (XmlInputStream_t2650744719 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlInputStream::SkipWhitespace()
extern "C"  int32_t XmlInputStream_SkipWhitespace_m2954343818 (XmlInputStream_t2650744719 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Xml.XmlInputStream::get_ActualEncoding()
extern "C"  Encoding_t663144255 * XmlInputStream_get_ActualEncoding_m756916188 (XmlInputStream_t2650744719 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlInputStream::get_CanRead()
extern "C"  bool XmlInputStream_get_CanRead_m2496100857 (XmlInputStream_t2650744719 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlInputStream::get_CanSeek()
extern "C"  bool XmlInputStream_get_CanSeek_m3961162427 (XmlInputStream_t2650744719 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlInputStream::get_CanWrite()
extern "C"  bool XmlInputStream_get_CanWrite_m1929209732 (XmlInputStream_t2650744719 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Xml.XmlInputStream::get_Length()
extern "C"  int64_t XmlInputStream_get_Length_m2858529534 (XmlInputStream_t2650744719 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Xml.XmlInputStream::get_Position()
extern "C"  int64_t XmlInputStream_get_Position_m1249942707 (XmlInputStream_t2650744719 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlInputStream::set_Position(System.Int64)
extern "C"  void XmlInputStream_set_Position_m1229012108 (XmlInputStream_t2650744719 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlInputStream::Close()
extern "C"  void XmlInputStream_Close_m4169571072 (XmlInputStream_t2650744719 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlInputStream::Flush()
extern "C"  void XmlInputStream_Flush_m4169753298 (XmlInputStream_t2650744719 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlInputStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t XmlInputStream_Read_m1029923189 (XmlInputStream_t2650744719 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlInputStream::ReadByte()
extern "C"  int32_t XmlInputStream_ReadByte_m3910598426 (XmlInputStream_t2650744719 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Xml.XmlInputStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t XmlInputStream_Seek_m1256906562 (XmlInputStream_t2650744719 * __this, int64_t ___offset0, int32_t ___origin1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlInputStream::SetLength(System.Int64)
extern "C"  void XmlInputStream_SetLength_m459605040 (XmlInputStream_t2650744719 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlInputStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void XmlInputStream_Write_m3041193964 (XmlInputStream_t2650744719 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
