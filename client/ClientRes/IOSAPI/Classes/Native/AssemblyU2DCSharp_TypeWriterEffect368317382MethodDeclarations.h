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

// TypeWriterEffect
struct TypeWriterEffect_t368317382;
// System.String
struct String_t;
// System.Action
struct Action_t3226471752;
// System.String[]
struct StringU5BU5D_t1642385972;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "System_Core_System_Action3226471752.h"

// System.Void TypeWriterEffect::.ctor()
extern "C"  void TypeWriterEffect__ctor_m1676369743 (TypeWriterEffect_t368317382 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TypeWriterEffect::Awake()
extern "C"  void TypeWriterEffect_Awake_m3564035618 (TypeWriterEffect_t368317382 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TypeWriterEffect::Init(System.String,System.Action,System.Boolean)
extern "C"  void TypeWriterEffect_Init_m4150814313 (TypeWriterEffect_t368317382 * __this, String_t* ___text0, Action_t3226471752 * ___WriteComplete1, bool ___wait2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TypeWriterEffect::Init(System.String[],System.Action,System.Boolean)
extern "C"  void TypeWriterEffect_Init_m1547823487 (TypeWriterEffect_t368317382 * __this, StringU5BU5D_t1642385972* ___text0, Action_t3226471752 * ___WriteComplete1, bool ___wait2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TypeWriterEffect::Update()
extern "C"  void TypeWriterEffect_Update_m2960849328 (TypeWriterEffect_t368317382 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
