using UnityEngine;
using System.Collections;


public abstract class ManagerTemplate<T> : MonoBehaviourSingleton<T> where T : MonoBehaviourSingleton<T>
{
    protected sealed override void OnCreateInstance()
    {
        InitManager();
    }

    protected abstract void InitManager();
}
