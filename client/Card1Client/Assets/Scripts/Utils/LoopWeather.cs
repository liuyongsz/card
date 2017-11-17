using UnityEngine;
using System.Collections;
using System.Collections.Generic;

/// <summary>
///作者 : yangdan
///日期 : 7/14/2015 5:52:26 AM
///功能描述 : 天气滚屏脚本
/// </summary>
public class LoopWeather : MonoBehaviour 
{
    private List<Transform> snowplan = new List<Transform>();

    /// <summary>
    /// 主角引用
    /// </summary>
    private static Transform m_target;

    /// <summary>
    /// 移动的中心点坐标， （0,0）点是刚新建出来的默认点  并不是世界坐标系中的(0,0)
    /// </summary>
    private Vector3 centerPos;

    /// <summary>
    /// 记录上一次的坐标点
    /// </summary>
    private Vector3 lastVec3 = Vector3.zero;

    /// <summary>
    /// 每一块Plane的大小尺寸
    /// </summary>
    public Vector2 weight = Vector2.zero;

    /// <summary>
    /// 横向速度
    /// </summary>
    public float verticalSpeed = 0.02f;

    /// <summary>
    /// 竖向速度
    /// </summary>
    public float horizontalSpeed = 0.03f;

    /// <summary>
    /// 当前坐标
    /// </summary>
    private int m_curX;
    private int m_curY;

    /// <summary>
    /// 上一次的坐标
    /// </summary>
    private int m_lastX = 0;
    private int m_lastY = 0;

    /// <summary>
    /// 翻滚索引
    /// </summary>
    private int m_indexX;
    private int m_indexY;

    // [0][1]
    // [2][3]

	// Use this for initialization
	void Start () 
    {
        Vector3 pos = Vector3.zero;
        Transform tran = transform.FindChild("snow_plan_0");
        if (tran != null)
        {
            tran.localPosition = pos;
            snowplan.Add(tran);
        }

        if (tran != null)
        {
            tran = transform.FindChild("snow_plan_1");
            pos = Vector3.zero;
            pos.x = weight.x;
            tran.localPosition = pos;
            snowplan.Add(tran);
        }

        if (tran != null)
        {
            tran = transform.FindChild("snow_plan_2");
            pos = Vector3.zero;
            pos.y = -weight.y;
            tran.localPosition = pos;
            snowplan.Add(tran);
        }

        if (tran != null)
        {
            tran = transform.FindChild("snow_plan_3");
            pos = Vector3.zero;
            pos.x = weight.x;
            pos.y = -weight.y;
            tran.localPosition = pos;
            snowplan.Add(tran);
        }
	}

    /// <summary>
    /// 设置主角引用
    /// </summary>
    /// <param name="target"></param>
    public static void SetTarget(Transform target)
    {
        m_target = target;
    }

	// Update is called once per frame
	void Update () 
    {
        //if (m_target == null && ObjectManager.mRole.mVisualTrans != null)
        //{
        //    SetTarget(ObjectManager.mRole.mVisualTrans);
        //}
        if (Camera.main != null && m_target != null)
        {
            lastVec3 = Camera.main.transform.InverseTransformDirection(m_target.position);
        }
	}

    void FixedUpdate()
    {
        if (Camera.main != null && m_target != null)
        {
            //Transform cameraTrans = Camera.main.transform;
            Vector3 tpos = Camera.main.transform.InverseTransformDirection(m_target.position);

            if (tpos != lastVec3 && lastVec3 != Vector3.zero)
            {
                Vector2 distance = Vector2.zero;

                CalculatePosition_X(ref distance, tpos, lastVec3);
                CalculatePosition_Y(ref distance, tpos, lastVec3);

                Transform t = snowplan[0];
                t.localPosition = GetPosition(distance, t.localPosition);
                t = snowplan[1];
                t.localPosition = GetPosition(distance, t.localPosition);

                t = snowplan[2];
                t.localPosition = GetPosition(distance, t.localPosition);
                t = snowplan[3];
                t.localPosition = GetPosition(distance, t.localPosition);
            }
        }
    }

    /// <summary>
    /// 计算X轴位置
    /// </summary>
    /// <param name="distance"></param>
    /// <param name="tpos"></param>
    /// <param name="lastpos"></param>
    private void CalculatePosition_X(ref Vector2 distance , Vector3 tpos , Vector3 lastpos)
    {
        Vector3 direction = tpos - lastpos;

        distance.x = direction.x * verticalSpeed;
        centerPos.x += distance.x;

        m_curX = Mathf.FloorToInt(centerPos.x / weight.x);

        if (m_lastX != m_curX)
        {
            if (direction.x < 0)
            {
                m_indexX--;
                int i = Mathf.Abs(m_indexX % 2);
                Transform trans = snowplan[(i)];
                Vector3 v = trans.localPosition;
                v.x -= (weight.x * 2);
                trans.localPosition = v;

                //对应的plane 跟随移动
                trans = snowplan[(i + 2)];
                v.y = trans.localPosition.y;
                trans.localPosition = v;

                m_lastX = m_curX;
            }
            else
            {
                int i = Mathf.Abs(m_indexX % 2);
                Transform trans = snowplan[(i)];
                Vector3 v = trans.localPosition;
                v.x += (weight.x * 2);
                trans.localPosition = v;

                //对应的plane 跟随移动
                trans = snowplan[(i + 2)];
                v.y = trans.localPosition.y;
                trans.localPosition = v;

                m_lastX = m_curX;
                m_indexX++;
            }
        }
    }

    /// <summary>
    /// 计算Y轴位置
    /// </summary>
    /// <param name="distance"></param>
    /// <param name="tpos"></param>
    /// <param name="lastpos"></param>
    private void CalculatePosition_Y(ref Vector2 distance, Vector3 tpos, Vector3 lastpos)
    {
        Vector3 direction = tpos - lastpos;

        if (direction.y < 0)
        {
            //向下    美术要求 向下没有速度
            distance.y = direction.y * 0;
        }
        else
        {
            //向上
            distance.y = direction.y * horizontalSpeed;
        }
        

        centerPos.y += distance.y;

        m_curY = Mathf.CeilToInt(centerPos.y / weight.y);

        if (m_lastY != m_curY)
        {
            if (direction.y < 0)
            {
                //向下走
                int i = Mathf.Abs(m_indexY % 2) * 2;
                Transform trans = snowplan[i];
                Vector3 v = trans.localPosition;
                v.y -= (weight.y * 2); ;
                trans.localPosition = v;

                //对应的plane 跟随移动
                trans = snowplan[(i + 1)];
                v.x = trans.localPosition.x;
                trans.localPosition = v;

                m_lastY = m_curY;
                m_indexY++;
            }
            else
            {
                //向上走
                m_indexY--;

                int i = Mathf.Abs(m_indexY % 2) * 2;
                Transform trans = snowplan[i];
                Vector3 v = trans.localPosition;
                v.y += (weight.y * 2);
                trans.localPosition = v;

                //对应的plane 跟随移动
                trans = snowplan[(i + 1)];
                v.x = trans.localPosition.x;
                trans.localPosition = v;

                m_lastY = m_curY;
            }
        }
    }

    /// <summary>
    /// 获得当前坐标
    /// </summary>
    /// <param name="distance"></param>
    /// <param name="selfPos"></param>
    /// <returns></returns>
    private Vector3 GetPosition(Vector2 distance, Vector3 selfPos)
    {
        Vector3 tarVec = Vector3.zero;
        tarVec.x = selfPos.x - distance.x;
        tarVec.y = selfPos.y - distance.y;
        tarVec.z = selfPos.z;
        return tarVec;
    }
}