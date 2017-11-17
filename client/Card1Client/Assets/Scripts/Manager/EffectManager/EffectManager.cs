using UnityEngine;
using System.Collections.Generic;
using System;

public class EffectManager : ManagerTemplate<EffectManager> {

    public static int EFFECT_POOL_SIZE = 30;


    static LinkedList<EffectObject> pool = new LinkedList<EffectObject>();
    static LinkedList<EffectObject> activeEffects = new LinkedList<EffectObject>();
    static List<EffectObject> pending = new List<EffectObject>();
    static bool updating = false;

    protected override void InitManager()
    {
        GameEventManager.RegisterEvent(GameEventTypes.ExitScene, Clear);
    }

    private static void Clear(GameEventTypes eventType, object[] args)
    {
        while (activeEffects.Count > 0)
        {
            var node = activeEffects.First.Value;
            node.StopImmediate();
            ProcessExpiredEffect(node);
            activeEffects.RemoveFirst();
        }
    }

    /// <summary>
    /// 在指定位置播放特效
    /// </summary>
    /// <param name="id"></param>
    /// <param name="position"></param>
    /// <param name="rotation"></param>
    /// <returns></returns>
    public static EffectObject Play(int id, Vector3 position, Quaternion rotation)
    {
        EffectObject effectObj = FetchEffectObject(id);
        if (effectObj == null)
            return null;
        
        if (updating)
            pending.Add(effectObj);
        else
            activeEffects.AddLast(effectObj);

        effectObj.Start(position, rotation);

        return effectObj;
    }

    /// <summary>
    /// 在指定Transform上播放特效
    /// </summary>
    /// <param name="id"></param>
    /// <param name="target"></param>
    /// <returns></returns>
    public static EffectObject Play(int id, Transform target)
    {
        EffectObject effectObj = FetchEffectObject(id);
        if (effectObj == null)
            return null;

        if (updating)
            pending.Add(effectObj);
        else
            activeEffects.AddLast(effectObj);
        
        effectObj.Start(target);

        return effectObj;
    }

    private static EffectObject FetchEffectObject(int id)
    {
        EffectObject effectObj = FetchFromPool(id);

        if (effectObj == null)
            effectObj = CreateEffectObject(id);

        return effectObj;
    }

    private static EffectObject CreateEffectObject(int id)
    {
        EffectCfg config = EffectConfig.GetConfig(id);
        if (config == null)
        {
            Debug.LogErrorFormat("Failed to find config of effect {0}", id);
            return null;
        }

        EffectObject effectObj = new EffectObject(config, Instance.transform);

        return effectObj;
    }

    private static EffectObject FetchFromPool(int id)
    {
        LinkedListNode<EffectObject> curNode = pool.First;
        int count = pool.Count;

        for (int i = 0; i < count; i++)
        {
            LinkedListNode<EffectObject> next = curNode.Next;

            if (curNode.Value.EffectID == id)
            {
                pool.Remove(curNode);
                return curNode.Value;
            }

            curNode = next;
        }

        return null;
    }

    private static void ProcessExpiredEffect(EffectObject effectObj)
    {
        if (pool.Count < EFFECT_POOL_SIZE)
        {
            pool.AddLast(effectObj);
        }
        else
        {
            var first = pool.First;
            pool.RemoveFirst();
            first.Value.Destroy();
        }
    }

    void Update()
    {
        if (activeEffects.Count == 0)
            return;

        updating = true;

        LinkedListNode<EffectObject> curNode = activeEffects.First;

        for (int i = 0; i < activeEffects.Count; i++)
        {
            LinkedListNode<EffectObject> next = curNode.Next;

            curNode.Value.Update();

            if (curNode.Value.Expired)
            {
                ProcessExpiredEffect(curNode.Value);
                activeEffects.Remove(curNode);
            }

            curNode = next;
        }

        updating = false;

        while (pending.Count > 0)
        {
            activeEffects.AddLast(pending[pending.Count - 1]);
            pending.RemoveAt(pending.Count - 1);
        }
    }

    public static EffectObject Find(int effectID)
    {
        LinkedListNode<EffectObject> curNode = activeEffects.First;

        for (int i = 0; i < activeEffects.Count; i++)
        {
            if (curNode.Value.EffectID == effectID)
            {
                return curNode.Value;
            }

            curNode = curNode.Next;
        }

        return null;
    }

}
