using UnityEngine;
using DG.Tweening;
using System.Collections;

public class EffectEntity : MonoBehaviour
{
    public void OnAnimation_Start()
    {

    }

    public void OnAnimation_Complete()
    {
        Trigger_AddEffect eft;

        if(Trigger_AddEffect.Effects.TryGetValue(transform,out eft))
        {
            eft.Exit(eft.OwnSkill);
            Trigger_AddEffect.Effects.Remove(transform);
        }
    }

    public void OnAnimation_AddHP()
    {

    }
}
