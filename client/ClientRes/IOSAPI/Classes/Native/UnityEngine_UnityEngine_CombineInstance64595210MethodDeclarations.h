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

// UnityEngine.Mesh
struct Mesh_t1356156583;
// UnityEngine.CombineInstance
struct CombineInstance_t64595210;
struct CombineInstance_t64595210_marshaled_pinvoke;
struct CombineInstance_t64595210_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_CombineInstance64595210.h"
#include "UnityEngine_UnityEngine_Mesh1356156583.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"

// UnityEngine.Mesh UnityEngine.CombineInstance::get_mesh()
extern "C"  Mesh_t1356156583 * CombineInstance_get_mesh_m841079174 (CombineInstance_t64595210 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CombineInstance::set_mesh(UnityEngine.Mesh)
extern "C"  void CombineInstance_set_mesh_m1001542527 (CombineInstance_t64595210 * __this, Mesh_t1356156583 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CombineInstance::set_transform(UnityEngine.Matrix4x4)
extern "C"  void CombineInstance_set_transform_m3327542376 (CombineInstance_t64595210 * __this, Matrix4x4_t2933234003  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh UnityEngine.CombineInstance::InternalGetMesh(System.Int32)
extern "C"  Mesh_t1356156583 * CombineInstance_InternalGetMesh_m495447941 (CombineInstance_t64595210 * __this, int32_t ___instanceID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct CombineInstance_t64595210;
struct CombineInstance_t64595210_marshaled_pinvoke;

extern "C" void CombineInstance_t64595210_marshal_pinvoke(const CombineInstance_t64595210& unmarshaled, CombineInstance_t64595210_marshaled_pinvoke& marshaled);
extern "C" void CombineInstance_t64595210_marshal_pinvoke_back(const CombineInstance_t64595210_marshaled_pinvoke& marshaled, CombineInstance_t64595210& unmarshaled);
extern "C" void CombineInstance_t64595210_marshal_pinvoke_cleanup(CombineInstance_t64595210_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct CombineInstance_t64595210;
struct CombineInstance_t64595210_marshaled_com;

extern "C" void CombineInstance_t64595210_marshal_com(const CombineInstance_t64595210& unmarshaled, CombineInstance_t64595210_marshaled_com& marshaled);
extern "C" void CombineInstance_t64595210_marshal_com_back(const CombineInstance_t64595210_marshaled_com& marshaled, CombineInstance_t64595210& unmarshaled);
extern "C" void CombineInstance_t64595210_marshal_com_cleanup(CombineInstance_t64595210_marshaled_com& marshaled);
