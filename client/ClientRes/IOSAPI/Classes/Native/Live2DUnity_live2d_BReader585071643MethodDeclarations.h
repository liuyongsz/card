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

// live2d.BReader
struct BReader_t585071643;
// System.IO.Stream
struct Stream_t3255436806;
// System.IO.BinaryReader
struct BinaryReader_t2491843768;
// System.String
struct String_t;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// System.Single[]
struct SingleU5BU5D_t577127397;
// System.Double[]
struct DoubleU5BU5D_t1889952540;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "mscorlib_System_IO_BinaryReader2491843768.h"

// System.Void live2d.BReader::.ctor(System.IO.Stream)
extern "C"  void BReader__ctor_m3806144380 (BReader_t585071643 * __this, Stream_t3255436806 * ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 live2d.BReader::getFormatVersion()
extern "C"  int32_t BReader_getFormatVersion_m2103569846 (BReader_t585071643 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void live2d.BReader::setFormatVersion(System.Int32)
extern "C"  void BReader_setFormatVersion_m875332903 (BReader_t585071643 * __this, int32_t ___version0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 live2d.BReader::readNum()
extern "C"  int32_t BReader_readNum_m115374423 (BReader_t585071643 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 live2d.BReader::bytesToNum(System.IO.BinaryReader)
extern "C"  int32_t BReader_bytesToNum_m2443156940 (Il2CppObject * __this /* static, unused */, BinaryReader_t2491843768 * ___bin0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double live2d.BReader::readDouble()
extern "C"  double BReader_readDouble_m88678963 (BReader_t585071643 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single live2d.BReader::readFloat()
extern "C"  float BReader_readFloat_m3193676857 (BReader_t585071643 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 live2d.BReader::readInt()
extern "C"  int32_t BReader_readInt_m1646151514 (BReader_t585071643 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte live2d.BReader::readByte()
extern "C"  uint8_t BReader_readByte_m4135340295 (BReader_t585071643 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean live2d.BReader::readBoolean()
extern "C"  bool BReader_readBoolean_m1118464003 (BReader_t585071643 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String live2d.BReader::readUTF8()
extern "C"  String_t* BReader_readUTF8_m2173638269 (BReader_t585071643 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] live2d.BReader::readArrayInt()
extern "C"  Int32U5BU5D_t3030399641* BReader_readArrayInt_m3091237225 (BReader_t585071643 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single[] live2d.BReader::readArrayFloat()
extern "C"  SingleU5BU5D_t577127397* BReader_readArrayFloat_m2447399492 (BReader_t585071643 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double[] live2d.BReader::readArrayDouble()
extern "C"  DoubleU5BU5D_t1889952540* BReader_readArrayDouble_m4089326580 (BReader_t585071643 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object live2d.BReader::readObject()
extern "C"  Il2CppObject * BReader_readObject_m1527366803 (BReader_t585071643 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object live2d.BReader::readObject_exe1(System.Int32)
extern "C"  Il2CppObject * BReader_readObject_exe1_m1945987056 (BReader_t585071643 * __this, int32_t ___cno0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object live2d.BReader::readObject_exe2(System.Int32)
extern "C"  Il2CppObject * BReader_readObject_exe2_m3331322895 (BReader_t585071643 * __this, int32_t ___cno0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean live2d.BReader::readBit()
extern "C"  bool BReader_readBit_m1471166204 (BReader_t585071643 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void live2d.BReader:: ()
extern "C"  void BReader_U20_m1773491225 (BReader_t585071643 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
