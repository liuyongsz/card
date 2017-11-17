
using System.IO;
using System;
using System.Collections.Generic;
using UnityEngine;
/// <summary>
/// Log控制台 打印输出调试信息
/// </summary>
public static class LogSystem
{
    /// <summary>
    /// 是否打印输出Log文本
    /// </summary>
    private static bool mbFileLog = false;
    /// <summary>
    /// 是否在控制台打印Log
    /// </summary>
    private static bool mbDebugLog = false;

    /// <summary>
    /// 文件日志记录者
    /// </summary>
    private static StreamWriter mStreamFileWtiter = null;
    private static FileStream mfstream = null;

    /// <summary>
    /// 日志系统初始化
    /// </summary>
    public static bool Init(string strLogFile, bool bFileLog = true, bool bDebugLog = false, int iLogMaxLines = 256)
    {
        mbFileLog = bFileLog;
        mbDebugLog = bDebugLog;

        if (mbFileLog)
        {
            try
            {
                if (File.Exists(strLogFile))
                {
                    File.Delete(strLogFile);
                }
                mfstream = new FileStream(strLogFile, FileMode.CreateNew, FileAccess.Write, FileShare.ReadWrite);
                mStreamFileWtiter = new StreamWriter(mfstream);
            }
            catch (System.Exception)
            {
                mfstream = new FileStream(strLogFile, FileMode.Create, FileAccess.Write, FileShare.ReadWrite);
                mStreamFileWtiter = new StreamWriter(mfstream);
            }
            miLogCountMax = iLogMaxLines;
        }

        return true;
    }
   
    static List<string> mLines = new List<string>();
    public static void TraceLine(string strLine)
    {
        string strTime = DateTime.Now.ToString("MM-dd HH:mm:ss.fff") + "\t" + strLine +"\t"+System.GC.GetTotalMemory(false);
        mLines.Add(strTime);
    }
    public static void TraceAllLine()
    {
        if (mStreamFileWtiter == null)
            return;

        for (int i = 0; i < mLines.Count; i++)
        {
            mStreamFileWtiter.WriteLine(mLines[i]);
        }
        ///暂时每次日志输出，发布是调节为每帧flush一次，出异常捕捉后flush一次
        mStreamFileWtiter.Flush();
    }
    /// <summary>
    /// 当前行数
    /// </summary>
    private static int miLogCount = 0;
    /// <summary>
    /// 设定最大输出行数
    /// </summary>
    private static int miLogCountMax = 256;
    private static string mstrLastFileLog = string.Empty;
    /// <summary>
    /// 输出一行日志到文件
    /// </summary>
    /// <param name="str">日志内容</param>
    public static void TraceFile(int iType, string str)
    {
        if (mStreamFileWtiter == null)
            return;

        try
        {
            string strCurTime = StringBuilderCurrTime(iType);
            mStreamFileWtiter.Write(strCurTime);
            mStreamFileWtiter.WriteLine(str);
            ///暂时每次日志输出，发布是调节为每帧flush一次，出异常捕捉后flush一次
            mStreamFileWtiter.Flush();
        }
        catch (IOException)
        {
            ///不处理，抓住即可，多数为磁盘满，坏道等
        }
        catch (System.Exception ex)
        {
            LogSystem.LogError(ex.ToString());
        }

        try
        {
            if (miLogCount++ > miLogCountMax)
            {
                ///从头开始写
                if (mfstream != null)
                {
                    mfstream.Seek(0, SeekOrigin.Begin);
                }
                miLogCount = 0;
            }
        }
        catch (System.Exception ex2)
        {
            LogSystem.LogError(ex2.ToString());
        }
    }
    private static System.Text.StringBuilder sb = new System.Text.StringBuilder();

    static string strInfo1 = "[Info ";
    static string strInfo2 = "[Warn ";
    static string strInfo3 = "[Error ";
    static string strInfo4 = "]";
    static string StringBuilder(int iType, object[] args)
    {
        if (sb != null)
        {
            if( sb.Length > 0)
                sb.Remove(0, sb.Length);

            if (iType == 0)
            {
                sb.Append(strInfo1);
            }
            else if (iType == 1)
            {
                sb.Append(strInfo2);
            }
            else
            {
                sb.Append(strInfo3);
            }
            sb.Append(DateTime.Now.ToString("MM-dd HH:mm:ss"));
            sb.Append(strInfo4);

            int len = args.Length;
            for (int i = 0; i < len; ++i)
            {
                sb.Append(args[i]);
            }
            return sb.ToString();
        }

        return string.Empty;
    }

    static string StringBuilderCurrTime(int iType)
    {
        if (sb != null)
        {
            if (sb.Length > 0)
                sb.Remove(0, sb.Length);

            if (iType == 0)
            {
                sb.Append(strInfo1);
            }
            else if (iType == 1)
            {
                sb.Append(strInfo2);
            }
            else
            {
                sb.Append(strInfo3);
            }
            sb.Append(DateTime.Now.ToString("MM-dd HH:mm:ss"));
            sb.Append(strInfo4);
            return sb.ToString();
        }
        return string.Empty;
    }

    static string StringBuilderContent(object[] args)
    {
        if (sb != null)
        {
            if (sb.Length > 0)
                sb.Remove(0, sb.Length);

            int len = args.Length;
            for (int i = 0; i < len; ++i)
            {
                sb.Append(args[i]);
            }
            return sb.ToString();
        }

        return string.Empty;
    }
    /// <summary>
    /// 打印一条信息日志
    /// </summary>
    /// <param name="msgText">文本记录</param>
    /// <param name="context">错误对象</param>
    public static void Log(params object[] args)
    {
        string msgText = StringBuilderContent(args);
        if (mbDebugLog)
        {
            UnityEngine.Debug.Log(msgText, null);
        }

        if (mbFileLog)
        {
            TraceFile(0, msgText);
        }

#if UNITY_IPHONE && !UNITY_EDITOR
        msgText = StringBuilderContent(args);
        //IOSInterface.U3DLog(msgText);
#endif
    }

    /// <summary>
    /// 打印一条警告日志
    /// </summary>
    /// <param name="msgObj"></param>
    /// <param name="context"></param>
    public static void LogWarning(params object[] args)
    {
        string msgText = StringBuilderContent(args);
        ///目的是为了避免相同的日志输出
        if (string.IsNullOrEmpty(mstrLastFileLog))
        {
            mstrLastFileLog = msgText;
        }
        else
        {
            if (mstrLastFileLog.Equals(msgText))
            {
                return;
            }
            mstrLastFileLog = msgText;
        }
        
        if (mbDebugLog)
        {
#if UNITY_EDITOR
            UnityEngine.Debug.LogError(msgText, null);
#elif UNITY_IPHONE && !UNITY_EDITOR
            //IOSInterface.U3DLog(msgText);
#else
            UnityEngine.Debug.LogWarning(msgText, null);
#endif
        }

        if (mbFileLog)
        {
            TraceFile(1, msgText);
        }
    }

    /// <summary>
    /// 打印一条错误日志
    /// </summary>
    /// <param name="msgObj"></param>
    /// <param name="context"></param>
    public static void LogError(params object[] args)
    {
        string msgText = StringBuilderContent(args);

        ///目的是为了避免相同的日志输出
        if (string.IsNullOrEmpty(mstrLastFileLog))
        {
            mstrLastFileLog = msgText;
        }
        else
        {
            if (mstrLastFileLog.Equals(msgText))
            {
                return;
            }
            mstrLastFileLog = msgText;
        }

#if UNITY_IPHONE && !UNITY_EDITOR
        //IOSInterface.U3DLog(msgText);
#endif

        UnityEngine.Debug.LogError(msgText, null);
        if (mbFileLog)
        {
            TraceFile(2, msgText);
        }
    }
}