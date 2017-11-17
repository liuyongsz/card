/*
 * Name: 序列化辅助类
 * File: ConvertEndian.cs
 * Desc: 用于序列化中的编码转化
 * Date: 7/9/2016
 * Author：wuming
*/
using System;


/*
 * Class Name: ConvertEndian
 * Desc: 用于序列化中的编码转化
 * Date: 7/9/2016
 * Author：wuming
 * 
*/
class ConvertEndian
{
    #region Big-Endian  <==>   Litlle-Endian Convert, Confirm with Microsoft

    /*
     * Name: Read
     * Desc: 转换编码
     *       Big-Endian  <==>   Litlle-Endian 
     *       
     * Date: 7/9/2016
     * Author：wuming
     * 
     * Function:Convert
     * Param:   value               [IN]        需要序列化的值
     * Return:  Int16:转换后的值
    */
    public static Int16 Convert(Int16 value)
    {
        Int16 oVluae = (Int16)((Int16)((value & 0xff) << 8) | (Int16)((value >> 8) & 0xff));
        return oVluae;
    }


    /*
     * Name: Read
     * Desc: 转换编码
     *       Big-Endian  <==>   Litlle-Endian 
     *       
     * Date: 7/9/2016
     * Author：WuMing
     * 
     * Function:Convert
     * Param:   value               [IN]        需要序列化的值
     * Return:  UInt16:转换后的值
    */
    public static UInt16 Convert(UInt16 value)
    {
        return (UInt16)(((value & 0xff) << 8) | ((value >> 8) & 0xff));
    }


    /*
     * Name: Convert
     * Desc: 转换编码
     *       Big-Endian  <==>   Litlle-Endian 
     *       
     * Date: 7/9/2016
     * Author：WuMing
     * 
     * Function:Convert
     * Param:   value               [IN]        需要序列化的值
     * Return:  Int32:转换后的值
    */
    public static Int32 Convert(Int32 value)
    {
        Int32 oValue = (((Convert((UInt16)(value & 0xffff))) << 0x10) | Convert((UInt16)((value >> 0x10) & 0xffff)));
        return oValue;
    }


    /*
     * Name: Convert
     * Desc: 转换编码
     *       Big-Endian  <==>   Litlle-Endian 
     *       
     * Date: 7/9/2016
     * Author：WuMing
     * 
     * Function:Convert
     * Param:   value               [IN]        需要序列化的值
     * Return:  Int32:转换后的值
    */
    public static UInt32 Convert(UInt32 value)
    {
        UInt32 oValue = ((((UInt32)Convert((UInt16)(value & 0xffff))) << 0x10) | Convert((UInt16)((value >> 0x10) & 0xffff)));
        return oValue;
    }


    /*
     * Name: Convert
     * Desc: 转换编码
     *       Big-Endian  <==>   Litlle-Endian 
     *       
     * Date: 7/9/2016
     * Author：WuMing
     * 
     * Function:Convert
     * Param:   value               [IN]        需要序列化的值
     * Return:  Int64:转换后的值
    */
    public static Int64 Convert(Int64 value)
    {
        Int64 oValue = (Int64)(((Convert((UInt32)(value & 0xffffffffL))) << 0x20) | Convert((UInt32)((value >> 0x20) & 0xffffffffL)));
        return oValue;
    }


    /*
     * Name: Convert
     * Desc: 转换编码
     *       Big-Endian  <==>   Litlle-Endian 
     *       
     * Date: 7/9/2016
     * Author：WuMing
     * 
     * Function:Convert
     * Param:   value               [IN]        需要序列化的值
     * Return:  UInt64:转换后的值
    */
    public static UInt64 Convert(UInt64 value)
    {
        UInt64 oValue = ((((UInt64)Convert((UInt32)(value & 0xffffffffL))) << 0x20) | Convert((UInt32)((value >> 0x20) & 0xffffffffL)));
        return oValue;
    }

    #endregion
}
