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

// UICardDrag
struct UICardDrag_t3543664602;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// CardRole
struct CardRole_t1983515686;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// System.Void UICardDrag::.ctor()
extern "C"  void UICardDrag__ctor_m117848495 (UICardDrag_t3543664602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICardDrag::Start()
extern "C"  void UICardDrag_Start_m3702718907 (UICardDrag_t3543664602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICardDrag::Update()
extern "C"  void UICardDrag_Update_m573488776 (UICardDrag_t3543664602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICardDrag::OnDragDropStart()
extern "C"  void UICardDrag_OnDragDropStart_m564769831 (UICardDrag_t3543664602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICardDrag::OnDragDropMove(UnityEngine.Vector3)
extern "C"  void UICardDrag_OnDragDropMove_m1062049451 (UICardDrag_t3543664602 * __this, Vector3_t2243707580  ___delta0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICardDrag::OnDragDropRelease(UnityEngine.GameObject)
extern "C"  void UICardDrag_OnDragDropRelease_m3471317732 (UICardDrag_t3543664602 * __this, GameObject_t1756533147 * ___surface0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CardRole UICardDrag::HitCardRole()
extern "C"  CardRole_t1983515686 * UICardDrag_HitCardRole_m387869725 (UICardDrag_t3543664602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UICardDrag::HitCard()
extern "C"  Transform_t3275118058 * UICardDrag_HitCard_m3571334852 (UICardDrag_t3543664602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICardDrag::OnDrog_Card(UnityEngine.GameObject,UnityEngine.GameObject)
extern "C"  void UICardDrag_OnDrog_Card_m2461709047 (UICardDrag_t3543664602 * __this, GameObject_t1756533147 * ___obj0, GameObject_t1756533147 * ___go1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICardDrag::OnDrag_Card(UnityEngine.GameObject,UnityEngine.Vector2)
extern "C"  void UICardDrag_OnDrag_Card_m82348553 (UICardDrag_t3543664602 * __this, GameObject_t1756533147 * ___obj0, Vector2_t2243707579  ___del1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICardDrag::OnClick_Card(UnityEngine.GameObject)
extern "C"  void UICardDrag_OnClick_Card_m3518901919 (UICardDrag_t3543664602 * __this, GameObject_t1756533147 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
