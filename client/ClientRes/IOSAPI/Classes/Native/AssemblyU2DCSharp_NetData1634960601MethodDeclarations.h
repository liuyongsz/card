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

// NetData
struct NetData_t1634960601;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_NetProtocal_Request1913412249.h"
#include "AssemblyU2DCSharp_NetProtocal_Respone2961906842.h"

// System.Void NetData::.ctor(System.Int32,NetProtocal.Request,System.Byte[],System.Int32)
extern "C"  void NetData__ctor_m3236824663 (NetData_t1634960601 * __this, int32_t ___correlationid0, int32_t ___cmd1, ByteU5BU5D_t3397334013* ___data2, int32_t ___len3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetData::.ctor(System.Int32,NetProtocal.Respone,System.Byte[],System.Int32)
extern "C"  void NetData__ctor_m1191562520 (NetData_t1634960601 * __this, int32_t ___correlationid0, int32_t ___cmd1, ByteU5BU5D_t3397334013* ___data2, int32_t ___len3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
