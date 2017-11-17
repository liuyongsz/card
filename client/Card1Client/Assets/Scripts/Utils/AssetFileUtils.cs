/// 作者 wanglc
/// 日期 20140923
/// 实现目标  资源包文件操作辅助

using System.IO;
/// <summary>
/// 资源包文件操作辅助
/// </summary>
public class AssetFileUtils
{
    /// <summary>
    /// 删除资源
    /// </summary>
    /// <param name="strFilePath"></param>
    /// <returns></returns>
    public static bool DeleteAsset(string strFilePath)
    {
        try
        {
            if (File.Exists(strFilePath))
            {
                File.Delete(strFilePath);
                return true;
            }
        }
        catch (System.Exception ex)
        {
            LogSystem.LogError(ex.ToString());

        }
        return false;
    }
    /// <summary>
    /// 写入资源包操作
    /// </summary>
    /// <param name="strPath">路径</param>
    /// <param name="bytes">包数据</param>
    /// <returns>成败</returns>
    public static bool WriteLocalAsset(string strPath, byte[] bytes)
    {
        FileInfo t = new FileInfo(strPath);
        if (t.Exists)
        {
            if (!DeleteAsset(strPath))
                return false;
        }

        try
        {
            if (!t.Exists)
            {
                Directory.CreateDirectory(t.DirectoryName);
            }
            WriteFile(strPath, bytes);
            return true;
        }
        catch (System.Exception ex)
        {
            LogSystem.LogError("WriteLocalAsset", ex.ToString());
        }

        return false;
    }
    /// <summary>
    /// 真正的写入文件
    /// </summary>
    /// <param name="filePath">路径</param>
    /// <param name="data">数据</param>
    public static void WriteFile(string filePath, object data)
    {
        FileStream fileStream = File.OpenWrite(filePath);
        fileStream.Position = 0;
        fileStream.SetLength(0);
        if (data is string)
        {
            byte[] d = System.Text.Encoding.UTF8.GetBytes(data as string);
            fileStream.Write(d, 0, d.Length);
        }
        else
        {
            fileStream.Write(data as byte[], 0, (data as byte[]).Length);
        }
        fileStream.Flush();
        fileStream.Close();
    }
}
