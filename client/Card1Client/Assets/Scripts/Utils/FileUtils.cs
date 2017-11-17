using System;
using System.Text;
using System.IO;


public class FileUtils
{

    private static System.Text.StringBuilder mstrbuilder = new System.Text.StringBuilder();
    /// <summary>
    /// 合并字符
    /// </summary>
    /// <param name="args"></param>
    /// <returns></returns>
    public static string StringBuilder(params object[] args)
    {
        mstrbuilder.Remove(0, mstrbuilder.Length);
        if (args != null)
        {
            int len = args.Length;
            for (int i = 0; i < len; ++i)
            {
                mstrbuilder.Append(args[i]);
            }
        }
        return mstrbuilder.ToString();
    }

    /// <summary>
    /// 取时间戳（每5分钟变一次）
    /// </summary>
    /// <returns></returns>
    public static string GetHttpReqPlus()
    {
        System.Text.StringBuilder result = new System.Text.StringBuilder();
        result.Append(System.DateTime.Now.Ticks / 3000000000);
        return result.ToString();
    }

    /// <summary>
    /// 判断文件是否存在
    /// </summary>
    /// <param name="fileName"></param>
    /// <returns></returns>
    public static bool Exists(string fileName)
    {
        if (fileName == null || fileName.Trim() == string.Empty)
        {
            return false;
        }

        if (File.Exists(fileName))
        {
            return true;
        }

        return false;
    }


    /// <summary>
    /// 获取Md5码
    /// </summary>
    /// <param name="bytes"></param>
    /// <returns></returns>
    public static string GetStringMd5(string strValue)
    {
        byte[] bytes = System.Text.Encoding.Default.GetBytes(strValue);
        System.Security.Cryptography.MD5 md5 = System.Security.Cryptography.MD5.Create();
        byte[] mds = md5.ComputeHash(bytes);
        string md5Str = string.Empty;
        for (int i = 0; i < mds.Length; i++)
        {
            md5Str = md5Str + mds[i].ToString("X");
        }

        return md5Str;
    }
    /// <summary>
    /// 获取Md5码
    /// </summary>
    /// <param name="bytes"></param>
    /// <returns></returns>
    public static string GetByteMd5(byte[] bytes)
    {
        System.Security.Cryptography.MD5 md5 = System.Security.Cryptography.MD5.Create();
        byte[] mds = md5.ComputeHash(bytes);
        string md5Str = string.Empty;
        for (int i = 0; i < mds.Length; i++)
        {
            md5Str = md5Str + mds[i].ToString("X");
        }

        return md5Str;
    }
    /// <summary>
    /// 创建文件夹
    /// </summary>
    /// <param name="dirName"></param>
    /// <returns></returns>
    public static bool CreateDir(string dirName)
    {
        if (!Directory.Exists(dirName))
        {
            Directory.CreateDirectory(dirName);
        }
        return true;
    }


    /// <summary>
    /// 创建文件
    /// </summary>
    /// <param name="fileName"></param>
    /// <returns></returns>
    public static bool CreateFile(string fileName)
    {
        if (!File.Exists(fileName))
        {
            FileStream fs = File.Create(fileName);
            fs.Close();
            fs.Dispose();
        }
        return true;

    }


    /// <summary>
    /// 读文件内容
    /// </summary>
    /// <param name="fileName"></param>
    /// <returns></returns>
    public static string Read(string fileName)
    {
        if (!Exists(fileName))
        {
            return null;
        }
        //将文件信息读入流中
        using (FileStream fs = new FileStream(fileName, FileMode.Open))
        {
            return new StreamReader(fs).ReadToEnd();
        }
    }

    /** 读取二进制文件 */
    public static byte[] ReadBinary(string fileName)
    {
        if (!Exists(fileName))
        {
            return null;
        }
        //将文件信息读入流中
        using (FileStream fs = new FileStream(fileName, FileMode.Open))
        {
            byte[] bytes = new byte[fs.Length];
            fs.Read(bytes, 0, bytes.Length);
            fs.Seek(0, SeekOrigin.Begin);

            return bytes;
        }
    }


    public static string ReadLine(string fileName)
    {
        if (!Exists(fileName))
        {
            return null;
        }
        using (FileStream fs = new FileStream(fileName, FileMode.Open))
        {
            return new StreamReader(fs).ReadLine();
        }
    }


    /// <summary>
    /// 写文件
    /// </summary>
    /// <param name="fileName">文件名</param>
    /// <param name="content">文件内容</param>
    /// <returns></returns>
    public static bool Write(string fileName, string content)
    {
        if (!Exists(fileName) || content == null)
        {
            return false;
        }

        //将文件信息读入流中
        using (FileStream fs = new FileStream(fileName, FileMode.OpenOrCreate))
        {
            lock (fs)//锁住流
            {
                if (!fs.CanWrite)
                {
                    throw new System.Security.SecurityException(FileUtils.StringBuilder("文件fileName=", fileName, "是只读文件不能写入!"));
                }

                byte[] buffer = Encoding.Default.GetBytes(content);
                fs.Write(buffer, 0, buffer.Length);
                return true;
            }
        }
    }

    public static bool WriteBytes(string fileName, byte[] bytes)
    {
        if (!Exists(fileName) || bytes == null)
        {
            return false;
        }

        //将文件信息读入流中
        using (FileStream fs = new FileStream(fileName, FileMode.OpenOrCreate))
        {
            lock (fs)//锁住流
            {
                if (!fs.CanWrite)
                {
                    throw new System.Security.SecurityException(FileUtils.StringBuilder("文件fileName=", fileName, "是只读文件不能写入!"));
                }

                fs.Write(bytes, 0, bytes.Length);
                fs.Flush();
                return true;
            }
        }
    }


    /// <summary>
    /// 写入一行
    /// </summary>
    /// <param name="fileName">文件名</param>
    /// <param name="content">内容</param>
    /// <returns></returns>
    public static bool WriteLine(string fileName, string content)
    {
        using (FileStream fs = new FileStream(fileName, FileMode.OpenOrCreate | FileMode.Append))
        {
            lock (fs)
            {
                if (!fs.CanWrite)
                {
                    throw new System.Security.SecurityException(FileUtils.StringBuilder("文件fileName=", fileName, "是只读文件不能写入!"));
                }

                StreamWriter sw = new StreamWriter(fs);
                sw.WriteLine(content);
                sw.Dispose();
                sw.Close();
                return true;
            }
        }
    }


    public static bool CopyDir(DirectoryInfo fromDir, string toDir)
    {
        return CopyDir(fromDir, toDir, fromDir.FullName);
    }


    /// <summary>
    /// 复制目录
    /// </summary>
    /// <param name="fromDir">被复制的目录</param>
    /// <param name="toDir">复制到的目录</param>
    /// <returns></returns>
    public static bool CopyDir(string fromDir, string toDir)
    {
        if (fromDir == null || toDir == null)
        {
            throw new NullReferenceException("参数为空");
        }

        if (fromDir == toDir)
        {
            throw new Exception(FileUtils.StringBuilder("两个目录都是", fromDir));
        }

        if (!Directory.Exists(fromDir))
        {
            throw new IOException(FileUtils.StringBuilder("目录fromDir=", fromDir, "不存在"));
        }

        DirectoryInfo dir = new DirectoryInfo(fromDir);
        return CopyDir(dir, toDir, dir.FullName);
    }


    /// <summary>
    /// 复制目录
    /// </summary>
    /// <param name="fromDir">被复制的目录</param>
    /// <param name="toDir">复制到的目录</param>
    /// <param name="rootDir">被复制的根目录</param>
    /// <returns></returns>
    private static bool CopyDir(DirectoryInfo fromDir, string toDir, string rootDir)
    {
        string filePath = string.Empty;
        foreach (FileInfo f in fromDir.GetFiles())
        {
            filePath = toDir + f.FullName.Substring(rootDir.Length);
            string newDir = filePath.Substring(0, filePath.LastIndexOf("/"));
            CreateDir(newDir);
            File.Copy(f.FullName, filePath, true);
        }

        foreach (DirectoryInfo dir in fromDir.GetDirectories())
        {
            CopyDir(dir, toDir, rootDir);
        }

        return true;
    }


    /// <summary>
    /// 删除文件
    /// </summary>
    /// <param name="fileName">文件的完整路径</param>
    /// <returns></returns>
    public static bool DeleteFile(string fileName)
    {
        if (Exists(fileName))
        {
            File.Delete(fileName);
            return true;
        }
        return false;
    }


    public static void DeleteDir(DirectoryInfo dir)
    {
        if (dir == null)
        {
            throw new NullReferenceException("目录不存在");
        }

        foreach (DirectoryInfo d in dir.GetDirectories())
        {
            DeleteDir(d);
        }

        foreach (FileInfo f in dir.GetFiles())
        {
            DeleteFile(f.FullName);
        }

        dir.Delete();

    }


    /// <summary>
    /// 删除目录
    /// </summary>
    /// <param name="dir">制定目录</param>
    /// <param name="onlyDir">是否只删除目录</param>
    /// <returns></returns>
    public static bool DeleteDir(string dir, bool onlyDir)
    {
        if (dir == null || dir.Trim() == string.Empty)
        {
            throw new NullReferenceException("目录dir=" + dir + "不存在");
        }

        if (!Directory.Exists(dir))
        {
            return false;
        }

        DirectoryInfo dirInfo = new DirectoryInfo(dir);
        if (dirInfo.GetFiles().Length == 0 && dirInfo.GetDirectories().Length == 0)
        {
            Directory.Delete(dir);
            return true;
        }


        if (!onlyDir)
        {
            return false;
        }
        else
        {
            DeleteDir(dirInfo);
            return true;
        }

    }


    /// <summary>
    /// 在指定的目录中查找文件
    /// </summary>
    /// <param name="dir">目录</param>
    /// <param name="fileName">文件名</param>
    /// <returns></returns>
    public static bool FindFile(string dir, string fileName)
    {
        if (dir == null || dir.Trim() == string.Empty || fileName == null || fileName.Trim() == string.Empty || !Directory.Exists(dir))
        {
            return false;
        }

        DirectoryInfo dirInfo = new DirectoryInfo(dir);
        return FindFile(dirInfo, fileName);

    }


    public static bool FindFile(DirectoryInfo dir, string fileName)
    {
        foreach (DirectoryInfo d in dir.GetDirectories())
        {
            if (File.Exists(FileUtils.StringBuilder(d.FullName, "/", fileName)))
            {
                return true;
            }
            FindFile(d, fileName);
        }

        return false;
    }

}
