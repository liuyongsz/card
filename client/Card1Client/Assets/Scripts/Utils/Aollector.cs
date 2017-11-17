using System.Collections.Generic;
/// <summary>
/// 对象分配收集器 alloc collector
/// </summary>
public class Aollector
{
    /// <summary>
    /// 收集队列
    /// </summary>
    static Dictionary<System.Type, Queue<object>> mQueues = new Dictionary<System.Type, Queue<object>>();
    /// <summary>
    /// 获取对应类型的对象
    /// </summary>
    /// <typeparam name="T">分配类型</typeparam>
    /// <returns>分配对象</returns>
    static public object GetObject<T>()
    {
        System.Type type = typeof(T);
        if (mQueues.ContainsKey(type))
        {
            Queue<object> oQueue = mQueues[type];
            if (oQueue.Count == 0)
            {
                return System.Activator.CreateInstance(typeof(T));
            }
            else
            {
                return oQueue.Dequeue();
            } 
        }

        return System.Activator.CreateInstance(typeof(T));
    }
    /// <summary>
    /// 回收类型对象
    /// </summary>
    /// <typeparam name="T">收集类型</typeparam>
    /// <param name="obj">收集对象</param>
    static public void CollectObject<T>(object obj)
    {
        System.Type type = typeof(T);
        if (mQueues.ContainsKey(type))
        {
            Queue<object> oQueue = mQueues[type];
            oQueue.Enqueue(obj);
        }
        else
        {
            Queue<object> oQueue = new Queue<object>();
            oQueue.Enqueue(obj);
            mQueues.Add(type, oQueue);
        }
    }
}