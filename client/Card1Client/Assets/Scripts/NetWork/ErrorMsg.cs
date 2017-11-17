using NetProtocal;
using System;
using System.Collections.Generic;
using System.Text;

static class  ErrorMsg
{
    public static string GetErrMsg(NetProtocal.ServerResultFlag ecode)
    {
        string msg = "";
        switch (ecode)
        {
            
            default:
                break;
        }
        if (msg == "") msg = "没有配置该code：" + ecode.ToString();
        return msg;
    }
}
