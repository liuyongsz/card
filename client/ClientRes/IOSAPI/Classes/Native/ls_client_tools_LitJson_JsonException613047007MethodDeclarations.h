﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// LitJson.JsonException
struct JsonException_t613047007;
// System.Exception
struct Exception_t1927440687;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "ls_client_tools_LitJson_ParserToken1554180950.h"
#include "mscorlib_System_Exception1927440687.h"
#include "mscorlib_System_String2029220233.h"

// System.Void LitJson.JsonException::.ctor(LitJson.ParserToken,System.Exception)
extern "C"  void JsonException__ctor_m2763806017 (JsonException_t613047007 * __this, int32_t ___token0, Exception_t1927440687 * ___inner_exception1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonException::.ctor(System.Int32)
extern "C"  void JsonException__ctor_m889019331 (JsonException_t613047007 * __this, int32_t ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonException::.ctor(System.String)
extern "C"  void JsonException__ctor_m1438966512 (JsonException_t613047007 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
