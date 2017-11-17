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

// Mono.Security.Protocol.Tls.ValidationResult
struct ValidationResult_t1782558132;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Protocol.Tls.ValidationResult::.ctor(System.Boolean,System.Boolean,System.Int32)
extern "C"  void ValidationResult__ctor_m3658642569 (ValidationResult_t1782558132 * __this, bool ___trusted0, bool ___user_denied1, int32_t ___error_code2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.ValidationResult::get_Trusted()
extern "C"  bool ValidationResult_get_Trusted_m1316755606 (ValidationResult_t1782558132 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.ValidationResult::get_ErrorCode()
extern "C"  int32_t ValidationResult_get_ErrorCode_m599531882 (ValidationResult_t1782558132 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
