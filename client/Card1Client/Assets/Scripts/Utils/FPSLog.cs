using UnityEngine;
using System.Collections;
using System.IO;

/// <summary>
/// 性能数据采集类
/// 合并自决战和魔龙的数据采集
/// </summary>
public class FPSLog
{
    private static string strLogPath = string.Empty;
    /// <summary>
    /// 文件日志记录者
    /// </summary>
    private static StreamWriter mStreamFileWtiter = null;
    private static FileStream mfstream = null;

    private static float time;

    /// <summary>
    /// 当前行数
    /// </summary>
    private static int miLogCount = 0;
    /// <summary>
    /// 设定最大输出行数
    /// </summary>
    private const int miLogCountMax = 1800;

    public static void Init(int iLogMaxLines = miLogCountMax)
    {
        if (!Config.bWriteFps)
            return;

#if UNITY_STANDALONE_WIN || UNITY_STANDALONE_OSX || UNITY_EDITOR
        strLogPath = Application.dataPath + "/../fps.log";
#elif UNITY_IPHONE
        strLogPath = Application.persistentDataPath+"/fps.log";
#elif UNITY_ANDROID
        strLogPath = Application.persistentDataPath+"/fps.log";
#endif
        try
        {
            if (File.Exists(strLogPath))
            {
                File.Delete(strLogPath);
            }
            mfstream = new FileStream(strLogPath, FileMode.CreateNew, FileAccess.Write, FileShare.ReadWrite);
            mStreamFileWtiter = new StreamWriter(mfstream);
        }
        catch (System.Exception)
        {
            mfstream = new FileStream(strLogPath, FileMode.Create, FileAccess.Write, FileShare.ReadWrite);
            mStreamFileWtiter = new StreamWriter(mfstream);
        }
    }
    private static System.Text.StringBuilder sb = new System.Text.StringBuilder();
    public static void PrintFPS(float fps)
    {
        if (!Config.bWriteFps)
            return;

        if (Time.time - time < 1) return;
        time = Time.time;
        
        if (mStreamFileWtiter == null)
            return;
        try
        {
            if (sb.Length > 0)
                sb.Remove(0, sb.Length);
            System.DateTime dt = System.DateTime.Now;
            sb.Append(dt.ToString("yyyy-MM-dd hh:mm:ss"));
            sb.Append(" ");
            sb.Append(Mathf.FloorToInt(fps).ToString());
            mStreamFileWtiter.WriteLine(sb.ToString());
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
}