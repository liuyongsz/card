using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TimerUtil: MonoBehaviour
{
    /// <summary>
    /// 获取时间字符串(分秒)
    /// </summary>
    /// <param name="second"></param>
    /// <returns></returns>
    public static string MinuteAndSecond(int second,string sign = ":")
    {
        int min = second / 60;
        int sec = second % 60;

        string secStr = sec > 0 ? sec.ToString() : "00";

        if (secStr.Length < 2)
            secStr = "0" + secStr;
      
        if(min <= 0)    return "00:00";

        string minStr = min > 0 ? min.ToString() : "00";

        if (minStr.Length < 2)
            minStr = "0" + minStr;

        return minStr + sign + secStr;
    }
}
