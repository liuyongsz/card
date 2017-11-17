/*
 * ˢ�¹�����
 * @����ʱ����
 * @ͳһˢ�»ص�����
 * @������ʱ(����̨)
 */

using UnityEngine;
using System.Collections.Generic;

public class TimerManager : MonoBehaviour
{
    /// <summary>
    /// ��ʱ���ֵ�
    /// </summary>
    private static DictionaryEx<string, Timer> m_TimerList = new DictionaryEx<string, Timer>();

    /// <summary>
    ///   ���Ӷ���
    /// </summary>
    private static DictionaryEx<string, Timer> m_AddTimerList = new DictionaryEx<string, Timer>();

    /// <summary>
    ///   ���ٶ���
    /// </summary>
    private static List<string> m_DestroyList = new List<string>();

    public delegate void TimerManagerHandler();

    public delegate void TimerManagerHandlerArgs(params object[] args);

    private static float m_oldRealtimeSinceStartup = 0;
    private static float m_curRealtimeSinceStartup = 0;
    //update���  time.scale = 0��ʱ�����Time.deltaTime
    public static float DeltaTime = 0;


    /// <summary>
    /// ����ʱ�ص�
    /// </summary>
    /// <param name="count">����ʱʣ��ʱ��</param>
    /// <param name="args">����ʱ����</param>
    public delegate void TimerManagerCountHandlerArgs(int count, params object[] args);
    
    public static void ClearTimer()
    {
        m_DestroyList.Clear();
        m_AddTimerList.Clear();
        m_TimerList.Clear();
    }

    #region ˢ��������
    // Update is called once per frame
    void Update()
    {
        m_curRealtimeSinceStartup = Time.realtimeSinceStartup;
        DeltaTime = m_curRealtimeSinceStartup - m_oldRealtimeSinceStartup;
        m_oldRealtimeSinceStartup = m_curRealtimeSinceStartup;
        if (m_DestroyList.Count > 0)
        {
            ///>�����ٶ���������ָ������
            for (int i = 0; i < m_DestroyList.Count; i++)
            {
                m_TimerList.Remove(m_DestroyList[i]);
            }

            //���
            m_DestroyList.Clear();
        }

        if (m_AddTimerList.Count > 0)
        {
            ///>�����Ӷ��������Ӷ�ʱ��
            for (int i = 0, imax = m_AddTimerList.mList.Count; i < imax; i++)
            {
                Timer value = m_AddTimerList[m_AddTimerList.mList[i]];
                if (value == null)
                    continue;

                if (m_TimerList.ContainsKey(m_AddTimerList.mList[i]))
                {
                    m_TimerList[m_AddTimerList.mList[i]] = value;
                }
                else
                {
                    m_TimerList.Add(m_AddTimerList.mList[i], value);
                }
            }
            //���
            m_AddTimerList.Clear();
        }

        if (m_TimerList.Count > 0)
        {
            //��Ӧ��ʱ��
            for (int i = 0, imax = m_TimerList.mList.Count; i < imax; i++)
            {
                Timer value = m_TimerList[m_TimerList.mList[i]];
                if (value == null)
                    return;

                value.Run();

                if (m_TimerList.mList.Count == 0) return;
            }
        }
    }

    /// -----------------------------------------------------------------------------
    /// <summary>
    /// ����ˢ����
    /// </summary>
    /// <param name=string.Empty></param>
    /// <returns></returns>
    /// -----------------------------------------------------------------------------
    public static bool AddTimer(string key, float duration, TimerManagerHandler handler)
    {
        return Internal_AddTimer(key, TIMER_MODE.NORMAL, duration, handler);
    }
    public static bool AddTimer(string key, float duration, TimerManagerHandlerArgs handler, params object[] args)
    {
        return Internal_AddTimer(key, TIMER_MODE.NORMAL, duration, handler, args);
    }


    /// -----------------------------------------------------------------------------
    /// <summary>
    /// ���ӳ���ˢ����
    /// </summary>
    /// <param name=string.Empty></param>
    /// <returns></returns>
    /// -----------------------------------------------------------------------------
    public static bool AddTimerRepeat(string key, float duration, TimerManagerHandler handler)
    {
        return Internal_AddTimer(key, TIMER_MODE.REPEAT, duration, handler);
    }
    public static bool AddTimerRepeat(string key, float duration, TimerManagerHandlerArgs handler, params object[] args)
    {
        return Internal_AddTimer(key, TIMER_MODE.REPEAT, duration, handler, args);
    }
    /// <summary>
    /// ˢ�µ���ʱ
    /// </summary>
    /// <param name="key">����ַ�</param>
    /// <param name="duration">����ʱʱ��</param>
    /// <param name="handler">��ʱ�ص�</param>
    /// <param name="args">��ʱ����</param>
    /// <returns></returns>
    public static bool AddTimerCount(string key, float duration, TimerManagerCountHandlerArgs handler, params object[] args)
    {
        return Internal_AddTimer(key, TIMER_MODE.COUNTTIME, duration, handler, args);
    }

    /// <summary>
    /// �����ʱ��������
    /// </summary>
    /// <param name="key">��ֵ</param>
    /// <param name="duration">��ʱʱ��</param>
    /// <param name="handler">�ص����</param>
    /// <returns>��ӳ�/��</returns>
    public static bool AddDelayTimer(string key, float duration, TimerManagerHandler handler)
    {
        if (string.IsNullOrEmpty(key))
            return false;

        if (duration < 0.0f)
        {
            if (handler != null)
            {
                handler();
            }
            return true;
        }

        Timer timer = new Timer(key, TIMER_MODE.DELAYTIME, Time.realtimeSinceStartup, duration, handler);

        if (m_TimerList.ContainsKey(key))
        {
            m_TimerList[key] = timer;
        }
        else
        {
            m_TimerList.Add(key, timer);
        }

        return true;
    }
    /// <summary>
    /// �����ʱ��������
    /// </summary>
    /// <param name="key">��ֵ</param>
    /// <param name="duration">��ʱʱ��</param>
    /// <param name="handler">�ص����</param>
    /// <returns>��ӳ�/��</returns>
    public static bool AddDelayTimer(string key, float duration, TimerManagerHandlerArgs handler, params object[] args)
    {
        if (string.IsNullOrEmpty(key))
            return false;

        if (duration < 0.0f)
        {
            if (handler != null)
            {
                handler();
            }
            return true;
        }

        Timer timer = new Timer(key, TIMER_MODE.DELAYTIME, Time.realtimeSinceStartup, duration, handler, args);

        if (m_TimerList.ContainsKey(key))
        {
            m_TimerList[key] = timer;
        }
        else
        {
            m_TimerList.Add(key, timer);
        }

        return true;
    }
    /// <summary>
    /// ���ٴ���ǰ׺������ˢ����
    /// </summary>
    /// <param name="prefix"></param>
    public static void ClearTimerWithPrefix(string prefix)
    {
        if (m_TimerList != null && m_TimerList.Count > 0)
        {
            foreach (string timerKey in m_TimerList.Keys)
            {
                if (timerKey.StartsWith(prefix))
                {
                    Destroy(timerKey);
                }
            }
        }
    }

    /// -----------------------------------------------------------------------------
    /// <summary>
    /// ����ָ����ʱ��
    /// </summary>
    /// <param name="key">��ʶ��</param>
    /// <returns></returns>
    /// -----------------------------------------------------------------------------
    public static bool Destroy(string key, bool cleanAddList = false)
    {
        // �������ͬһ֡�����ȴ��������ٵ����
        if(cleanAddList && m_AddTimerList.ContainsKey(key))
        {
            m_AddTimerList.Remove(key);
        }

        if (!m_TimerList.ContainsKey(key))
            return false;

        if (!m_DestroyList.Contains(key))
        {
            m_DestroyList.Add(key);
        }

        return true;
    }

    /// <summary>
    /// �Ƿ��ö�ʱ��
    /// </summary>
    /// <returns><c>true</c> if this instance is have timer the specified key; otherwise, <c>false</c>.</returns>
    /// <param name="key">Key.</param>
    public static bool IsHaveTimer(string key)
    {
        return m_TimerList.ContainsKey(key) || m_AddTimerList.ContainsKey(key);
    }

    /// -----------------------------------------------------------------------------
    /// <summary>
    /// ���Ӷ�ʱ��
    /// </summary>
    /// <param name=string.Empty></param>
    /// <returns></returns>
    /// -----------------------------------------------------------------------------
    private static bool Internal_AddTimer(string key, TIMER_MODE mode, float duration, TimerManagerHandler handler)
    {
        if (string.IsNullOrEmpty(key))
            return false;

        if (duration < 0.0f)
            return false;

        Timer timer = new Timer(key, mode, Time.realtimeSinceStartup, duration, handler);

        if (m_AddTimerList.ContainsKey(key))
        {
            m_AddTimerList[key] = timer;
        }
        else
        {
            m_AddTimerList.Add(key, timer);
        }

        return true;
    }

    private static bool Internal_AddTimer(string key, TIMER_MODE mode, float duration, TimerManagerHandlerArgs handler, params object[] args)
    {
        if (string.IsNullOrEmpty(key))
            return false;

        if (duration < 0.0f)
            return false;

        Timer timer = new Timer(key, mode, Time.realtimeSinceStartup, duration, handler, args);

        if (m_AddTimerList.ContainsKey(key))
        {
            m_AddTimerList[key] = timer;
        }
        else
        {
            m_AddTimerList.Add(key, timer);
        }

        return true;
    }

    private static bool Internal_AddTimer(string key, TIMER_MODE mode, float duration, TimerManagerCountHandlerArgs handler, params object[] args)
    {
        if (string.IsNullOrEmpty(key))
            return false;

        if (duration < 0.0f)
            return false;

        Timer timer = new Timer(key, mode, Time.realtimeSinceStartup, duration, handler, args);

        if (m_AddTimerList.ContainsKey(key))
        {
            m_AddTimerList[key] = timer;
        }
        else
        {
            m_AddTimerList.Add(key, timer);
        }

        return true;
    }

    public static bool IsRunning(string key)
    {
        return m_TimerList.ContainsKey(key);
    }

    /// -----------------------------------------------------------------------------
    /// <summary>
    ///  ��ʱ��ģʽ
    /// </summary>
    /// -----------------------------------------------------------------------------
    private enum TIMER_MODE
    {
        NORMAL,
        REPEAT,
        COUNTTIME,
        DELAYTIME,
    }

    private class Timer
    {
        /// <summary>
        ///   ����
        /// </summary>
        private string m_Name;

        /// <summary>
        ///   ģʽ
        /// </summary>
        private TIMER_MODE m_Mode;

        /// <summary>
        ///   ��ʼʱ��
        /// </summary>
        private float m_StartTime;

        /// <summary>
        ///   ʱ��
        /// </summary>
        private float m_duration;

        /// <summary>
        ///   ʱ���
        /// </summary>
        private float m_time = 0;

        /// <summary>
        ///   ��ʱ��ί��
        /// </summary>
        private TimerManagerHandler m_TimerEvent;

        private TimerManagerHandlerArgs m_TimerArgsEvent;

        private TimerManagerCountHandlerArgs m_TimerCountArgsEvent;

        private object[] m_Args = null;

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// ��ʼʱ��
        /// </summary>
        /// <param name=string.Empty></param>
        /// <returns></returns>
        /// -----------------------------------------------------------------------------
        public float StartTime
        {
            get
            {
                return m_StartTime;
            }
            set
            {
                m_StartTime = value;
            }
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// ʣ��ʱ��
        /// </summary>
        /// <param name=string.Empty></param>
        /// <returns></returns>
        /// -----------------------------------------------------------------------------
        public float TimeLeft
        {
            get
            {
                return m_duration - (Time.realtimeSinceStartup - m_StartTime);
            }
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// 
        /// </summary>
        /// <param name=string.Empty></param>
        /// <returns></returns>
        /// -----------------------------------------------------------------------------
        public Timer(string name, TIMER_MODE mode, float startTime, float duration, TimerManagerHandler handler)
        {
            m_Name = name;
            m_Mode = mode;
            m_StartTime = startTime;
            m_duration = duration;
            m_TimerEvent = handler;
            //m_Manger = manager;
        }

        public Timer(string name, TIMER_MODE mode, float startTime, float duration, TimerManagerHandlerArgs handler, params object[] args)
        {
            m_Name = name;
            m_Mode = mode;
            m_StartTime = startTime;
            m_duration = duration;
            m_TimerArgsEvent = handler;

            m_Args = args;
        }

        public Timer(string name, TIMER_MODE mode, float startTime, float duration, TimerManagerCountHandlerArgs handler, params object[] args)
        {
            m_Name = name;
            m_Mode = mode;
            m_StartTime = startTime;
            m_duration = duration;
            m_TimerCountArgsEvent = handler;

            m_Args = args;
        }

        /// -----------------------------------------------------------------------------
        /// <summary>
        /// �����¼�
        /// </summary>
        /// <param name=string.Empty></param>
        /// <returns></returns>
        /// -----------------------------------------------------------------------------
        public void Run()
        {
            if (m_Mode == TIMER_MODE.DELAYTIME)
            {
                if (Time.realtimeSinceStartup - m_StartTime > m_duration)
                {
                    if (this.m_TimerEvent != null && AsyncTrigger.IsTargetValid(this.m_TimerEvent.Target))
                    {
                        try
                        {
                            this.m_TimerEvent();
                        }
                        catch (System.Exception ex)
                        {
                            TimerManager.Destroy(this.m_Name);
                            LogSystem.LogError("Time event catch 1", ex.ToString());
                        }
                    }
                    else if (this.m_TimerArgsEvent != null && AsyncTrigger.IsTargetValid(this.m_TimerArgsEvent.Target))
                    {
                        try
                        {
                            this.m_TimerArgsEvent(m_Args);
                        }
                        catch (System.Exception ex)
                        {
                            TimerManager.Destroy(this.m_Name);
                            LogSystem.LogError("Time event catch 1", ex.ToString());
                        }
                    }
                    TimerManager.Destroy(this.m_Name);
                }
                return;
            }
            else if (m_Mode == TIMER_MODE.COUNTTIME)
            {
                float lastTime = Time.realtimeSinceStartup - m_time;
                if (lastTime > 1.0f)
                {
                    m_time = Time.realtimeSinceStartup;
                    try
                    {
                        if (this.m_TimerCountArgsEvent != null && AsyncTrigger.IsTargetValid(this.m_TimerCountArgsEvent.Target))
                        {
                            this.m_TimerCountArgsEvent(Mathf.CeilToInt(this.TimeLeft), m_Args);
                        }
                    }
                    catch (System.Exception ex)
                    {
                        TimerManager.Destroy(this.m_Name);
                        LogSystem.LogError("Time event catch2 ", ex.ToString());
                    }
                 
                    if (this.TimeLeft <= 0f)
                    {
                        TimerManager.Destroy(this.m_Name);
                    }
                }
                return;
            }

            if (this.TimeLeft > 0.0f)
                return;

            try
            {
                if (this.m_TimerEvent != null && AsyncTrigger.IsTargetValid(this.m_TimerEvent.Target))
                {
                    this.m_TimerEvent();
                }

                if (this.m_TimerArgsEvent != null && AsyncTrigger.IsTargetValid(this.m_TimerArgsEvent.Target))
                {
                    this.m_TimerArgsEvent(m_Args);
                }
            }
            catch (System.Exception ex)
            {
                TimerManager.Destroy(this.m_Name);
                LogSystem.LogError("Time event catch3", ex.ToString());
            }

            if (m_Mode == TIMER_MODE.NORMAL)
            {
                Destroy(this.m_Name);
            }
            else
            {
                m_StartTime = Time.realtimeSinceStartup + this.TimeLeft;
            }
        }
    }

    #endregion

}
