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

// cn.sharesdk.unity3d.iOSImpl
struct iOSImpl_t2422426421;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.String
struct String_t;
// System.Collections.Hashtable
struct Hashtable_t909839986;
// cn.sharesdk.unity3d.ShareContent
struct ShareContent_t350461246;
// cn.sharesdk.unity3d.PlatformType[]
struct PlatformTypeU5BU5D_t2027202406;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Collections_Hashtable909839986.h"
#include "AssemblyU2DCSharpU2Dfirstpass_cn_sharesdk_unity3d_3178320575.h"
#include "AssemblyU2DCSharpU2Dfirstpass_cn_sharesdk_unity3d_S350461246.h"

// System.Void cn.sharesdk.unity3d.iOSImpl::.ctor(UnityEngine.GameObject)
extern "C"  void iOSImpl__ctor_m706832176 (iOSImpl_t2422426421 * __this, GameObject_t1756533147 * ___go0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cn.sharesdk.unity3d.iOSImpl::__iosShareSDKRegisterAppAndSetPltformsConfig(System.String,System.String)
extern "C"  void iOSImpl___iosShareSDKRegisterAppAndSetPltformsConfig_m4261392466 (Il2CppObject * __this /* static, unused */, String_t* ___appKey0, String_t* ___configInfo1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cn.sharesdk.unity3d.iOSImpl::__iosShareSDKAuthorize(System.Int32,System.Int32,System.String)
extern "C"  void iOSImpl___iosShareSDKAuthorize_m3469088491 (Il2CppObject * __this /* static, unused */, int32_t ___reqID0, int32_t ___platType1, String_t* ___observer2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cn.sharesdk.unity3d.iOSImpl::__iosShareSDKCancelAuthorize(System.Int32)
extern "C"  void iOSImpl___iosShareSDKCancelAuthorize_m1085498530 (Il2CppObject * __this /* static, unused */, int32_t ___platType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean cn.sharesdk.unity3d.iOSImpl::__iosShareSDKHasAuthorized(System.Int32)
extern "C"  bool iOSImpl___iosShareSDKHasAuthorized_m1178097544 (Il2CppObject * __this /* static, unused */, int32_t ___platType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cn.sharesdk.unity3d.iOSImpl::__iosShareSDKGetUserInfo(System.Int32,System.Int32,System.String)
extern "C"  void iOSImpl___iosShareSDKGetUserInfo_m2013472533 (Il2CppObject * __this /* static, unused */, int32_t ___reqID0, int32_t ___platType1, String_t* ___observer2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cn.sharesdk.unity3d.iOSImpl::__iosShareSDKShare(System.Int32,System.Int32,System.String,System.String)
extern "C"  void iOSImpl___iosShareSDKShare_m2069126351 (Il2CppObject * __this /* static, unused */, int32_t ___reqID0, int32_t ___platType1, String_t* ___content2, String_t* ___observer3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cn.sharesdk.unity3d.iOSImpl::__iosShareSDKOneKeyShare(System.Int32,System.String,System.String,System.String)
extern "C"  void iOSImpl___iosShareSDKOneKeyShare_m2468874483 (Il2CppObject * __this /* static, unused */, int32_t ___reqID0, String_t* ___platTypes1, String_t* ___content2, String_t* ___observer3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cn.sharesdk.unity3d.iOSImpl::__iosShareSDKShowShareMenu(System.Int32,System.String,System.String,System.Int32,System.Int32,System.String)
extern "C"  void iOSImpl___iosShareSDKShowShareMenu_m2855620718 (Il2CppObject * __this /* static, unused */, int32_t ___reqID0, String_t* ___platTypes1, String_t* ___content2, int32_t ___x3, int32_t ___y4, String_t* ___observer5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cn.sharesdk.unity3d.iOSImpl::__iosShareSDKShowShareView(System.Int32,System.Int32,System.String,System.String)
extern "C"  void iOSImpl___iosShareSDKShowShareView_m3673090301 (Il2CppObject * __this /* static, unused */, int32_t ___reqID0, int32_t ___platType1, String_t* ___content2, String_t* ___observer3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cn.sharesdk.unity3d.iOSImpl::__iosShareSDKGetFriendsList(System.Int32,System.Int32,System.Int32,System.Int32,System.String)
extern "C"  void iOSImpl___iosShareSDKGetFriendsList_m2493928269 (Il2CppObject * __this /* static, unused */, int32_t ___reqID0, int32_t ___platType1, int32_t ___count2, int32_t ___page3, String_t* ___observer4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cn.sharesdk.unity3d.iOSImpl::__iosShareSDKFollowFriend(System.Int32,System.Int32,System.String,System.String)
extern "C"  void iOSImpl___iosShareSDKFollowFriend_m3712852165 (Il2CppObject * __this /* static, unused */, int32_t ___reqID0, int32_t ___platform1, String_t* ___account2, String_t* ___observer3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String cn.sharesdk.unity3d.iOSImpl::__iosShareSDKGetCredential(System.Int32)
extern "C"  String_t* iOSImpl___iosShareSDKGetCredential_m4119155227 (Il2CppObject * __this /* static, unused */, int32_t ___platType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean cn.sharesdk.unity3d.iOSImpl::__iosShareSDKIsClientInstalled(System.Int32)
extern "C"  bool iOSImpl___iosShareSDKIsClientInstalled_m1577585870 (Il2CppObject * __this /* static, unused */, int32_t ___platType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cn.sharesdk.unity3d.iOSImpl::__iosShareSDKShareWithContentName(System.Int32,System.Int32,System.String,System.String,System.String)
extern "C"  void iOSImpl___iosShareSDKShareWithContentName_m1332337989 (Il2CppObject * __this /* static, unused */, int32_t ___reqID0, int32_t ___platform1, String_t* ___contentName2, String_t* ___customFields3, String_t* ___observer4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cn.sharesdk.unity3d.iOSImpl::__iosShareSDKShowShareMenuWithContentName(System.Int32,System.String,System.String,System.String,System.Int32,System.Int32,System.String)
extern "C"  void iOSImpl___iosShareSDKShowShareMenuWithContentName_m1160371612 (Il2CppObject * __this /* static, unused */, int32_t ___reqID0, String_t* ___contentName1, String_t* ___customFields2, String_t* ___platTypes3, int32_t ___x4, int32_t ___y5, String_t* ___observer6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cn.sharesdk.unity3d.iOSImpl::__iosShareSDKShowShareViewWithContentName(System.Int32,System.Int32,System.String,System.String,System.String)
extern "C"  void iOSImpl___iosShareSDKShowShareViewWithContentName_m1167124491 (Il2CppObject * __this /* static, unused */, int32_t ___reqID0, int32_t ___platform1, String_t* ___contentName2, String_t* ___customFields3, String_t* ___observer4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cn.sharesdk.unity3d.iOSImpl::InitSDK(System.String)
extern "C"  void iOSImpl_InitSDK_m2220582890 (iOSImpl_t2422426421 * __this, String_t* ___appKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cn.sharesdk.unity3d.iOSImpl::InitSDK(System.String,System.String)
extern "C"  void iOSImpl_InitSDK_m2255567490 (iOSImpl_t2422426421 * __this, String_t* ___appKey0, String_t* ___appSecret1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cn.sharesdk.unity3d.iOSImpl::SetPlatformConfig(System.Collections.Hashtable)
extern "C"  void iOSImpl_SetPlatformConfig_m1242065017 (iOSImpl_t2422426421 * __this, Hashtable_t909839986 * ___configs0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cn.sharesdk.unity3d.iOSImpl::Authorize(System.Int32,cn.sharesdk.unity3d.PlatformType)
extern "C"  void iOSImpl_Authorize_m2301476733 (iOSImpl_t2422426421 * __this, int32_t ___reqID0, int32_t ___platform1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cn.sharesdk.unity3d.iOSImpl::CancelAuthorize(cn.sharesdk.unity3d.PlatformType)
extern "C"  void iOSImpl_CancelAuthorize_m3058047824 (iOSImpl_t2422426421 * __this, int32_t ___platform0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean cn.sharesdk.unity3d.iOSImpl::IsAuthorized(cn.sharesdk.unity3d.PlatformType)
extern "C"  bool iOSImpl_IsAuthorized_m4139234400 (iOSImpl_t2422426421 * __this, int32_t ___platform0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean cn.sharesdk.unity3d.iOSImpl::IsClientValid(cn.sharesdk.unity3d.PlatformType)
extern "C"  bool iOSImpl_IsClientValid_m3498867464 (iOSImpl_t2422426421 * __this, int32_t ___platform0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cn.sharesdk.unity3d.iOSImpl::GetUserInfo(System.Int32,cn.sharesdk.unity3d.PlatformType)
extern "C"  void iOSImpl_GetUserInfo_m796338603 (iOSImpl_t2422426421 * __this, int32_t ___reqID0, int32_t ___platform1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cn.sharesdk.unity3d.iOSImpl::ShareContent(System.Int32,cn.sharesdk.unity3d.PlatformType,cn.sharesdk.unity3d.ShareContent)
extern "C"  void iOSImpl_ShareContent_m4101212158 (iOSImpl_t2422426421 * __this, int32_t ___reqID0, int32_t ___platform1, ShareContent_t350461246 * ___content2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cn.sharesdk.unity3d.iOSImpl::ShareContent(System.Int32,cn.sharesdk.unity3d.PlatformType[],cn.sharesdk.unity3d.ShareContent)
extern "C"  void iOSImpl_ShareContent_m3371944682 (iOSImpl_t2422426421 * __this, int32_t ___reqID0, PlatformTypeU5BU5D_t2027202406* ___platforms1, ShareContent_t350461246 * ___content2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cn.sharesdk.unity3d.iOSImpl::ShowPlatformList(System.Int32,cn.sharesdk.unity3d.PlatformType[],cn.sharesdk.unity3d.ShareContent,System.Int32,System.Int32)
extern "C"  void iOSImpl_ShowPlatformList_m3428039542 (iOSImpl_t2422426421 * __this, int32_t ___reqID0, PlatformTypeU5BU5D_t2027202406* ___platforms1, ShareContent_t350461246 * ___content2, int32_t ___x3, int32_t ___y4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cn.sharesdk.unity3d.iOSImpl::ShowShareContentEditor(System.Int32,cn.sharesdk.unity3d.PlatformType,cn.sharesdk.unity3d.ShareContent)
extern "C"  void iOSImpl_ShowShareContentEditor_m3132414814 (iOSImpl_t2422426421 * __this, int32_t ___reqID0, int32_t ___platform1, ShareContent_t350461246 * ___content2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cn.sharesdk.unity3d.iOSImpl::ShareWithContentName(System.Int32,cn.sharesdk.unity3d.PlatformType,System.String,System.Collections.Hashtable)
extern "C"  void iOSImpl_ShareWithContentName_m2848409077 (iOSImpl_t2422426421 * __this, int32_t ___reqId0, int32_t ___platform1, String_t* ___contentName2, Hashtable_t909839986 * ___customFields3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cn.sharesdk.unity3d.iOSImpl::ShowPlatformListWithContentName(System.Int32,System.String,System.Collections.Hashtable,cn.sharesdk.unity3d.PlatformType[],System.Int32,System.Int32)
extern "C"  void iOSImpl_ShowPlatformListWithContentName_m2800945922 (iOSImpl_t2422426421 * __this, int32_t ___reqId0, String_t* ___contentName1, Hashtable_t909839986 * ___customFields2, PlatformTypeU5BU5D_t2027202406* ___platforms3, int32_t ___x4, int32_t ___y5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cn.sharesdk.unity3d.iOSImpl::ShowShareContentEditorWithContentName(System.Int32,cn.sharesdk.unity3d.PlatformType,System.String,System.Collections.Hashtable)
extern "C"  void iOSImpl_ShowShareContentEditorWithContentName_m1608906360 (iOSImpl_t2422426421 * __this, int32_t ___reqId0, int32_t ___platform1, String_t* ___contentName2, Hashtable_t909839986 * ___customFields3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cn.sharesdk.unity3d.iOSImpl::GetFriendList(System.Int32,cn.sharesdk.unity3d.PlatformType,System.Int32,System.Int32)
extern "C"  void iOSImpl_GetFriendList_m574742366 (iOSImpl_t2422426421 * __this, int32_t ___reqID0, int32_t ___platform1, int32_t ___count2, int32_t ___page3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cn.sharesdk.unity3d.iOSImpl::AddFriend(System.Int32,cn.sharesdk.unity3d.PlatformType,System.String)
extern "C"  void iOSImpl_AddFriend_m1619747803 (iOSImpl_t2422426421 * __this, int32_t ___reqID0, int32_t ___platform1, String_t* ___account2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable cn.sharesdk.unity3d.iOSImpl::GetAuthInfo(cn.sharesdk.unity3d.PlatformType)
extern "C"  Hashtable_t909839986 * iOSImpl_GetAuthInfo_m2725064172 (iOSImpl_t2422426421 * __this, int32_t ___platform0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cn.sharesdk.unity3d.iOSImpl::DisableSSO(System.Boolean)
extern "C"  void iOSImpl_DisableSSO_m948793934 (iOSImpl_t2422426421 * __this, bool ___open0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
