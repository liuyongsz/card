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

// Assets.XGame.NetWork.ProtoNetSerialize
struct ProtoNetSerialize_t1971992873;
// System.Type
struct Type_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Object
struct Il2CppObject;
// System.IO.MemoryStream
struct MemoryStream_t743994179;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Assets.XGame.NetWork.ProtoNetSerialize::.ctor()
extern "C"  void ProtoNetSerialize__ctor_m3645116397 (ProtoNetSerialize_t1971992873 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Assets.XGame.NetWork.ProtoNetSerialize::.cctor()
extern "C"  void ProtoNetSerialize__cctor_m2209687916 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Assets.XGame.NetWork.ProtoNetSerialize::register(System.Int32,System.Type)
extern "C"  void ProtoNetSerialize_register_m3307699470 (Il2CppObject * __this /* static, unused */, int32_t ___id0, Type_t * ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Assets.XGame.NetWork.ProtoNetSerialize::Encode(System.Int32,System.Object)
extern "C"  ByteU5BU5D_t3397334013* ProtoNetSerialize_Encode_m1132370876 (Il2CppObject * __this /* static, unused */, int32_t ___socketId0, Il2CppObject * ___msg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Assets.XGame.NetWork.ProtoNetSerialize::Decode(System.Byte[])
extern "C"  Il2CppObject * ProtoNetSerialize_Decode_m247726959 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___msgbuf0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.MemoryStream Assets.XGame.NetWork.ProtoNetSerialize::get_DataStream()
extern "C"  MemoryStream_t743994179 * ProtoNetSerialize_get_DataStream_m225967969 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
