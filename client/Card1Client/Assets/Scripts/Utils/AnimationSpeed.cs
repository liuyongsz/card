using UnityEngine;

public class AnimationSpeed : MonoBehaviour
{
    public AnimationClip anim=null;
    public float speedAnim;

    // Update is called once per frame
    void Update()
    {
        GetComponent<Animation>()[anim.name].speed = speedAnim;
    }
}
