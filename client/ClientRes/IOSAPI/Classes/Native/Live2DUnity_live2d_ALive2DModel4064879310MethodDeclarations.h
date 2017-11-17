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

// live2d.ALive2DModel
struct ALive2DModel_t4064879310;
// live2d.ModelImpl
struct ModelImpl_t1058113623;
// System.String
struct String_t;
// System.IO.Stream
struct Stream_t3255436806;
// live2d.ModelContext
struct ModelContext_t1483254982;

#include "codegen/il2cpp-codegen.h"
#include "Live2DUnity_live2d_ModelImpl1058113623.h"
#include "mscorlib_System_String2029220233.h"
#include "Live2DUnity_live2d_ALive2DModel4064879310.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "Live2DUnity_live2d_ALive2DModel_ModelDrawMethodVer3961850415.h"

// System.Void live2d.ALive2DModel::.ctor()
extern "C"  void ALive2DModel__ctor_m1098378254 (ALive2DModel_t4064879310 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void live2d.ALive2DModel::setModelImpl(live2d.ModelImpl)
extern "C"  void ALive2DModel_setModelImpl_m1799656720 (ALive2DModel_t4064879310 * __this, ModelImpl_t1058113623 * ___m0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// live2d.ModelImpl live2d.ALive2DModel::getModelImpl()
extern "C"  ModelImpl_t1058113623 * ALive2DModel_getModelImpl_m1327858247 (ALive2DModel_t4064879310 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single live2d.ALive2DModel::getCanvasWidth()
extern "C"  float ALive2DModel_getCanvasWidth_m4149792082 (ALive2DModel_t4064879310 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single live2d.ALive2DModel::getParamFloat(System.String)
extern "C"  float ALive2DModel_getParamFloat_m3733914657 (ALive2DModel_t4064879310 * __this, String_t* ___paramID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void live2d.ALive2DModel::setParamFloat(System.String,System.Single)
extern "C"  void ALive2DModel_setParamFloat_m3191425648 (ALive2DModel_t4064879310 * __this, String_t* ___paramID0, float ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void live2d.ALive2DModel::setParamFloat(System.String,System.Single,System.Single)
extern "C"  void ALive2DModel_setParamFloat_m3403123779 (ALive2DModel_t4064879310 * __this, String_t* ___paramID0, float ___value1, float ___weight2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void live2d.ALive2DModel::update()
extern "C"  void ALive2DModel_update_m3450811513 (ALive2DModel_t4064879310 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void live2d.ALive2DModel::loadModel_exe(live2d.ALive2DModel,System.IO.Stream)
extern "C"  void ALive2DModel_loadModel_exe_m3837896309 (Il2CppObject * __this /* static, unused */, ALive2DModel_t4064879310 * ___ret0, Stream_t3255436806 * ___bin1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void live2d.ALive2DModel::setParamFloat(System.Int32,System.Single)
extern "C"  void ALive2DModel_setParamFloat_m2494778045 (ALive2DModel_t4064879310 * __this, int32_t ___paramIndex0, float ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void live2d.ALive2DModel::setParamFloat(System.Int32,System.Single,System.Single)
extern "C"  void ALive2DModel_setParamFloat_m1072829238 (ALive2DModel_t4064879310 * __this, int32_t ___paramIndex0, float ___value1, float ___weight2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// live2d.ModelContext live2d.ALive2DModel::getModelContext()
extern "C"  ModelContext_t1483254982 * ALive2DModel_getModelContext_m3561353735 (ALive2DModel_t4064879310 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// live2d.ALive2DModel/ModelDrawMethodVersion live2d.ALive2DModel::getModelDrawMethodVersion()
extern "C"  int32_t ALive2DModel_getModelDrawMethodVersion_m413685250 (ALive2DModel_t4064879310 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void live2d.ALive2DModel::.cctor()
extern "C"  void ALive2DModel__cctor_m1723800387 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
