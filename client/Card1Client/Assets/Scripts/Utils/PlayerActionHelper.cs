using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;
using UnityEngine.Events;

class PlayerActionHelper
{
    public UnityAction RunCallBack;
    private float RunTimer = 1.5f;
    private float m_runCurrentTimer = -1f;

    public bool m_run = false;

    public bool Run
    {
        get
        {
            return m_run;
        }
        set
        {
            m_run = value;
            if(m_run)
            {
                m_runCurrentTimer = 0;
            }
        }
    }

    public void Update()
    {
        if(m_runCurrentTimer >= 0 && Run)
        {
            m_runCurrentTimer += Time.deltaTime;

            if (m_runCurrentTimer >= RunTimer)
            {
                RunCallBack();
                m_runCurrentTimer = -1f;
                Run = false;
            }
        }
    }
}

