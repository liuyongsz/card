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

// cn.sharesdk.unity3d.ShareSDK
struct ShareSDK_t2836616153;
// System.String
struct String_t;
// System.Collections.Hashtable
struct Hashtable_t909839986;
// cn.sharesdk.unity3d.ShareContent
struct ShareContent_t350461246;
// cn.sharesdk.unity3d.PlatformType[]
struct PlatformTypeU5BU5D_t2027202406;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharpU2Dfirstpass_cn_sharesdk_unity3d_3178320575.h"
#include "mscorlib_System_Collections_Hashtable909839986.h"
#include "AssemblyU2DCSharpU2Dfirstpass_cn_sharesdk_unity3d_S350461246.h"

// System.Void cn.sharesdk.unity3d.ShareSDK::.ctor()
extern "C"  void ShareSDK__ctor_m614189008 (ShareSDK_t2836616153 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cn.sharesdk.unity3d.ShareSDK::Awake()
extern "C"  void ShareSDK_Awake_m3018820291 (ShareSDK_t2836616153 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cn.sharesdk.unity3d.ShareSDK::_Callback(System.String)
extern "C"  void ShareSDK__Callback_m3062901732 (ShareSDK_t2836616153 * __this, String_t* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cn.sharesdk.unity3d.ShareSDK::OnError(System.Int32,cn.sharesdk.unity3d.PlatformType,System.Int32,System.Collections.Hashtable)
extern "C"  void ShareSDK_OnError_m1686029858 (ShareSDK_t2836616153 * __this, int32_t ___reqID0, int32_t ___platform1, int32_t ___action2, Hashtable_t909839986 * ___throwable3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cn.sharesdk.unity3d.ShareSDK::OnComplete(System.Int32,cn.sharesdk.unity3d.PlatformType,System.Int32,System.Collections.Hashtable)
extern "C"  void ShareSDK_OnComplete_m521138147 (ShareSDK_t2836616153 * __this, int32_t ___reqID0, int32_t ___platform1, int32_t ___action2, Hashtable_t909839986 * ___res3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cn.sharesdk.unity3d.ShareSDK::OnCancel(System.Int32,cn.sharesdk.unity3d.PlatformType,System.Int32)
extern "C"  void ShareSDK_OnCancel_m2458163284 (ShareSDK_t2836616153 * __this, int32_t ___reqID0, int32_t ___platform1, int32_t ___action2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cn.sharesdk.unity3d.ShareSDK::InitSDK(System.String)
extern "C"  void ShareSDK_InitSDK_m1039554996 (ShareSDK_t2836616153 * __this, String_t* ___appKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cn.sharesdk.unity3d.ShareSDK::InitSDK(System.String,System.String)
extern "C"  void ShareSDK_InitSDK_m2828043540 (ShareSDK_t2836616153 * __this, String_t* ___appKey0, String_t* ___appSecret1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cn.sharesdk.unity3d.ShareSDK::SetPlatformConfig(System.Collections.Hashtable)
extern "C"  void ShareSDK_SetPlatformConfig_m1227935097 (ShareSDK_t2836616153 * __this, Hashtable_t909839986 * ___configInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 cn.sharesdk.unity3d.ShareSDK::Authorize(cn.sharesdk.unity3d.PlatformType)
extern "C"  int32_t ShareSDK_Authorize_m3574998582 (ShareSDK_t2836616153 * __this, int32_t ___platform0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cn.sharesdk.unity3d.ShareSDK::CancelAuthorize(cn.sharesdk.unity3d.PlatformType)
extern "C"  void ShareSDK_CancelAuthorize_m1710304590 (ShareSDK_t2836616153 * __this, int32_t ___platform0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean cn.sharesdk.unity3d.ShareSDK::IsAuthorized(cn.sharesdk.unity3d.PlatformType)
extern "C"  bool ShareSDK_IsAuthorized_m838730574 (ShareSDK_t2836616153 * __this, int32_t ___platform0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean cn.sharesdk.unity3d.ShareSDK::IsClientValid(cn.sharesdk.unity3d.PlatformType)
extern "C"  bool ShareSDK_IsClientValid_m994467286 (ShareSDK_t2836616153 * __this, int32_t ___platform0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 cn.sharesdk.unity3d.ShareSDK::GetUserInfo(cn.sharesdk.unity3d.PlatformType)
extern "C"  int32_t ShareSDK_GetUserInfo_m3914415954 (ShareSDK_t2836616153 * __this, int32_t ___platform0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 cn.sharesdk.unity3d.ShareSDK::ShareContent(cn.sharesdk.unity3d.PlatformType,cn.sharesdk.unity3d.ShareContent)
extern "C"  int32_t ShareSDK_ShareContent_m3123604559 (ShareSDK_t2836616153 * __this, int32_t ___platform0, ShareContent_t350461246 * ___content1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 cn.sharesdk.unity3d.ShareSDK::ShareContent(cn.sharesdk.unity3d.PlatformType[],cn.sharesdk.unity3d.ShareContent)
extern "C"  int32_t ShareSDK_ShareContent_m906427205 (ShareSDK_t2836616153 * __this, PlatformTypeU5BU5D_t2027202406* ___platforms0, ShareContent_t350461246 * ___content1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 cn.sharesdk.unity3d.ShareSDK::ShowPlatformList(cn.sharesdk.unity3d.PlatformType[],cn.sharesdk.unity3d.ShareContent,System.Int32,System.Int32)
extern "C"  int32_t ShareSDK_ShowPlatformList_m1196745667 (ShareSDK_t2836616153 * __this, PlatformTypeU5BU5D_t2027202406* ___platforms0, ShareContent_t350461246 * ___content1, int32_t ___x2, int32_t ___y3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 cn.sharesdk.unity3d.ShareSDK::ShowShareContentEditor(cn.sharesdk.unity3d.PlatformType,cn.sharesdk.unity3d.ShareContent)
extern "C"  int32_t ShareSDK_ShowShareContentEditor_m4008962733 (ShareSDK_t2836616153 * __this, int32_t ___platform0, ShareContent_t350461246 * ___content1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 cn.sharesdk.unity3d.ShareSDK::ShareWithContentName(cn.sharesdk.unity3d.PlatformType,System.String,System.Collections.Hashtable)
extern "C"  int32_t ShareSDK_ShareWithContentName_m617864950 (ShareSDK_t2836616153 * __this, int32_t ___platform0, String_t* ___contentName1, Hashtable_t909839986 * ___customFields2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 cn.sharesdk.unity3d.ShareSDK::ShowPlatformListWithContentName(System.String,System.Collections.Hashtable,cn.sharesdk.unity3d.PlatformType[],System.Int32,System.Int32)
extern "C"  int32_t ShareSDK_ShowPlatformListWithContentName_m3229416315 (ShareSDK_t2836616153 * __this, String_t* ___contentName0, Hashtable_t909839986 * ___customFields1, PlatformTypeU5BU5D_t2027202406* ___platforms2, int32_t ___x3, int32_t ___y4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 cn.sharesdk.unity3d.ShareSDK::ShowShareContentEditorWithContentName(cn.sharesdk.unity3d.PlatformType,System.String,System.Collections.Hashtable)
extern "C"  int32_t ShareSDK_ShowShareContentEditorWithContentName_m518691517 (ShareSDK_t2836616153 * __this, int32_t ___platform0, String_t* ___contentName1, Hashtable_t909839986 * ___customFields2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 cn.sharesdk.unity3d.ShareSDK::GetFriendList(cn.sharesdk.unity3d.PlatformType,System.Int32,System.Int32)
extern "C"  int32_t ShareSDK_GetFriendList_m2471416259 (ShareSDK_t2836616153 * __this, int32_t ___platform0, int32_t ___count1, int32_t ___page2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 cn.sharesdk.unity3d.ShareSDK::AddFriend(cn.sharesdk.unity3d.PlatformType,System.String)
extern "C"  int32_t ShareSDK_AddFriend_m2098493446 (ShareSDK_t2836616153 * __this, int32_t ___platform0, String_t* ___account1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable cn.sharesdk.unity3d.ShareSDK::GetAuthInfo(cn.sharesdk.unity3d.PlatformType)
extern "C"  Hashtable_t909839986 * ShareSDK_GetAuthInfo_m3545960472 (ShareSDK_t2836616153 * __this, int32_t ___platform0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cn.sharesdk.unity3d.ShareSDK::DisableSSO(System.Boolean)
extern "C"  void ShareSDK_DisableSSO_m3704569992 (ShareSDK_t2836616153 * __this, bool ___open0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
