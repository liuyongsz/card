using System;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

/***********************************************************************************
 * 功能 ： 数学方法
 ***********************************************************************************/
public class MathUtils
{
    static public bool FloatEquals(float a, float b)
    {
        if (Math.Abs(a - b) <= 1e-6)
            return true;
        return false;
    }

    static public bool FloatEquals(float a, float b, float offest)
    {
        if (Math.Abs(a - b) <= offest)
            return true;
        return false;
    }

    static public bool FloatZero(float a)
    {
        if (Math.Abs(a - 0f) <= 1e-6)
            return true;
        return false;
    }

    /***************************************************************************
     * 功能 ： 2D距离平方
     ***************************************************************************/
    static public float Distance2D(float x1, float y1, float x2, float y2)
    {
        float x = x2 - x1;
        float y = y2 - y1;
        return Mathf.Sqrt(x * x + y * y);
    }
    /***************************************************************************
     * 功能 ： 2D距离平方
     ***************************************************************************/
    static public float Distance2D2(float x1, float y1, float x2, float y2)
    {
        float x = x2 - x1;
        float y = y2 - y1;
        return x * x + y * y;
    }

    /// <summary>
    /// 功能 ： 2D平方距离
    /// </summary>
    static public float SqrMagnitude2D(float x1, float y1, float x2, float y2)
    {
        float x = x2 - x1;
        float y = y2 - y1;
        return x * x + y * y;
    }

    static public float Distance2D(Vector3 v1, Vector3 v2)
    {
        v1.y = v2.y;
        return Vector3.Distance(v1, v2);
    }

    /** 两个向量的距离小于等于 目标距离 */
    static public bool Distance2DLessEqual(float x1, float y1, float x2, float y2, float distance)
    {
        float x = x2 - x1;
        float y = y2 - y1;
        float sqrDis1 = x * x + y * y;
        float sqrDis2 = distance * distance;
        if (sqrDis1 <= sqrDis2)
            return true;
        return false;
    }
    /** 两个向量的距离小于等于 目标距离 */
    static public bool Distance2DLessEqual(Vector3 pos1, Vector3 pos2, float distance)
    {
        float x = pos2.x - pos1.x;
        float z = pos2.z - pos1.z;
        float sqrDis1 = x * x + z * z;
        float sqrDis2 = distance * distance;
        if (sqrDis1 <= sqrDis2)
            return true;
        return false;
    }

    /** 计算正方形与圆形之间的碰撞 */
    static public bool Cube2CirIntersect(float gridX, float gridZ, float halfSideLen, Vector3 cirPosition, float radius)
    {
        float distance = Distance2D(gridX, gridZ, cirPosition.x, cirPosition.z);
        if (distance < radius + halfSideLen)
            return true;

        return false;
    }


    //弧度转角度
    public static float Rad2Deg(float rad)
    {
        return rad / Mathf.Deg2Rad;
    }
    //角度转弧度
    public static float Rad3Deg(float angle)
    {
        return angle * Mathf.Deg2Rad;
    }

    public static float Deg(float deg)
    {
        if (deg < 0)
        {
            deg *= -1;
            return 360 - deg % 360;
        }
        return deg % 360;
    }
    /// <summary>
    /// 找到a有b没有
    /// </summary>
    /// <param name="a"></param>
    /// <param name="b"></param>
    /// <returns></returns>
    public static List<string> ArrayDiff(string[] a, string[] b)
    {
        List<string> result = new List<string>();
        for (int i = 0; i < a.Length; i++)
        {
            for (int j = 0; j < b.Length; j++)
            {
                if (!b.Contains(a[i]))
                {
                    result.Add(a[i]);
                }
            }
        }
        return result;
    }

    /// <summary>
    /// 4个byte拼接一个int型
    /// </summary>
    /// <param name="byteA"></param>
    /// <param name="byteB"></param>
    /// <param name="byteC"></param>
    /// <param name="byteD"></param>
    /// <returns></returns>
    public static uint SpellInt(sbyte byteA, sbyte byteB, sbyte byteC, sbyte byteD)
    {
        uint a = 0;
        a = (0xff000000 & (((uint)byteA) << 24)
            | 0x00ff0000 & (((uint)byteB) << 16)
            | 0x0000ff00 & (((uint)byteC) << 8)
            | 0x000000ff & (((uint)byteD) << 0));
        return a;  
    }

    /// <summary>
    /// 按8位分割int 
    /// </summary>
    /// <param name="uCode">待分割值</param>
    /// <param name="sCodeA">高位的高8位</param>
    /// <param name="sCodeB">高位的低8位</param>
    /// <param name="sCodeC">低位的高8位</param>
    /// <param name="sCodeD">低位的低8位</param>
    public static void SplitByte(uint uCode, ref sbyte sCodeA, ref sbyte sCodeB, ref sbyte sCodeC, ref sbyte sCodeD)
    {
        ushort uHighCodeA = (ushort)((uCode >> 24) & 0xff);
        ushort uHighCodeB = (ushort)((uCode >> 16) & 0xff);
        ushort uLowCodeA = (ushort)((uCode >> 8) & 0xff);
        ushort uLowCodeB = (ushort)((uCode ) & 0xff);

        sCodeA = (sbyte)uHighCodeA;
        sCodeB = (sbyte)uHighCodeB;
        sCodeC = (sbyte)uLowCodeA;
        sCodeD = (sbyte)uLowCodeB;
    }
    /// <summary>
    /// 按16位分割int
    /// </summary>
    /// <param name="uCode">待分割值</param>
    /// <param name="sCodeA">高16位</param>
    /// <param name="sCodeC">低16位</param>
    public static void SplitShort(uint uCode, ref short sHighCode, ref short sLowCode)
    {
        ushort uHighCode = (ushort)((uCode >> 16) & 0xffff);
        ushort uLowCode = (ushort)((uCode) & 0xffff);

        sHighCode = (short)uHighCode;
        sLowCode = (short)uLowCode;
    }
}