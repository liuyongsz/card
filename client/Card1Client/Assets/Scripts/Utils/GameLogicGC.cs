using UnityEngine;
using System.Collections;

/// <summary>
/// 手动调用垃圾回收
/// </summary>
public class GameLogicGC
{
    /// <summary>
    /// 回收堆内存 System.GC.Collect();
    /// </summary>
    public static void GcHeap()
    {
        System.GC.Collect();
    }

    /// <summary>
    /// 回收资源内存 Resources.UnloadUnusedAssets();
    /// </summary>
    public static void GcAssets()
    {
        Resources.UnloadUnusedAssets();
    }

    /// <summary>
    /// 回收所有内存
    /// </summary>
    public static void GcAll()
    {
        Resources.UnloadUnusedAssets();
        System.GC.Collect();
    }

	/// <summary>
	/// 回收资源内存
	/// </summary>
	public static void GcAssets_MINI_PACKAGE()
	{
		#if MINI
		GcAssets();
		#endif
	}
}
