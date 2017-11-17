using UnityEngine;

/// <summary>
/// 贝塞尔曲线
/// </summary>
public class Bezier
{
    public Vector3 p0;
    public Vector3 p1;
    public Vector3 p2;
    public Vector3 p3;
    private Vector3 b0 = Vector3.zero;
    private Vector3 b1 = Vector3.zero;
    private Vector3 b2 = Vector3.zero;
    private Vector3 b3 = Vector3.zero;

    private float Ax;
    private float Ay;
    private float Az;
    private float Bx;
    private float By;
    private float Bz;
    private float Cx;
    private float Cy;
    private float Cz;

    public float m_totalTime;
    [HideInInspector]
    private float  m_currentTime;

    public void Start()
    {
       
    }

    /// <summary>清理</summary>
    public void Clear()
    {
        m_totalTime = 0;
        m_currentTime = 0;
    }

    // Init function v0 = 1st point, v1 = handle of the 1st point , v2 = handle of the 2nd point, v3 = 2nd point
    // handle1 = v0 + v1
    // handle2 = v3 + v2
    public Bezier(Vector3 v0, Vector3 v1, Vector3 v2, Vector3 v3)
    {
        this.p0 = v0;
        this.p1 = v1;
        this.p2 = v2;
        this.p3 = v3;
    }

    public void SetPoint(Vector3 v0, Vector3 v1, Vector3 v2, Vector3 v3)
    {
        this.p0 = v0;
        this.p1 = v1;
        this.p2 = v2;
        this.p3 = v3;
    }

    public void SetTotalTime(float val)
    {
        m_totalTime = val;
        m_currentTime = 0;
    }

    public float TotalTime
    {
        get { return m_totalTime; }
        set { SetTotalTime(value); }
    }

    public void FixedUpdate()
    {
        if (m_currentTime <= m_totalTime)
        {
            float per =  m_currentTime / m_totalTime;

            Vector3 newPos = GetPointAtTime(m_currentTime);
            m_currentTime += Time.deltaTime;
            
        }
    }

    // 0.0 >= t <= 1.0
    public Vector3 GetPointAtTime(float t)
    {
        this.CheckConstant();
        float t2 = t * t;
        float t3 = t * t * t;
        float x = this.Ax * t3 + this.Bx * t2 + this.Cx * t + p0.x;
        float y = this.Ay * t3 + this.By * t2 + this.Cy * t + p0.y;
        float z = this.Az * t3 + this.Bz * t2 + this.Cz * t + p0.z;
        return new Vector3(x, y, z);
    }

    private void SetConstant()
    {
        this.Cx = 3f * ((this.p0.x + this.p1.x) - this.p0.x);
        this.Bx = 3f * ((this.p3.x + this.p2.x) - (this.p0.x + this.p1.x)) - this.Cx;
        this.Ax = this.p3.x - this.p0.x - this.Cx - this.Bx;
        this.Cy = 3f * ((this.p0.y + this.p1.y) - this.p0.y);
        this.By = 3f * ((this.p3.y + this.p2.y) - (this.p0.y + this.p1.y)) - this.Cy;
        this.Ay = this.p3.y - this.p0.y - this.Cy - this.By;
        this.Cz = 3f * ((this.p0.z + this.p1.z) - this.p0.z);
        this.Bz = 3f * ((this.p3.z + this.p2.z) - (this.p0.z + this.p1.z)) - this.Cz;
        this.Az = this.p3.z - this.p0.z - this.Cz - this.Bz;
    }

    // Check if p0, p1, p2 or p3 have changed
    private void CheckConstant()
    {
        if (this.p0 != this.b0 || this.p1 != this.b1 || this.p2 != this.b2 || this.p3 != this.b3)
        {
            this.SetConstant();
            this.b0 = this.p0;
            this.b1 = this.p1;
            this.b2 = this.p2;
            this.b3 = this.p3;
        }
    }

      /// <summary>
     /// 获取存储贝塞尔曲线点的数组
     /// </summary>
     /// <param name="segmentNum"></param>采样点的数量
     /// <returns></returns>存储贝塞尔曲线点的数组
     public Vector3[] GetBeizerList(int segmentNum)
     {
         Vector3[] path = new Vector3[segmentNum];
         for (int i = 1; i <= segmentNum; i++)
         {
             float t = i / (float)segmentNum;
             Vector3 pixel = GetPointAtTime(t);
             path[i - 1] = pixel;
         }

         return path;
     }
}