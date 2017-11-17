using UnityEngine;
using System.Collections;
using DG.Tweening;

public class CardInfoPanel : MonoBehaviour
{
    UIGridItem item;
    UITexture box;

    void Awake()
    {
        item = UtilTools.GetChild<UIGridItem>(this.transform, "cardItem");
        box = UtilTools.GetChild<UITexture>(this.transform, "box");
    }
    void Start()
    {
        UIEventListener.Get(box.gameObject).onClick = OnClick;
    }

    private void OnClick(GameObject go)
    {
        Main.CameraUI.GetComponent<Blur>().enabled = false;
        Main.blurCamera.gameObject.SetActive(false);
        MonoBehaviour.DestroyImmediate(this.gameObject);
    }
    public void ShowCardInfo(TD_Card info)
    {
        UITexture head = item.mScripts[0] as UITexture;
        SymbolLabel skill1Des = item.mScripts[1] as SymbolLabel;
        SymbolLabel skill2Des = item.mScripts[2] as SymbolLabel;
        UILabel cardName = item.mScripts[3] as UILabel;
        UILabel skillType = item.mScripts[4] as UILabel;
        UISprite isFight = item.mScripts[5] as UISprite;
        LoadSprite.LoaderCard(head, info.res);
        isFight.gameObject.SetActive(false);
        cardName.text = info.name;
        skillType.text = UtilTools.GetSKillTypeName((int)info.type);
        skill1Des.text = "4444444{01}4444";
        skill2Des.text = "4444444{01}4444";
        this.transform.DOLocalMove(new Vector3(-220, 0, 0), 0.1f, false);
        this.transform.DOScale(Vector3.one * 2, 0.1f);
    }

    void OnDestroy()
    {
        item = null;
        box = null;
    }
}
