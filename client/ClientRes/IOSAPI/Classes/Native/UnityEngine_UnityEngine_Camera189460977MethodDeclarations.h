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

// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.RenderTexture
struct RenderTexture_t2666733923;
// UnityEngine.Camera[]
struct CameraU5BU5D_t3079764780;
// UnityEngine.Shader
struct Shader_t2430389951;
// System.String
struct String_t;
// UnityEngine.Rendering.CommandBuffer
struct CommandBuffer_t1204166949;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RenderingPath1538007819.h"
#include "UnityEngine_UnityEngine_TransparencySortMode3501969535.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "UnityEngine_UnityEngine_RenderTexture2666733923.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"
#include "UnityEngine_UnityEngine_Camera189460977.h"
#include "UnityEngine_UnityEngine_CameraClearFlags452084705.h"
#include "UnityEngine_UnityEngine_Camera_StereoscopicEye1438019089.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Ray2469606224.h"
#include "UnityEngine_UnityEngine_Shader2430389951.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_DepthTextureMode1156392273.h"
#include "UnityEngine_UnityEngine_Rendering_CameraEvent2007842675.h"
#include "UnityEngine_UnityEngine_Rendering_CommandBuffer1204166949.h"
#include "UnityEngine_UnityEngine_QueryTriggerInteraction478029726.h"

// System.Single UnityEngine.Camera::get_fieldOfView()
extern "C"  float Camera_get_fieldOfView_m3384007405 (Camera_t189460977 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_fieldOfView(System.Single)
extern "C"  void Camera_set_fieldOfView_m3974156396 (Camera_t189460977 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Camera::get_nearClipPlane()
extern "C"  float Camera_get_nearClipPlane_m3536967407 (Camera_t189460977 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_nearClipPlane(System.Single)
extern "C"  void Camera_set_nearClipPlane_m3510849382 (Camera_t189460977 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Camera::get_farClipPlane()
extern "C"  float Camera_get_farClipPlane_m3137713566 (Camera_t189460977 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_farClipPlane(System.Single)
extern "C"  void Camera_set_farClipPlane_m1845065941 (Camera_t189460977 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderingPath UnityEngine.Camera::get_actualRenderingPath()
extern "C"  int32_t Camera_get_actualRenderingPath_m1894280031 (Camera_t189460977 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Camera::get_hdr()
extern "C"  bool Camera_get_hdr_m3267784575 (Camera_t189460977 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Camera::get_orthographicSize()
extern "C"  float Camera_get_orthographicSize_m1801974358 (Camera_t189460977 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_orthographicSize(System.Single)
extern "C"  void Camera_set_orthographicSize_m2708824189 (Camera_t189460977 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Camera::get_orthographic()
extern "C"  bool Camera_get_orthographic_m4205491841 (Camera_t189460977 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_orthographic(System.Boolean)
extern "C"  void Camera_set_orthographic_m2132888580 (Camera_t189460977 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TransparencySortMode UnityEngine.Camera::get_transparencySortMode()
extern "C"  int32_t Camera_get_transparencySortMode_m2817414777 (Camera_t189460977 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_transparencySortMode(UnityEngine.TransparencySortMode)
extern "C"  void Camera_set_transparencySortMode_m1713712844 (Camera_t189460977 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Camera::get_depth()
extern "C"  float Camera_get_depth_m1329692468 (Camera_t189460977 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_depth(System.Single)
extern "C"  void Camera_set_depth_m1570376177 (Camera_t189460977 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Camera::get_aspect()
extern "C"  float Camera_get_aspect_m935361871 (Camera_t189460977 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::get_cullingMask()
extern "C"  int32_t Camera_get_cullingMask_m73686965 (Camera_t189460977 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_cullingMask(System.Int32)
extern "C"  void Camera_set_cullingMask_m2396665826 (Camera_t189460977 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::get_eventMask()
extern "C"  int32_t Camera_get_eventMask_m4241372419 (Camera_t189460977 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_eventMask(System.Int32)
extern "C"  void Camera_set_eventMask_m1530414286 (Camera_t189460977 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_backgroundColor(UnityEngine.Color)
extern "C"  void Camera_set_backgroundColor_m2927893592 (Camera_t189460977 * __this, Color_t2020392075  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_set_backgroundColor(UnityEngine.Color&)
extern "C"  void Camera_INTERNAL_set_backgroundColor_m3660646068 (Camera_t189460977 * __this, Color_t2020392075 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.Camera::get_rect()
extern "C"  Rect_t3681755626  Camera_get_rect_m2873096661 (Camera_t189460977 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_rect(UnityEngine.Rect)
extern "C"  void Camera_set_rect_m1838810502 (Camera_t189460977 * __this, Rect_t3681755626  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_get_rect(UnityEngine.Rect&)
extern "C"  void Camera_INTERNAL_get_rect_m3971999434 (Camera_t189460977 * __this, Rect_t3681755626 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_set_rect(UnityEngine.Rect&)
extern "C"  void Camera_INTERNAL_set_rect_m610424166 (Camera_t189460977 * __this, Rect_t3681755626 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.Camera::get_pixelRect()
extern "C"  Rect_t3681755626  Camera_get_pixelRect_m2084185953 (Camera_t189460977 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_get_pixelRect(UnityEngine.Rect&)
extern "C"  void Camera_INTERNAL_get_pixelRect_m1785951490 (Camera_t189460977 * __this, Rect_t3681755626 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture UnityEngine.Camera::get_targetTexture()
extern "C"  RenderTexture_t2666733923 * Camera_get_targetTexture_m705925974 (Camera_t189460977 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_targetTexture(UnityEngine.RenderTexture)
extern "C"  void Camera_set_targetTexture_m3925036117 (Camera_t189460977 * __this, RenderTexture_t2666733923 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::get_pixelWidth()
extern "C"  int32_t Camera_get_pixelWidth_m2325481193 (Camera_t189460977 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::get_pixelHeight()
extern "C"  int32_t Camera_get_pixelHeight_m2527046964 (Camera_t189460977 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Camera::get_worldToCameraMatrix()
extern "C"  Matrix4x4_t2933234003  Camera_get_worldToCameraMatrix_m3492031261 (Camera_t189460977 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_worldToCameraMatrix(UnityEngine.Matrix4x4)
extern "C"  void Camera_set_worldToCameraMatrix_m3123854700 (Camera_t189460977 * __this, Matrix4x4_t2933234003  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_get_worldToCameraMatrix(UnityEngine.Matrix4x4&)
extern "C"  void Camera_INTERNAL_get_worldToCameraMatrix_m121677592 (Camera_t189460977 * __this, Matrix4x4_t2933234003 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_set_worldToCameraMatrix(UnityEngine.Matrix4x4&)
extern "C"  void Camera_INTERNAL_set_worldToCameraMatrix_m3655296732 (Camera_t189460977 * __this, Matrix4x4_t2933234003 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::ResetWorldToCameraMatrix()
extern "C"  void Camera_ResetWorldToCameraMatrix_m3024954888 (Camera_t189460977 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_CALL_ResetWorldToCameraMatrix(UnityEngine.Camera)
extern "C"  void Camera_INTERNAL_CALL_ResetWorldToCameraMatrix_m1125869309 (Il2CppObject * __this /* static, unused */, Camera_t189460977 * ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Camera::get_projectionMatrix()
extern "C"  Matrix4x4_t2933234003  Camera_get_projectionMatrix_m2365994324 (Camera_t189460977 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_get_projectionMatrix(UnityEngine.Matrix4x4&)
extern "C"  void Camera_INTERNAL_get_projectionMatrix_m3593932001 (Camera_t189460977 * __this, Matrix4x4_t2933234003 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.CameraClearFlags UnityEngine.Camera::get_clearFlags()
extern "C"  int32_t Camera_get_clearFlags_m1743144302 (Camera_t189460977 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_clearFlags(UnityEngine.CameraClearFlags)
extern "C"  void Camera_set_clearFlags_m4142614199 (Camera_t189460977 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Camera::get_stereoEnabled()
extern "C"  bool Camera_get_stereoEnabled_m1576015186 (Camera_t189460977 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Camera::GetStereoViewMatrix(UnityEngine.Camera/StereoscopicEye)
extern "C"  Matrix4x4_t2933234003  Camera_GetStereoViewMatrix_m3693763010 (Camera_t189460977 * __this, int32_t ___eye0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_CALL_GetStereoViewMatrix(UnityEngine.Camera,UnityEngine.Camera/StereoscopicEye,UnityEngine.Matrix4x4&)
extern "C"  void Camera_INTERNAL_CALL_GetStereoViewMatrix_m2679014668 (Il2CppObject * __this /* static, unused */, Camera_t189460977 * ___self0, int32_t ___eye1, Matrix4x4_t2933234003 * ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Camera::GetStereoProjectionMatrix(UnityEngine.Camera/StereoscopicEye)
extern "C"  Matrix4x4_t2933234003  Camera_GetStereoProjectionMatrix_m1452216890 (Camera_t189460977 * __this, int32_t ___eye0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_CALL_GetStereoProjectionMatrix(UnityEngine.Camera,UnityEngine.Camera/StereoscopicEye,UnityEngine.Matrix4x4&)
extern "C"  void Camera_INTERNAL_CALL_GetStereoProjectionMatrix_m1990073552 (Il2CppObject * __this /* static, unused */, Camera_t189460977 * ___self0, int32_t ___eye1, Matrix4x4_t2933234003 * ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::WorldToScreenPoint(UnityEngine.Vector3)
extern "C"  Vector3_t2243707580  Camera_WorldToScreenPoint_m638747266 (Camera_t189460977 * __this, Vector3_t2243707580  ___position0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_CALL_WorldToScreenPoint(UnityEngine.Camera,UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C"  void Camera_INTERNAL_CALL_WorldToScreenPoint_m720233894 (Il2CppObject * __this /* static, unused */, Camera_t189460977 * ___self0, Vector3_t2243707580 * ___position1, Vector3_t2243707580 * ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::WorldToViewportPoint(UnityEngine.Vector3)
extern "C"  Vector3_t2243707580  Camera_WorldToViewportPoint_m1897251752 (Camera_t189460977 * __this, Vector3_t2243707580  ___position0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_CALL_WorldToViewportPoint(UnityEngine.Camera,UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C"  void Camera_INTERNAL_CALL_WorldToViewportPoint_m2345976772 (Il2CppObject * __this /* static, unused */, Camera_t189460977 * ___self0, Vector3_t2243707580 * ___position1, Vector3_t2243707580 * ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::ViewportToWorldPoint(UnityEngine.Vector3)
extern "C"  Vector3_t2243707580  Camera_ViewportToWorldPoint_m3841010930 (Camera_t189460977 * __this, Vector3_t2243707580  ___position0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_CALL_ViewportToWorldPoint(UnityEngine.Camera,UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C"  void Camera_INTERNAL_CALL_ViewportToWorldPoint_m3505854934 (Il2CppObject * __this /* static, unused */, Camera_t189460977 * ___self0, Vector3_t2243707580 * ___position1, Vector3_t2243707580 * ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
extern "C"  Vector3_t2243707580  Camera_ScreenToWorldPoint_m929392728 (Camera_t189460977 * __this, Vector3_t2243707580  ___position0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_CALL_ScreenToWorldPoint(UnityEngine.Camera,UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C"  void Camera_INTERNAL_CALL_ScreenToWorldPoint_m196899300 (Il2CppObject * __this /* static, unused */, Camera_t189460977 * ___self0, Vector3_t2243707580 * ___position1, Vector3_t2243707580 * ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToViewportPoint(UnityEngine.Vector3)
extern "C"  Vector3_t2243707580  Camera_ScreenToViewportPoint_m2666228286 (Camera_t189460977 * __this, Vector3_t2243707580  ___position0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_CALL_ScreenToViewportPoint(UnityEngine.Camera,UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C"  void Camera_INTERNAL_CALL_ScreenToViewportPoint_m529506484 (Il2CppObject * __this /* static, unused */, Camera_t189460977 * ___self0, Vector3_t2243707580 * ___position1, Vector3_t2243707580 * ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
extern "C"  Ray_t2469606224  Camera_ScreenPointToRay_m614889538 (Camera_t189460977 * __this, Vector3_t2243707580  ___position0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_CALL_ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector3&,UnityEngine.Ray&)
extern "C"  void Camera_INTERNAL_CALL_ScreenPointToRay_m2752248646 (Il2CppObject * __this /* static, unused */, Camera_t189460977 * ___self0, Vector3_t2243707580 * ___position1, Ray_t2469606224 * ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.Camera::get_main()
extern "C"  Camera_t189460977 * Camera_get_main_m475173995 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::get_allCamerasCount()
extern "C"  int32_t Camera_get_allCamerasCount_m989474043 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::GetAllCameras(UnityEngine.Camera[])
extern "C"  int32_t Camera_GetAllCameras_m2922515227 (Il2CppObject * __this /* static, unused */, CameraU5BU5D_t3079764780* ___cameras0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::FireOnPreCull(UnityEngine.Camera)
extern "C"  void Camera_FireOnPreCull_m1679634170 (Il2CppObject * __this /* static, unused */, Camera_t189460977 * ___cam0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::FireOnPreRender(UnityEngine.Camera)
extern "C"  void Camera_FireOnPreRender_m24116662 (Il2CppObject * __this /* static, unused */, Camera_t189460977 * ___cam0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::FireOnPostRender(UnityEngine.Camera)
extern "C"  void Camera_FireOnPostRender_m94860165 (Il2CppObject * __this /* static, unused */, Camera_t189460977 * ___cam0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::RenderWithShader(UnityEngine.Shader,System.String)
extern "C"  void Camera_RenderWithShader_m1923138105 (Camera_t189460977 * __this, Shader_t2430389951 * ___shader0, String_t* ___replacementTag1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::CopyFrom(UnityEngine.Camera)
extern "C"  void Camera_CopyFrom_m3357636325 (Camera_t189460977 * __this, Camera_t189460977 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.DepthTextureMode UnityEngine.Camera::get_depthTextureMode()
extern "C"  int32_t Camera_get_depthTextureMode_m924131993 (Camera_t189460977 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_depthTextureMode(UnityEngine.DepthTextureMode)
extern "C"  void Camera_set_depthTextureMode_m1269215020 (Camera_t189460977 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::AddCommandBuffer(UnityEngine.Rendering.CameraEvent,UnityEngine.Rendering.CommandBuffer)
extern "C"  void Camera_AddCommandBuffer_m2569587168 (Camera_t189460977 * __this, int32_t ___evt0, CommandBuffer_t1204166949 * ___buffer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::RemoveCommandBuffer(UnityEngine.Rendering.CameraEvent,UnityEngine.Rendering.CommandBuffer)
extern "C"  void Camera_RemoveCommandBuffer_m2103408695 (Camera_t189460977 * __this, int32_t ___evt0, CommandBuffer_t1204166949 * ___buffer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Camera::RaycastTry(UnityEngine.Ray,System.Single,System.Int32)
extern "C"  GameObject_t1756533147 * Camera_RaycastTry_m3412198936 (Camera_t189460977 * __this, Ray_t2469606224  ___ray0, float ___distance1, int32_t ___layerMask2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Camera::INTERNAL_CALL_RaycastTry(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  GameObject_t1756533147 * Camera_INTERNAL_CALL_RaycastTry_m2295752796 (Il2CppObject * __this /* static, unused */, Camera_t189460977 * ___self0, Ray_t2469606224 * ___ray1, float ___distance2, int32_t ___layerMask3, int32_t ___queryTriggerInteraction4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Camera::RaycastTry2D(UnityEngine.Ray,System.Single,System.Int32)
extern "C"  GameObject_t1756533147 * Camera_RaycastTry2D_m755036866 (Camera_t189460977 * __this, Ray_t2469606224  ___ray0, float ___distance1, int32_t ___layerMask2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Camera::INTERNAL_CALL_RaycastTry2D(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)
extern "C"  GameObject_t1756533147 * Camera_INTERNAL_CALL_RaycastTry2D_m1020711785 (Il2CppObject * __this /* static, unused */, Camera_t189460977 * ___self0, Ray_t2469606224 * ___ray1, float ___distance2, int32_t ___layerMask3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
