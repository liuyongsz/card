using UnityEngine;
using System.Collections;

public class TextDestroy : MonoBehaviour
{
    public float destroyTime = 3;
    private float startTime = 0.0f;

    void Start()
    {
        startTime = Time.time;
    }
    void Update()
    {
        if (Time.time - startTime >= destroyTime)
        {
            GUIManager.jumpList.Remove(this.gameObject);
            MonoBehaviour.Destroy(this.gameObject);
        }
    }
}
