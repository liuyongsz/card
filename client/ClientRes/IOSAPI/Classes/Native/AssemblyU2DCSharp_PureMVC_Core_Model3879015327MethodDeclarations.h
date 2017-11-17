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

// PureMVC.Core.Model
struct Model_t3879015327;
// PureMVC.Interfaces.IProxy
struct IProxy_t766166127;
// PureMVC.Interfaces.IModel
struct IModel_t3717001454;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ProxyID3273241327.h"

// System.Void PureMVC.Core.Model::.ctor()
extern "C"  void Model__ctor_m4236756613 (Model_t3879015327 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PureMVC.Core.Model::.cctor()
extern "C"  void Model__cctor_m3828451746 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PureMVC.Core.Model::RegisterProxy(PureMVC.Interfaces.IProxy)
extern "C"  void Model_RegisterProxy_m520129493 (Model_t3879015327 * __this, Il2CppObject * ___proxy0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PureMVC.Interfaces.IProxy PureMVC.Core.Model::RetrieveProxy(ProxyID)
extern "C"  Il2CppObject * Model_RetrieveProxy_m1107731000 (Model_t3879015327 * __this, int32_t ___proxyName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PureMVC.Core.Model::HasProxy(ProxyID)
extern "C"  bool Model_HasProxy_m2392078146 (Model_t3879015327 * __this, int32_t ___proxyName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PureMVC.Interfaces.IProxy PureMVC.Core.Model::RemoveProxy(ProxyID)
extern "C"  Il2CppObject * Model_RemoveProxy_m4001061872 (Model_t3879015327 * __this, int32_t ___proxyName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PureMVC.Interfaces.IModel PureMVC.Core.Model::get_Instance()
extern "C"  Il2CppObject * Model_get_Instance_m2247447766 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PureMVC.Core.Model::InitializeModel()
extern "C"  void Model_InitializeModel_m3946490280 (Model_t3879015327 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
