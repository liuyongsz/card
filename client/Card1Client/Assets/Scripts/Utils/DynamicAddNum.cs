using UnityEngine;

//动态变化增减数字;
public class DynamicAddNum : MonoBehaviour
{

    public delegate void OnFinished();
    public OnFinished onFinished = null;

    private UILabel m_label = null;

    private float startNum;//开始数字;

    private float endNum;//结束数字;

    private int m_curIntNum;//当前整形数字;

    private float m_curNum;//当前数字;

    private float m_delta;//每帧变化;

    private float m_duration;//变化时间;


    // Use this for initialization
    void TweenStart()
    {
        m_curNum = startNum;

        m_curIntNum = (int)startNum;

        m_label.text = m_curIntNum.ToString();

        m_delta = (endNum - startNum) / m_duration * Time.deltaTime;//每帧数字变化;
    }

    // Update is called once per frame
    void Update()
    {
        m_curNum += m_delta;
        if (Mathf.Abs(m_curNum - endNum) <= Mathf.Abs(m_delta))
        {
            m_label.text = ((int)endNum).ToString();
            Destroy(this);
            if (onFinished != null)
            {
                onFinished();
            }
            return;
        }
        //整数位不相同则改变数字;
        if ((int)m_curNum != m_curIntNum)
        {
            m_curIntNum = (int)m_curNum;
            m_label.text = m_curIntNum.ToString();
        }
    }

    /// <summary>
    /// 给一个uilabel增加变化脚本;
    /// </summary>
    /// <param name="from">开始数字</param>
    /// <param name="to">结束数字</param>
    /// <param name="duration">变化时间</param>
    /// <returns></returns>
    public static DynamicAddNum Begin(UILabel label, int from, int to, float duration)
    {
        DynamicAddNum dan = label.gameObject.GetComponent<DynamicAddNum>();
        if (dan == null)
        {
            dan = label.gameObject.AddComponent<DynamicAddNum>();
        }
        dan.m_label = label;
        dan.startNum = from;
        dan.endNum = to;
        dan.m_duration = duration <= 0 ? 0.5f : duration;
        //变化开始;
        dan.TweenStart();

        return dan;
    }
}
