/// 作者 zhangrj
/// 日期 20141016
/// 实现目标  显示艺术数字
/// 用途 暴击伤害及面板数字显示
using UnityEngine;
using System.Collections;
using System.Text.RegularExpressions;
using System.Text;

/// <summary>
/// 数字Label
/// 用法 单纯数字直接调用Text 
/// flag标签提供三种艺术字
/// 直接调用WriteConstomNumText(string)
/// </summary>
[AddComponentMenu("NGUI/Custom/NumLabel")]
public class UINumLabel : UILabel
{
    /// <summary>
    /// Label支持的格式
    /// </summary>
    const string SupportPattern = @"^[0-9|+|-|=|*|/|%|.|:|{|}|<|>|~|^|`|#| ]+$";
    const string checkNum = "\\d\\d*";


    private MatchCollection matchs;

    /// <summary>
    /// 判断该内容是否符合要求
    /// </summary>
    /// <param name="str"></param>
    /// <returns></returns>
    bool CanWrite(string str)
    {
        if (Regex.IsMatch(str, SupportPattern))
            return true;
        return false;
    }

    /// <summary>
    /// 特殊字体
    /// </summary>
    /// <param name="content"></param>
    public void SpecialText(string content)
    {
        base.text = content;
    }

    public void WriteConstomNumText(string str, string flag, string postfix = "")
    {
        matchs = Regex.Matches(str, checkNum);
        if (matchs.Count > 0)
        {
            int len = matchs.Count;
            string[] msg = new string[len];
            for (int i = 0; i < len; i++)
            {
                int strLen = matchs[i].Value.Length;
                for (int j = 0; j < strLen; j++)
                {
                    msg[i] += UtilTools.StringBuilder(flag, matchs[i].Value[j]);
                }
            }
            //替换内容
            string content = string.Empty;
            int difLen = 0;
            for (int i = 0; i < len; i++)
            {
                if (i > 0)
                {
                    difLen += msg[i - 1].Length - matchs[i - 1].Value.Length;
                    content = content.Remove(matchs[i].Index + difLen, matchs[i].Value.Length);
                    content = content.Insert(matchs[i].Index + difLen, msg[i]);
                }
                else
                {
                    content = str.Remove(matchs[i].Index, matchs[i].Value.Length);
                    content = content.Insert(matchs[i].Index, msg[i]);
                }
            }
            for (int i = 0; i < content.Length; i++)
            {
                if (content[i] == '+' || content[i] == '-' || content[i] == '=')
                {
                    content = content.Insert(i, flag);
                    int l = flag.Length;
                    i += l;
                }
            }

            content = UtilTools.StringBuilder(content, postfix);
            this.text = content;
        }
    }
}
