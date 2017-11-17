using System.Collections.Generic;
using System;

/// <summary>
/// 对象池基类
/// </summary>
public abstract class Pools : IDisposable
{
    /// <summary>
    /// 切换场景是否释放缓存池
    /// </summary>
    public bool isdestory = false;

    /// <summary>
    /// 获得对象池当前大小
    /// </summary>
    /// <returns></returns>
    public virtual int GetSize() { return 0; }

    /// <summary>
    /// 释放池对象
    /// </summary>
    public virtual void Dispose() { }

    /// <summary>
    /// 清理缓存池
    /// </summary>
    public virtual void Clear() { }

    /// <summary>
    /// 获取对象池中的数据
    /// </summary>
    /// <returns></returns>
    public virtual List<string> GetList() { return null; }
}
