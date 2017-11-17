using UnityEngine;

public class EffectShowLevel : MonoBehaviour
{
    public GameQuality mGameQuality = GameQuality.LOW;

    void OnEnable()
    {
        gameObject.SetActive(mGameQuality <= Config.CurSettingQuality);
    }
}