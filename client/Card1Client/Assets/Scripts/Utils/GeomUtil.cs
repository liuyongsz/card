using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;

public class GeomUtil
{

    /// <summary>
    /// 弧形插值
    /// </summary>
    /// <param name="mStart"></param>
    /// <param name="mEnd"></param>
    /// <param name="t"></param>
    /// <returns></returns>
    public static Vector3 Slerp(Vector3 mStart,Vector3 mEnd,float t)
    {
        Vector3 centor = (mStart + mEnd) * 0.5f;
        Vector3 centorProject = Vector3.Project(centor, mStart - mEnd); // 中心点在两点之间的投影  
        centor = Vector3.MoveTowards(centor, centorProject, 1f);        // 沿着投影方向移动移动距离（距离越大弧度越小） 

        return Vector3.Slerp(mStart - centor, mEnd - centor, t) + centor;
    }

    /// <summary>计算空中的时间</summary>
    /// <param name="v">y轴速度</param>
    public static float CalGravityAirTimer(float v)
    {
        float tm = v / Physics.gravity.y;

        return tm * 2;
    }

    /// <summary>判断目标是否在左边</summary>
    /// <param name="org">原点</param>
    /// <param name="targetPos">目标点</param>
    public static bool IsLeft(Transform org,Vector3 targetPos)
    {
        float tY = Vector3.Cross(org.forward, targetPos).y;

        return tY > 0 ? false : true;
    }

    /// <summary>平滑的朝向某物体</summary>
    public static void SmoothLookAt(Transform self,Vector3 target,bool smooth = true, float damping = 6.0f)
    {
        if (smooth)
        {
            //if (target == self.position) return;

            Quaternion rotation = Quaternion.LookRotation(target - self.position);
            self.rotation = Quaternion.Slerp(self.rotation, rotation, Time.deltaTime * damping);
        }
        else
        {
            self.rotation = Quaternion.FromToRotation(-Vector3.forward, (target.Clone() - self.position).normalized);
        }
    }

    /// <summary>
    /// 计算向量旋转后的新向量
    /// </summary>
    /// <param name="v"></param>
    /// <param name="angle"></param>
    /// <returns></returns>
    public static Vector3 RotationMatrix(Vector3 v, float angle)
    {
        var x = v.x;
        var z = v.z;
        var sin = Math.Sin(Math.PI * angle / 180);
        var cos = Math.Cos(Math.PI * angle / 180);
        var newX = x * cos + z * sin;
        var newZ = x * -sin + z * cos;
        return new Vector3((float)newX,v.y,(float)newZ);
    }


    /// <summary>
    /// 是否在扇形范围内
    /// </summary>
    /// <param name="org"></param>
    /// <param name="target"></param>
    /// <param name="rad">弧度</param>
    /// <param name="angle">角度</param>
    /// <returns></returns>
    public static bool InSector(Vector3 org,Vector3 target,float angle = 60f,float rad = 1f)
    {
        float distance = Vector3.Distance(org, target);//距离
        Vector3 norVec = org;
        Vector3 temVec = target - org;

        float jiajiao = Mathf.Acos(Vector3.Dot(norVec.normalized, temVec.normalized)) * Mathf.Rad2Deg;//计算两个向量间的夹角
        if (distance < rad)
        {
            if (jiajiao <= angle * 0.5f)
            {
                return true;
            }
        }

        return false;
    }

    // Determine whether point P in triangle ABC
    public static bool PointinTriangle(Vector3 A, Vector3 B, Vector3 C, Vector3 P)
    {
        Vector3 v0 = C - A;
        Vector3 v1 = B - A;
        Vector3 v2 = P - A;

        float dot00 = Vector3.Dot(v0,v0);
        float dot01 = Vector3.Dot(v0, v1);
        float dot02 = Vector3.Dot(v0, v2);
        float dot11 = Vector3.Dot(v1, v1);
        float dot12 = Vector3.Dot(v1, v2);

        float inverDeno = 1 / (dot00 * dot11 - dot01 * dot01);

        float u = (dot11 * dot02 - dot01 * dot12) * inverDeno;
        if (u < 0 || u > 1) // if u out of range, return directly
        {
            return false;
        }

        float v = (dot00 * dot12 - dot01 * dot02) * inverDeno;
        if (v < 0 || v > 1) // if v out of range, return directly
        {
            return false;
        }

        return u + v <= 1;
    }


    // 计算 |p1 p2| X |p1 p|  
    public static float MatchGetCross(Vector3 p1, Vector3 p2, Vector3 p)
    {
        return (p2.x - p1.x) * (p.z - p1.z) - (p.x - p1.x) * (p2.z - p1.z);
    }
  
    /// <summary>
    /// 判断某点是否在某个矩形范围内
    /// </summary>
    /// <param name="p1"></param>
    /// <param name="p2"></param>
    /// <param name="p3"></param>
    /// <param name="p4"></param>
    /// <param name="p"></param>
    /// <returns></returns>
    public static bool IsPointInMatrix(Vector3 p1,Vector3 p2, Vector3 p3, Vector3 p4,Vector3 p)
    {
        bool b0 = PointinTriangle(p1,p2,p3,p);
        bool b1 = PointinTriangle(p2,p4,p3,p);

        return b0 || b1;
       //return MatchGetCross(p1, p2, p) * MatchGetCross(p3, p4, p) >= 0 && MatchGetCross(p2, p3, p) * MatchGetCross(p4, p1, p) >= 0;
    }

    /// <summary>
    /// 点到直线的距离
    /// </summary>
    /// <param name="starPoint">开始点</param>
    /// <param name="endPoint">结束点</param>
    /// <param name="point">目标点</param>
    /// <returns>距离</returns>
    public static float DistanceOfPointToVector(Vector3 starPoint,Vector3 endPoint,Vector3 point)
    {
        Vector2 startVe2 = starPoint.IgnoreYXis();
        Vector2 endVe2 = endPoint.IgnoreYXis();
        float a = endVe2.y - startVe2.y;
        float b = startVe2.x - endVe2.x;
        float c = endVe2.x * startVe2.y - startVe2.x * endVe2.y;
        float denominator = Mathf.Sqrt(a*a + b*b);

        Vector2 pointV2 = point.IgnoreYXis();

        return Mathf.Abs( (a*pointV2.x + b*pointV2.y + c) / denominator );
    }
}
