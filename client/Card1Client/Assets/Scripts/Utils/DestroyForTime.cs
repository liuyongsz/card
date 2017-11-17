using UnityEngine;

public delegate void FinishedCallback(GameObject go);

public class DestroyForTime : MonoBehaviour
{
    public delegate void OnDestroyEffect(GameObject o, bool forceDistroy = true);
    public static OnDestroyEffect monDestroyEffect;
    public OnDestroyEffect finishedCallback;
    public static void SetDestroyEffect(OnDestroyEffect onDestroyEffect, bool forceDistroy = true)
    {
        monDestroyEffect = onDestroyEffect;
    }
    public float time = 0.1f;
    public bool isDestory;

    private bool mbRemove = false;
    private float fStartTime = 0.0f;
    void Start()
    {
        fStartTime = Time.time;
    }

    void OnEnable()
    {
        fStartTime = Time.time;
    }

    void OnDisable()
    {
        if (gameObject.name.StartsWith("UI_"))
        {
            Destroy(gameObject);
        }
    }

    /// <summary>
    /// ½Å±¾¸üÐÂ
    /// </summary>
    void Update()
    {
        if (Time.time - fStartTime > time)
        {
            if (monDestroyEffect != null)
            {
                mbRemove = true;
                monDestroyEffect(this.gameObject);
            }
            else
            {
                Destroy(gameObject);
            }
        }
    }

    void OnDestroy()
    {
        if (!mbRemove)
        {
            if (monDestroyEffect != null)
            {
                mbRemove = true;
                monDestroyEffect(this.gameObject);
            }
        }
    }
}
