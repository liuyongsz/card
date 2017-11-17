using UnityEngine;
using System.Collections;

//[RequireComponent(typeof(Renderer))]
public class EffectRimPowerCtr : MonoBehaviour
{

    public bool powerGradient;	//是否启用Power渐变
    public float powerDelay;    //延迟时间
    public float cycle;         //周期
    public AnimationCurve powerAnimCurve = new AnimationCurve(new Keyframe(0f, 0f, 0f, 1f), new Keyframe(1f, 1f, 1f, 0f));

    public bool rimpowerGradient;	//是否启用RIMPower渐变
    public float rimpowerDelay;    //延迟时间
    public float rimcycle;         //周期
    public AnimationCurve rimpowerAnimCurve = new AnimationCurve(new Keyframe(0f, 0f, 0f, 1f), new Keyframe(1f, 1f, 1f, 0f));

    private Material affectMat;
    private float powerTime;
    private float rimpowerTime;
    //   private float powerEndTime;
    private int nameID;
    private int rimnameID;

    // Use this for initialization
    void Start()
    {
        powerTime = -powerDelay;
        rimpowerTime = -rimpowerDelay;
        //        powerEndTime = powerAnimCurve[powerAnimCurve.length - 1].time * cycle;
        nameID = Shader.PropertyToID("_PowerCoefficient");
        rimnameID = Shader.PropertyToID("_RimPowerCoefficient");
        Material[] mats = GetComponent<Renderer>().materials;
        for (int i = 0; i < mats.Length; i++)
        {
            if (mats[i].shader.name == "Effect/TransparentRim")
            {
                affectMat = mats[i];    //只有一个受影响
                affectMat.EnableKeyword("_POWER_COEFFICIENT_ON");

                if (rimpowerGradient)
                {
                    affectMat.EnableKeyword("_RIMPOWER_COEFFICIENT_ON");
                }
                break;
            }
        }
        if (affectMat == null)
            Destroy(this);
    }

    // Update is called once per frame
    void Update()
    {
        if (powerGradient)
        {
            powerTime += Time.deltaTime;
            if (powerTime >= 0)
            {
                affectMat.SetFloat(nameID, powerAnimCurve.Evaluate(powerTime / cycle));
//                    Debug.Log("alpha " + powerAnimCurve.Evaluate(powerTime / cycle));
            }
        }

        if (rimpowerGradient)
        {
            rimpowerTime += Time.deltaTime;
            if (rimpowerTime >= 0)
            {
                affectMat.SetFloat(rimnameID, rimpowerAnimCurve.Evaluate(rimpowerTime / rimcycle));
 //                                   Debug.Log("rimpower " + rimpowerAnimCurve.Evaluate(rimpowerTime / rimcycle));
            }
        }
        //if (!powerGradient)
        //    this.enabled = false;
    }

    void OnDestroy()
    {
        if (affectMat != null)
        {
            affectMat.DisableKeyword("_POWER_COEFFICIENT_ON");
            affectMat.DisableKeyword("_RIMPOWER_COEFFICIENT_ON");
        }
    }
}
