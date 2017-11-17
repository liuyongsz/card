using System.Text;
using System.Collections.Generic;

/// <summary>
/// excel格式文本解析器
/// 0行 头1 头2 头3
/// 1行 内容1 内容2 内容3
/// </summary>
public class TableParser
{
    /// <summary>
    /// 文本配置解析存储器
    /// </summary>
	public class TableStore
	{
        private string[] header = null;
        private string[] desc = null;
		private List<string[]> contents = new List<string[]>();
        public void SetHeader(string[] strHeaderGroup)
        {
            header = strHeaderGroup;
        }
        public void SetDesc(string[] strdescGroup)
        {
            desc = strdescGroup;
        }
        public void SetContent(string[] strContentGroup)
        {
            contents.Add(strContentGroup);
        }
        /// <summary>
        /// 获取配置总行数
        /// </summary>
        /// <returns></returns>
        public int GetRows()
        {
            return contents.Count;
        }
        /// <summary>
        /// 获取配置头所在行
        /// </summary>
        /// <param name="strHeader"></param>
        /// <returns></returns>
        public int GetHeaderIndex(string strHeader)
        {
            for ( int i = 0; i < header.Length; i++ )
            {
                if (header[i].Equals(strHeader))
                {
                    return i;
                }
            }
            return -1;
        }
        /// <summary>
        /// 获取头对应的数据类型
        /// </summary>
        /// <param name="strHeader"></param>
        /// <returns></returns>
        public int GetHeaderDesc(string strHeader)
        {
            for (int i = 0; i < header.Length; i++)
            {
                if (header[i].Equals(strHeader))
                {
                    if (i < desc.Length && !string.IsNullOrEmpty(desc[i]))
                    {
                        return int.Parse(desc[i]);
                    }
                    else
                    {
                        break;
                    }
                }
            }
            return -1;
        }
        /// <summary>
        /// 获取文本
        /// </summary>
        /// <param name="strHeader">配置头</param>
        /// <param name="iRow">配置行</param>
        /// <returns>配置内容</returns>
        public string GetText(string strHeader,int iRow)
        {
            int iHeaderIndex = GetHeaderIndex(strHeader);
            return GetText(iHeaderIndex,iRow);
        }
        /// <summary>
        /// 获取文本
        /// </summary>
        /// <param name="iHeader">配置头</param>
        /// <param name="iRow">行</param>
        /// <returns>配置内容</returns>
        public string GetText(int iHeader, int iRow)
        {
            if ( iRow < 0 || iRow >= contents.Count )
                return string.Empty;

            string[] strContent = contents[iRow];
            if (iHeader< 0 || iHeader >= strContent.Length)
                return string.Empty;

            return strContent[iHeader];
        }
	}
    /// <summary>
    /// 分割字符串
    /// </summary>
    private static char[] strSplit = {'\r','\n'};
    private static char chSpace = '\t'; ///对接excel格式
	/// <summary>
	/// 解析配置文本
	/// </summary>
	/// <param name="content"></param>
	/// <returns></returns>
    public static TableStore Parse(string content)
    {
        TableStore store = new TableStore();
        string[] strLines = content.Split(strSplit);
		int iLength = strLines.Length;
#if DEV
        int iHeaderLength = 0 ;
#endif
        if (iLength > 2)
        {
            string[] strLine = strLines[0].Split(chSpace);
#if DEV
			iHeaderLength = strLine.Length;
#endif
            store.SetHeader(strLine);

            strLine = strLines[1].Split(chSpace);
#if DEV
            if( iHeaderLength != strLine.Length)
			{
				//出错类型
			    LogSystem.LogWarning(strLines[1]);
			}
#endif
            store.SetDesc(strLine); 

            for (int i = 2; i < iLength; i++)
            {
                strLine = strLines[i].Split(chSpace);
#if DEV
                if( iHeaderLength != strLine.Length)
			    {
				    //出错行
				    LogSystem.LogWarning(strLines[i]);
			    }
#endif
                store.SetContent(strLine);
            }
        }
        else
        {
            LogSystem.LogWarning("Config Parse Error");
        }

        return store;
    }
}