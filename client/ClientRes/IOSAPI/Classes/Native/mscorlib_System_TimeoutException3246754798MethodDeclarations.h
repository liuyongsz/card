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

// System.TimeoutException
struct TimeoutException_t3246754798;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"

// System.Void System.TimeoutException::.ctor()
extern "C"  void TimeoutException__ctor_m2217059767 (TimeoutException_t3246754798 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeoutException::.ctor(System.String)
extern "C"  void TimeoutException__ctor_m2770079177 (TimeoutException_t3246754798 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeoutException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void TimeoutException__ctor_m962266018 (TimeoutException_t3246754798 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
