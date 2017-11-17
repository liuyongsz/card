using UnityEngine;
using System.Collections;
using NetProtocal;

public class ChangeTeamNamePanel : MonoBehaviour
{
    UISprite commonBtn;
    UISprite cancelBtn;
    UIInput heroTeamName;

    void Awake()
    {
        heroTeamName = UtilTools.GetChild<UIInput>(this.transform, "heroTeamName");
        cancelBtn = UtilTools.GetChild<UISprite>(this.transform, "cancelBtn");
        commonBtn = UtilTools.GetChild<UISprite>(this.transform, "commonBtn");
    }

    void Start()
    {
        heroTeamName.label.text =HeroTeamMediator.heroTeamMediator.heroListMsg.teamName;
        UIEventListener.Get(commonBtn.gameObject).onClick = OnClick;
        UIEventListener.Get(cancelBtn.gameObject).onClick = OnClick;
    }

    private void OnClick(GameObject go)
    {
        if (go == commonBtn.gameObject)
        {
            CardTeamInfo info = new CardTeamInfo
            {
                id = HeroTeamMediator.heroTeamMediator.heroListMsg.id,
                name = heroTeamName.label.text,

            };
            NSocket.GetInstance().SendData(Request.ChangeTeamName, info);
            Main.blurCamera.gameObject.SetActive(false);
            Main.CameraUI.GetComponent<Blur>().enabled = false;
            MonoBehaviour.DestroyImmediate(this.gameObject);
        }
        else if (go == cancelBtn.gameObject)
        {
            Main.blurCamera.gameObject.SetActive(true);
            Main.CameraUI.GetComponent<Blur>().enabled = false;
            MonoBehaviour.DestroyImmediate(this.gameObject);
        }
    }

    void OnDestroy()
    {
        commonBtn = null;
        cancelBtn = null;
        heroTeamName = null;
    }
}
