using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;
using UnityEngine.Events;

 class AnimationHelper
{
    /// <summary>
    /// 设置事件
    /// </summary>
    /// <param name="ani"></param>
    /// <param name="doTimer"></param>
    /// <param name="aniName"></param>
    /// <param name="funName"></param>
    public static AnimationEvent SetEvent(Animation ani, float doTimer, string aniName, UnityEngine.Events.UnityAction fun, float speed = -1f)
    {
        return SetEvent(ani,doTimer,aniName,fun.Method.Name,speed);
    }

    /// <summary>
    /// 设置事件
    /// </summary>
    /// <param name="ani"></param>
    /// <param name="doTimer"></param>
    /// <param name="aniName"></param>
    /// <param name="funName"></param>
    public static AnimationEvent SetEvent(Animation ani,float doTimer,string aniName,string funName,float speed = -1f)
    {
        AnimationEvent evento = new AnimationEvent();
        evento.time = doTimer;
        evento.functionName = funName;

        if(speed >= 0)
        {
            ani[aniName].speed = speed;
        }

        if (ani[aniName] != null)
            ani[aniName].clip.AddEvent(evento);
        else
            Debug.Log("ani " + aniName + " is Null");

        ani = null;

        return evento;
    }
 }
