using UnityEngine;
using System.Collections.Generic;
using System.Collections;
using System.Diagnostics;

namespace ProxyInstance
{
    public class InstanceProxy
    {
        /// <summary>
        /// 对象单件列表
        /// </summary>
        public static Dictionary<System.Type, object> mTables = new Dictionary<System.Type, object>();

        public static bool IsHave<T>()
        {
            System.Type type = typeof(T);
            return mTables.ContainsKey(type);
        }

        public static T Get<T>()
        {
            System.Type type = typeof(T);
            T result = default(T);

            if (type.BaseType != null && type.BaseType == typeof(UnityEngine.MonoBehaviour))
            {
                if (mTables.ContainsKey(type))
                {
                    object o = mTables[type];
                    if (o is T)
                    {
                        result = (T)(object)o;
                    }
                }
            }
            else
            {
                if (mTables.ContainsKey(type))
                {
                    object o = mTables[type];
                    if (o is T)
                    {
                        result = (T)(object)o;
                    }
                    else
                    {
                        ///如果为空，生成实例
                        result = (T)System.Activator.CreateInstance(type);
                        mTables[type] = result;
                    }
                }
                else
                {
                    ///如果为空，生成实例
                    result = (T)System.Activator.CreateInstance(type);
                    mTables[type] = result;
                }
            }

            return result;
        }

        /// <summary>
        /// 设置单例
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="o"></param>
        public static void Set<T>(object o, bool bReWriter = true)
        {
            System.Type type = typeof(T);
            if (!mTables.ContainsKey(type) || bReWriter)
            {
                mTables[type] = o;
            }
        }

        /// <summary>
        /// 创建局部静态类,Instance.Create(new Game());
        /// </summary>
        /// <param name="o"></param>
        public static void Create(object o)
        {
            if (o == null)
                return;

            if (!mTables.ContainsKey(o.GetType()))
            {
                mTables[o.GetType()] = o;
            }
        }
        public static void Clean<T>()
        {
            System.Type type = typeof(T);
            if (mTables.ContainsKey(type))
            {
                mTables.Remove(type);
            }
        }
        /// <summary>
        /// 清除所有逻辑单件
        /// </summary>
        public static void CleanLogic()
        {
            List<System.Type> list = new List<System.Type>();
            foreach (System.Type type in mTables.Keys)
            {
                if (type.BaseType != null && type.BaseType == typeof(UnityEngine.MonoBehaviour))
                    continue;

                list.Add(type);
            }
            for (int i = 0; i < list.Count; i++)
            {
                mTables.Remove(list[i]);
            }
        }
        /// <summary>
        /// 清空所有单件
        /// </summary>
        public static void ClearAll()
        {
            mTables.Clear();
        }
    }
}
